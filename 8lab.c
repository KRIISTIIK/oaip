// Win32Project2.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "Win32Project2.h"

#define MAX_LOADSTRING 100

// Глобальные переменные:
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна

// Отправить объявления функций, включенных в этот модуль кода:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Разместите код здесь.

    // Инициализация глобальных строк
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_WIN32PROJECT2, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WIN32PROJECT2));

    MSG msg;

    // Цикл основного сообщения:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  ФУНКЦИЯ: MyRegisterClass()
//
//  ЦЕЛЬ: Регистрирует класс окна.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WIN32PROJECT2));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_WIN32PROJECT2);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   ФУНКЦИЯ: InitInstance(HINSTANCE, int)
//
//   ЦЕЛЬ: Сохраняет маркер экземпляра и создает главное окно
//
//   КОММЕНТАРИИ:
//
//        В этой функции маркер экземпляра сохраняется в глобальной переменной, а также
//        создается и выводится главное окно программы.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Сохранить маркер экземпляра в глобальной переменной

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  ФУНКЦИЯ: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  ЦЕЛЬ: Обрабатывает сообщения в главном окне.
//
//  WM_COMMAND  - обработать меню приложения
//  WM_PAINT    - Отрисовка главного окна
//  WM_DESTROY  - отправить сообщение о выходе и вернуться
//
//

void drawhome(HDC hdc) {
    HBRUSH hbrush = CreateSolidBrush(RGB(241, 156, 187));
    SelectObject(hdc, hbrush);
    HPEN hpen = CreatePen(PS_SOLID, 3, RGB(255, 105, 180));
    SelectObject(hdc, hpen);
    MoveToEx(hdc, 200, 200, NULL);
    LineTo(hdc, 400, 200);
    LineTo(hdc, 400, 400);
    LineTo(hdc, 200, 400);
    LineTo(hdc, 200, 200);

    MoveToEx(hdc, 200, 200, NULL);
    LineTo(hdc, 300, 50);
    LineTo(hdc, 400, 200);

    MoveToEx(hdc, 250, 250, NULL);
    LineTo(hdc, 300, 250);
    LineTo(hdc, 300, 350);
    LineTo(hdc, 250, 350);
    LineTo(hdc, 250, 250);
    LineTo(hdc, 350, 250);
    LineTo(hdc, 350, 300);
    LineTo(hdc, 250, 300);
    LineTo(hdc, 250, 350);
    LineTo(hdc, 350, 350);
    LineTo(hdc, 350, 250);
}

void drawTreeAndFir(HDC hdc) {
    // елка
    HPEN hpen = CreatePen(PS_SOLID, 5, RGB(39, 134, 39));
    SelectObject(hdc, hpen);
    MoveToEx(hdc, 525, 200, NULL);
    LineTo(hdc, 550, 250);
    LineTo(hdc, 500, 250);
    LineTo(hdc, 525, 200);
    MoveToEx(hdc, 525, 250, NULL);
    LineTo(hdc, 575, 300);
    LineTo(hdc, 475, 300);
    LineTo(hdc, 525, 250);
    MoveToEx(hdc, 525, 300, NULL);
    LineTo(hdc, 600, 350);
    LineTo(hdc, 450, 350);
    LineTo(hdc, 525, 300);

    // дерево
    hpen = CreatePen(PS_SOLID, 3, RGB(150, 75, 0));
    SelectObject(hdc, hpen);
    MoveToEx(hdc, 100, 150, NULL);
    LineTo(hdc, 100, 400);
    hpen = CreatePen(PS_SOLID, 3, RGB(0, 100, 0));
    SelectObject(hdc, hpen);
    MoveToEx(hdc, 100, 375, NULL);
    LineTo(hdc, 50, 325);
    MoveToEx(hdc, 100, 350, NULL);
    LineTo(hdc, 150, 300);
    MoveToEx(hdc, 100, 325, NULL);
    LineTo(hdc, 50, 275);
    MoveToEx(hdc, 100, 300, NULL);
    LineTo(hdc, 150, 250);
    MoveToEx(hdc, 100, 275, NULL);
    LineTo(hdc, 50, 225);
    MoveToEx(hdc, 100, 250, NULL);
    LineTo(hdc, 150, 200);
    MoveToEx(hdc, 100, 225, NULL);
    LineTo(hdc, 50, 175);
    MoveToEx(hdc, 100, 175, NULL);
    LineTo(hdc, 125, 150);
    MoveToEx(hdc, 100, 175, NULL);
    LineTo(hdc, 75, 150);
}


void drawElka(HDC hdc) {
    HPEN hpen = CreatePen(PS_SOLID, 5, RGB(39, 134, 39));
    SelectObject(hdc, hpen);
    MoveToEx(hdc, 525, 200, NULL);
    LineTo(hdc, 550, 250);
    LineTo(hdc, 500, 250);
    LineTo(hdc, 525, 200);
    MoveToEx(hdc, 525, 250, NULL);
    LineTo(hdc, 575, 300);
    LineTo(hdc, 475, 300);
    LineTo(hdc, 525, 250);
    MoveToEx(hdc, 525, 300, NULL);
    LineTo(hdc, 600, 350);
    LineTo(hdc, 450, 350);
    LineTo(hdc, 525, 300);
}
void drawBarn(HDC hdc) {
    // сарай
    HPEN hpen = CreatePen(PS_SOLID, 6, RGB(210, 180, 140));
    SelectObject(hdc, hpen);
    MoveToEx(hdc, 650, 200, NULL);
    LineTo(hdc, 650, 450);
    LineTo(hdc, 850, 450);
    LineTo(hdc, 850, 250);
    LineTo(hdc, 750, 250);
    LineTo(hdc, 750, 450);
    LineTo(hdc, 900, 450);
    LineTo(hdc, 900, 200);
    MoveToEx(hdc, 625, 250, NULL);
    LineTo(hdc, 700, 100);
    LineTo(hdc, 775, 50);
    LineTo(hdc, 850, 100);
    LineTo(hdc, 925, 250);
    MoveToEx(hdc, 725, 100, NULL);
    LineTo(hdc, 825, 100);
    LineTo(hdc, 825, 200);
    LineTo(hdc, 725, 200);
    LineTo(hdc, 725, 100);
    MoveToEx(hdc, 675, 250, NULL);
    LineTo(hdc, 725, 250);
    LineTo(hdc, 725, 350);
    LineTo(hdc, 675, 350);
    LineTo(hdc, 675, 250);
}
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // Разобрать выбор в меню:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hWnd, &ps);
        drawhome(hdc);

        drawTreeAndFir(hdc);


        EndPaint(hWnd, &ps);









        EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Обработчик сообщений для окна "О программе".
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}

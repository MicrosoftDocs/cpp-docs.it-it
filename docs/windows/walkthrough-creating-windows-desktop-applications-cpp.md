---
title: "Procedura dettagliata: Creazione di applicazioni desktop di Windows (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni Windows [C++], Win32"
  - "WinMain"
  - "applicazioni Win32 [C++]"
  - "API Windows [C++]"
ms.assetid: a247a9af-aff1-4899-9577-5f8104a0afbb
caps.latest.revision: 27
caps.handback.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura dettagliata: Creazione di applicazioni desktop di Windows (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa procedura dettagliata illustra come creare un'applicazione desktop di Windows di base che visualizza "Hello, World\!" in una finestra. È possibile usare il codice sviluppato in questa procedura dettagliata come modello per creare altre applicazioni desktop di Windows.  
  
 L'API Win32, nota anche come API di Windows, è un framework basato sul linguaggio C per la creazione di applicazioni Windows. Per altre informazioni sull'API Win32, vedere [API di Windows](https://msdn.microsoft.com/en-us/library/cc433218.aspx).  
  
> [!IMPORTANT]
>  Per poter illustrare più chiaramente segmenti specifici di codice nei passaggi di questo documento, potrebbero essere omesse alcune istruzioni di codice altrimenti necessarie per un'applicazione funzionante, ad esempio le direttive di inclusione e le dichiarazioni di variabili globali. La sezione **Esempio** alla fine di questo documento illustra il codice completo.  
  
## Prerequisiti  
 Per completare questa procedura dettagliata è necessario comprendere le nozioni di base del linguaggio C\+\+.  
  
 Per una dimostrazione video, vedere il [video sulla creazione di applicazioni Win32 \(C\+\+\)](http://go.microsoft.com/fwlink/?LinkId=102471) nella documentazione di Visual Studio 2008.  
  
### Per creare un progetto basato su Win32  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
2.  Nel riquadro di sinistra della finestra di dialogo **Nuovo progetto** fare clic su **Modelli installati**, scegliere **Visual C\+\+** e quindi **Win32**. Nel riquadro centrale selezionare **Progetto Win32**.  
  
     Nella casella **Nome** digitare un nome per il progetto, ad esempio `win32app`. Fare clic su **OK**.  
  
3.  Nella pagina introduttiva della **Creazione guidata applicazione Win32** fare clic su **Avanti**.  
  
4.  Nella pagina Impostazioni applicazione in **Tipo di applicazione** selezionare **Applicazione Windows**. In **Opzioni aggiuntive** selezionare **Progetto vuoto**. Fare clic su **Fine** per creare il progetto.  
  
5.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto Win32app, scegliere **Aggiungi**, quindi fare clic su **Nuovo elemento**. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **File di C\+\+ \(.cpp\)**. Nella casella **Nome** digitare un nome per il file, ad esempio `GT_HelloWorldWin32.cpp`. Fare clic su **Aggiungi**.  
  
### Per avviare un'applicazione desktop di Windows  
  
1.  Proprio come ogni applicazione C e C\+\+ che deve avere una funzione `main` come punto iniziale, ogni applicazione basata su Win32 deve avere una funzione `WinMain`.`WinMain` presenta la sintassi seguente.  
  
    ```  
    int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);  
    ```  
  
     Per altre informazioni sui parametri e sul valore restituito di questa funzione, vedere [Funzione WinMain](http://msdn.microsoft.com/library/windows/desktop/ms633559).  
  
2.  Dal momento che il codice dell'applicazione deve usare definizioni esistenti, aggiungere istruzioni di inclusione al file.  
  
    ```  
    #include <windows.h> #include <stdlib.h> #include <string.h> #include <tchar.h>  
    ```  
  
3.  Oltre alla funzione `WinMain`, ogni applicazione desktop di Windows deve avere anche una funzione routine di finestra. Questa funzione viene in genere denominata `WndProc`.`WndProc` presenta la sintassi seguente.  
  
    ```  
    LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);  
    ```  
  
     Questa funzione gestisce i molti *messaggi* ricevuti da un'applicazione dal sistema operativo. Ad esempio, in un'applicazione con una finestra di dialogo con un pulsante **OK**, quando l'utente fa clic sul pulsante, il sistema operativo invia all'applicazione un messaggio per segnalare che è stato fatto clic sul pulsante.`WndProc` è responsabile della risposta a questo evento. Nell'esempio la risposta appropriata può essere la chiusura della finestra di dialogo.  
  
     Per altre informazioni, vedere [Routine della finestra](http://msdn.microsoft.com/library/windows/desktop/ms632593).  
  
### Per aggiungere funzionalità alla funzione WinMain  
  
1.  Nella funzione `WinMain` creare una struttura della classe della finestra di tipo [WNDCLASSEX](http://msdn.microsoft.com/library/windows/desktop/ms633577). Questa struttura contiene informazioni sulla finestra, ad esempio l'icona dell'applicazione, il colore di sfondo della finestra, il nome da visualizzare nella barra del titolo, il nome della funzione della routine della finestra e così via. L'esempio che segue illustra una struttura `WNDCLASSEX` tipica.  
  
    ```  
    WNDCLASSEX wcex; wcex.cbSize = sizeof(WNDCLASSEX); wcex.style          = CS_HREDRAW | CS_VREDRAW; wcex.lpfnWndProc    = WndProc; wcex.cbClsExtra     = 0; wcex.cbWndExtra     = 0; wcex.hInstance      = hInstance; wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_APPLICATION)); wcex.hCursor        = LoadCursor(NULL, IDC_ARROW); wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1); wcex.lpszMenuName   = NULL; wcex.lpszClassName  = szWindowClass; wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_APPLICATION));  
    ```  
  
     Per informazioni sui campi della struttura, vedere [WNDCLASSEX](http://msdn.microsoft.com/library/windows/desktop/ms633577).  
  
2.  Dopo aver creato la classe della finestra, è necessario registrarla. Usare la funzione [RegisterClassEx](http://msdn.microsoft.com/library/windows/desktop/ms633587) e passare la struttura della classe della finestra come argomento.  
  
    ```  
    if (!RegisterClassEx(&wcex)) { MessageBox(NULL, _T("Call to RegisterClassEx failed!"), _T("Win32 Guided Tour"), NULL); return 1; }  
    ```  
  
3.  A questo punto è possibile creare una finestra. Usare la funzione [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679).  
  
    ```  
    static TCHAR szWindowClass[] = _T("win32app"); static TCHAR szTitle[] = _T("Win32 Guided Tour Application"); // The parameters to CreateWindow explained: // szWindowClass: the name of the application // szTitle: the text that appears in the title bar // WS_OVERLAPPEDWINDOW: the type of window to create // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y) // 500, 100: initial size (width, length) // NULL: the parent of this window // NULL: this application does not have a menu bar // hInstance: the first parameter from WinMain // NULL: not used in this application HWND hWnd = CreateWindow( szWindowClass, szTitle, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 500, 100, NULL, NULL, hInstance, NULL ); if (!hWnd) { MessageBox(NULL, _T("Call to CreateWindow failed!"), _T("Win32 Guided Tour"), NULL); return 1; }  
    ```  
  
     Questa funzione restituisce un HWND che rappresenta un handle per una finestra. Per altre informazioni, vedere [Tipi di dati Windows](http://msdn.microsoft.com/library/windows/desktop/aa383751).  
  
4.  Usare il codice seguente per visualizzare la finestra.  
  
    ```  
    // The parameters to ShowWindow explained: // hWnd: the value returned from CreateWindow // nCmdShow: the fourth parameter from WinMain ShowWindow(hWnd, nCmdShow); UpdateWindow(hWnd);  
    ```  
  
     Al momento la finestra non visualizza molti elementi perché la funzione `WndProc` non è ancora stata implementata.  
  
5.  Aggiungere un ciclo di messaggi per rimanere in attesa dei messaggi inviati dal sistema operativo. Quando l'applicazione riceve un messaggio, questo ciclo lo invia alla funzione `WndProc` perché venga gestito. Il ciclo di messaggi è simile al codice seguente.  
  
    ```  
    MSG msg; while (GetMessage(&msg, NULL, 0, 0)) { TranslateMessage(&msg); DispatchMessage(&msg); } return (int) msg.wParam;  
    ```  
  
     Per altre informazioni sulle strutture e le funzioni usate nel ciclo di messaggi, vedere [MSG](http://msdn.microsoft.com/library/windows/desktop/ms644958), [GetMessage](http://msdn.microsoft.com/library/windows/desktop/ms644936), [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934).  
  
     A questo punto, la funzione `WinMain` dovrebbe essere simile al codice seguente.  
  
    ```  
    int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) { WNDCLASSEX wcex; wcex.cbSize = sizeof(WNDCLASSEX); wcex.style          = CS_HREDRAW | CS_VREDRAW; wcex.lpfnWndProc    = WndProc; wcex.cbClsExtra     = 0; wcex.cbWndExtra     = 0; wcex.hInstance      = hInstance; wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_APPLICATION)); wcex.hCursor        = LoadCursor(NULL, IDC_ARROW); wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1); wcex.lpszMenuName   = NULL; wcex.lpszClassName  = szWindowClass; wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_APPLICATION)); if (!RegisterClassEx(&wcex)) { MessageBox(NULL, _T("Call to RegisterClassEx failed!"), _T("Win32 Guided Tour"), NULL); return 1; } hInst = hInstance; // Store instance handle in our global variable // The parameters to CreateWindow explained: // szWindowClass: the name of the application // szTitle: the text that appears in the title bar // WS_OVERLAPPEDWINDOW: the type of window to create // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y) // 500, 100: initial size (width, length) // NULL: the parent of this window // NULL: this application dows not have a menu bar // hInstance: the first parameter from WinMain // NULL: not used in this application HWND hWnd = CreateWindow( szWindowClass, szTitle, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 500, 100, NULL, NULL, hInstance, NULL ); if (!hWnd) { MessageBox(NULL, _T("Call to CreateWindow failed!"), _T("Win32 Guided Tour"), NULL); return 1; } // The parameters to ShowWindow explained: // hWnd: the value returned from CreateWindow // nCmdShow: the fourth parameter from WinMain ShowWindow(hWnd, nCmdShow); UpdateWindow(hWnd); // Main message loop: MSG msg; while (GetMessage(&msg, NULL, 0, 0)) { TranslateMessage(&msg); DispatchMessage(&msg); } return (int) msg.wParam; }  
    ```  
  
### Per aggiungere funzionalità alla funzione WndProc  
  
1.  Per abilitare la funzione `WndProc` per la gestione dei messaggi ricevuti dall'applicazione, implementare un'istruzione switch.  
  
     Il primo messaggio da gestire è [WM\_PAINT](http://msdn.microsoft.com/library/windows/desktop/dd145213). L'applicazione riceve questo messaggio quando è necessario aggiornare parte della finestra visualizzata \(quando la finestra viene visualizzata per la prima volta deve essere interamente aggiornata\).  
  
     Per gestire un messaggio `WM_PAINT`, chiamare prima di tutto [BeginPaint](http://msdn.microsoft.com/library/windows/desktop/dd183362), quindi gestire la logica per disporre il testo, i pulsanti e altri controlli nella finestra, quindi chiamare [EndPaint](http://msdn.microsoft.com/library/windows/desktop/dd162598). Per questa applicazione, la logica tra la chiamata iniziale e la chiamata finale consiste nella visualizzazione della stringa "Hello, World\!" nella finestra. Nel codice seguente notare che la funzione [TextOut](http://msdn.microsoft.com/library/windows/desktop/dd145133) viene usata per visualizzare la stringa.  
  
    ```  
    PAINTSTRUCT ps; HDC hdc; TCHAR greeting[] = _T("Hello, World!"); switch (message) { case WM_PAINT: hdc = BeginPaint(hWnd, &ps); // Here your application is laid out. // For this introduction, we just print out "Hello, World!" // in the top left corner. TextOut(hdc, 5, 5, greeting, _tcslen(greeting)); // End application-specific layout section. EndPaint(hWnd, &ps); break; }  
    ```  
  
2.  Un'applicazione gestisce in genere molti altri messaggi, ad esempio [WM\_CREATE](http://msdn.microsoft.com/library/windows/desktop/ms632619) e [WM\_DESTROY](http://msdn.microsoft.com/library/windows/desktop/ms632620). Il codice seguente illustra una funzione `WndProc` di base, ma completa.  
  
    ```  
    LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) { PAINTSTRUCT ps; HDC hdc; TCHAR greeting[] = _T("Hello, World!"); switch (message) { case WM_PAINT: hdc = BeginPaint(hWnd, &ps); // Here your application is laid out. // For this introduction, we just print out "Hello, World!" // in the top left corner. TextOut(hdc, 5, 5, greeting, _tcslen(greeting)); // End application specific layout section. EndPaint(hWnd, &ps); break; case WM_DESTROY: PostQuitMessage(0); break; default: return DefWindowProc(hWnd, message, wParam, lParam); break; } return 0; }  
    ```  
  
##  <a name="example"></a> Esempio  
  
#### Per compilare questo esempio  
  
1.  Creare un progetto basato su Win32 come illustrato in "Per creare un progetto basato su Win32" più indietro in questa procedura dettagliata.  
  
2.  Copiare il codice che segue questi passaggi e incollarlo nel file di origine GT\_HelloWorldWin32.cpp.  
  
3.  Scegliere **Compila soluzione** dal menu **Compila**.  
  
4.  Per eseguire l'applicazione, premere F5. Una finestra che contiene il testo "Hello World\!" viene visualizzata nell'angolo superiore sinistro dello schermo.  
  
### Codice  
  
```  
// GT_HelloWorldWin32.cpp // compile with: /D_UNICODE /DUNICODE /DWIN32 /D_WINDOWS /c #include <windows.h> #include <stdlib.h> #include <string.h> #include <tchar.h> // Global variables // The main window class name. static TCHAR szWindowClass[] = _T("win32app"); // The string that appears in the application's title bar. static TCHAR szTitle[] = _T("Win32 Guided Tour Application"); HINSTANCE hInst; // Forward declarations of functions included in this code module: LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM); int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) { WNDCLASSEX wcex; wcex.cbSize = sizeof(WNDCLASSEX); wcex.style          = CS_HREDRAW | CS_VREDRAW; wcex.lpfnWndProc    = WndProc; wcex.cbClsExtra     = 0; wcex.cbWndExtra     = 0; wcex.hInstance      = hInstance; wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_APPLICATION)); wcex.hCursor        = LoadCursor(NULL, IDC_ARROW); wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1); wcex.lpszMenuName   = NULL; wcex.lpszClassName  = szWindowClass; wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_APPLICATION)); if (!RegisterClassEx(&wcex)) { MessageBox(NULL, _T("Call to RegisterClassEx failed!"), _T("Win32 Guided Tour"), NULL); return 1; } hInst = hInstance; // Store instance handle in our global variable // The parameters to CreateWindow explained: // szWindowClass: the name of the application // szTitle: the text that appears in the title bar // WS_OVERLAPPEDWINDOW: the type of window to create // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y) // 500, 100: initial size (width, length) // NULL: the parent of this window // NULL: this application does not have a menu bar // hInstance: the first parameter from WinMain // NULL: not used in this application HWND hWnd = CreateWindow( szWindowClass, szTitle, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 500, 100, NULL, NULL, hInstance, NULL ); if (!hWnd) { MessageBox(NULL, _T("Call to CreateWindow failed!"), _T("Win32 Guided Tour"), NULL); return 1; } // The parameters to ShowWindow explained: // hWnd: the value returned from CreateWindow // nCmdShow: the fourth parameter from WinMain ShowWindow(hWnd, nCmdShow); UpdateWindow(hWnd); // Main message loop: MSG msg; while (GetMessage(&msg, NULL, 0, 0)) { TranslateMessage(&msg); DispatchMessage(&msg); } return (int) msg.wParam; } // //  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM) // //  PURPOSE:  Processes messages for the main window. // //  WM_PAINT    - Paint the main window //  WM_DESTROY  - post a quit message and return // // LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) { PAINTSTRUCT ps; HDC hdc; TCHAR greeting[] = _T("Hello, World!"); switch (message) { case WM_PAINT: hdc = BeginPaint(hWnd, &ps); // Here your application is laid out. // For this introduction, we just print out "Hello, World!" // in the top left corner. TextOut(hdc, 5, 5, greeting, _tcslen(greeting)); // End application-specific layout section. EndPaint(hWnd, &ps); break; case WM_DESTROY: PostQuitMessage(0); break; default: return DefWindowProc(hWnd, message, wParam, lParam); break; } return 0; }  
```  
  
## Vedere anche  
 [Applicazioni desktop di Windows](../windows/windows-desktop-applications-cpp.md)
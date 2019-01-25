---
title: "Procedura dettagliata: Creare un'applicazione Desktop di Windows tradizionale (C++)"
ms.custom: get-started-article
ms.date: 09/18/2018
helpviewer_keywords:
- Windows applications [C++], Win32
- Windows Desktop applications [C++]
- Windows API [C++]
ms.openlocfilehash: 07da91ea092b4e7bee974b0387e72ea0cacaec8e
ms.sourcegitcommit: c85c8a1226d8fbbaa29f4691ed719f8e6cc6575c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/24/2019
ms.locfileid: "54893899"
---
# <a name="walkthrough-create-a-traditional-windows-desktop-application-c"></a>Procedura dettagliata: Creare un'applicazione Desktop di Windows tradizionale (C++)

Questa procedura dettagliata illustra come creare un'applicazione desktop tradizionale di Windows in Visual Studio. L'applicazione di esempio che verrà creato usa l'API di Windows per visualizzare "Hello, desktop di Windows!" in una finestra. È possibile usare il codice sviluppato in questa procedura dettagliata come modello per creare altre applicazioni desktop di Windows.

L'API di Windows (noto anche come l'API Win32 API Desktop di Windows e Windows API classica) è un framework per la creazione di applicazioni Windows basate su C-language. È stato esistente dopo il 1980s ed è stato usato per creare applicazioni di Windows per decenni. Più Framework avanzati e più semplice programma sono stati integrati in API di Windows, ad esempio MFC, ATL e le versioni di .NET Framework. Codice ancora più moderno per App UWP e Store scritte in C + + / WinRT Usa l'API di Windows sotto. Per altre informazioni sull'API di Windows, vedere [Windows API Index](/windows/desktop/apiindex/windows-api-list). Esistono molti modi per creare applicazioni di Windows, ma il processo precedente è stato il primo.

> [!IMPORTANT]
> Per ragioni di brevità, alcune istruzioni di codice vengono omessi nel testo. Il [compilare il codice](#build-the-code) sezione alla fine di questo documento illustra il codice completo.

## <a name="prerequisites"></a>Prerequisiti

- Un computer che esegue Microsoft Windows 7 o versioni successive. Si consiglia di Windows 10 per la migliore esperienza di sviluppo.

- A copy of Visual Studio 2017. Per informazioni su come scaricare e installare Visual Studio, vedere [installazione di Visual Studio](/visualstudio/install/install-visual-studio). Quando si esegue il programma di installazione, assicurarsi che il **sviluppo di applicazioni Desktop con C++** viene controllato il carico di lavoro. Non occorre preoccuparsi se non è stato installato il carico di lavoro durante l'installazione di Visual Studio. È possibile eseguire nuovamente il programma di installazione e installarlo ora.

   ![Sviluppo di applicazioni desktop con C++](../build/media/desktop-development-with-cpp.png "sviluppo Desktop con C++")

- Comprendere le nozioni di base dell'uso di IDE di Visual Studio. Se è stato usato Windows App desktop prima, probabilmente è possibile mantenere. Per un'introduzione, vedere [Tour delle funzionalità IDE di Visual Studio](/visualstudio/ide/visual-studio-ide).

- Una conoscenza di un numero sufficiente delle nozioni di base del linguaggio C++ per seguire la procedura. Non ti preoccupare, abbiamo non eseguire alcuna operazione troppo complicato.

## <a name="create-a-windows-desktop-project"></a>Creare un progetto desktop di Windows

Seguire questi passaggi per creare il primo progetto desktop di Windows e immettere il codice per un'applicazione desktop di Windows funzionante. Se si usa una versione di Visual Studio precedenti a Visual Studio 2017 versione 15.3, andare direttamente al [per creare un progetto desktop di Windows in Visual Studio 2017 RTM](#create-in-vs2017-rtm).

### <a name="to-create-a-windows-desktop-project-in-visual-studio-2017-update-153-and-later"></a>Per creare un progetto desktop di Windows in Visual Studio 2017 Update versione 15.3 e versioni successive

1. Scegliere **Nuovo** dal menu **File** e quindi **Progetto**.

1. Nel **nuovo progetto** finestra di dialogo, nel riquadro sinistro, espandere **installati** > **Visual C++**, quindi selezionare **Windows Desktop**. Nel riquadro centrale, selezionare **Creazione guidata applicazione Desktop Windows**.

   Nel **Name** , digitare un nome per il progetto, ad esempio *DesktopApp*. Scegliere **OK**.

   ![Denominare il progetto DesktopApp](../build/media/desktop-app-new-project-name-153.png "denominare il progetto DesktopApp")

1. Nel **progetto Desktop di Windows** finestra di dialogo, sotto **tipo di applicazione**, selezionare **applicazione Windows (.exe)**. In **Opzioni aggiuntive**selezionare **Progetto vuoto**. Scegli **OK** per creare il progetto.

   ![Creare DesktopApp nella creazione guidata progetto Desktop di Windows](../build/media/desktop-app-new-project-wizard-153.png "creare DesktopApp nella creazione guidata progetto Desktop di Windows")

1. In **Esplora soluzioni**, fare doppio clic sul **DesktopApp** del progetto, scegliere **Add**, quindi scegliere **nuovo elemento**.

   ![Aggiungi nuovo elemento al progetto DesktopApp](../build/media/desktop-app-project-add-new-item-153.gif "Aggiungi nuovo elemento al progetto DesktopApp")

1. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **File di C++ (.cpp)**. Nel **Name** , digitare un nome per il file, ad esempio *HelloWindowsDesktop.cpp*. Scegliere **Aggiungi**.

   ![File con estensione cpp Aggiungi a progetto DesktopApp](../build/media/desktop-app-add-cpp-file-153.png "file con estensione cpp Aggiungi a progetto DesktopApp")

È stato creato il progetto e il file di origine viene aperto nell'editor. Per continuare, andare direttamente al [creare il codice](#create-the-code).

### <a id="create-in-vs2017-rtm"></a> Per creare un progetto desktop di Windows in Visual Studio 2017 RTM

1. Scegliere **Nuovo** dal menu **File** e quindi **Progetto**.

1. Nel **nuovo progetto** finestra di dialogo, nel riquadro sinistro, espandere **installati** > **modelli** > **Visual C++**, quindi selezionare **Win32**. Nel riquadro centrale selezionare **Progetto Win32**.

   Nel **Name** , digitare un nome per il progetto, ad esempio *DesktopApp*. Scegliere **OK**.

   ![Denominare il progetto DesktopApp](../build/media/desktop-app-new-project-name-150.png "denominare il progetto DesktopApp")

1. Nel **Overview** pagina della **Creazione guidata applicazione Win32**, scegliere **successivo**.

   ![Creare DesktopApp in panoramica della creazione guidata applicazione Win32](../build/media/desktop-app-win32-wizard-overview-150.png "creare DesktopApp in panoramica della creazione guidata applicazione Win32")

1. Nel **le impostazioni dell'applicazione** nella pagina **tipo di applicazione**, selezionare **applicazione Windows**. In **Opzioni aggiuntive**selezionare **Progetto vuoto**. Scegli **fine** per creare il progetto.

   ![Creare DesktopApp nelle impostazioni di creazione guidata applicazione Win32](../build/media/desktop-app-win32-wizard-settings-150.png "creare DesktopApp nelle impostazioni di creazione guidata applicazione Win32")

1. Nelle **Esplora soluzioni**, fare clic sul progetto DesktopApp, scegliere **Add**, quindi scegliere **nuovo elemento**.

   ![Aggiungi nuovo elemento al progetto DesktopApp](../build/media/desktop-app-project-add-new-item-150.gif "Aggiungi nuovo elemento al progetto DesktopApp")

1. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **File di C++ (.cpp)**. Nel **Name** , digitare un nome per il file, ad esempio *HelloWindowsDesktop.cpp*. Scegliere **Aggiungi**.

   ![File con estensione cpp Aggiungi a progetto DesktopApp](../build/media/desktop-app-add-cpp-file-150.png "file con estensione cpp Aggiungi a progetto DesktopApp")

È stato creato il progetto e il file di origine viene aperto nell'editor.

## <a name="create-the-code"></a>Creare il codice

Successivamente, si apprenderà come creare il codice per un'applicazione desktop di Windows in Visual Studio.

### <a name="to-start-a-windows-desktop-application"></a>Per avviare un'applicazione desktop di Windows

1. Proprio come ogni C dell'applicazione e dell'applicazione C++ devono avere una `main` funzionare come punto di partenza, ogni applicazione desktop deve disporre di Windows un `WinMain` (funzione). `WinMain` presenta la sintassi seguente.

   ```cpp
   int CALLBACK WinMain(
      _In_ HINSTANCE hInstance,
      _In_ HINSTANCE hPrevInstance,
      _In_ LPSTR     lpCmdLine,
      _In_ int       nCmdShow
   );
   ```

   Per informazioni sui parametri e valore restituito di questa funzione, vedere [punto di ingresso WinMain](/windows/desktop/api/winbase/nf-winbase-winmain).

   > [!NOTE]
   > Quali sono tutte queste parole aggiuntive, ad esempio `CALLBACK`, oppure `HINSTANCE`, o `_In_`? L'API di Windows tradizionale Usa typedef e macro del preprocessore per sottraggono alcuni dettagli di tipi e specifici della piattaforma del codice, ad esempio le convenzioni di chiamata **declspec** dichiarazioni e pragma del compilatore. In Visual Studio, è possibile usare la funzionalità IntelliSense [informazioni rapide](/visualstudio/ide/using-intellisense#quick-info) funzionalità per vedere cosa definiscano typedef e macro. Posizionare il mouse sopra la parola di interesse, oppure selezionarlo e premere **Ctrl**+**K**, **Ctrl**+**ho** per un piccola finestra popup contenente la definizione. Per altre informazioni, vedere [Using IntelliSense](/visualstudio/ide/using-intellisense) (Uso di IntelliSense). Tipi restituiti e parametri usano spesso *annotazioni SAL* che consentono di catch gli errori di programmazione. Per altre informazioni, vedere [utilizzo delle annotazioni SAL per ridurre i difetti del codice C/C++](/visualstudio/code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects).

1. I programmi desktop di Windows richiedono &lt;Windows. h >. &lt;Tchar. h > definisce il `TCHAR` macro, che si risolve in definitiva a **wchar_t** se il simbolo UNICODE è definito nel progetto, in caso contrario si risolve **char**.  Se si compila sempre con supporto per UNICODE, non necessari TCHAR e possono usare solo **wchar_t** direttamente.

   ```cpp
   #include <windows.h>
   #include <tchar.h>
   ```

1. Oltre alla funzione `WinMain` , ogni applicazione desktop di Windows deve avere anche una funzione routine di finestra. Questa funzione è in genere denominata `WndProc` ma è possibile specificare un nome qualsiasi. `WndProc` presenta la sintassi seguente.

   ```cpp
   LRESULT CALLBACK WndProc(
      _In_ HWND   hwnd,
      _In_ UINT   uMsg,
      _In_ WPARAM wParam,
      _In_ LPARAM lParam
   );
   ```

   In questa funzione scrivere codice per gestire *messaggi* che l'applicazione riceve da Windows quando *eventi* si verificano. Ad esempio, se un utente sceglie un pulsante OK nell'applicazione, Windows invierà un messaggio all'utente ed è possibile scrivere codice all'interno di `WndProc` funzione che esegue qualsiasi operazione è appropriata. Viene chiamato *gestisce* un evento. È solo gestire gli eventi rilevanti per l'applicazione.

   Per altre informazioni, vedere [Routine della finestra](/windows/desktop/winmsg/window-procedures).

### <a name="to-add-functionality-to-the-winmain-function"></a>Per aggiungere funzionalità alla funzione WinMain

1. Nel `WinMain` funzione, si popola una struttura di tipo [WNDCLASSEX](/windows/desktop/api/winuser/ns-winuser-tagwndclassexa). La struttura contiene informazioni sulla finestra, ad esempio, l'icona dell'applicazione, il colore di sfondo della finestra, il nome da visualizzare nella barra del titolo e importante, un puntatore a funzione alla routine della finestra. L'esempio che segue illustra una struttura `WNDCLASSEX` tipica.

   ```cpp
   WNDCLASSEX wcex;

   wcex.cbSize         = sizeof(WNDCLASSEX);
   wcex.style          = CS_HREDRAW | CS_VREDRAW;
   wcex.lpfnWndProc    = WndProc;
   wcex.cbClsExtra     = 0;
   wcex.cbWndExtra     = 0;
   wcex.hInstance      = hInstance;
   wcex.hIcon          = LoadIcon(hInstance, IDI_APPLICATION);
   wcex.hCursor        = LoadCursor(NULL, IDC_ARROW);
   wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
   wcex.lpszMenuName   = NULL;
   wcex.lpszClassName  = szWindowClass;
   wcex.hIconSm        = LoadIcon(wcex.hInstance, IDI_APPLICATION);
   ```

   Per informazioni sui campi della struttura precedente, vedere [WNDCLASSEX](/windows/desktop/api/winuser/ns-winuser-tagwndclassexa).

1. Registrare il `WNDCLASSEX` con Windows in modo che si conosce la finestra e come inviare messaggi a esso. Usare la funzione [RegisterClassEx](/windows/desktop/api/winuser/nf-winuser-registerclassexa) e passare la struttura della classe della finestra come argomento. Il `_T` macro viene usata in quanto viene usato il `TCHAR` tipo.

   ```cpp
   if (!RegisterClassEx(&wcex))
   {
      MessageBox(NULL,
         _T("Call to RegisterClassEx failed!"),
         _T("Windows Desktop Guided Tour"),
         NULL);

      return 1;
   }
   ```

1. A questo punto è possibile creare una finestra. Usare la funzione [CreateWindow](/windows/desktop/api/winuser/nf-winuser-createwindowa) .

   ```cpp
   static TCHAR szWindowClass[] = _T("DesktopApp");
   static TCHAR szTitle[] = _T("Windows Desktop Guided Tour Application");

   // The parameters to CreateWindow explained:
   // szWindowClass: the name of the application
   // szTitle: the text that appears in the title bar
   // WS_OVERLAPPEDWINDOW: the type of window to create
   // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y)
   // 500, 100: initial size (width, length)
   // NULL: the parent of this window
   // NULL: this application does not have a menu bar
   // hInstance: the first parameter from WinMain
   // NULL: not used in this application
   HWND hWnd = CreateWindow(
      szWindowClass,
      szTitle,
      WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, CW_USEDEFAULT,
      500, 100,
      NULL,
      NULL,
      hInstance,
      NULL
   );
   if (!hWnd)
   {
      MessageBox(NULL,
         _T("Call to CreateWindow failed!"),
         _T("Windows Desktop Guided Tour"),
         NULL);

      return 1;
   }
   ```

   Questa funzione restituisce un `HWND`, ovvero un handle a una finestra. Un handle è pressoché simile a un puntatore che Windows utilizza per tenere traccia delle finestre aperte. Per altre informazioni, vedere [Tipi di dati Windows](/windows/desktop/WinProg/windows-data-types).

1. A questo punto, la finestra è stata creata, ma è comunque necessario indicare a Windows per renderla visibile. Ovvero del funzionamento di questo codice:

   ```cpp
   // The parameters to ShowWindow explained:
   // hWnd: the value returned from CreateWindow
   // nCmdShow: the fourth parameter from WinMain
   ShowWindow(hWnd,
      nCmdShow);
   UpdateWindow(hWnd);
   ```

   La finestra non dispone di molto il contenuto perché ancora stata implementata la `WndProc` (funzione). In altre parole, l'applicazione non è ancora gestisce i messaggi che Windows ora sta inviando a esso.

1. Per gestire i messaggi, è innanzitutto necessario aggiungere un ciclo di messaggi per l'ascolto di messaggi che Windows invia. Quando l'applicazione riceve un messaggio, questo ciclo lo invia a di `WndProc` funzione devono essere gestiti. Il ciclo di messaggi è simile al codice seguente.

   ```cpp
   MSG msg;
   while (GetMessage(&msg, NULL, 0, 0))
   {
      TranslateMessage(&msg);
      DispatchMessage(&msg);
   }

   return (int) msg.wParam;
   ```

   Per altre informazioni sulle strutture e le funzioni usate nel ciclo di messaggi, vedere [MSG](/windows/desktop/api/winuser/ns-winuser-msg), [GetMessage](/windows/desktop/api/winuser/nf-winuser-getmessage), [TranslateMessage](/windows/desktop/api/winuser/nf-winuser-translatemessage)e [DispatchMessage](/windows/desktop/api/winuser/nf-winuser-dispatchmessage).

   A questo punto, la funzione `WinMain` dovrebbe essere simile al codice seguente.

   ```cpp
   int WINAPI WinMain(HINSTANCE hInstance,
                      HINSTANCE hPrevInstance,
                      LPSTR lpCmdLine,
                      int nCmdShow)
   {
      WNDCLASSEX wcex;

      wcex.cbSize = sizeof(WNDCLASSEX);
      wcex.style          = CS_HREDRAW | CS_VREDRAW;
      wcex.lpfnWndProc    = WndProc;
      wcex.cbClsExtra     = 0;
      wcex.cbWndExtra     = 0;
      wcex.hInstance      = hInstance;
      wcex.hIcon          = LoadIcon(hInstance, IDI_APPLICATION);
      wcex.hCursor        = LoadCursor(NULL, IDC_ARROW);
      wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
      wcex.lpszMenuName   = NULL;
      wcex.lpszClassName  = szWindowClass;
      wcex.hIconSm        = LoadIcon(wcex.hInstance, IDI_APPLICATION);

      if (!RegisterClassEx(&wcex))
      {
         MessageBox(NULL,
            _T("Call to RegisterClassEx failed!"),
            _T("Windows Desktop Guided Tour"),
            NULL);

         return 1;
      }

      // Store instance handle in our global variable
      hInst = hInstance;

      // The parameters to CreateWindow explained:
      // szWindowClass: the name of the application
      // szTitle: the text that appears in the title bar
      // WS_OVERLAPPEDWINDOW: the type of window to create
      // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y)
      // 500, 100: initial size (width, length)
      // NULL: the parent of this window
      // NULL: this application dows not have a menu bar
      // hInstance: the first parameter from WinMain
      // NULL: not used in this application
      HWND hWnd = CreateWindow(
         szWindowClass,
         szTitle,
         WS_OVERLAPPEDWINDOW,
         CW_USEDEFAULT, CW_USEDEFAULT,
         500, 100,
         NULL,
         NULL,
         hInstance,
         NULL
      );

      if (!hWnd)
      {
         MessageBox(NULL,
            _T("Call to CreateWindow failed!"),
            _T("Windows Desktop Guided Tour"),
            NULL);

         return 1;
      }

      // The parameters to ShowWindow explained:
      // hWnd: the value returned from CreateWindow
      // nCmdShow: the fourth parameter from WinMain
      ShowWindow(hWnd,
         nCmdShow);
      UpdateWindow(hWnd);

      // Main message loop:
      MSG msg;
      while (GetMessage(&msg, NULL, 0, 0))
      {
         TranslateMessage(&msg);
         DispatchMessage(&msg);
      }

      return (int) msg.wParam;
   }
   ```

### <a name="to-add-functionality-to-the-wndproc-function"></a>Per aggiungere funzionalità alla funzione WndProc

1. Per abilitare la funzione `WndProc` per la gestione dei messaggi ricevuti dall'applicazione, implementare un'istruzione switch.

   È un importante messaggio per gestire il [WM_PAINT](/windows/desktop/gdi/wm-paint) messaggio. L'applicazione riceve il `WM_PAINT` messaggio nell'ambito della finestra visualizzata deve essere aggiornato. L'evento può verificarsi quando un utente si sposta una finestra davanti la finestra e quindi si sposta, anche in questo caso, e l'applicazione non sa quando si verificano questi eventi. Solo Windows sa che, in modo che una notifica con `WM_PAINT`. Quando la finestra viene visualizzata prima di tutto, è necessario aggiornare completamente.

   Per gestire un messaggio `WM_PAINT` , chiamare prima di tutto [BeginPaint](/windows/desktop/api/winuser/nf-winuser-beginpaint), quindi gestire la logica per disporre il testo, i pulsanti e altri controlli nella finestra, quindi chiamare [EndPaint](/windows/desktop/api/winuser/nf-winuser-endpaint). Per l'applicazione, la logica tra la chiamata iniziale e la chiamata finale consiste nella visualizzazione della stringa "Hello, desktop di Windows!" nella finestra. Nel codice seguente notare che la funzione [TextOut](/windows/desktop/api/wingdi/nf-wingdi-textouta) viene usata per visualizzare la stringa.

   ```cpp
   PAINTSTRUCT ps;
   HDC hdc;
   TCHAR greeting[] = _T("Hello, Windows desktop!");

   switch (message)
   {
   case WM_PAINT:
      hdc = BeginPaint(hWnd, &ps);

      // Here your application is laid out.
      // For this introduction, we just print out "Hello, Windows desktop!"
      // in the top left corner.
      TextOut(hdc,
         5, 5,
         greeting, _tcslen(greeting));
      // End application-specific layout section.

      EndPaint(hWnd, &ps);
      break;
   }
   ```

   `HDC` nel codice è un handle a un contesto di dispositivo, ovvero una struttura di dati che Windows usa per consentire all'applicazione di comunicare con il sottosistema di grafica. Il `BeginPaint` e `EndPaint` funzioni rendere l'applicazione si comportano come un elemento positivo e non usa il contesto di dispositivo per più lungo del necessario. Le funzioni Contribuisci a rendere il sottosistema di grafica sono disponibile per l'uso da altre applicazioni.

1. Un'applicazione gestisce in genere molti altri messaggi, ad esempio, [WM_CREATE](/windows/desktop/winmsg/wm-create) quando viene creata una finestra, e [WM_DESTROY](/windows/desktop/winmsg/wm-destroy) quando la finestra viene chiusa. Il codice seguente illustra una funzione `WndProc` di base, ma completa.

   ```cpp
   LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
   {
      PAINTSTRUCT ps;
      HDC hdc;
      TCHAR greeting[] = _T("Hello, Windows desktop!");

      switch (message)
      {
      case WM_PAINT:
         hdc = BeginPaint(hWnd, &ps);

         // Here your application is laid out.
         // For this introduction, we just print out "Hello, Windows desktop!"
         // in the top left corner.
         TextOut(hdc,
            5, 5,
            greeting, _tcslen(greeting));
         // End application specific layout section.

         EndPaint(hWnd, &ps);
         break;
      case WM_DESTROY:
         PostQuitMessage(0);
         break;
      default:
         return DefWindowProc(hWnd, message, wParam, lParam);
         break;
      }

      return 0;
   }
   ```

## <a name="build-the-code"></a>Compilare il codice

Come promesso, ecco il codice completo per l'applicazione funzionante.

### <a name="to-build-this-example"></a>Per compilare questo esempio

1. Eliminare eventuale codice immesso nella *HelloWindowsDesktop.cpp* nell'editor. Copiare questo codice di esempio e incollarlo nella *HelloWindowsDesktop.cpp*:

   ```cpp
   // HelloWindowsDesktop.cpp
   // compile with: /D_UNICODE /DUNICODE /DWIN32 /D_WINDOWS /c

   #include <windows.h>
   #include <stdlib.h>
   #include <string.h>
   #include <tchar.h>

   // Global variables

   // The main window class name.
   static TCHAR szWindowClass[] = _T("DesktopApp");

   // The string that appears in the application's title bar.
   static TCHAR szTitle[] = _T("Windows Desktop Guided Tour Application");

   HINSTANCE hInst;

   // Forward declarations of functions included in this code module:
   LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

   int CALLBACK WinMain(
      _In_ HINSTANCE hInstance,
      _In_ HINSTANCE hPrevInstance,
      _In_ LPSTR     lpCmdLine,
      _In_ int       nCmdShow
   )
   {
      WNDCLASSEX wcex;

      wcex.cbSize = sizeof(WNDCLASSEX);
      wcex.style          = CS_HREDRAW | CS_VREDRAW;
      wcex.lpfnWndProc    = WndProc;
      wcex.cbClsExtra     = 0;
      wcex.cbWndExtra     = 0;
      wcex.hInstance      = hInstance;
      wcex.hIcon          = LoadIcon(hInstance, IDI_APPLICATION);
      wcex.hCursor        = LoadCursor(NULL, IDC_ARROW);
      wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
      wcex.lpszMenuName   = NULL;
      wcex.lpszClassName  = szWindowClass;
      wcex.hIconSm        = LoadIcon(wcex.hInstance, IDI_APPLICATION);

      if (!RegisterClassEx(&wcex))
      {
         MessageBox(NULL,
            _T("Call to RegisterClassEx failed!"),
            _T("Windows Desktop Guided Tour"),
            NULL);

         return 1;
      }

      // Store instance handle in our global variable
      hInst = hInstance;

      // The parameters to CreateWindow explained:
      // szWindowClass: the name of the application
      // szTitle: the text that appears in the title bar
      // WS_OVERLAPPEDWINDOW: the type of window to create
      // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y)
      // 500, 100: initial size (width, length)
      // NULL: the parent of this window
      // NULL: this application does not have a menu bar
      // hInstance: the first parameter from WinMain
      // NULL: not used in this application
      HWND hWnd = CreateWindow(
         szWindowClass,
         szTitle,
         WS_OVERLAPPEDWINDOW,
         CW_USEDEFAULT, CW_USEDEFAULT,
         500, 100,
         NULL,
         NULL,
         hInstance,
         NULL
      );

      if (!hWnd)
      {
         MessageBox(NULL,
            _T("Call to CreateWindow failed!"),
            _T("Windows Desktop Guided Tour"),
            NULL);

         return 1;
      }

      // The parameters to ShowWindow explained:
      // hWnd: the value returned from CreateWindow
      // nCmdShow: the fourth parameter from WinMain
      ShowWindow(hWnd,
         nCmdShow);
      UpdateWindow(hWnd);

      // Main message loop:
      MSG msg;
      while (GetMessage(&msg, NULL, 0, 0))
      {
         TranslateMessage(&msg);
         DispatchMessage(&msg);
      }

      return (int) msg.wParam;
   }

   //  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
   //
   //  PURPOSE:  Processes messages for the main window.
   //
   //  WM_PAINT    - Paint the main window
   //  WM_DESTROY  - post a quit message and return
   LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
   {
      PAINTSTRUCT ps;
      HDC hdc;
      TCHAR greeting[] = _T("Hello, Windows desktop!");

      switch (message)
      {
      case WM_PAINT:
         hdc = BeginPaint(hWnd, &ps);

         // Here your application is laid out.
         // For this introduction, we just print out "Hello, Windows desktop!"
         // in the top left corner.
         TextOut(hdc,
            5, 5,
            greeting, _tcslen(greeting));
         // End application-specific layout section.

         EndPaint(hWnd, &ps);
         break;
      case WM_DESTROY:
         PostQuitMessage(0);
         break;
      default:
         return DefWindowProc(hWnd, message, wParam, lParam);
         break;
      }

      return 0;
   }
   ```

1. Scegliere **Compila soluzione** dal menu **Compila**. I risultati della compilazione devono essere visualizzato nei **Output** finestra in Visual Studio.

   ![Compilare il progetto DesktopApp](../build/media/desktop-app-project-build-150.gif "compilare il progetto DesktopApp")

1. Per eseguire l'applicazione, premere **F5**. Una finestra che contiene il testo "Hello, desktop di Windows!" viene visualizzata nell'angolo superiore sinistro dello schermo.

   ![Eseguire il progetto DesktopApp](../build/media/desktop-app-project-run-157.png "eseguire il progetto DesktopApp")

La procedura è stata completata. Aver completato questa procedura dettagliata e compilato un'applicazione desktop di Windows tradizionale.

## <a name="see-also"></a>Vedere anche

[Applicazioni Desktop di Windows](../windows/windows-desktop-applications-cpp.md)
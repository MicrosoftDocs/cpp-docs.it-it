---
title: "Procedura dettagliata: creare un'applicazione desktop di WindowsC++tradizionale ()"
description: Come creare un'applicazione desktop Windows minima e tradizionale con Visual Studio, C++e l'API Win32
ms.custom: get-started-article
ms.date: 11/03/2019
helpviewer_keywords:
- Windows applications [C++], Win32
- Windows Desktop applications [C++]
- Windows API [C++]
ms.openlocfilehash: 6f219a0c199971b563b1c0ff291f2f5d12803023
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73627470"
---
# <a name="walkthrough-create-a-traditional-windows-desktop-application-c"></a>Procedura dettagliata: creare un'applicazione desktop di WindowsC++tradizionale ()

In questa procedura dettagliata viene illustrato come creare un'applicazione desktop di Windows tradizionale in Visual Studio. L'applicazione di esempio che verrà creata usa l'API Windows per visualizzare "Hello, Windows Desktop!" in una finestra. È possibile usare il codice sviluppato in questa procedura dettagliata come modello per creare altre applicazioni desktop di Windows.

L'API Windows (nota anche come API Win32, Windows Desktop API e Windows API classica) è un Framework basato sul linguaggio C per la creazione di applicazioni Windows. È esistito dagli anni '80 ed è stato usato per creare applicazioni Windows da decenni. Framework più avanzati e facili da programmare sono basati sull'API Windows. Ad esempio MFC, ATL, .NET Framework. Anche il codice Windows Runtime più moderno per le app UWP e Store scritte C++in/WinRT usa l'API Windows sottostante. Per altre informazioni sull'API Windows, vedere [Indice API Windows](/windows/win32/apiindex/windows-api-list). Esistono diversi modi per creare applicazioni Windows, ma il processo precedente è stato il primo.

> [!IMPORTANT]
> Per motivi di brevità, alcune istruzioni di codice vengono omesse nel testo. La sezione [compilare il codice](#build-the-code) alla fine di questo documento illustra il codice completo.

## <a name="prerequisites"></a>Prerequisites

- Un computer che esegue Microsoft Windows 7 o versioni successive. Si consiglia Windows 10 per un'esperienza di sviluppo ottimale.

- Una copia di Visual Studio. Per informazioni su come scaricare e installare Visual Studio, vedere [Installare Visual Studio](/visualstudio/install/install-visual-studio). Quando si esegue il programma di installazione, assicurarsi che sia selezionato il carico di lavoro **Sviluppo di applicazioni desktop con C++** . Non è un problema se il carico di lavoro non è stato installato durante l'installazione di Visual Studio. È possibile eseguire nuovamente il programma di installazione e installarlo ora.

   ![Sviluppo di applicazioni desktop con C++](../build/media/desktop-development-with-cpp.png "Sviluppo di applicazioni desktop con C++")

- Conoscenza dei concetti di base dell'uso dell'IDE di Visual Studio. Se si sono usate app desktop di Windows in precedenza, è probabilmente possibile riuscire a seguire. Per informazioni introduttive, vedere [Panoramica delle funzionalità dell'IDE di Visual Studio](/visualstudio/ide/visual-studio-ide).

- Conoscenza delle nozioni di base del linguaggio C++. Non verranno comunque presentate procedure troppo complicate.

## <a name="create-a-windows-desktop-project"></a>Creazione di un progetto desktop di Windows

Per creare il primo progetto desktop di Windows, seguire questa procedura. Man mano che si procede, si immetterà il codice per un'applicazione desktop di Windows funzionante. È disponibile un selettore di versione nell'angolo superiore sinistro della pagina. Assicurarsi che sia impostato sulla versione di Visual Studio che si sta usando.

::: moniker range="vs-2019"

### <a name="to-create-a-windows-desktop-project-in-visual-studio-2019"></a>Per creare un progetto desktop di Windows in Visual Studio 2019

1. Dal menu principale scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella parte superiore della finestra di dialogo impostare **lingua** su **C++** , imposta **piattaforma** su **Windows**e imposta **tipo di progetto** su **Desktop**.

1. Dall'elenco filtrato dei tipi di progetto scegliere **procedura guidata per desktop di Windows** , quindi scegliere **Avanti**. Nella pagina successiva immettere un nome per il progetto, ad esempio *DesktopApp*.

1. Scegliere il pulsante **Crea** per creare il progetto.

1. Verrà visualizzata la finestra di dialogo **progetto desktop di Windows** . In **tipo di applicazione**selezionare **applicazione desktop (exe)** . In **Opzioni aggiuntive**selezionare **Progetto vuoto**. Scegliere **OK** per creare il progetto.

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul progetto **DesktopApp** , scegliere **Aggiungi**, quindi scegliere **nuovo elemento**.

   ![Aggiungi nuovo elemento al progetto DesktopApp](../build/media/desktop-app-project-add-new-item-153.gif "Aggiungi nuovo elemento al progetto DesktopApp")

1. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **File di C++ (.cpp)** . Nella casella **nome** Digitare un nome per il file, ad esempio *HelloWindowsDesktop. cpp*. Scegliere **Aggiungi**.

   ![Aggiungere il file con estensione cpp al progetto DesktopApp](../build/media/desktop-app-add-cpp-file-153.png "Aggiungere il file con estensione cpp al progetto DesktopApp")

Il progetto è stato creato e il file di origine viene aperto nell'editor. Per continuare, passare a [creare il codice](#create-the-code).

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-windows-desktop-project-in-visual-studio-2017"></a>Per creare un progetto desktop di Windows in Visual Studio 2017

1. Scegliere **Nuovo** dal menu **File** e quindi **Progetto**.

1. Nel riquadro sinistro della finestra di dialogo **nuovo progetto** espandere **installato**  >  oggetto**C++visivo**, quindi selezionare desktop di **Windows**. Nel riquadro centrale selezionare **creazione guidata desktop di Windows**.

   Nella casella **nome** Digitare un nome per il progetto, ad esempio *DesktopApp*. Scegliere **OK**.

   ![Assegnare un nome al progetto DesktopApp](../build/media/desktop-app-new-project-name-153.png "Assegnare un nome al progetto DesktopApp")

1. Nella finestra di dialogo **progetto desktop Windows** , in **tipo di applicazione**Selezionare **applicazione Windows (exe)** . In **Opzioni aggiuntive**selezionare **Progetto vuoto**. Assicurarsi che l' **intestazione precompilata** non sia selezionata. Scegliere **OK** per creare il progetto.

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul progetto **DesktopApp** , scegliere **Aggiungi**, quindi scegliere **nuovo elemento**.

   ![Aggiungi nuovo elemento al progetto DesktopApp](../build/media/desktop-app-project-add-new-item-153.gif "Aggiungi nuovo elemento al progetto DesktopApp")

1. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **File di C++ (.cpp)** . Nella casella **nome** Digitare un nome per il file, ad esempio *HelloWindowsDesktop. cpp*. Scegliere **Aggiungi**.

   ![Aggiungere il file con estensione cpp al progetto DesktopApp](../build/media/desktop-app-add-cpp-file-153.png "Aggiungere il file con estensione cpp al progetto DesktopApp")

Il progetto è stato creato e il file di origine viene aperto nell'editor. Per continuare, passare a [creare il codice](#create-the-code).

::: moniker-end

::: moniker range="vs-2015"

### <a name="to-create-a-windows-desktop-project-in-visual-studio-2015"></a>Per creare un progetto desktop di Windows in Visual Studio 2015

1. Scegliere **Nuovo** dal menu **File** e quindi **Progetto**.

1. Nel riquadro sinistro della finestra di dialogo **nuovo progetto** espandere **installato**  > **modelli**  >  oggetto**visivo C++** e quindi selezionare **Win32**. Nel riquadro centrale selezionare **Progetto Win32**.

   Nella casella **nome** Digitare un nome per il progetto, ad esempio *DesktopApp*. Scegliere **OK**.

   ![Assegnare un nome al progetto DesktopApp](../build/media/desktop-app-new-project-name-150.png "Assegnare un nome al progetto DesktopApp")

1. Nella pagina **Panoramica** della **creazione guidata applicazione Win32**fare clic su **Avanti**.

   ![Panoramica della creazione di DesktopApp nella creazione guidata applicazione Win32](../build/media/desktop-app-win32-wizard-overview-150.png "Panoramica della creazione di DesktopApp nella creazione guidata applicazione Win32")

1. Nella pagina **Impostazioni applicazione** , in **tipo di applicazione**Selezionare **applicazione Windows**. In **Opzioni aggiuntive**deselezionare **intestazione precompilata**, quindi selezionare **progetto vuoto**. Scegliere **fine** per creare il progetto.

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul progetto DesktopApp, scegliere **Aggiungi**, quindi scegliere **nuovo elemento**.

   ![Aggiungi nuovo elemento al progetto DesktopApp](../build/media/desktop-app-project-add-new-item-150.gif "Aggiungi nuovo elemento al progetto DesktopApp")

1. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **File di C++ (.cpp)** . Nella casella **nome** Digitare un nome per il file, ad esempio *HelloWindowsDesktop. cpp*. Scegliere **Aggiungi**.

   ![Aggiungere il file con estensione cpp al progetto DesktopApp](../build/media/desktop-app-add-cpp-file-150.png "Aggiungere il file con estensione cpp al progetto DesktopApp")

Il progetto è stato creato e il file di origine viene aperto nell'editor.

::: moniker-end

## <a name="create-the-code"></a>Creare il codice

Si apprenderà quindi come creare il codice per un'applicazione desktop di Windows in Visual Studio.

### <a name="to-start-a-windows-desktop-application"></a>Per avviare un'applicazione desktop di Windows

1. Proprio come ogni applicazione C e C++ applicazione deve avere una funzione `main` come punto di partenza, ogni applicazione desktop di Windows deve avere una funzione di `WinMain`. `WinMain` presenta la sintassi seguente.

   ```cpp
   int CALLBACK WinMain(
      _In_ HINSTANCE hInstance,
      _In_opt_ HINSTANCE hPrevInstance,
      _In_ LPSTR     lpCmdLine,
      _In_ int       nCmdShow
   );
   ```

   Per informazioni sui parametri e sul valore restituito di questa funzione, vedere [WinMain Entry Point](/windows/win32/api/winbase/nf-winbase-winmain).

   > [!NOTE]
   > Quali sono tutte le parole aggiuntive, ad esempio `CALLBACK`o `HINSTANCE`o `_In_`? L'API Windows tradizionale usa i typedef e le macro del preprocessore in modo estensivo per astrarre alcuni dettagli dei tipi e del codice specifico della piattaforma, ad esempio le convenzioni di chiamata, le dichiarazioni **_ _ declspec** e i pragma del compilatore. In Visual Studio è possibile usare la funzionalità [informazioni rapide](/visualstudio/ide/using-intellisense#quick-info) di IntelliSense per vedere cosa definiscono questi typedef e macro. Posizionare il puntatore del mouse sulla parola di interesse o selezionarla e premere **ctrl** +**K**, **CTRL** +**I** per una piccola finestra popup contenente la definizione. Per altre informazioni, vedere [Using IntelliSense](/visualstudio/ide/using-intellisense) (Uso di IntelliSense). I parametri e i tipi restituiti spesso utilizzano le *annotazioni SAL* per facilitare l'intercettazione degli errori di programmazione. Per ulteriori informazioni, vedere [utilizzo delle annotazioni SAL per ridurreC++ i difetti del codice C/](/visualstudio/code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects).

1. I programmi desktop di Windows richiedono > &lt;windows. h. &lt;TCHAR. h > definisce la macro `TCHAR`, che in definitiva viene risolta in **wchar_t** se il simbolo Unicode viene definito nel progetto; in caso contrario, viene risolto in **char**.  Se si compila sempre con la funzionalità UNICODE abilitata, non è necessario TCHAR e si può usare solo **wchar_t** direttamente.

   ```cpp
   #include <windows.h>
   #include <tchar.h>
   ```

1. Insieme alla funzione `WinMain`, ogni applicazione desktop di Windows deve avere anche una funzione di routine di finestra. Questa funzione viene in genere denominata `WndProc`, ma è possibile assegnarle un nome qualsiasi. `WndProc` presenta la sintassi seguente.

   ```cpp
   LRESULT CALLBACK WndProc(
      _In_ HWND   hWnd,
      _In_ UINT   message,
      _In_ WPARAM wParam,
      _In_ LPARAM lParam
   );
   ```

   In questa funzione viene scritto il codice per gestire *i messaggi* ricevuti dall'applicazione da Windows quando si verificano *gli eventi* . Se, ad esempio, un utente sceglie un pulsante OK nell'applicazione, Windows invierà un messaggio all'utente ed è possibile scrivere codice all'interno della funzione `WndProc` che esegue qualsiasi operazione appropriata. Viene chiamato *gestione* di un evento. È possibile gestire solo gli eventi rilevanti per l'applicazione.

   Per altre informazioni, vedere [Routine della finestra](/windows/win32/winmsg/window-procedures).

### <a name="to-add-functionality-to-the-winmain-function"></a>Per aggiungere funzionalità alla funzione WinMain

1. Nella funzione `WinMain` si popola una struttura di tipo [WNDCLASSEX](/windows/win32/api/winuser/ns-winuser-wndclassexw). La struttura contiene informazioni sulla finestra: l'icona dell'applicazione, il colore di sfondo della finestra, il nome da visualizzare nella barra del titolo, tra le altre cose. In particolare, contiene un puntatore a funzione per la routine della finestra. L'esempio che segue illustra una struttura `WNDCLASSEX` tipica.

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

   Per informazioni sui campi della struttura precedente, vedere [WNDCLASSEX](/windows/win32/api/winuser/ns-winuser-wndclassexw).

1. Registrare il `WNDCLASSEX` con Windows in modo che riconosca la finestra e come inviare messaggi. Usare la funzione [RegisterClassEx](/windows/win32/api/winuser/nf-winuser-registerclassexw) e passare la struttura della classe della finestra come argomento. Viene usata la macro `_T` perché si usa il tipo di `TCHAR`.

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

1. A questo punto è possibile creare una finestra. Usare la funzione [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) .

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

   Questa funzione restituisce un `HWND`, che è un handle per una finestra. Un handle è simile a un puntatore utilizzato da Windows per tenere traccia delle finestre aperte. Per altre informazioni, vedere [Tipi di dati Windows](/windows/win32/WinProg/windows-data-types).

1. A questo punto, la finestra è stata creata, ma è comunque necessario indicare a Windows di renderla visibile. Ecco come funziona questo codice:

   ```cpp
   // The parameters to ShowWindow explained:
   // hWnd: the value returned from CreateWindow
   // nCmdShow: the fourth parameter from WinMain
   ShowWindow(hWnd,
      nCmdShow);
   UpdateWindow(hWnd);
   ```

   La finestra visualizzata non ha molti contenuti perché non è ancora stata implementata la funzione `WndProc`. In altre parole, l'applicazione non gestisce ancora i messaggi inviati da Windows.

1. Per gestire i messaggi, viene innanzitutto aggiunto un ciclo di messaggi per l'ascolto dei messaggi inviati da Windows. Quando l'applicazione riceve un messaggio, questo ciclo lo invia alla funzione `WndProc` da gestire. Il ciclo di messaggi è simile al codice seguente.

   ```cpp
   MSG msg;
   while (GetMessage(&msg, NULL, 0, 0))
   {
      TranslateMessage(&msg);
      DispatchMessage(&msg);
   }

   return (int) msg.wParam;
   ```

   Per altre informazioni sulle strutture e le funzioni usate nel ciclo di messaggi, vedere [MSG](/windows/win32/api/winuser/ns-winuser-msg), [GetMessage](/windows/win32/api/winuser/nf-winuser-getmessage), [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage)e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage).

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

   Un messaggio importante da gestire è il messaggio [WM_PAINT](/windows/win32/gdi/wm-paint) . L'applicazione riceve il messaggio di `WM_PAINT` quando è necessario aggiornare una parte della finestra visualizzata. L'evento può verificarsi quando un utente sposta una finestra davanti alla finestra, quindi la sposta nuovamente. L'applicazione non è in grado di stabilire quando si verificano questi eventi. Solo Windows sa, quindi invia una notifica all'app con un messaggio di `WM_PAINT`. Quando la finestra viene visualizzata per la prima volta, è necessario aggiornarla.

   Per gestire un messaggio `WM_PAINT` , chiamare prima di tutto [BeginPaint](/windows/win32/api/winuser/nf-winuser-beginpaint), quindi gestire la logica per disporre il testo, i pulsanti e altri controlli nella finestra, quindi chiamare [EndPaint](/windows/win32/api/winuser/nf-winuser-endpaint). Per l'applicazione, la logica tra la chiamata iniziale e la chiamata finale consiste nel visualizzare la stringa "Hello, Windows Desktop!" nella finestra. Nel codice seguente notare che la funzione [TextOut](/windows/win32/api/wingdi/nf-wingdi-textoutw) viene usata per visualizzare la stringa.

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

   `HDC` nel codice è un handle per un contesto di dispositivo, ovvero una struttura di dati utilizzata da Windows per consentire all'applicazione di comunicare con il sottosistema di grafica. Le funzioni `BeginPaint` e `EndPaint` rendono l'applicazione comportarsi come un buono cittadino e non usa il contesto di dispositivo per più tempo del necessario. Le funzioni consentono di rendere il sottosistema grafico disponibile per l'utilizzo da parte di altre applicazioni.

1. Un'applicazione gestisce in genere molti altri messaggi. Ad esempio, [WM_CREATE](/windows/win32/winmsg/wm-create) all'inizio della creazione di una finestra e [WM_DESTROY](/windows/win32/winmsg/wm-destroy) quando la finestra viene chiusa. Il codice seguente illustra una funzione `WndProc` di base, ma completa.

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

1. Eliminare il codice immesso in *HelloWindowsDesktop. cpp* nell'editor. Copiare questo codice di esempio e incollarlo in *HelloWindowsDesktop. cpp*:

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
      _In_opt_ HINSTANCE hPrevInstance,
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

1. Scegliere **Compila soluzione** dal menu **Compila**. I risultati della compilazione verranno visualizzati nella finestra di **output** in Visual Studio.

   ![Compilare il progetto DesktopApp](../build/media/desktop-app-project-build-150.gif "Compilare il progetto DesktopApp")

1. Per eseguire l'applicazione, premere **F5**. Una finestra che contiene il testo "Hello, Windows Desktop!" viene visualizzata nell'angolo superiore sinistro dello schermo.

   ![Eseguire il progetto DesktopApp](../build/media/desktop-app-project-run-157.PNG "Eseguire il progetto DesktopApp")

La procedura è stata completata. Questa procedura dettagliata è stata completata ed è stata creata un'applicazione desktop di Windows tradizionale.

## <a name="see-also"></a>Vedere anche

[Applicazioni desktop di Windows](../windows/windows-desktop-applications-cpp.md)

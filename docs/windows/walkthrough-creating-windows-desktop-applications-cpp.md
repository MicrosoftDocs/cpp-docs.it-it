---
title: "Procedura dettagliata: Creazione di un'applicazione desktop di Windows tradizionale (c ')"
description: Come creare un'applicazione desktop di Windows tradizionale minima utilizzando Visual Studio, C e l'API Win32
ms.custom: get-started-article
ms.date: 11/03/2019
helpviewer_keywords:
- Windows applications [C++], Win32
- Windows Desktop applications [C++]
- Windows API [C++]
ms.openlocfilehash: da74778e79a08dd3ed2b5be0675981425264bdc0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81351844"
---
# <a name="walkthrough-create-a-traditional-windows-desktop-application-c"></a>Procedura dettagliata: Creazione di un'applicazione desktop di Windows tradizionale (c ')

Questa procedura dettagliata viene illustrato come creare un'applicazione desktop Windows tradizionale in Visual Studio.This walkthrough shows how to create a traditional Windows desktop application in Visual Studio. L'applicazione di esempio che verrà creata utilizza l'API di Windows per visualizzare "Hello, desktop di Windows!" in una finestra. È possibile usare il codice sviluppato in questa procedura dettagliata come modello per creare altre applicazioni desktop di Windows.

L'API di Windows (nota anche come API Win32, API desktop di Windows e API classica di Windows) è un framework basato sul linguaggio C per la creazione di applicazioni Windows. E 'stato in esistenza dal 1980 ed è stato utilizzato per creare applicazioni Windows per decenni. Framework più avanzati e più facili da programmare sono stati costruiti sopra l'API di Windows. Ad esempio, MFC, ATL, i framework .NET. Anche il codice di Windows Runtime più moderno per le app UWP e Store scritte in C . Per ulteriori informazioni sull'API di Windows, vedere [Indice API di Windows](/windows/win32/apiindex/windows-api-list). Ci sono molti modi per creare applicazioni Windows, ma il processo di cui sopra è stato il primo.

> [!IMPORTANT]
> Per motivi di brevità, alcune istruzioni di codice vengono omesse nel testo. Nella sezione [Compilare il codice](#build-the-code) alla fine di questo documento viene illustrato il codice completo.

## <a name="prerequisites"></a>Prerequisiti

- Un computer che esegue Microsoft Windows 7 o versioni successive. Si consiglia Windows 10 per un'esperienza di sviluppo ottimale.

- Una copia di Visual Studio. Per informazioni su come scaricare e installare Visual Studio, vedere [Installare Visual Studio](/visualstudio/install/install-visual-studio). Quando si esegue il programma di installazione, assicurarsi che sia selezionato il carico di lavoro **Sviluppo di applicazioni desktop con C++**. Non è un problema se il carico di lavoro non è stato installato durante l'installazione di Visual Studio. È possibile eseguire nuovamente il programma di installazione e installarlo ora.

   ![Sviluppo per desktop con C++](../build/media/desktop-development-with-cpp.png "Sviluppo per desktop con C++")

- Conoscenza dei concetti di base dell'uso dell'IDE di Visual Studio. Se si sono usate app desktop di Windows in precedenza, è probabilmente possibile riuscire a seguire. Per informazioni introduttive, vedere [Panoramica delle funzionalità dell'IDE di Visual Studio](/visualstudio/ide/visual-studio-ide).

- Conoscenza delle nozioni di base del linguaggio C++. Non verranno comunque presentate procedure troppo complicate.

## <a name="create-a-windows-desktop-project"></a>Creare un progetto desktop di WindowsCreate a Windows desktop project

Seguire questi passaggi per creare il primo progetto desktop di Windows. Come si va, si inserirà il codice per un'applicazione desktop di Windows funzionante. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo Selettore **versione.** Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="vs-2019"

### <a name="to-create-a-windows-desktop-project-in-visual-studio-2019"></a>Per creare un progetto desktop di Windows in Visual Studio 2019To create a Windows desktop project in Visual Studio 2019

1. Dal menu principale scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella parte superiore della finestra di dialogo, impostare **Lingua** su **C,** impostare **Piattaforma** su **Windows**e tipo **di progetto** su **Desktop**.

1. Dall'elenco filtrato dei tipi di progetto, scegliere **Creazione guidata desktop di Windows,** quindi **Avanti**. Nella pagina successiva immettere un nome per il progetto, ad esempio *DesktopApp*.

1. Scegliere il pulsante **Crea** per creare il progetto.

1. Viene visualizzata la finestra di dialogo **Progetto desktop di Windows.** In **Tipo di applicazione**selezionare Applicazione desktop **(.exe)**. In **Opzioni aggiuntive**selezionare **Progetto vuoto**. Scegliere **OK** per creare il progetto.

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul progetto **DesktopApp** , scegliere **Aggiungi**, quindi **Nuovo elemento**.

   ![Aggiungere un nuovo elemento a DesktopApp Project](../build/media/desktop-app-project-add-new-item-153.gif "Aggiungere un nuovo elemento a DesktopApp Project")

1. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **File di C++ (.cpp)**. Nella casella **Nome** digitare un nome per il file, ad esempio *HelloWindowsDesktop.cpp*. Scegliere **Aggiungi**.

   ![Aggiungere un file con estensione cpp al progetto DesktopApp](../build/media/desktop-app-add-cpp-file-153.png "Aggiungere un file con estensione cpp al progetto DesktopApp")

Il progetto viene ora creato e il file di origine viene aperto nell'editor. Per continuare, passare a [Crea il codice](#create-the-code).

::: moniker-end

::: moniker range="vs-2017"

### <a name="to-create-a-windows-desktop-project-in-visual-studio-2017"></a>Per creare un progetto desktop di Windows in Visual Studio 2017To create a Windows desktop project in Visual Studio 2017

1. Scegliere **Nuovo** dal menu **File** e quindi **Progetto**.

1. Nella finestra di dialogo **Nuovo progetto,** nel riquadro sinistro, espandere **Visual** > **C,**, quindi selezionare Desktop di **Windows**. Nel riquadro centrale selezionare **Creazione guidata desktop di Windows**.

   Nella casella **Nome** digitare un nome per il progetto, ad esempio *AppDesktop.* Scegliere **OK**.

   ![Assegnare al progetto il nome DesktopApp](../build/media/desktop-app-new-project-name-153.png "Assegnare al progetto il nome DesktopApp")

1. Nella finestra di dialogo Progetto desktop di **Windows,** in **Tipo di applicazione**, selezionare Applicazione Windows **(.exe)**. In **Opzioni aggiuntive**selezionare **Progetto vuoto**. Assicurarsi che **L'intestazione precompilata** non sia selezionata. Scegliere **OK** per creare il progetto.

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul progetto **DesktopApp** , scegliere **Aggiungi**, quindi **Nuovo elemento**.

   ![Aggiungere un nuovo elemento a DesktopApp Project](../build/media/desktop-app-project-add-new-item-153.gif "Aggiungere un nuovo elemento a DesktopApp Project")

1. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **File di C++ (.cpp)**. Nella casella **Nome** digitare un nome per il file, ad esempio *HelloWindowsDesktop.cpp*. Scegliere **Aggiungi**.

   ![Aggiungere un file con estensione cpp al progetto DesktopApp](../build/media/desktop-app-add-cpp-file-153.png "Aggiungere un file con estensione cpp al progetto DesktopApp")

Il progetto viene ora creato e il file di origine viene aperto nell'editor. Per continuare, passare a [Crea il codice](#create-the-code).

::: moniker-end

::: moniker range="vs-2015"

### <a name="to-create-a-windows-desktop-project-in-visual-studio-2015"></a>Per creare un progetto desktop di Windows in Visual Studio 2015To create a Windows desktop project in Visual Studio 2015

1. Scegliere **Nuovo** dal menu **File** e quindi **Progetto**.

1. Nella finestra di dialogo **Nuovo progetto,** nel riquadro sinistro, espandere**Modelli** >  **installati** > **di Visual C,** quindi selezionare **Win32**. Nel riquadro centrale selezionare **Progetto Win32**.

   Nella casella **Nome** digitare un nome per il progetto, ad esempio *AppDesktop.* Scegliere **OK**.

   ![Assegnare al progetto il nome DesktopApp](../build/media/desktop-app-new-project-name-150.png "Assegnare al progetto il nome DesktopApp")

1. Nella pagina **Panoramica** della **Creazione guidata applicazione Win32**scegliere **Avanti**.

   ![Creazione di DesktopApp in Win32 Application Wizard Overview](../build/media/desktop-app-win32-wizard-overview-150.png "Creazione di DesktopApp in Win32 Application Wizard Overview")

1. Nella pagina **Impostazioni applicazione,** in **Tipo di applicazione**, selezionare Applicazione **Windows**. In **Opzioni aggiuntive**deselezionare **Intestazione precompilata**, quindi selezionare **Progetto vuoto**. Scegliere **Fine** per creare il progetto.

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul progetto DesktopApp , scegliere **Aggiungi**, quindi **Nuovo elemento**.

   ![Aggiungere un nuovo elemento a DesktopApp Project](../build/media/desktop-app-project-add-new-item-150.gif "Aggiungere un nuovo elemento a DesktopApp Project")

1. Nella finestra di dialogo **Aggiungi nuovo elemento** selezionare **File di C++ (.cpp)**. Nella casella **Nome** digitare un nome per il file, ad esempio *HelloWindowsDesktop.cpp*. Scegliere **Aggiungi**.

   ![Aggiungere un file con estensione cpp al progetto DesktopApp](../build/media/desktop-app-add-cpp-file-150.png "Aggiungere un file con estensione cpp al progetto DesktopApp")

Il progetto viene ora creato e il file di origine viene aperto nell'editor.

::: moniker-end

## <a name="create-the-code"></a>Creare il codice

Successivamente, si apprenderà come creare il codice per un'applicazione desktop di Windows in Visual Studio.Next, you'll learn how to create the code for a Windows desktop application in Visual Studio.

### <a name="to-start-a-windows-desktop-application"></a>Per avviare un'applicazione desktop di Windows

1. Proprio come ogni applicazione C e l'applicazione di C, deve avere `main` una `WinMain` funzione come punto di partenza, ogni applicazione desktop di Windows deve avere una funzione. `WinMain` presenta la sintassi seguente.

   ```cpp
   int CALLBACK WinMain(
      _In_ HINSTANCE hInstance,
      _In_opt_ HINSTANCE hPrevInstance,
      _In_ LPSTR     lpCmdLine,
      _In_ int       nCmdShow
   );
   ```

   Per informazioni sui parametri e sul valore restituito di questa funzione, vedere Punto di [ingresso WinMain](/windows/win32/api/winbase/nf-winbase-winmain).

   > [!NOTE]
   > Quali sono tutte quelle parole `CALLBACK`in `HINSTANCE`più, come , o , o `_In_`? L'API di Windows tradizionale utilizza ampiamente typedef e macro del preprocessore per astrarre alcuni dettagli dei tipi e del codice specifico della piattaforma, ad esempio convenzioni di **chiamata, dichiarazioni di __declspec** e pragma del compilatore. In Visual Studio è possibile usare la funzionalità [Informazioni rapide](/visualstudio/ide/using-intellisense#quick-info) di IntelliSense per vedere cosa definiscono questi typedef e macro. Passare il mouse sulla parola di interesse, o selezionarlo e premere **Ctrl**+**K**, **Ctrl**+**I** per una piccola finestra pop-up che contiene la definizione. Per altre informazioni, vedere [Using IntelliSense](/visualstudio/ide/using-intellisense) (Uso di IntelliSense). I parametri e i tipi *restituiti utilizzano spesso le annotazioni SAL* per rilevare gli errori di programmazione. Per ulteriori informazioni, vedere [Utilizzo delle annotazioni SAL per ridurre](/cpp/code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects)i difetti del codice C/C

1. I programmi &lt;desktop di Windows richiedono windows.h>. &lt;tchar.h> definisce la `TCHAR` macro, che si risolve in ultima analisi per **wchar_t** se il simbolo UNICODE è definito nel progetto, in caso contrario viene risolto in **char**.  Se si compila sempre con UNICODE abilitato, non è necessario TCHAR e può semplicemente utilizzare **wchar_t** direttamente.

   ```cpp
   #include <windows.h>
   #include <tchar.h>
   ```

1. Insieme alla `WinMain` funzione, ogni applicazione desktop di Windows deve anche avere una funzione di routine della finestra. Questa funzione è `WndProc`in genere denominata , ma è possibile denominarla come desiderato. `WndProc` presenta la sintassi seguente.

   ```cpp
   LRESULT CALLBACK WndProc(
      _In_ HWND   hWnd,
      _In_ UINT   message,
      _In_ WPARAM wParam,
      _In_ LPARAM lParam
   );
   ```

   In questa funzione si scrive il codice per gestire i *messaggi* che l'applicazione riceve da Windows quando si verificano *eventi.* Ad esempio, se un utente sceglie un pulsante OK nell'applicazione, Windows invierà un messaggio all'utente ed è possibile scrivere codice all'interno della `WndProc` funzione che esegue qualsiasi operazione appropriata. Si chiama *gestione di* un evento. È possibile gestire solo gli eventi rilevanti per l'applicazione.

   Per altre informazioni, vedere [Routine della finestra](/windows/win32/winmsg/window-procedures).

### <a name="to-add-functionality-to-the-winmain-function"></a>Per aggiungere funzionalità alla funzione WinMain

1. Nella `WinMain` funzione si popola una struttura di tipo [WNDCLASSEX](/windows/win32/api/winuser/ns-winuser-wndclassexw). La struttura contiene informazioni sulla finestra: l'icona dell'applicazione, il colore di sfondo della finestra, il nome da visualizzare nella barra del titolo, tra le altre cose. È importante sottolineare che contiene un puntatore a funzione per la routine della finestra. L'esempio che segue illustra una struttura `WNDCLASSEX` tipica.

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

1. Registra `WNDCLASSEX` il con Windows in modo che conosca la tua finestra e come inviarvi messaggi. Usare la funzione [RegisterClassEx](/windows/win32/api/winuser/nf-winuser-registerclassexw) e passare la struttura della classe della finestra come argomento. La `_T` macro viene utilizzata `TCHAR` perché usiamo il tipo.

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

   Questa funzione `HWND`restituisce un oggetto , che è un handle per una finestra. Un handle è un po 'come un puntatore che Windows utilizza per tenere traccia delle finestre aperte. Per altre informazioni, vedere [Tipi di dati Windows](/windows/win32/WinProg/windows-data-types).

1. A questo punto, la finestra è stata creata, ma abbiamo ancora bisogno di dire a Windows per renderla visibile. Questo è ciò che questo codice fa:

   ```cpp
   // The parameters to ShowWindow explained:
   // hWnd: the value returned from CreateWindow
   // nCmdShow: the fourth parameter from WinMain
   ShowWindow(hWnd,
      nCmdShow);
   UpdateWindow(hWnd);
   ```

   La finestra visualizzata non ha molto contenuto perché non `WndProc` è ancora stata implementata la funzione. In altre parole, l'applicazione non sta ancora gestendo i messaggi che Windows sta inviando ad esso.

1. Per gestire i messaggi, aggiungiamo innanzitutto un ciclo di messaggi per restare in ascolto dei messaggi inviati da Windows.To handle the messages, we first add a message loop to listen for the messages that Windows sends. Quando l'applicazione riceve un messaggio, questo ciclo `WndProc` lo invia alla funzione da gestire. Il ciclo di messaggi è simile al codice seguente.

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

   Un messaggio importante da gestire è il [messaggio WM_PAINT.](/windows/win32/gdi/wm-paint) L'applicazione riceve `WM_PAINT` il messaggio quando parte della finestra visualizzata deve essere aggiornata. L'evento può verificarsi quando un utente sposta una finestra davanti alla finestra, quindi la sposta di nuovo. L'applicazione non sa quando si verificano questi eventi. Solo Windows lo sa, quindi invia `WM_PAINT` una notifica all'app con un messaggio. Quando la finestra viene visualizzata per la prima volta, è necessario aggiornarla tutte.

   Per gestire un messaggio `WM_PAINT` , chiamare prima di tutto [BeginPaint](/windows/win32/api/winuser/nf-winuser-beginpaint), quindi gestire la logica per disporre il testo, i pulsanti e altri controlli nella finestra, quindi chiamare [EndPaint](/windows/win32/api/winuser/nf-winuser-endpaint). Per l'applicazione, la logica tra la chiamata iniziale e la chiamata finale consiste nel visualizzare la stringa "Hello, Windows desktop!" nella finestra. Nel codice seguente notare che la funzione [TextOut](/windows/win32/api/wingdi/nf-wingdi-textoutw) viene usata per visualizzare la stringa.

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

   `HDC`nel codice è un handle a un contesto di dispositivo, ovvero una struttura di dati utilizzata da Windows per consentire all'applicazione di comunicare con il sottosistema grafico. Le `BeginPaint` `EndPaint` funzioni e rendono l'applicazione si comporta come un buon cittadino e non usa il contesto di dispositivo più a lungo del necessario. Le funzioni aiutano a rendere il sottosistema grafico disponibile per l'utilizzo da parte di altre applicazioni.

1. Un'applicazione in genere gestisce molti altri messaggi. Ad esempio, [WM_CREATE](/windows/win32/winmsg/wm-create) quando una finestra viene creata per la prima volta e [WM_DESTROY](/windows/win32/winmsg/wm-destroy) quando la finestra viene chiusa. Il codice seguente illustra una funzione `WndProc` di base, ma completa.

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

Come promesso, ecco il codice completo per l'applicazione di lavoro.

### <a name="to-build-this-example"></a>Per compilare questo esempio

1. Eliminare il codice immesso in *HelloWindowsDesktop.cpp* nell'editor. Copiare questo codice di esempio e incollarlo in *HelloWindowsDesktop.cpp*:

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

1. Scegliere **Compila soluzione** dal menu **Compila**. I risultati della compilazione dovrebbero essere visualizzati nella finestra **Output** in Visual Studio.

   ![Compilare il progetto DesktopApp](../build/media/desktop-app-project-build-150.gif "Compilare il progetto DesktopApp")

1. Per eseguire l'applicazione, premere **F5**. Una finestra che contiene il testo "Hello, Windows desktop!" viene visualizzata nell'angolo superiore sinistro dello schermo.

   ![Eseguire il progetto DesktopApp](../build/media/desktop-app-project-run-157.PNG "Eseguire il progetto DesktopApp")

Congratulazioni! Questa procedura dettagliata è stata completata e è stata compilata un'applicazione desktop di Windows tradizionale.

## <a name="see-also"></a>Vedere anche

[Applicazioni desktop di Windows](../windows/windows-desktop-applications-cpp.md)

---
title: 'TN001: Registrazione della classe della finestra'
ms.date: 11/04/2016
f1_keywords:
- vc.registration
helpviewer_keywords:
- TN001
- WNDCLASS [MFC]
- AfxRegisterClass function
ms.assetid: 1abf678e-f220-4606-85e0-03df32f64c54
ms.openlocfilehash: 95e35ddd6f55c955bc2adb7b4db2460ae84a6dc7
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69513552"
---
# <a name="tn001-window-class-registration"></a>TN001: Registrazione della classe della finestra

Questa nota descrive le routine MFC che registrano le [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw)speciali richieste da Microsoft Windows. Vengono `WNDCLASS` descritti gli attributi specifici utilizzati da MFC e Windows.

## <a name="the-problem"></a>Il problema

Gli attributi di un oggetto [CWnd](../mfc/reference/cwnd-class.md) , ad esempio `HWND` un handle in Windows, vengono archiviati in due posizioni: l'oggetto finestra e `WNDCLASS`il. Il nome `WNDCLASS` del viene passato alle funzioni di creazione della finestra generale, ad esempio [CWnd:: create](../mfc/reference/cwnd-class.md#create) e [CFrameWnd:: create](../mfc/reference/cframewnd-class.md#create) nel parametro *lpszClassName* .

Questo `WNDCLASS` deve essere registrato tramite uno dei quattro modi seguenti:

- In modo implicito utilizzando un oggetto `WNDCLASS`MFC fornito.

- In modo implicito tramite la sottoclasse di un controllo Windows (o di un altro controllo).

- In modo esplicito chiamando MFC [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass) o [AfxRegisterClass](../mfc/reference/application-information-and-management.md#afxregisterclass).

- In modo esplicito chiamando la routine di Windows [registerClass](/windows/win32/api/winuser/nf-winuser-registerclassw).

## <a name="wndclass-fields"></a>Campi WNDCLASS

La `WNDCLASS` struttura è costituita da vari campi che descrivono una classe di finestra. Nella tabella seguente vengono illustrati i campi e viene specificata la modalità di utilizzo in un'applicazione MFC:

|Campo|Descrizione|
|-----------|-----------------|
|*lpfnWndProc*|il processo della finestra deve essere un`AfxWndProc`|
|*cbClsExtra*|non usato (deve essere zero)|
|*cbWndExtra*|non usato (deve essere zero)|
|*hInstance*|riempito automaticamente con [AfxGetInstanceHandle](../mfc/reference/application-information-and-management.md#afxgetinstancehandle)|
|*hIcon*|icona per le finestre cornice, vedere di seguito|
|*hCursor*|cursore quando il mouse è posizionato sulla finestra, vedere di seguito|
|*hbrBackground*|colore di sfondo, vedere di seguito|
|*lpszMenuName*|non usato (dovrebbe essere NULL)|
|*lpszClassName*|nome della classe, vedere di seguito|

## <a name="provided-wndclasses"></a>WNDCLASSes fornito

Le versioni precedenti di MFC (prima di MFC 4,0) fornivano diverse classi di finestra predefinite. Per impostazione predefinita, queste classi di finestre non sono più disponibili. Le applicazioni devono `AfxRegisterWndClass` usare con i parametri appropriati.

Se l'applicazione fornisce una risorsa con l'ID risorsa specificato (ad esempio, AFX_IDI_STD_FRAME), MFC utilizzerà tale risorsa. In caso contrario utilizzerà la risorsa predefinita. Per l'icona, viene utilizzata l'icona dell'applicazione standard e, per il cursore, viene utilizzato il cursore a forma di freccia standard.

Due icone supportano le applicazioni MDI con tipi di documenti singoli: un'icona per l'applicazione principale, l'altra icona per le finestre di documento/MDIChild iconiche. Per più tipi di documenti con icone diverse, è necessario registrare `WNDCLASS`altre es o usare la funzione [CFrameWnd:: LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) .

`CFrameWnd::LoadFrame`registrerà un `WNDCLASS` oggetto usando l'ID icona specificato come primo parametro e gli attributi standard seguenti:

- stile classe: CS_DBLCLKS &#124; CS_HREDRAW &#124; CS_VREDRAW;

- icona AFX_IDI_STD_FRAME

- cursore freccia

- Colore di sfondo COLOR_WINDOW

I valori per il colore di sfondo e il cursore per [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) non vengono usati perché l'area client `CMDIFrameWnd` di è completamente coperta dalla finestra di **MdiClient** . Microsoft non incoraggia la sottoclasse della finestra **MdiClient** in modo da usare i colori standard e i tipi di cursore, quando possibile.

## <a name="subclassing-and-superclassing-controls"></a>Sottoclassi e controlli di superclasse

Se si esegue una sottoclasse o un controllo Windows (ad esempio, [CButton](../mfc/reference/cbutton-class.md)), la classe ottiene automaticamente `WNDCLASS` gli attributi forniti nell'implementazione di Windows del controllo.

## <a name="the-afxregisterwndclass-function"></a>Funzione AfxRegisterWndClass

MFC fornisce una funzione helper per la registrazione di una classe di finestra. Dato un set di attributi (stile della classe della finestra, cursore, pennello dello sfondo e icona), viene generato un nome sintetico e la classe della finestra risultante è registrata. Ad esempio,

```
const char* AfxRegisterWndClass(UINT nClassStyle,
    HCURSOR hCursor,
    HBRUSH hbrBackground,
    HICON hIcon);
```

Questa funzione restituisce una stringa temporanea del nome della classe della finestra registrata generata. Per ulteriori informazioni su questa funzione, vedere [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass).

La stringa restituita è un puntatore temporaneo a un buffer di stringa statico. È valido fino alla chiamata successiva a `AfxRegisterWndClass`. Se si desidera conservare questa stringa, archiviarla in una variabile [CString](../atl-mfc-shared/using-cstring.md) , come nell'esempio seguente:

```
CString strWndClass = AfxRegisterWndClass(CS_DBLCLK, ...);

...
CWnd* pWnd = new CWnd;
pWnd->Create(strWndClass, ...);

...
```

`AfxRegisterWndClass`genererà un [CResourceException](../mfc/reference/cresourceexception-class.md) se la classe della finestra non è stata registrata (a causa di parametri non validi o di memoria di Windows).

## <a name="the-registerclass-and-afxregisterclass-functions"></a>Funzioni RegisterClass e AfxRegisterClass

Se si desidera eseguire operazioni più sofisticate rispetto a `AfxRegisterWndClass` quelle fornite da, è possibile chiamare l' `RegisterClass` API Windows o la `AfxRegisterClass`funzione MFC. Le `CWnd`funzioni, [CFrameWnd](../mfc/reference/cframewnd-class.md) e [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) `Create` accettano un nome di stringa *lpszClassName* per la classe della finestra come primo parametro. È possibile usare qualsiasi nome di classe della finestra registrato, indipendentemente dal metodo usato per registrarlo.

È importante usare `AfxRegisterClass` (o `AfxRegisterWndClass`) in una dll in Win32. Win32 non annulla automaticamente la registrazione delle classi registrate da una DLL, pertanto è necessario annullare in modo esplicito la registrazione delle classi quando la DLL viene terminata. `AfxRegisterClass` Utilizzando`RegisterClass` anziché questo viene gestito automaticamente. `AfxRegisterClass`mantiene un elenco di classi univoche registrate dalla DLL e la registrerà automaticamente al termine della DLL. Quando si utilizza `RegisterClass` in una dll, è necessario assicurarsi che venga annullata la registrazione di tutte le classi quando la dll viene terminata (nella funzione [DllMain](/windows/win32/Dlls/dllmain) ). In caso contrario, è possibile `RegisterClass` che si verifichi un errore imprevisto quando un'altra applicazione client tenta di utilizzare la dll.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

---
description: 'Altre informazioni su: TN001: registrazione della classe di finestra'
title: 'TN001: registrazione delle classi di finestre'
ms.date: 11/04/2016
f1_keywords:
- vc.registration
helpviewer_keywords:
- TN001
- WNDCLASS [MFC]
- AfxRegisterClass function
ms.assetid: 1abf678e-f220-4606-85e0-03df32f64c54
ms.openlocfilehash: fc54b6f783a50bb35f87f542772b9a1921f1f7b7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216106"
---
# <a name="tn001-window-class-registration"></a>TN001: registrazione delle classi di finestre

Questa nota descrive le routine MFC che registrano le [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw)speciali richieste da Microsoft Windows. `WNDCLASS`Vengono descritti gli attributi specifici utilizzati da MFC e Windows.

## <a name="the-problem"></a>Problema

Gli attributi di un oggetto [CWnd](../mfc/reference/cwnd-class.md) , ad esempio un `HWND` handle in Windows, vengono archiviati in due posizioni: l'oggetto finestra e il `WNDCLASS` . Il nome del `WNDCLASS` viene passato alle funzioni di creazione della finestra generale, ad esempio [CWnd:: create](../mfc/reference/cwnd-class.md#create) e [CFrameWnd:: create](../mfc/reference/cframewnd-class.md#create) nel parametro *lpszClassName* .

Questo `WNDCLASS` deve essere registrato tramite uno dei quattro modi seguenti:

- In modo implicito utilizzando un oggetto MFC fornito `WNDCLASS` .

- In modo implicito tramite la sottoclasse di un controllo Windows (o di un altro controllo).

- In modo esplicito chiamando MFC [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass) o [AfxRegisterClass](../mfc/reference/application-information-and-management.md#afxregisterclass).

- In modo esplicito chiamando la routine di Windows [registerClass](/windows/win32/api/winuser/nf-winuser-registerclassw).

## <a name="wndclass-fields"></a>Campi WNDCLASS

La `WNDCLASS` struttura è costituita da vari campi che descrivono una classe di finestra. Nella tabella seguente vengono illustrati i campi e viene specificata la modalità di utilizzo in un'applicazione MFC:

|Campo|Description|
|-----------|-----------------|
|*lpfnWndProc*|il processo della finestra deve essere un `AfxWndProc`|
|*cbClsExtra*|non usato (deve essere zero)|
|*cbWndExtra*|non usato (deve essere zero)|
|*hInstance*|riempito automaticamente con [AfxGetInstanceHandle](../mfc/reference/application-information-and-management.md#afxgetinstancehandle)|
|*hIcon*|icona per le finestre cornice, vedere di seguito|
|*hCursor*|cursore quando il mouse è posizionato sulla finestra, vedere di seguito|
|*hbrBackground*|colore di sfondo, vedere di seguito|
|*lpszMenuName*|non usato (dovrebbe essere NULL)|
|*lpszClassName*|nome della classe, vedere di seguito|

## <a name="provided-wndclasses"></a>WNDCLASSes fornito

Le versioni precedenti di MFC (prima di MFC 4,0) fornivano diverse classi di finestra predefinite. Per impostazione predefinita, queste classi di finestre non sono più disponibili. Le applicazioni devono usare `AfxRegisterWndClass` con i parametri appropriati.

Se l'applicazione fornisce una risorsa con l'ID risorsa specificato (ad esempio, AFX_IDI_STD_FRAME), MFC utilizzerà tale risorsa. In caso contrario utilizzerà la risorsa predefinita. Per l'icona, viene utilizzata l'icona dell'applicazione standard e, per il cursore, viene utilizzato il cursore a forma di freccia standard.

Due icone supportano le applicazioni MDI con tipi di documenti singoli: un'icona per l'applicazione principale, l'altra icona per le finestre di documento/MDIChild iconiche. Per più tipi di documenti con icone diverse, è necessario registrare altre `WNDCLASS` es o usare la funzione [CFrameWnd:: LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) .

`CFrameWnd::LoadFrame` registrerà un oggetto `WNDCLASS` usando l'ID icona specificato come primo parametro e gli attributi standard seguenti:

- stile classe: CS_DBLCLKS &#124; CS_HREDRAW &#124; CS_VREDRAW;

- icona AFX_IDI_STD_FRAME

- cursore freccia

- COLOR_WINDOW colore di sfondo

I valori per il colore di sfondo e il cursore per [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) non vengono usati perché l'area client di `CMDIFrameWnd` è completamente coperta dalla finestra di **MdiClient** . Microsoft non incoraggia la sottoclasse della finestra **MdiClient** in modo da usare i colori standard e i tipi di cursore, quando possibile.

## <a name="subclassing-and-superclassing-controls"></a>Sottoclassi e controlli di superclasse

Se si esegue una sottoclasse o un controllo Windows (ad esempio, [CButton](../mfc/reference/cbutton-class.md)), la classe ottiene automaticamente gli `WNDCLASS` attributi forniti nell'implementazione di Windows del controllo.

## <a name="the-afxregisterwndclass-function"></a>Funzione AfxRegisterWndClass

MFC fornisce una funzione helper per la registrazione di una classe di finestra. Dato un set di attributi (stile della classe della finestra, cursore, pennello dello sfondo e icona), viene generato un nome sintetico e la classe della finestra risultante è registrata. ad esempio:

```
const char* AfxRegisterWndClass(UINT nClassStyle,
    HCURSOR hCursor,
    HBRUSH hbrBackground,
    HICON hIcon);
```

Questa funzione restituisce una stringa temporanea del nome della classe della finestra registrata generata. Per ulteriori informazioni su questa funzione, vedere [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass).

La stringa restituita è un puntatore temporaneo a un buffer di stringa statico. È valido fino alla chiamata successiva a `AfxRegisterWndClass` . Se si desidera conservare questa stringa, archiviarla in una variabile [CString](../atl-mfc-shared/using-cstring.md) , come nell'esempio seguente:

```
CString strWndClass = AfxRegisterWndClass(CS_DBLCLK, ...);

...
CWnd* pWnd = new CWnd;
pWnd->Create(strWndClass, ...);

...
```

`AfxRegisterWndClass` genererà un [CResourceException](../mfc/reference/cresourceexception-class.md) se la classe della finestra non è stata registrata (a causa di parametri non validi o di memoria di Windows).

## <a name="the-registerclass-and-afxregisterclass-functions"></a>Funzioni RegisterClass e AfxRegisterClass

Se si desidera eseguire operazioni più sofisticate rispetto a quelle `AfxRegisterWndClass` fornite da, è possibile chiamare l'API Windows `RegisterClass` o la funzione MFC `AfxRegisterClass` . Le `CWnd` funzioni, [CFrameWnd](../mfc/reference/cframewnd-class.md) e [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) `Create` accettano un nome di stringa *lpszClassName* per la classe della finestra come primo parametro. È possibile usare qualsiasi nome di classe della finestra registrato, indipendentemente dal metodo usato per registrarlo.

È importante usare `AfxRegisterClass` (o `AfxRegisterWndClass` ) in una dll in Win32. Win32 non annulla automaticamente la registrazione delle classi registrate da una DLL, pertanto è necessario annullare in modo esplicito la registrazione delle classi quando la DLL viene terminata. Utilizzando `AfxRegisterClass` anziché `RegisterClass` questo viene gestito automaticamente. `AfxRegisterClass` mantiene un elenco di classi univoche registrate dalla DLL e la registrerà automaticamente al termine della DLL. Quando si utilizza `RegisterClass` in una dll, è necessario assicurarsi che venga annullata la registrazione di tutte le classi quando la dll viene terminata (nella funzione [DllMain](/windows/win32/Dlls/dllmain) ). In caso contrario, è possibile `RegisterClass` che si verifichi un errore imprevisto quando un'altra applicazione client tenta di utilizzare la dll.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

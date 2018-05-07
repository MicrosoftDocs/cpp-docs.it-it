---
title: 'TN001: Registrazione delle classi | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.registration
dev_langs:
- C++
helpviewer_keywords:
- TN001
- WNDCLASS [MFC]
- AfxRegisterClass function
ms.assetid: 1abf678e-f220-4606-85e0-03df32f64c54
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 245ffcb66223813c7146c50c964cd97203ed8d53
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="tn001-window-class-registration"></a>TN001: registrazione delle classi di finestre
Questa nota descrive le routine MFC che registrano speciale [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576)es necessari per Microsoft Windows. Specifica `WNDCLASS` vengono descritti gli attributi utilizzati da MFC e Windows.  
  
## <a name="the-problem"></a>Il problema  
 Gli attributi di un [CWnd](../mfc/reference/cwnd-class.md) dell'oggetto, ad esempio un `HWND` di gestire in Windows, vengono archiviati in due posizioni: l'oggetto finestra e `WNDCLASS`. Il nome del `WNDCLASS` viene passato alle funzioni di creazione di finestra generale, ad esempio [CWnd:: Create](../mfc/reference/cwnd-class.md#create) e [CFrameWnd::Create](../mfc/reference/cframewnd-class.md#create) nel `lpszClassName` parametro.  
  
 Questo `WNDCLASS` devono essere registrati tramite uno dei quattro metodi:  
  
-   In modo implicito mediante un MFC fornito `WNDCLASS`.  
  
-   In modo implicito tramite sottoclassi di un controllo di Windows (o un altro controllo).  
  
-   In modo esplicito chiamando l'operazione MFC [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass) o [AfxRegisterClass](../mfc/reference/application-information-and-management.md#afxregisterclass).  
  
-   In modo esplicito chiamando la routine di Windows [RegisterClass](http://msdn.microsoft.com/library/windows/desktop/ms633586).  
  
## <a name="wndclass-fields"></a>Campi WNDCLASS  
 Il `WNDCLASS` struttura è costituita da vari campi che descrivono una classe della finestra. Nella tabella seguente vengono illustrati i campi e specifica come vengono usati in un'applicazione MFC:  
  
|Campo|Descrizione|  
|-----------|-----------------|  
|`lpfnWndProc`|procedura di finestra, deve essere un `AfxWndProc`|  
|`cbClsExtra`|non usato (deve essere zero)|  
|`cbWndExtra`|non usato (deve essere zero)|  
|`hInstance`|vengono inserite automaticamente con [AfxGetInstanceHandle](../mfc/reference/application-information-and-management.md#afxgetinstancehandle)|  
|`hIcon`|icona di finestre cornice, vedere di seguito|  
|`hCursor`|cursore per quando il mouse è sulla finestra, vedere di seguito|  
|`hbrBackground`|colore di sfondo, vedere di seguito|  
|`lpszMenuName`|non usato (deve essere NULL)|  
|`lpszClassName`|nome della classe, vedere di seguito|  
  
## <a name="provided-wndclasses"></a>Fornito WNDCLASSes  
 Le versioni precedenti di MFC (precedenti alla 4.0 di MFC), fornite diverse classi di finestra predefinite. Queste classi di finestra non sono più disponibili per impostazione predefinita. Le applicazioni devono utilizzare `AfxRegisterWndClass` con i parametri appropriati.  
  
 Se l'applicazione fornisce una risorsa con l'ID di risorsa specificata (ad esempio, AFX_IDI_STD_FRAME), MFC usa tale risorsa. In caso contrario, useranno la risorsa predefinito. Per l'icona, viene utilizzata l'icona dell'applicazione standard e per il cursore viene utilizzato il cursore a freccia standard.  
  
 Due icone supportano le applicazioni MDI con tipi di documento singolo: un'icona per l'applicazione principale, l'icona per documento sotto forma di icona/MDIChild windows. Per più tipi di documento con icone diverse, è necessario registrare ulteriori `WNDCLASS`es oppure utilizzare il [CFrameWnd::LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) (funzione).  
  
 `CFrameWnd::LoadFrame` Consente di registrare un `WNDCLASS` utilizzando l'ID icona si specifica come il primo parametro e gli attributi standard seguenti:  
  
-   stile di classe: CS_DBLCLKS &#124; CS_HREDRAW &#124; CS_VREDRAW;  
  
-   icona AFX_IDI_STD_FRAME  
  
-   cursore a freccia  
  
-   Colore di sfondo COLOR_WINDOW  
  
 I valori di colore di sfondo e di cursore per il [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) non vengono utilizzati dall'area client del `CMDIFrameWnd` è completamente coperta dal **MDICLIENT** finestra. Microsoft non incoraggiare la creazione di una sottoclasse di **MDICLIENT** finestra pertanto utilizzare i colori standard e i tipi di cursore quando possibile.  
  
## <a name="subclassing-and-superclassing-controls"></a>Creazione di una sottoclasse e controlli di creazione di superclassi  
 Se si crea una sottoclasse o superclasse una finestra di controllo (ad esempio, [CButton](../mfc/reference/cbutton-class.md)), quindi la classe ottiene automaticamente il `WNDCLASS` gli attributi forniti nell'implementazione del controllo Windows.  
  
## <a name="the-afxregisterwndclass-function"></a>AfxRegisterWndClass (funzione)  
 MFC fornisce una funzione di supporto per la registrazione di una classe della finestra. Dato un set di attributi (stile di classe della finestra, cursore, il pennello di sfondo e icona), viene generato un nome sintetico, e la classe di finestra risultante viene registrata. Ad esempio,  
  
```  
const char* AfxRegisterWndClass(UINT nClassStyle,
    HCURSOR hCursor,
    HBRUSH hbrBackground,
    HICON hIcon);
```  
  
 Questa funzione restituisce una stringa del nome della classe di finestra registrati generata temporanea. Per ulteriori informazioni su questa funzione, vedere [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass).  
  
 La stringa restituita è un puntatore temporaneo a un buffer di stringa statica. È valido fino alla chiamata successiva a `AfxRegisterWndClass`. Se si desidera mantenere questa stringa intorno, archiviarlo in un [CString](../atl-mfc-shared/using-cstring.md) variabile, come nel seguente esempio:  
  
```  
CString strWndClass = AfxRegisterWndClass(CS_DBLCLK, ...);

...  
CWnd* pWnd = new CWnd;  
pWnd->Create(strWndClass, ...);

...  
```  
  
 `AfxRegisterWndClass` verrà generata una [CResourceException](../mfc/reference/cresourceexception-class.md) se la classe della finestra non è stato possibile registrare (a causa di parametri non validi, o dalla memoria di Windows).  
  
## <a name="the-registerclass-and-afxregisterclass-functions"></a>Le funzioni AfxRegisterClass RegisterClass  
 Se si desidera eseguire alcuna operazione più sofisticati rispetto a quanto `AfxRegisterWndClass` fornisce, è possibile chiamare l'API Windows `RegisterClass` o la funzione MFC `AfxRegisterClass`. Il `CWnd`, [CFrameWnd](../mfc/reference/cframewnd-class.md) e [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) `Create` funzioni accettano un `lpszClassName` nome di stringa per la classe di finestra come primo parametro. È possibile utilizzare qualsiasi nome di classe di finestra registrati, indipendentemente dal metodo utilizzato per la registrazione.  
  
 È importante utilizzare `AfxRegisterClass` (o `AfxRegisterWndClass`) in una DLL in Win32. Win32 automaticamente annullare la registrazione di classi registrate per una DLL, pertanto è necessario in modo esplicito annullare la registrazione di classi quando la DLL viene terminata. Utilizzando `AfxRegisterClass` anziché `RegisterClass` questa operazione viene gestita automaticamente per l'utente. `AfxRegisterClass` gestisce un elenco di classi univoche registrate per la DLL e verrà automaticamente annullarne la registrazione quando termina la DLL. Quando si utilizza `RegisterClass` in una DLL, è necessario assicurarsi che tutte le classi vengono annullate quando la DLL viene terminata (nelle [DllMain](http://msdn.microsoft.com/library/windows/desktop/ms682583) funzione). In caso contrario, potrebbe causare `RegisterClass` errore imprevisto quando un'altra applicazione client tenta di utilizzare la DLL.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)


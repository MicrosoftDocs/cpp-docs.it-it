---
title: 'TN001: Registrazione delle classi finestra | Microsoft Docs'
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
ms.openlocfilehash: 03a9af119cd9730edaa4196958691c70d711fce4
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43221155"
---
# <a name="tn001-window-class-registration"></a>TN001: registrazione delle classi di finestre
Questa nota descrive le routine MFC che registrano la speciale [WNDCLASS](https://msdn.microsoft.com/library/windows/desktop/ms633576)es necessari per Microsoft Windows. Specifica `WNDCLASS` vengono descritti gli attributi utilizzati da MFC e Windows.  
  
## <a name="the-problem"></a>Il problema  
 Gli attributi di un [CWnd](../mfc/reference/cwnd-class.md) dell'oggetto, ad esempio un' `HWND` gestire in Windows, vengono archiviati in due posizioni: l'oggetto finestra e `WNDCLASS`. Il nome del `WNDCLASS` viene passato alle funzioni di creazione della finestra generali, ad esempio [CWnd:: Create](../mfc/reference/cwnd-class.md#create) e [CFrameWnd::Create](../mfc/reference/cframewnd-class.md#create) nel *lpszClassName* parametro.  
  
 Ciò `WNDCLASS` deve essere registrato tramite uno dei quattro modi:  
  
-   In modo implicito tramite un MFC fornito `WNDCLASS`.  
  
-   In modo implicito tramite sottoclassi di un controllo di Windows (o un altro controllo).  
  
-   In modo esplicito tramite la chiamata di MFC [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass) oppure [AfxRegisterClass](../mfc/reference/application-information-and-management.md#afxregisterclass).  
  
-   In modo esplicito chiamando la routine di Windows [RegisterClass](https://msdn.microsoft.com/library/windows/desktop/ms633586).  
  
## <a name="wndclass-fields"></a>Campi WNDCLASS  
 Il `WNDCLASS` struttura è costituita da diversi campi che descrivono una classe della finestra. Nella tabella seguente vengono illustrati i campi e specifica come vengono usati in un'applicazione MFC:  
  
|Campo|Descrizione|  
|-----------|-----------------|  
|*lpfnWndProc*|routine di finestra, deve essere un `AfxWndProc`|  
|*Utilizzare*|non usato (deve essere zero)|  
|*cbWndExtra*|non usato (deve essere zero)|  
|*hInstance*|impostato automaticamente con [AfxGetInstanceHandle](../mfc/reference/application-information-and-management.md#afxgetinstancehandle)|  
|*hIcon*|icona di finestre cornice, vedere di seguito|  
|*hCursor*|cursore per quando il mouse è sulla finestra, vedere di seguito|  
|*hbrBackground*|colore di sfondo, vedere di seguito|  
|*lpszMenuName*|non usato (deve essere NULL)|  
|*lpszClassName*|nome della classe, vedere di seguito|  
  
## <a name="provided-wndclasses"></a>Fornito WNDCLASSes  
 Le versioni precedenti di MFC (precedenti alla 4.0 di MFC), fornite diverse classi di finestra predefinite. Queste classi di finestra non vengono più fornite per impostazione predefinita. Le applicazioni devono utilizzare `AfxRegisterWndClass` con i parametri appropriati.  
  
 Se l'applicazione fornisce una risorsa con l'ID di risorsa specificata (ad esempio, AFX_IDI_STD_FRAME), MFC usa tale risorsa. In caso contrario, utilizzerà la risorsa predefinita. Per l'icona, viene utilizzata l'icona dell'applicazione standard, e per il cursore viene utilizzato il cursore a freccia standard.  
  
 Due icone supportano le applicazioni MDI con tipi di documento singolo: un'icona visualizzata per l'applicazione principale, l'altra icona per finestre di documento/MDIChild iconico. Per tipi di documenti multipli con icone diverse, è necessario registrare ulteriori `WNDCLASS`es oppure usare il [CFrameWnd::LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) (funzione).  
  
 `CFrameWnd::LoadFrame` verrà registrato un `WNDCLASS` usando l'ID icona si specifica come primo parametro e gli attributi standard seguenti:  
  
-   stile della classe: CS_DBLCLKS &#124; CS_HREDRAW &#124; CS_VREDRAW;  
  
-   icona AFX_IDI_STD_FRAME  
  
-   cursore a freccia  
  
-   Colore di sfondo COLOR_WINDOW  
  
 I valori per il colore di sfondo e cursore per la [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) non vengono utilizzati dall'area client del `CMDIFrameWnd` è completamente coperto dal **MDICLIENT** finestra. Microsoft non consiglia di creazione di una sottoclasse di **MDICLIENT** finestra quindi utilizzare i colori standard e tipi di cursore quando possibile.  
  
## <a name="subclassing-and-superclassing-controls"></a>Creazione di una sottoclasse e creazione di superclassi controlli  
 Se si crea una sottoclasse o superclasse Windows un controllo (ad esempio, [CButton](../mfc/reference/cbutton-class.md)) quindi la classe ottiene automaticamente il `WNDCLASS` gli attributi forniti nell'implementazione Windows del controllo.  
  
## <a name="the-afxregisterwndclass-function"></a>AfxRegisterWndClass (funzione)  
 MFC fornisce una funzione di supporto per la registrazione di una classe della finestra. Dato un set di attributi (stile di classe di finestra, cursore, il pennello di sfondo e icona), viene generato un nome sintetico e la classe finestra risultante è registrata. Ad esempio,  
  
```  
const char* AfxRegisterWndClass(UINT nClassStyle,
    HCURSOR hCursor,
    HBRUSH hbrBackground,
    HICON hIcon);
```  
  
 Questa funzione restituisce una stringa del nome della classe di finestra registrata generato temporanea. Per altre informazioni su questa funzione, vedere [AfxRegisterWndClass](../mfc/reference/application-information-and-management.md#afxregisterwndclass).  
  
 La stringa restituita è un puntatore temporaneo a un buffer di stringa statica. È valido fino alla successiva chiamata a `AfxRegisterWndClass`. Se si desidera mantenere attorno a questa stringa, archiviarla in una [CString](../atl-mfc-shared/using-cstring.md) variabile, come nel seguente esempio:  
  
```  
CString strWndClass = AfxRegisterWndClass(CS_DBLCLK, ...);

...  
CWnd* pWnd = new CWnd;  
pWnd->Create(strWndClass, ...);

...  
```  
  
 `AfxRegisterWndClass` Genera una [CResourceException](../mfc/reference/cresourceexception-class.md) se la classe della finestra non è stato possibile registrare (a causa di parametri non validi, o esaurito la memoria di Windows).  
  
## <a name="the-registerclass-and-afxregisterclass-functions"></a>Le funzioni di AfxRegisterClass e RegisterClass  
 Se si desidera eseguire alcuna operazione resi più sofisticati rispetto a quanto `AfxRegisterWndClass` fornita, è possibile chiamare l'API di Windows `RegisterClass` o la funzione MFC `AfxRegisterClass`. Il `CWnd`, [CFrameWnd](../mfc/reference/cframewnd-class.md) e [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) `Create` funzioni accettano un *lpszClassName* nome di stringa per la classe della finestra come primo parametro. È possibile usare qualsiasi nome di classe di finestra registrata, indipendentemente dal metodo usato per la registrazione.  
  
 È importante usare `AfxRegisterClass` (o `AfxRegisterWndClass`) in una DLL in Win32. Win32 non automaticamente annullare la registrazione di classi registrate per una DLL, pertanto è necessario in modo esplicito annullare la registrazione di classi quando viene terminata la DLL. Usando `AfxRegisterClass` invece di `RegisterClass` questa operazione viene gestita automaticamente per l'utente. `AfxRegisterClass` gestisce un elenco di classi univoche registrate per la DLL e verrà automaticamente annullarne la registrazione quando si termina la DLL. Quando si usa `RegisterClass` in una DLL, è necessario assicurarsi che tutte le classi vengono annullate quando viene terminata la DLL (nelle [DllMain](/windows/desktop/Dlls/dllmain) (funzione)). In caso contrario, potrebbe causare `RegisterClass` esito negativo in modo imprevisto quando un'altra applicazione client tenta di usare la DLL.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)


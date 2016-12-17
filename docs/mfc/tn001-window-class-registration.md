---
title: "TN001: registrazione delle classi di finestre | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.registration"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AfxRegisterClass (funzione)"
  - "TN001"
  - "WNDCLASS"
ms.assetid: 1abf678e-f220-4606-85e0-03df32f64c54
caps.latest.revision: 16
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN001: registrazione delle classi di finestre
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa nota descrive le routine di MFC che registrano con particolari [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) necessarie per Microsoft Windows.  Vengono illustrati gli attributi specifici di `WNDCLASS` utilizzati da MFC e da Windows.  
  
## Il problema  
 Gli attributi di un oggetto [CWnd](../mfc/reference/cwnd-class.md), come un punto di controllo di Windows `HWND`, vengono archiviati in due modi: l'oggetto finestra e `WNDCLASS`.  Il nome di `WNDCLASS` viene passato alle funzioni generali di progettazione della finestra come [CWnd::Create](../Topic/CWnd::Create.md) e [CFrameWnd::Create](../Topic/CFrameWnd::Create.md) nel parametro `lpszClassName`.  
  
 Questo `WNDCLASS` devono essere registrate con uno dei quattro modi:  
  
-   In modo implicito utilizzando `WNDCLASS` fornito MFC.  
  
-   In modo implicito dalla creazione di una sottoclasse di un controllo Windows \(o un altro controllo\).  
  
-   In modo esplicito [AfxRegisterWndClass](../Topic/AfxRegisterWndClass.md) MFC o [AfxRegisterClass](../Topic/AfxRegisterClass.md).  
  
-   In modo esplicito chiamando la routine [RegisterClass](http://msdn.microsoft.com/library/windows/desktop/ms633586) di Windows.  
  
## Campi dell'oggetto WNDCLASS  
 La struttura `WNDCLASS` è costituita da diversi campi che descrivono una classe finestra.  La seguente tabella elenca i campi e specifica come vengono utilizzati in un'applicazione MFC:  
  
|Campo|Descrizione|  
|-----------|-----------------|  
|`lpfnWndProc`|window proc, deve essere `AfxWndProc`|  
|`cbClsExtra`|non utilizzato \(dovrebbe essere zero\)|  
|`cbWndExtra`|non utilizzato \(dovrebbe essere zero\)|  
|`hInstance`|viene riempito automaticamente con [AfxGetInstanceHandle](../Topic/AfxGetInstanceHandle.md)|  
|`hIcon`|icona per le finestre cornice, vedere sotto|  
|`hCursor`|cursore per quando il mouse si trova sulla finestra, vedere sotto|  
|`hbrBackground`|colore di sfondo, vedere sotto|  
|`lpszMenuName`|non utilizzato \(dovrebbe essere NULL\)|  
|`lpszClassName`|nome della classe, vedere sotto|  
  
## Fornito da WNDCLASSes  
 Versioni precedenti di MFC \(prima di MFC 4.0\), forniscono diverse classi predefinite di Windows.  Queste classi di Windows non sono più disponibili per impostazione predefinita.  Le applicazioni devono utilizzare `AfxRegisterWndClass` con i parametri appropriati.  
  
 Se l'applicazione fornisce una risorsa con un ID di risorsa specifico \(ad esempio, AFX\_IDI\_STD\_FRAME\), MFC utilizzerà tale risorsa.  In caso contrario verrà utilizzata la risorsa predefinita.  Per l'icona, viene utilizzata l'icona dell'applicazione standard e per il cursore, viene utilizzato il cursore standard della freccia.  
  
 Due icone supportano le applicazioni MDI con i tipi di documento: un'icona per l'applicazione principale, l'altra icona del documento in un formato di icona\/finestre di MDIChild.  Per i tipi di documenti multipli con icone diverse, è necessario registrare `WNDCLASS` o utilizzare la funzione [CFrameWnd::LoadFrame](../Topic/CFrameWnd::LoadFrame.md).  
  
 `CFrameWnd::LoadFrame` registrerà `WNDCLASS` utilizzando l'icona ID specificata come primo parametro e i seguenti attributi standard:  
  
-   stile della classe: CS\_DBLCLKS &#124; CS\_HREDRAW &#124; CS\_VREDRAW;  
  
-   icona AFX\_IDI\_STD\_FRAME  
  
-   Cursore a freccia  
  
-   Colore di sfondo COLOR\_WINDOW  
  
 I valori per il colore di sfondo e il cursore per [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) non vengono utilizzati dall'area client di `CMDIFrameWnd` completamente analizzata dalla finestra di **MDICLIENT**.  Microsoft non incoraggia la creazione di una sottoclasse della finestra **MDICLIENT** in modo da utilizzare quando possibile i colori e tipi standard del cursore.  
  
## Controlli di una sottoclasse e di una super classe  
 Se il controllo di Windows della sottoclasse o della super classe \(ad esempio, [CButton](../mfc/reference/cbutton-class.md)\) allora la classe ottiene automaticamente gli attributi `WNDCLASS` previsti nell'implementazione di Windows di tale controllo.  
  
## La funzione AfxRegisterWndClass  
 MFC offre una funzione di supporto per registrare una classe finestra.  Dato un insieme di attributi \(stile della classe della finestra, cursore, pennello per lo sfondo e l'icona\), un nome sintetico viene generato e viene registrata la classe della finestra risultante.  Di seguito è riportato un esempio:  
  
```  
const char* AfxRegisterWndClass(UINT nClassStyle, HCURSOR hCursor, HBRUSH hbrBackground, HICON hIcon);  
```  
  
 Questa funzione restituisce una stringa temporanea del nome della classe della finestra registrata generata.  Per ulteriori informazioni sulla funzione, vedere [AfxRegisterWndClass](../Topic/AfxRegisterWndClass.md).  
  
 La stringa restituita sarà un puntatore temporaneo ad un buffer di stringa statico.  È valida fino alla chiamata successiva a `AfxRegisterWndClass`.  Se si desidera che questa stringa, conservandola in una variabile [CString](../atl-mfc-shared/using-cstring.md), come nell'esempio seguente:  
  
```  
CString strWndClass = AfxRegisterWndClass(CS_DBLCLK, ...);  
...  
CWnd* pWnd = new CWnd;  
pWnd->Create(strWndClass, ...);  
...  
```  
  
 `AfxRegisterWndClass` genererà [CResourceException](../mfc/reference/cresourceexception-class.md) se la classe della finestra non è riuscita a registrare \(a causa dei parametri errati, o dalla memoria di Windows\).  
  
## Le funzioni AfxRegisterClass e RegisterClass  
 Se si desidera eseguire alcune operazione sofisticate offerte da `AfxRegisterWndClass`, è possibile chiamare le Windows API `RegisterClass` o la funzione MFC `AfxRegisterClass`.  Le funzioni `CWnd`, [CFrameWnd](../mfc/reference/cframewnd-class.md) e [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) `Create` accettano un nome di stringa `lpszClassName` per le classi finestra come primo parametro.  È possibile utilizzare qualsiasi nome della classe della finestra registrato, indipendentemente dal metodo utilizzato per registrarlo.  
  
 È importante utilizzare `AfxRegisterClass` \(o `AfxRegisterWndClass`\) in una DLL in Win32.  Win32 automaticamente non annulla la registrazione delle classi registrate da una DLL, pertanto è necessario annullare la registrazioni in modo esplicito delle classi quando la DLL viene terminata.  Utilizzando `AfxRegisterClass` anziché `RegisterClass` questo viene gestito automaticamente.  `AfxRegisterClass` mantiene una lista delle classi univoche registrate dalla DLL e automaticamente annullerà la registrazione quando la DLL viene terminata.  Quando si utilizza `RegisterClass` in una DLL, è necessario assicurarsi che tutte le classi non siano registrate quando la DLL viene terminata \(nella funzione [DllMain](http://msdn.microsoft.com/library/windows/desktop/ms682583) \).  L'errore a tale scopo può causare un `RegisterClass` negativo in modo imprevisto quando un'altra applicazione client tenta di utilizzare la DLL.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)
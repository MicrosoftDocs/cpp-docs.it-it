---
title: CMDIChildWnd (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMDIChildWnd
- AFXWIN/CMDIChildWnd
- AFXWIN/CMDIChildWnd::CMDIChildWnd
- AFXWIN/CMDIChildWnd::Create
- AFXWIN/CMDIChildWnd::GetMDIFrame
- AFXWIN/CMDIChildWnd::MDIActivate
- AFXWIN/CMDIChildWnd::MDIDestroy
- AFXWIN/CMDIChildWnd::MDIMaximize
- AFXWIN/CMDIChildWnd::MDIRestore
- AFXWIN/CMDIChildWnd::SetHandles
dev_langs:
- C++
helpviewer_keywords:
- CMDIChildWnd [MFC], CMDIChildWnd
- CMDIChildWnd [MFC], Create
- CMDIChildWnd [MFC], GetMDIFrame
- CMDIChildWnd [MFC], MDIActivate
- CMDIChildWnd [MFC], MDIDestroy
- CMDIChildWnd [MFC], MDIMaximize
- CMDIChildWnd [MFC], MDIRestore
- CMDIChildWnd [MFC], SetHandles
ms.assetid: 6d07f5d4-9a3e-4723-9fa5-e65bb669fdd5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9e27551c04be5d6e985c6e7829f11f94d0aafeba
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cmdichildwnd-class"></a>CMDIChildWnd (classe)
Fornisce la funzionalità di una finestra figlio con interfaccia a documenti multipli (MDI) di Windows, insieme ai membri per gestire la finestra.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMDIChildWnd : public CFrameWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDIChildWnd::CMDIChildWnd](#cmdichildwnd)|Costruisce un oggetto `CMDIChildWnd`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDIChildWnd::Create](#create)|Crea la finestra figlio MDI di Windows associata la `CMDIChildWnd` oggetto.|  
|[CMDIChildWnd::GetMDIFrame](#getmdiframe)|Restituisce l'elemento padre cornice MDI della finestra client MDI.|  
|[CMDIChildWnd::MDIActivate](#mdiactivate)|Attiva la finestra figlio MDI.|  
|[CMDIChildWnd::MDIDestroy](#mdidestroy)|Elimina definitivamente la finestra figlio MDI.|  
|[CMDIChildWnd::MDIMaximize](#mdimaximize)|Ingrandisce la finestra figlio MDI.|  
|[CMDIChildWnd::MDIRestore](#mdirestore)|Ripristina la finestra figlio MDI da dimensioni ingrandita o ridotta a icona.|  
|[CMDIChildWnd::SetHandles](#sethandles)|Imposta l'handle per le risorse di menu e tasti di scelta rapida.|  
  
## <a name="remarks"></a>Note  
 Una finestra figlio MDI è molto simile a una normale finestra cornice, ad eccezione del fatto che viene visualizzata la finestra figlio MDI all'interno di una finestra cornice MDI anziché sul desktop. Una finestra figlio MDI non dispone di una barra dei menu propri, ma invece condivide il menu della finestra cornice MDI. Il framework cambia automaticamente il menu del frame MDI per rappresentare la finestra figlio MDI attiva.  
  
 Per creare una finestra figlio MDI utile per l'applicazione, derivare una classe da `CMDIChildWnd`. Aggiungere variabili membro alla classe derivata per archiviare i dati specifici dell'applicazione. Implementare funzioni membro di gestione dei messaggi e una mappa messaggi nella classe derivata per specificare cosa succede quando i messaggi vengono indirizzati alla finestra.  
  
 Esistono tre modi per creare una finestra figlio MDI:  
  
-   Costruire direttamente tramite **crea**.  
  
-   Costruire direttamente tramite `LoadFrame`.  
  
-   Creare l'oggetto indirettamente tramite un modello di documento.  
  
 Prima di chiamare **crea** o `LoadFrame`, è necessario creare l'oggetto finestra cornice nell'heap mediante C++ **nuova** operatore. Prima di chiamare **crea** è anche possibile registrare una classe di finestra con il [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) funzione globale per impostare gli stili di icona e la classe per il frame.  
  
 Utilizzare il **crea** funzione membro per passare i parametri di creazione del frame immediati come argomenti.  
  
 `LoadFrame` richiede argomenti minore rispetto a **crea**e recupera la maggior parte dei relativi valori predefiniti da risorse, tra cui didascalia del frame, icona, tabella di tasti di scelta rapida e menu. Deve essere accessibile da `LoadFrame`, tutte queste risorse devono avere lo stesso ID di risorsa (ad esempio, **IDR_MAINFRAME**).  
  
 Quando un `CMDIChildWnd` oggetto contiene documenti e visualizzazioni, vengono creati indirettamente dal framework anziché direttamente dal programmatore. Il `CDocTemplate` oggetto Orchestra la creazione del frame, la creazione delle viste che lo contiene e la connessione delle visualizzazioni per il documento appropriato. I parametri del `CDocTemplate` costruttore specificare il `CRuntimeClass` delle tre classi coinvolti (documenti, frame e visualizzazione). Oggetto `CRuntimeClass` oggetto viene usato dal framework per creare in modo dinamico i frame di nuovo quando l'utente specificato (ad esempio, usando il comando File nuovo o il comando nuova finestra di MDI).  
  
 Una classe finestra cornice derivata da `CMDIChildWnd` deve essere dichiarato con `DECLARE_DYNCREATE` affinché sopra `RUNTIME_CLASS` meccanismo per funzionare correttamente.  
  
 Il `CMDIChildWnd` classe eredita gran parte dell'implementazione predefinita da `CFrameWnd`. Per un elenco dettagliato di queste funzionalità, consultare il [CFrameWnd](../../mfc/reference/cframewnd-class.md) descrizione della classe. La `CMDIChildWnd` classe dispone di funzionalità aggiuntive seguenti:  
  
-   In combinazione con il `CMultiDocTemplate` (classe), più `CMDIChildWnd` oggetti dallo stesso modello di documento condividono lo stesso menu, il salvataggio delle risorse di sistema di Windows.  
  
-   Menu finestra figlio MDI attivo sostituisce completamente il menu della finestra cornice MDI, e la didascalia della finestra figlio MDI attualmente attiva viene aggiunto alla didascalia della finestra cornice MDI. Per ulteriori esempi di funzioni di finestra figlio MDI che vengono implementati in combinazione con una finestra cornice MDI, vedere il `CMDIFrameWnd` descrizione della classe.  
  
 Non utilizzare C++ **eliminare** operatore da eliminare definitivamente una finestra cornice. In alternativa, usare `CWnd::DestroyWindow`. Il `CFrameWnd` implementazione di `PostNcDestroy` eliminerà l'oggetto C++ quando la finestra viene eliminata. Quando l'utente chiude la finestra cornice, il valore predefinito `OnClose` gestore verrà chiamato `DestroyWindow`.  
  
 Per ulteriori informazioni su `CMDIChildWnd`, vedere [finestre cornice](../../mfc/frame-windows.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 `CMDIChildWnd`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cmdichildwnd"></a>  CMDIChildWnd::CMDIChildWnd  
 Chiamata per costruire un `CMDIChildWnd` oggetto.  
  
```  
CMDIChildWnd();
```  
  
### <a name="remarks"></a>Note  
 Chiamare **crea** per creare una finestra visibile.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMDIChildWnd::Create](#create).  
  
##  <a name="create"></a>  CMDIChildWnd::Create  
 Chiamare questa funzione membro per creare una finestra figlio MDI di Windows e associarlo al `CMDIChildWnd` oggetto.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszClassName,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_OVERLAPPEDWINDOW,  
    const RECT& rect = rectDefault,  
    CMDIFrameWnd* pParentWnd = NULL,  
    CCreateContext* pContext = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszClassName`  
 Punta a una stringa di caratteri con terminazione null che indica il nome di classe di Windows (un [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) struttura). Il nome della classe può essere qualsiasi nome registrato con il [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) funzione globale. Deve essere **NULL** per standard `CMDIChildWnd`.  
  
 `lpszWindowName`  
 Punta a una stringa di caratteri con terminazione null che rappresenta il nome della finestra. Utilizzato come testo per la barra del titolo.  
  
 `dwStyle`  
 Specifica la finestra [stile](../../mfc/reference/styles-used-by-mfc.md#window-styles) attributi. Il **WS_CHILD** stile è obbligatorio.  
  
 `rect`  
 Contiene le dimensioni e la posizione della finestra. Il `rectDefault` valore consente di specificare le dimensioni e posizione del nuovo `CMDIChildWnd`.  
  
 `pParentWnd`  
 Specifica il padre della finestra. Se **NULL**, viene utilizzata la finestra principale dell'applicazione.  
  
 `pContext`  
 Specifica un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) struttura. Questo parametro può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La finestra cornice figlio MDI attiva può determinare la didascalia della finestra cornice padre. Questa funzionalità è disabilitata per la disattivazione di **FWS_ADDTOTITLE** bit di stile della finestra cornice figlio.  
  
 Il framework chiama questa funzione membro in risposta a un comando utente per creare una finestra figlio e il framework utilizza il `pContext` parametro correttamente la finestra figlio la connessione all'applicazione. Quando si chiama **crea**, `pContext` può essere **NULL**.  
  
### <a name="example"></a>Esempio  
 Esempio 1:  
  
 [!code-cpp[NVC_MFCWindowing#7](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_1.cpp)]  
  
### <a name="example"></a>Esempio  
 Esempio 2:  
  
 [!code-cpp[NVC_MFCWindowing#8](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_2.cpp)]  
  
 [!code-cpp[NVC_MFCWindowing#9](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_3.cpp)]  
  
##  <a name="getmdiframe"></a>  CMDIChildWnd::GetMDIFrame  
 Chiamare questa funzione per restituire il frame padre MDI.  
  
```  
CMDIFrameWnd* GetMDIFrame();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra cornice padre MDI.  
  
### <a name="remarks"></a>Note  
 Il frame restituito è di due elementi padre rimossi dal `CMDIChildWnd` ed è il padre della finestra di tipo **MDICLIENT** che gestisce il `CMDIChildWnd` oggetto. Chiamare il [GetParent](../../mfc/reference/cwnd-class.md#getparent) funzione membro per restituire il `CMDIChildWnd` dell'immediato oggetto **MDICLIENT** padre come un temporaneo `CWnd` puntatore.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMDIFrameWnd::MDISetMenu](../../mfc/reference/cmdiframewnd-class.md#mdisetmenu).  
  
##  <a name="mdiactivate"></a>  CMDIChildWnd::MDIActivate  
 Chiamare questa funzione membro per attivare una finestra figlio MDI indipendentemente dalla finestra cornice MDI.  
  
```  
void MDIActivate();
```  
  
### <a name="remarks"></a>Note  
 Quando il frame diventa attivo, verrà attivata anche la finestra figlio che è stata attivata l'ultima volta.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CMDIFrameWnd::GetWindowMenuPopup](../../mfc/reference/cmdiframewnd-class.md#getwindowmenupopup).  
  
##  <a name="mdidestroy"></a>  CMDIChildWnd::MDIDestroy  
 Chiamare questa funzione membro per eliminare una finestra figlio MDI.  
  
```  
void MDIDestroy();
```  
  
### <a name="remarks"></a>Note  
 La funzione membro rimuove il titolo della finestra figlio dalla finestra cornice e disattiva la finestra figlio.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#10](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_4.cpp)]  
  
##  <a name="mdimaximize"></a>  CMDIChildWnd::MDIMaximize  
 Chiamare questa funzione membro per ottimizzare una finestra figlio MDI.  
  
```  
void MDIMaximize();
```  
  
### <a name="remarks"></a>Note  
 Quando una finestra figlio è ingrandita, Windows Ridimensiona per riempire l'area client della finestra cornice dell'area client. Vengono inseriti i menu di controllo della finestra figlio nella barra dei menu del frame in modo che l'utente può ripristinare o chiudere la finestra figlio e aggiunge il titolo della finestra figlio al titolo della finestra cornice.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#11](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_5.cpp)]  
  
##  <a name="mdirestore"></a>  CMDIChildWnd::MDIRestore  
 Chiamare questa funzione membro per il ripristino di una finestra figlio MDI dalle dimensioni ingrandita o ridotta a icona.  
  
```  
void MDIRestore();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#12](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_6.cpp)]  
  
##  <a name="sethandles"></a>  CMDIChildWnd::SetHandles  
 Imposta l'handle per le risorse di menu e tasti di scelta rapida.  
  
```  
void SetHandles(
    HMENU hMenu,  
    HACCEL hAccel);
```  
  
### <a name="parameters"></a>Parametri  
 `hMenu`  
 L'handle di una risorsa di menu.  
  
 `hAccel`  
 L'handle di una risorsa di tasti di scelta rapida.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per impostare le risorse di menu e tasti di scelta rapida utilizzate dall'oggetto finestra figlio MDI.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDI](../../visual-cpp-samples.md)   
 [Esempio MFC MDIDOCVW](../../visual-cpp-samples.md)   
 [Esempio MFC SNAPVW](../../visual-cpp-samples.md)   
 [CFrameWnd (classe)](../../mfc/reference/cframewnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Classe CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md)

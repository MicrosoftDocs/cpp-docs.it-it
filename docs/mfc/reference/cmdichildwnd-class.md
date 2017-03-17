---
title: CMDIChildWnd (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- MDI [C++], child windows
- windows [C++], MDI
- CMDIChildWnd class
- child windows, CMDIChildWnd class
ms.assetid: 6d07f5d4-9a3e-4723-9fa5-e65bb669fdd5
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 240af1fe5f3afa4cdb7d4d585dc74cc4836799cc
ms.lasthandoff: 02/24/2017

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
|[CMDIChildWnd::Create](#create)|Crea la finestra figlio MDI di Windows associata di `CMDIChildWnd` oggetto.|  
|[CMDIChildWnd::GetMDIFrame](#getmdiframe)|Restituisce l'elemento padre MDI frame della finestra del client MDI.|  
|[CMDIChildWnd::MDIActivate](#mdiactivate)|Attiva la finestra figlio MDI.|  
|[CMDIChildWnd::MDIDestroy](#mdidestroy)|Elimina questa finestra figlio MDI.|  
|[CMDIChildWnd::MDIMaximize](#mdimaximize)|Ingrandisce la finestra figlio MDI.|  
|[CMDIChildWnd::MDIRestore](#mdirestore)|Ripristina la finestra figlio MDI da dimensioni ingrandita o ridotta a icona.|  
|[CMDIChildWnd::SetHandles](#sethandles)|Imposta l'handle per risorse di menu e tasti di scelta rapida.|  
  
## <a name="remarks"></a>Note  
 Una finestra figlio MDI aspetto è molto simile a una normale finestra cornice, ad eccezione del fatto che viene visualizzata la finestra figlio MDI all'interno di una finestra cornice MDI anziché sul desktop. Una finestra figlio MDI non dispone di una barra dei menu propri, ma invece condivide il menu della finestra cornice MDI. Il framework imposta automaticamente il menu di cornice MDI per rappresentare la finestra figlio MDI attualmente attiva.  
  
 Per creare una finestra figlio MDI utile per l'applicazione, derivare una classe dalla classe `CMDIChildWnd`. Aggiungere variabili membro alla classe derivata per archiviare i dati specifici dell'applicazione. Implementare funzioni membro di gestione dei messaggi e una mappa messaggi nella classe derivata per specificare cosa succede quando i messaggi vengono indirizzati alla finestra.  
  
 Esistono tre modi per creare una finestra figlio MDI:  
  
-   Costruire direttamente tramite **crea**.  
  
-   Costruire direttamente tramite `LoadFrame`.  
  
-   Costruire indirettamente tramite un modello di documento.  
  
 Prima di chiamare **crea** o `LoadFrame`, è necessario creare l'oggetto finestra cornice nell'heap mediante C++ **nuova** operatore. Prima di chiamare **crea** è inoltre possibile registrare una classe di finestra con la [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) funzione globale per impostare gli stili di icona e classe per il frame.  
  
 Utilizzare il **crea** funzione membro per passare i parametri di creazione del frame immediati come argomenti.  
  
 `LoadFrame`richiede argomenti minore rispetto a **crea**e invece recupera la maggior parte dei relativi valori predefiniti da risorse, tra cui didascalia del frame, icona, tabella di tasti di scelta rapida e menu. Per essere accessibili tramite `LoadFrame`, tutte queste risorse devono avere lo stesso ID di risorsa (ad esempio, **IDR_MAINFRAME**).  
  
 Quando un `CMDIChildWnd` oggetto contiene documenti e visualizzazioni, vengono creati indirettamente da framework invece che direttamente dal programmatore. Il `CDocTemplate` oggetto gestisce la creazione del frame, la creazione di viste che lo contiene e la connessione delle visualizzazioni per il documento appropriato. I parametri di `CDocTemplate` costruttore specifica la `CRuntimeClass` delle tre classi coinvolte (documenti, frame e visualizzazione). Oggetto `CRuntimeClass` oggetto viene utilizzato dal framework per creare dinamicamente nuovi fotogrammi quando specificato dall'utente (ad esempio, utilizzando il comando Nuovo File o la nuova finestra MDI).  
  
 Una classe finestra cornice derivata da `CMDIChildWnd` deve essere dichiarato con `DECLARE_DYNCREATE` affinché il codice precedente `RUNTIME_CLASS` meccanismo funzioni correttamente.  
  
 Il `CMDIChildWnd` classe erediti gran parte della propria implementazione predefinita da `CFrameWnd`. Per un elenco dettagliato di queste funzionalità, consultare la [CFrameWnd](../../mfc/reference/cframewnd-class.md) descrizione della classe. La `CMDIChildWnd` classe dispone di funzionalità aggiuntive seguenti:  
  
-   In combinazione con il `CMultiDocTemplate` (classe), più `CMDIChildWnd` oggetti dallo stesso modello di documento condividono lo stesso menu, il salvataggio delle risorse di sistema di Windows.  
  
-   Menu finestra figlio MDI attivo sostituisce completamente il menu della finestra cornice MDI e la didascalia della finestra figlio MDI attualmente attiva viene aggiunto alla didascalia della finestra cornice MDI. Per ulteriori esempi di funzioni di finestra figlio MDI che sono implementate in combinazione con una finestra cornice MDI, vedere il `CMDIFrameWnd` descrizione della classe.  
  
 Non utilizzare C++ **eliminare** operatore per eliminare una finestra cornice. In alternativa, usare `CWnd::DestroyWindow` . Il `CFrameWnd` implementazione di `PostNcDestroy` eliminerà l'oggetto C++ quando la finestra viene eliminata. Quando l'utente chiude la finestra cornice, il valore predefinito `OnClose` gestore verrà chiamato `DestroyWindow`.  
  
 Per ulteriori informazioni su `CMDIChildWnd`, vedere [finestre cornice](../../mfc/frame-windows.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 `CMDIChildWnd`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cmdichildwnd"></a>CMDIChildWnd::CMDIChildWnd  
 Chiamata a costruire un `CMDIChildWnd` oggetto.  
  
```  
CMDIChildWnd();
```  
  
### <a name="remarks"></a>Note  
 Chiamare **crea** per creare la finestra visibile.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMDIChildWnd::Create](#create).  
  
##  <a name="create"></a>CMDIChildWnd::Create  
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
 Punta a una stringa di caratteri con terminazione null che denomina la classe di Windows (un [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) struttura). Il nome della classe può essere qualsiasi nome registrato con il [AfxRegisterWndClass](http://msdn.microsoft.com/library/62c7d4b1-7a29-4abb-86f7-dec541659db0) funzione globale. Deve essere **NULL** per standard `CMDIChildWnd`.  
  
 `lpszWindowName`  
 Punta a una stringa di caratteri con terminazione null che rappresenta il nome della finestra. Utilizzato come testo per la barra del titolo.  
  
 `dwStyle`  
 Specifica l'intervallo di [stile](../../mfc/reference/window-styles.md) attributi. Il **WS_CHILD** stile è obbligatorio.  
  
 `rect`  
 Contiene le dimensioni e posizione della finestra. Il `rectDefault` valore consente di specificare le dimensioni e posizione del nuovo `CMDIChildWnd`.  
  
 `pParentWnd`  
 Specifica il padre della finestra. Se **NULL**, viene utilizzata la finestra principale dell'applicazione.  
  
 `pContext`  
 Specifica un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) struttura. Questo parametro può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La finestra cornice figlio MDI attiva può determinare la didascalia della finestra cornice padre. Questa funzionalità è disabilitata per la disattivazione di **FWS_ADDTOTITLE** bit di stile della finestra cornice figlio.  
  
 Il framework chiama questa funzione membro in risposta a un comando dell'utente per creare una finestra figlio e il framework utilizza il `pContext` parametro per connettersi correttamente la finestra figlio per l'applicazione. Quando si chiama **crea**, `pContext` può essere **NULL**.  
  
### <a name="example"></a>Esempio  
 Esempio 1:  
  
 [!code-cpp[NVC_MFCWindowing&#7;](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_1.cpp)]  
  
### <a name="example"></a>Esempio  
 Esempio 2:  
  
 [!code-cpp[NVC_MFCWindowing n.&8;](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_2.cpp)]  
  
 [!code-cpp[9 NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_3.cpp)]  
  
##  <a name="getmdiframe"></a>CMDIChildWnd::GetMDIFrame  
 Chiamare questa funzione per restituire il frame padre MDI.  
  
```  
CMDIFrameWnd* GetMDIFrame();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra cornice padre MDI.  
  
### <a name="remarks"></a>Note  
 Il frame restituito è due genitori rimosse la `CMDIChildWnd` ed è il padre della finestra di tipo **MDICLIENT** che gestisce il `CMDIChildWnd` oggetto. Chiamare il [GetParent](../../mfc/reference/cwnd-class.md#getparent) funzione membro per restituire il `CMDIChildWnd` dell'oggetto immediato **MDICLIENT** padre come una variabile temporanea `CWnd` puntatore.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMDIFrameWnd::MDISetMenu](../../mfc/reference/cmdiframewnd-class.md#mdisetmenu).  
  
##  <a name="mdiactivate"></a>CMDIChildWnd::MDIActivate  
 Chiamare questa funzione membro per attivare una finestra figlio MDI indipendentemente dalla finestra cornice MDI.  
  
```  
void MDIActivate();
```  
  
### <a name="remarks"></a>Note  
 Quando il frame diventa attivo, verrà attivata anche la finestra figlio che è stata attivata l'ultima volta.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CMDIFrameWnd::GetWindowMenuPopup](../../mfc/reference/cmdiframewnd-class.md#getwindowmenupopup).  
  
##  <a name="mdidestroy"></a>CMDIChildWnd::MDIDestroy  
 Chiamare questa funzione membro per eliminare una finestra figlio MDI.  
  
```  
void MDIDestroy();
```  
  
### <a name="remarks"></a>Note  
 La funzione membro rimuove il titolo della finestra figlio dalla finestra cornice e disattiva la finestra figlio.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#10;](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_4.cpp)]  
  
##  <a name="mdimaximize"></a>CMDIChildWnd::MDIMaximize  
 Chiamare questa funzione membro per ottimizzare una finestra figlio MDI.  
  
```  
void MDIMaximize();
```  
  
### <a name="remarks"></a>Note  
 Quando una finestra figlio viene ingrandita, Windows Ridimensiona per riempire l'area client della finestra cornice dell'area client. Vengono inseriti i menu del controllo della finestra figlio nella barra dei menu del frame in modo che l'utente può ripristinare o chiudere la finestra figlio e aggiunge il titolo della finestra figlio per il titolo della finestra cornice.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#11;](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_5.cpp)]  
  
##  <a name="mdirestore"></a>CMDIChildWnd::MDIRestore  
 Chiamare questa funzione membro per ripristinare una finestra figlio MDI da dimensioni ingrandita o ridotta a icona.  
  
```  
void MDIRestore();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#12;](../../mfc/reference/codesnippet/cpp/cmdichildwnd-class_6.cpp)]  
  
##  <a name="sethandles"></a>CMDIChildWnd::SetHandles  
 Imposta l'handle per risorse di menu e tasti di scelta rapida.  
  
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
 [CMDIFrameWnd (classe)](../../mfc/reference/cmdiframewnd-class.md)


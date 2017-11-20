---
title: CStatusBar (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CStatusBar
- AFXEXT/CStatusBar
- AFXEXT/CStatusBar::CStatusBar
- AFXEXT/CStatusBar::CommandToIndex
- AFXEXT/CStatusBar::Create
- AFXEXT/CStatusBar::CreateEx
- AFXEXT/CStatusBar::DrawItem
- AFXEXT/CStatusBar::GetItemID
- AFXEXT/CStatusBar::GetItemRect
- AFXEXT/CStatusBar::GetPaneInfo
- AFXEXT/CStatusBar::GetPaneStyle
- AFXEXT/CStatusBar::GetPaneText
- AFXEXT/CStatusBar::GetStatusBarCtrl
- AFXEXT/CStatusBar::SetIndicators
- AFXEXT/CStatusBar::SetPaneInfo
- AFXEXT/CStatusBar::SetPaneStyle
- AFXEXT/CStatusBar::SetPaneText
dev_langs: C++
helpviewer_keywords:
- CStatusBar [MFC], CStatusBar
- CStatusBar [MFC], CommandToIndex
- CStatusBar [MFC], Create
- CStatusBar [MFC], CreateEx
- CStatusBar [MFC], DrawItem
- CStatusBar [MFC], GetItemID
- CStatusBar [MFC], GetItemRect
- CStatusBar [MFC], GetPaneInfo
- CStatusBar [MFC], GetPaneStyle
- CStatusBar [MFC], GetPaneText
- CStatusBar [MFC], GetStatusBarCtrl
- CStatusBar [MFC], SetIndicators
- CStatusBar [MFC], SetPaneInfo
- CStatusBar [MFC], SetPaneStyle
- CStatusBar [MFC], SetPaneText
ms.assetid: a3bde3db-e71c-4881-a3ca-1d5481c345ba
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: d5a669551bcc28328054e369ff70bbccbc505c5c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cstatusbar-class"></a>CStatusBar (classe)
Barra di controllo con una riga di riquadri di output di testo o "indicatori".  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CStatusBar : public CControlBar  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStatusBar::CStatusBar](#cstatusbar)|Costruisce un oggetto `CStatusBar`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStatusBar::CommandToIndex](#commandtoindex)|Ottiene l'indice per un ID di indicatore specificato.|  
|[CStatusBar::Create](#create)|Crea la barra di stato, lo collega al `CStatusBar` dell'oggetto e imposta l'altezza di tipo di carattere e barra iniziale.|  
|[CStatusBar:: CreateEx](#createex)|Crea un `CStatusBar` oggetto con gli stili aggiuntivi per l'oggetto incorporato `CStatusBarCtrl` oggetto.|  
|[CStatusBar::DrawItem](#drawitem)|Chiamato quando un aspetto visivo di un proprietario barra controllo di stato.|  
|[CStatusBar::GetItemID](#getitemid)|Ottiene l'ID di indicatori per un indice specificato.|  
|[CStatusBar::GetItemRect](#getitemrect)|Ottiene visualizzare rettangolo per un indice specificato.|  
|[CStatusBar::GetPaneInfo](#getpaneinfo)|Ottiene l'ID di indicatori, stile e spessore per un indice specificato.|  
|[CStatusBar::GetPaneStyle](#getpanestyle)|Ottiene lo stile indicatore per un indice specificato.|  
|[CStatusBar::GetPaneText](#getpanetext)|Ottiene il testo di indicatore per un indice specificato.|  
|[CStatusBar:: GetStatusBarCtrl](#getstatusbarctrl)|Consente l'accesso diretto al controllo sottostante comune.|  
|[CStatusBar:: SetIndicators](#setindicators)|Imposta l'ID di indicatore.|  
|[CStatusBar::SetPaneInfo](#setpaneinfo)|Imposta l'ID di indicatori, stile e spessore per un indice specificato.|  
|[CStatusBar::SetPaneStyle](#setpanestyle)|Imposta lo stile dell'indicatore per un indice specificato.|  
|[CStatusBar::SetPaneText](#setpanetext)|Imposta il testo di indicatore per un indice specificato.|  
  
## <a name="remarks"></a>Note  
 I riquadri di output vengono comunemente utilizzati come righe di messaggio e come indicatori di stato. Ad esempio le righe di messaggio della Guida di menu che descrivono brevemente il comando di menu selezionata e gli indicatori mostrano lo stato di BLOC SCORR, BLOC NUM e altri tasti.  
  
 [CStatusBar:: GetStatusBarCtrl](#getstatusbarctrl), una funzione membro nuovo alla versione 4.0 di MFC, consente di sfruttare supporto del controllo comune di Windows per funzionalità aggiuntive e personalizzazione della barra di stato. `CStatusBar`funzioni membro consentono la maggior parte delle funzionalità dei controlli comuni di Windows; Tuttavia, quando si chiama `GetStatusBarCtrl`, è possibile assegnare le barre di stato più le caratteristiche di una barra di stato Windows 95/98. Quando si chiama `GetStatusBarCtrl`, verrà restituito un riferimento a un `CStatusBarCtrl` oggetto. Vedere [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) per ulteriori informazioni sulla progettazione di barre degli strumenti usando i controlli comuni di Windows. Per ulteriori informazioni generali sui controlli comuni, vedere [controlli comuni](http://msdn.microsoft.com/library/windows/desktop/bb775493) in Windows SDK.  
  
 Il framework memorizza le informazioni sugli indicatori in una matrice con l'indicatore più a sinistra nella posizione 0. Quando si crea una barra di stato, utilizzare una matrice di ID che il framework associa gli indicatori corrispondenti di stringa. È quindi possibile utilizzare un ID di stringa o un indice per accedere a un indicatore.  
  
 Per impostazione predefinita, il primo indicatore è "elastico": occupi la lunghezza della barra di stato non utilizzata da altri riquadri, indicatore in modo che altri riquadri sono allineati a destra.  
  
 Per creare una barra di stato, seguire questi passaggi:  
  
1.  Costruire l'oggetto `CStatusBar`.  
  
2.  Chiamare il [crea](#create) (o [CreateEx](#createex)) funzione per creare una finestra degli strumenti della barra di stato e associarlo al `CStatusBar` oggetto.  
  
3.  Chiamare [SetIndicators](#setindicators) per associare un ID di stringa a ogni indicatore.  
  
 Esistono tre modi per aggiornare il testo in un riquadro barra di stato:  
  
1.  Chiamare [CWnd::SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext) per aggiornare il testo nel riquadro 0.  
  
2.  Chiamare [CCmdUI::SetText](../../mfc/reference/ccmdui-class.md#settext) nella barra di stato `ON_UPDATE_COMMAND_UI` gestore.  
  
3.  Chiamare [SetPaneText](#setpanetext) per aggiornare il testo per un riquadro.  
  
 Chiamare [SetPaneStyle](#setpanestyle) per aggiornare lo stile di un riquadro barra di stato.  
  
 Per ulteriori informazioni sull'utilizzo `CStatusBar`, vedere l'articolo [implementazione della barra di stato in MFC](../../mfc/status-bar-implementation-in-mfc.md) e [Nota tecnica 31: barre di controllo](../../mfc/tn031-control-bars.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `CStatusBar`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT. h  
  
##  <a name="commandtoindex"></a>CStatusBar::CommandToIndex  
 Ottiene l'indice di indicatore per un ID specificato.  
  
```  
int CommandToIndex(UINT nIDFind) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIDFind`  
 ID di stringa dell'indicatore il cui indice è da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'indicatore se ha esito positivo. -1 se l'operazione non riesce.  
  
### <a name="remarks"></a>Note  
 L'indice del primo indicatore è 0.  
  
##  <a name="create"></a>CStatusBar::Create  
 Crea una barra (una finestra figlio) di stato e la associa il `CStatusBar` oggetto.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,  
    UINT nID = AFX_IDW_STATUS_BAR);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Puntatore al [CWnd](../../mfc/reference/cwnd-class.md) oggetto la cui finestra di Windows è l'elemento padre della barra di stato.  
  
 `dwStyle`  
 Lo stile della barra di stato. Oltre a standard di Windows [stili](../../mfc/reference/styles-used-by-mfc.md#window-styles), questi stili sono supportati.  
  
- `CBRS_TOP`Barra di controllo è nella parte superiore della finestra cornice.  
  
- `CBRS_BOTTOM`Barra di controllo è nella parte inferiore della finestra cornice.  
  
- `CBRS_NOALIGN`Barra di controllo non viene riposizionata quando l'elemento padre viene ridimensionato.  
  
 `nID`  
 ID di finestra figlio. della barra degli strumenti  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Imposta il tipo di carattere iniziale e imposta lo stato dell'altezza della barra su un valore predefinito.  
  
##  <a name="createex"></a>CStatusBar:: CreateEx  
 Chiamare questa funzione per creare una barra (una finestra figlio) di stato e associarlo con il `CStatusBar` oggetto.  
  
```  
virtual BOOL CreateEx(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle = 0,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,  
    UINT nID = AFX_IDW_STATUS_BAR);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Puntatore al [CWnd](../../mfc/reference/cwnd-class.md) oggetto la cui finestra di Windows è l'elemento padre della barra di stato.  
  
 `dwCtrlStyle`  
 Gli stili aggiuntivi per la creazione di incorporato [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) oggetto. Il valore predefinito specifica una barra di stato senza un riquadro di ridimensionamento o una descrizione comando supporta. Stili barra di stati supportati sono:  
  
- **SBARS_SIZEGRIP** controllo barra di stato include un riquadro di ridimensionamento all'estremità destra della barra di stato. Un riquadro di ridimensionamento è simile a un bordo di ridimensionamento. è un'area rettangolare che l'utente può fare clic e trascinare per ridimensionare la finestra padre.  
  
- **SBT_TOOLTIPS** la barra di stato supporta le descrizioni comandi.  
  
 Per informazioni dettagliate su questi stili, vedere [impostazioni per CStatusBarCtrl](../../mfc/settings-for-the-cstatusbarctrl.md).  
  
 `dwStyle`  
 Lo stile della barra di stato. Il valore predefinito specifica che è possibile creare una barra di stato visibile nella parte inferiore della finestra cornice. Applicare qualsiasi combinazione di stili del controllo elencato della barra di stato [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) e [CDialogBar::Create](../../mfc/reference/cdialogbar-class.md#create). Tuttavia, questo parametro deve includere sempre gli stili WS_CHILD e WS_VISIBLE.  
  
 `nID`  
 ID di finestra figlio della barra di stato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione imposta il tipo di carattere iniziale e imposta lo stato di altezza della barra su un valore predefinito.  
  
 Utilizzare `CreateEx`, invece di [crea](#create), quando alcuni stili devono essere presenti durante la creazione del controllo barra di stato incorporata. Ad esempio, impostare `dwCtrlStyle` a **SBT_TOOLTIPS** per visualizzare le descrizioni comandi in un oggetto barra di stato.  
  
##  <a name="cstatusbar"></a>CStatusBar::CStatusBar  
 Costruisce un `CStatusBar` oggetto, crea un carattere di barra di stato predefinito, se necessario e imposta le caratteristiche del carattere per i valori predefiniti.  
  
```  
CStatusBar();
```  
  
##  <a name="drawitem"></a>CStatusBar::DrawItem  
 Questa funzione membro viene chiamata dal framework quando un aspetto visivo di un proprietario barra di stato.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDrawItemStruct`  
 Un puntatore a un [DRAWITEMSTRUCT](http://msdn.microsoft.com/library/windows/desktop/bb775802) struttura che contiene informazioni sul tipo di disegno necessaria.  
  
### <a name="remarks"></a>Note  
 Il **itemAction** appartenente il `DRAWITEMSTRUCT` struttura definisce l'azione di disegno che deve essere eseguita. Eseguire l'override di questa funzione membro per implementare disegno di un proprietario `CStatusBar` oggetto. L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito `lpDrawItemStruct` prima del completamento di questa funzione membro.  
  
##  <a name="getitemid"></a>CStatusBar::GetItemID  
 Restituisce l'ID dell'indicatore specificato da `nIndex`.  
  
```  
UINT GetItemID(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice dell'indicatore il cui ID è da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID dell'indicatore specificato da `nIndex`.  
  
##  <a name="getitemrect"></a>CStatusBar::GetItemRect  
 Copia le coordinate dell'indicatore specificato da `nIndex` nella struttura a cui puntata `lpRect`.  
  
```  
void GetItemRect(
    int nIndex,  
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice dell'indicatore il cui coordinate del rettangolo devono essere recuperate.  
  
 `lpRect`  
 Punta a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che riceverà le coordinate dell'indicatore specificato da `nIndex`.  
  
### <a name="remarks"></a>Note  
 Le coordinate sono espresse in pixel rispetto all'angolo superiore sinistro della barra di stato.  
  
##  <a name="getpaneinfo"></a>CStatusBar::GetPaneInfo  
 Set `nID`, `nStyle`, e `cxWidth` ID, stile e alla larghezza del riquadro indicatore nella posizione specificata da `nIndex`.  
  
```  
void GetPaneInfo(
    int nIndex,  
    UINT& nID,  
    UINT& nStyle,  
    int& cxWidth) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice del riquadro sono le cui informazioni da recuperare.  
  
 `nID`  
 Riferimento a un **UINT** impostato per l'ID del riquadro.  
  
 `nStyle`  
 Riferimento a un **UINT** impostato lo stile del riquadro.  
  
 `cxWidth`  
 Riferimento a un intero che è stato impostato la larghezza del riquadro.  
  
##  <a name="getpanestyle"></a>CStatusBar::GetPaneStyle  
 Chiamare questa funzione membro per recuperare lo stile del riquadro della barra di stato.  
  
```  
UINT GetPaneStyle(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice del riquadro è cui lo stile da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Lo stile del riquadro barra di stato specificato da `nIndex`.  
  
### <a name="remarks"></a>Note  
 Stile del riquadro un determina come viene visualizzato il riquadro.  
  
 Per un elenco di stili disponibili per le barre di stato, vedere [crea](#create).  
  
##  <a name="getpanetext"></a>CStatusBar::GetPaneText  
 Chiamare questa funzione membro per recuperare il testo visualizzato in un riquadro barra di stato.  
  
```  
CString GetPaneText(int nIndex) const;  void GetPaneText(int nIndex, CString& rString) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice del riquadro il cui testo è da recuperare.  
  
 `rString`  
 Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che contiene il testo da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` oggetto contenente il testo del riquadro.  
  
### <a name="remarks"></a>Note  
 La seconda forma di questo membro funzione compila un `CString` oggetto con il testo della stringa.  
  
##  <a name="getstatusbarctrl"></a>CStatusBar:: GetStatusBarCtrl  
 Questa funzione membro consente l'accesso diretto al controllo sottostante comune.  
  
```  
CStatusBarCtrl& GetStatusBarCtrl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Contiene un riferimento a un [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Utilizzare `GetStatusBarCtrl` per sfruttare le funzionalità di controllo comune barra di stato Windows e per sfruttare i vantaggi del supporto [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) offre per la personalizzazione della barra di stato. Ad esempio, è possibile specificare uno stile che include un riquadro di ridimensionamento sulla barra di stato tramite il controllo comune, oppure è possibile specificare uno stile per visualizzare la barra di stato nella parte superiore dell'area client della finestra padre.  
  
 Per ulteriori informazioni generali sui controlli comuni, vedere [controlli comuni](http://msdn.microsoft.com/library/windows/desktop/bb775493) in Windows SDK.  
  
##  <a name="setindicators"></a>CStatusBar:: SetIndicators  
 Imposta l'ID di ogni stato dell'indicatore sul valore specificato dall'elemento corrispondente della matrice `lpIDArray`, carica la risorsa di stringa specificata da ogni ID e imposta la stringa di testo dell'indicatore.  
  
```  
BOOL SetIndicators(
    const UINT* lpIDArray,  
    int nIDCount);
```  
  
### <a name="parameters"></a>Parametri  
 `lpIDArray`  
 Puntatore a una matrice di ID.  
  
 `nIDCount`  
 Numero di elementi nella matrice a cui puntava `lpIDArray`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="setpaneinfo"></a>CStatusBar::SetPaneInfo  
 Imposta il riquadro indicatore specificato per un nuovo ID, stile e spessore.  
  
```  
void SetPaneInfo(
    int nIndex,  
    UINT nID,  
    UINT nStyle,  
    int cxWidth);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice del riquadro indicatore il cui tipo è necessario impostare.  
  
 `nID`  
 Nuovo ID per il riquadro dell'indicatore.  
  
 `nStyle`  
 Nuovo stile per il riquadro dell'indicatore.  
  
 `cxWidth`  
 Nuova larghezza del riquadro indicatore.  
  
### <a name="remarks"></a>Note  
 Sono supportati i seguenti stili di indicatore:  
  
- **SBPS_NOBORDERS** alcun bordo 3D di riquadro.  
  
- **SBPS_POPOUT** inverso del bordo in modo che il testo "POP".  
  
- **SBPS_DISABLED** non disegnare testo.  
  
- **SBPS_STRETCH** riquadro estensione per riempire lo spazio inutilizzato. Un solo riquadro per ogni barra di stato può avere questo stile.  
  
- **SBPS_NORMAL** nessuna estensione, i bordi o pop-out.  
  
##  <a name="setpanestyle"></a>CStatusBar::SetPaneStyle  
 Chiamare questa funzione membro per impostare lo stile del riquadro della barra di stato.  
  
```  
void SetPaneStyle(
    int nIndex,  
    UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice del riquadro di cui lo stile è necessario impostare.  
  
 `nStyle`  
 Stile del riquadro di cui lo stile è necessario impostare.  
  
### <a name="remarks"></a>Note  
 Stile del riquadro un determina come viene visualizzato il riquadro.  
  
 Per un elenco di stili disponibili per le barre di stato, vedere [SetPaneInfo](#setpaneinfo).  
  
##  <a name="setpanetext"></a>CStatusBar::SetPaneText  
 Chiamare questa funzione membro per impostare il testo del riquadro per la stringa a cui puntata `lpszNewText`.  
  
```  
BOOL SetPaneText(
    int nIndex,  
    LPCTSTR lpszNewText,  
    BOOL bUpdate = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice del riquadro il cui testo è necessario impostare.  
  
 `lpszNewText`  
 Puntatore per il nuovo testo del riquadro.  
  
 *bAggiornamento*  
 Se **TRUE**, il riquadro viene invalidato dopo il testo viene impostato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Dopo aver chiamato `SetPaneText`, è necessario aggiungere un gestore di aggiornamento dell'interfaccia utente per visualizzare il nuovo testo nella barra di stato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#176](../../mfc/codesnippet/cpp/cstatusbar-class_1.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#177](../../mfc/codesnippet/cpp/cstatusbar-class_2.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#178](../../mfc/codesnippet/cpp/cstatusbar-class_3.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC viene](../../visual-cpp-samples.md)   
 [DLGCBR32 esempio MFC](../../visual-cpp-samples.md)   
 [CControlBar (classe)](../../mfc/reference/ccontrolbar-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CStatusBarCtrl (classe)](../../mfc/reference/cstatusbarctrl-class.md)   
 [Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)

---
title: CToolBar (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CToolBar
- AFXEXT/CToolBar
- AFXEXT/CToolBar::CToolBar
- AFXEXT/CToolBar::CommandToIndex
- AFXEXT/CToolBar::Create
- AFXEXT/CToolBar::CreateEx
- AFXEXT/CToolBar::GetButtonInfo
- AFXEXT/CToolBar::GetButtonStyle
- AFXEXT/CToolBar::GetButtonText
- AFXEXT/CToolBar::GetItemID
- AFXEXT/CToolBar::GetItemRect
- AFXEXT/CToolBar::GetToolBarCtrl
- AFXEXT/CToolBar::LoadBitmap
- AFXEXT/CToolBar::LoadToolBar
- AFXEXT/CToolBar::SetBitmap
- AFXEXT/CToolBar::SetButtonInfo
- AFXEXT/CToolBar::SetButtons
- AFXEXT/CToolBar::SetButtonStyle
- AFXEXT/CToolBar::SetButtonText
- AFXEXT/CToolBar::SetHeight
- AFXEXT/CToolBar::SetSizes
dev_langs:
- C++
helpviewer_keywords:
- CToolBar [MFC], CToolBar
- CToolBar [MFC], CommandToIndex
- CToolBar [MFC], Create
- CToolBar [MFC], CreateEx
- CToolBar [MFC], GetButtonInfo
- CToolBar [MFC], GetButtonStyle
- CToolBar [MFC], GetButtonText
- CToolBar [MFC], GetItemID
- CToolBar [MFC], GetItemRect
- CToolBar [MFC], GetToolBarCtrl
- CToolBar [MFC], LoadBitmap
- CToolBar [MFC], LoadToolBar
- CToolBar [MFC], SetBitmap
- CToolBar [MFC], SetButtonInfo
- CToolBar [MFC], SetButtons
- CToolBar [MFC], SetButtonStyle
- CToolBar [MFC], SetButtonText
- CToolBar [MFC], SetHeight
- CToolBar [MFC], SetSizes
ms.assetid: e868da26-5e07-4607-9651-e2f863ad9059
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2a80ea4cb188d879b9af0a7901ffbe89b8673df6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33376366"
---
# <a name="ctoolbar-class"></a>CToolBar (classe)
Barre di controllo con una riga di pulsanti bitmap e separatori facoltativi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CToolBar : public CControlBar  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CToolBar::CToolBar](#ctoolbar)|Costruisce un oggetto `CToolBar`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CToolBar::CommandToIndex](#commandtoindex)|Restituisce l'indice di un pulsante con l'ID di comando specificato.|  
|[CToolBar:: Create](#create)|Crea la barra degli strumenti di Windows e lo collega al `CToolBar` oggetto.|  
|[CToolBar:: CreateEx](#createex)|Crea un `CToolBar` oggetto con gli stili aggiuntivi per l'oggetto incorporato `CToolBarCtrl` oggetto.|  
|[CToolBar::GetButtonInfo](#getbuttoninfo)|Recupera l'ID, stile e il numero di immagine di un pulsante.|  
|[CToolBar:: GetButtonStyle](#getbuttonstyle)|Recupera lo stile per un pulsante.|  
|[CToolBar::GetButtonText](#getbuttontext)|Recupera il testo che verrà visualizzato su un pulsante.|  
|[CToolBar::GetItemID](#getitemid)|Restituisce l'ID di comando di un pulsante o un separatore in corrispondenza dell'indice specificato.|  
|[CToolBar::GetItemRect](#getitemrect)|Recupera il rettangolo di visualizzazione per l'elemento in corrispondenza dell'indice specificato.|  
|[CToolBar:: GetToolBarCtrl](#gettoolbarctrl)|Consente l'accesso diretto al controllo sottostante comune.|  
|[CToolBar::LoadBitmap](#loadbitmap)|Carica la bitmap contenente immagini pulsante bitmap.|  
|[CToolBar::LoadToolBar](#loadtoolbar)|Carica una risorsa barra degli strumenti creata con l'editor di risorse.|  
|[CToolBar::SetBitmap](#setbitmap)|Imposta un'immagine bitmap.|  
|[CToolBar::](#setbuttoninfo)|Imposta l'ID, stile e il numero di immagine di un pulsante.|  
|[CToolBar::SetButtons](#setbuttons)|Set di pulsante di stili e un indice delle immagini di pulsante della bitmap.|  
|[CToolBar::SetButtonStyle](#setbuttonstyle)|Imposta lo stile per un pulsante.|  
|[CToolBar::SetButtonText](#setbuttontext)|Imposta il testo che verrà visualizzato su un pulsante.|  
|[CToolBar::SetHeight](#setheight)|Imposta l'altezza della barra degli strumenti.|  
|[CToolBar::SetSizes](#setsizes)|Imposta le dimensioni dei pulsanti e le immagini bitmap.|  
  
## <a name="remarks"></a>Note  
 I pulsanti possono fungere da pulsanti di comando, i pulsanti della casella di controllo o pulsanti di opzione. `CToolBar` gli oggetti sono in genere incorporati membri di oggetti finestra cornice derivati dalla classe [CFrameWnd](../../mfc/reference/cframewnd-class.md) oppure [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md).  
  
 [CToolBar:: GetToolBarCtrl](#gettoolbarctrl), una funzione membro nuovo alla versione 4.0 di MFC, consente di sfruttare i vantaggi del supporto di controlli comuni di Windows per la personalizzazione della barra degli strumenti e funzionalità aggiuntive. `CToolBar` funzioni membro consentono la maggior parte delle funzionalità dei controlli comuni di Windows; Tuttavia, quando si chiama `GetToolBarCtrl`, è possibile assegnare delle barre degli strumenti ulteriormente le caratteristiche delle barre degli strumenti Windows 95/98. Quando si chiama `GetToolBarCtrl`, verrà restituito un riferimento a un `CToolBarCtrl` oggetto. Vedere [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) per ulteriori informazioni sulla progettazione di barre degli strumenti usando i controlli comuni di Windows. Per ulteriori informazioni generali sui controlli comuni, vedere [controlli comuni](http://msdn.microsoft.com/library/windows/desktop/bb775493) in Windows SDK.  
  
 Visual C++ fornisce due metodi per creare una barra degli strumenti. Per creare una risorsa barra degli strumenti tramite l'Editor di risorse, seguire questi passaggi:  
  
1.  Creare una risorsa barra degli strumenti.  
  
2.  Costruire l'oggetto `CToolBar`.  
  
3.  Chiamare il [crea](#create) (o [CreateEx](#createex)) funzione per creare la barra degli strumenti di Windows e associarlo al `CToolBar` oggetto.  
  
4.  Chiamare [LoadToolBar](#loadtoolbar) per caricare la risorsa barra degli strumenti.  
  
 In caso contrario, seguire questi passaggi:  
  
1.  Costruire l'oggetto `CToolBar`.  
  
2.  Chiamare il [crea](#create) (o [CreateEx](#createex)) funzione per creare la barra degli strumenti di Windows e associarlo al `CToolBar` oggetto.  
  
3.  Chiamare [LoadBitmap](#loadbitmap) per caricare la bitmap che contiene le immagini dei pulsanti della barra degli strumenti.  
  
4.  Chiamare [SetButtons](#setbuttons) per impostare lo stile del pulsante e associare ogni pulsante con un'immagine nella bitmap.  
  
 Tutte le immagini dei pulsanti della barra degli strumenti provengono da un'immagine bitmap, che deve contenere un'immagine per ogni pulsante. Tutte le immagini devono essere le stesse dimensioni. il valore predefinito è 16 pixel di larghezza e 15 pixel. Le immagini devono essere affiancati nella bitmap.  
  
 Il `SetButtons` funzione accetta un puntatore a una matrice di ID di controllo e un numero intero che specifica il numero di elementi nella matrice. La funzione imposta sul valore dell'elemento corrispondente della matrice di ID di ogni pulsante e assegna ogni pulsante di un indice delle immagini, che specifica la posizione dell'immagine del pulsante nella bitmap. Se un elemento di matrice ha il valore **ID_SEPARATOR**, non viene assegnato alcun indice dell'immagine.  
  
 L'ordine delle immagini nella bitmap è in genere l'ordine in cui vengono disegnati sullo schermo, ma è possibile utilizzare il [utilizzando SetButtonInfo](#setbuttoninfo) funzione per modificare la relazione tra l'ordine di immagine e ordine di disegno.  
  
 Tutti i pulsanti in una barra degli strumenti sono le stesse dimensioni. Il valore predefinito è 24 x 22 pixel, in conformità con *linee guida sull'interfaccia di Windows per la progettazione Software*. Lo spazio aggiuntivo tra le dimensioni immagine e il pulsante viene utilizzato per formare un bordo intorno all'immagine.  
  
 Ogni pulsante ha un'immagine. I vari stati di pulsante e gli stili (premuto, verso l'alto, verso il basso, disabilitato, disabilitato verso il basso e indeterminato) vengono generati da quell'uno immagine. Sebbene le bitmap possono essere qualsiasi colore, è possibile ottenere risultati ottimali con le immagini in nero e delle gradazioni di grigio.  
  
> [!WARNING]
> `CToolBar` supporta mappe di bit con un massimo di 16 colori. Quando si carica un'immagine in un editor barra degli strumenti, Visual Studio automaticamente se necessario, converte l'immagine in una bitmap di 16 colori, e viene visualizzato un messaggio di avviso se l'immagine è stato convertito. Se si utilizza un'immagine con più di 16 colori (utilizzando un editor esterno per modificare l'immagine), l'applicazione potrebbe funzionare in modo imprevisto.  
  
 Per impostazione predefinita, i pulsanti della barra degli strumenti imitano pulsanti di comando. Tuttavia, i pulsanti della barra degli strumenti anche possono riprodurre i pulsanti della casella di controllo o pulsanti di opzione. Pulsanti della casella di controllo dispone di tre stati: selezionato, cancellati e indeterminato. Pulsanti di opzione presentano solo due stati: selezionata e deselezionata.  
  
 Per impostare un singolo pulsante o lo stile dei separatori senza che punta a una matrice, chiamare [GetButtonStyle](#getbuttonstyle) per recuperare lo stile e quindi chiamare [SetButtonStyle](#setbuttonstyle) anziché `SetButtons`. `SetButtonStyle` è molto utile quando si desidera modificare lo stile del pulsante in fase di esecuzione.  
  
 Per assegnare il testo visualizzato su un pulsante, chiamare [GetButtonText](#getbuttontext) per recuperare il testo da visualizzare sul pulsante e quindi chiamare [SetButtonText](#setbuttontext) per impostare il testo.  
  
 Per creare un pulsante della casella di controllo, assegnare lo stile **TBBS_CHECKBOX** o utilizzare un `CCmdUI` dell'oggetto `SetCheck` funzione membro in un `ON_UPDATE_COMMAND_UI` gestore. La chiamata `SetCheck` consente di trasformare un pulsante di comando in un pulsante della casella di controllo. Passare `SetCheck` l'argomento 0 1 non è selezionata, per selezionata o 2 per indeterminato.  
  
 Per creare un pulsante di opzione, chiamare un [CCmdUI](../../mfc/reference/ccmdui-class.md) dell'oggetto [SetRadio](../../mfc/reference/ccmdui-class.md#setradio) funzione membro da un `ON_UPDATE_COMMAND_UI` gestore. Passare `SetRadio` un argomento di 0 per diverso da zero per selezionata o deselezionata. Per un comportamento del gruppo di opzione si escludono a vicenda, è necessario `ON_UPDATE_COMMAND_UI` gestori per tutti i pulsanti nel gruppo.  
  
 Per ulteriori informazioni sull'utilizzo `CToolBar`, vedere l'articolo [implementazione della barra degli strumenti MFC](../../mfc/mfc-toolbar-implementation.md) e [Nota tecnica 31: barre di controllo](../../mfc/tn031-control-bars.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `CToolBar`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT. h  
  
##  <a name="commandtoindex"></a>  CToolBar::CommandToIndex  
 Questa funzione membro restituisce l'indice del primo pulsante barra degli strumenti, a partire dalla posizione 0, il cui ID di comando corrisponde `nIDFind`.  
  
```  
int CommandToIndex(UINT nIDFind) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIDFind`  
 ID di comando di un pulsante della barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del pulsante oppure -1 se nessun pulsante ha l'ID di comando specificato.  
  
##  <a name="create"></a>  CToolBar:: Create  
 Questa funzione membro crea una barra degli strumenti di Windows (una finestra figlio) e la associa il `CToolBar` oggetto.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_TOP,  
    UINT nID = AFX_IDW_TOOLBAR);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Puntatore alla finestra padre della barra degli strumenti.  
  
 `dwStyle`  
 Lo stile della barra degli strumenti. Stili barra degli strumenti aggiuntiva supportati sono:  
  
- `CBRS_TOP` Barra di controllo è nella parte superiore della finestra cornice.  
  
- `CBRS_BOTTOM` Barra di controllo è nella parte inferiore della finestra cornice.  
  
- `CBRS_NOALIGN` Barra di controllo non viene riposizionata quando l'elemento padre viene ridimensionato.  
  
- `CBRS_TOOLTIPS` Barra di controllo consente di visualizzare descrizioni comandi.  
  
- **CBRS_SIZE_DYNAMIC** barra di controllo è dinamica.  
  
- **CBRS_SIZE_FIXED** barra di controllo è fissa.  
  
- **CBRS_FLOATING** barra di controllo è mobile.  
  
- `CBRS_FLYBY` Barra di stato vengono visualizzate informazioni relative al pulsante.  
  
- **CBRS_HIDE_INPLACE** barra di controllo non viene visualizzata all'utente.  
  
 `nID`  
 ID di finestra figlio. della barra degli strumenti  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Inoltre, imposta l'altezza della barra degli strumenti su un valore predefinito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#179](../../mfc/codesnippet/cpp/ctoolbar-class_1.cpp)]  
  
##  <a name="createex"></a>  CToolBar:: CreateEx  
 Chiamare questa funzione per creare una barra degli strumenti di Windows (una finestra figlio) e associarlo con il `CToolBar` oggetto.  
  
```  
virtual BOOL CreateEx(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle = TBSTYLE_FLAT,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_ALIGN_TOP,  
    CRect rcBorders = CRect(
    0, 
    0, 
    0, 
    0), 
    UINT nID = AFX_IDW_TOOLBAR);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Puntatore alla finestra padre della barra degli strumenti.  
  
 `dwCtrlStyle`  
 Gli stili aggiuntivi per la creazione di incorporato [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) oggetto. Per impostazione predefinita, questo valore è impostato su **TBSTYLE_FLAT**. Per un elenco completo degli stili della barra degli strumenti, vedere `dwStyle`.  
  
 `dwStyle`  
 Lo stile della barra degli strumenti. Vedere [controllo barra degli strumenti e stili dei pulsanti](http://msdn.microsoft.com/library/windows/desktop/bb760439) in Windows SDK per un elenco di stili appropriati.  
  
 *rcBorders*  
 Oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che definisce la larghezza dei bordi della finestra degli strumenti. I bordi sono su 0,0,0,0, per impostazione predefinita, in tal modo risultante in una finestra degli strumenti con nessun bordo.  
  
 `nID`  
 ID di finestra figlio. della barra degli strumenti  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Inoltre, imposta l'altezza della barra degli strumenti su un valore predefinito.  
  
 Utilizzare `CreateEx`, invece di [crea](#create), quando alcuni stili devono essere presenti durante la creazione del controllo indicatore di strumento incorporato. Ad esempio, impostare `dwCtrlStyle` al **TBSTYLE_FLAT &#124; TBSTYLE_TRANSPARENT** per creare una barra degli strumenti che è simile alle barre degli strumenti di Internet Explorer 4.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#180](../../mfc/codesnippet/cpp/ctoolbar-class_2.cpp)]  
  
##  <a name="ctoolbar"></a>  CToolBar::CToolBar  
 Questa funzione membro costruisce una `CToolBar` dell'oggetto e imposta le dimensioni predefinite.  
  
```  
CToolBar();
```  
  
### <a name="remarks"></a>Note  
 Chiamare il [crea](#create) funzione membro per creare una finestra degli strumenti.  
  
##  <a name="getbuttoninfo"></a>  CToolBar::GetButtonInfo  
 Questa funzione membro recupera l'ID di controllo, stile e l'indice dell'immagine del pulsante della barra degli strumenti o separatore nel percorso specificato da *nIndex.*  
  
```  
void GetButtonInfo(
    int nIndex,  
    UINT& nID,  
    UINT& nStyle,  
    int& iImage) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice del pulsante della barra degli strumenti o le cui informazioni sono necessario recuperare separatore.  
  
 `nID`  
 Riferimento a un **UINT** impostato per l'ID di comando del pulsante.  
  
 `nStyle`  
 Riferimento a un **UINT** impostato lo stile del pulsante.  
  
 `iImage`  
 Riferimento a un intero che è impostato per l'indice dell'immagine del pulsante della bitmap.  
  
### <a name="remarks"></a>Note  
 Tali valori vengono assegnati alle variabili a cui fa riferimento `nID`, `nStyle`, e `iImage`. L'indice dell'immagine è la posizione dell'immagine della bitmap che contiene le immagini per tutti i pulsanti della barra degli strumenti. La prima immagine è nella posizione 0.  
  
 Se `nIndex` specifica un separatore, `iImage` è impostata la larghezza del separatore in pixel.  
  
##  <a name="getbuttonstyle"></a>  CToolBar:: GetButtonStyle  
 Chiamare questa funzione membro per recuperare lo stile di un pulsante o un separatore sulla barra degli strumenti.  
  
```  
UINT GetButtonStyle(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice dello stile di pulsante o un separatore di barra degli strumenti da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Lo stile del pulsante o separatore specificato da `nIndex`.  
  
### <a name="remarks"></a>Note  
 Stile del pulsante determina l'aspetto del pulsante e la modalità di risposta all'input dell'utente. Vedere [SetButtonStyle](#setbuttonstyle) per esempi di stili dei pulsanti.  
  
##  <a name="getbuttontext"></a>  CToolBar::GetButtonText  
 Chiamare questa funzione membro per recuperare il testo visualizzato su un pulsante.  
  
```  
CString GetButtonText(int nIndex) const;  
  
void GetButtonText(
    int nIndex,  
    CString& rString) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice del testo da recuperare.  
  
 `rString`  
 Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenenti il testo da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` oggetto contenente il testo del pulsante.  
  
### <a name="remarks"></a>Note  
 La seconda forma di questo membro funzione compila un `CString` oggetto con il testo della stringa.  
  
##  <a name="getitemid"></a>  CToolBar::GetItemID  
 Questa funzione membro restituisce l'ID di comando del pulsante o separatore specificato da `nIndex`.  
  
```  
UINT GetItemID(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice dell'elemento il cui ID è da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di comando del pulsante o separatore specificato da `nIndex`.  
  
### <a name="remarks"></a>Note  
 Restituiscono separatori **ID_SEPARATOR**.  
  
##  <a name="getitemrect"></a>  CToolBar::GetItemRect  
 Questa funzione membro inserisce la `RECT` il cui indirizzo è contenuto nella struttura `lpRect` con le coordinate del pulsante o separatore specificato da `nIndex`.  
  
```  
virtual void GetItemRect(
    int nIndex,  
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice dell'elemento (pulsante o separatore) devono essere recuperate con le coordinate del rettangolo.  
  
 `lpRect`  
 Indirizzo del [RECT](../../mfc/reference/rect-structure1.md) struttura che conterrà le coordinate dell'elemento.  
  
### <a name="remarks"></a>Note  
 Le coordinate sono espresse in pixel rispetto all'angolo superiore sinistro della barra degli strumenti.  
  
 Utilizzare `GetItemRect` per ottenere le coordinate di un separatore di cui si desidera sostituire con una casella combinata o un altro controllo.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CToolBar::SetSizes](#setsizes).  
  
##  <a name="gettoolbarctrl"></a>  CToolBar:: GetToolBarCtrl  
 Questa funzione membro consente l'accesso diretto al controllo sottostante comune.  
  
```  
CToolBarCtrl& GetToolBarCtrl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento a un oggetto `CToolBarCtrl`.  
  
### <a name="remarks"></a>Note  
 Utilizzare `GetToolBarCtrl` per sfruttare le funzionalità di controllo comune barra degli strumenti Windows e per sfruttare i vantaggi del supporto [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) offre per la personalizzazione della barra degli strumenti.  
  
 Per ulteriori informazioni sull'utilizzo dei controlli comuni, vedere l'articolo [controlli](../../mfc/controls-mfc.md) e [controlli comuni](http://msdn.microsoft.com/library/windows/desktop/bb775493) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocViewSDI#15](../../mfc/codesnippet/cpp/ctoolbar-class_3.cpp)]  
  
##  <a name="loadbitmap"></a>  CToolBar::LoadBitmap  
 Chiamare questa funzione membro per caricare la bitmap specificata da `lpszResourceName` o `nIDResource`.  
  
```  
BOOL LoadBitmap(LPCTSTR lpszResourceName);  
BOOL LoadBitmap(UINT nIDResource);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszResourceName`  
 Puntatore al nome della risorsa della bitmap da caricare.  
  
 `nIDResource`  
 ID risorsa della bitmap da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La bitmap deve contenere un'immagine per ogni pulsante della barra degli strumenti. Se le immagini non hanno le dimensioni standard (16 pixel di larghezza e 15 pixel), chiamata [SetSizes](#setsizes) per impostare le dimensioni dei pulsanti e le immagini.  
  
> [!WARNING]
> `CToolBar` supporta mappe di bit con un massimo di 16 colori. Quando si carica un'immagine in un editor barra degli strumenti, Visual Studio automaticamente se necessario, converte l'immagine in una bitmap di 16 colori, e viene visualizzato un messaggio di avviso se l'immagine è stato convertito. Se si utilizza un'immagine con più di 16 colori (utilizzando un editor esterno per modificare l'immagine), l'applicazione potrebbe funzionare in modo imprevisto.  
  
##  <a name="loadtoolbar"></a>  CToolBar::LoadToolBar  
 Chiamare questa funzione membro per caricare la barra degli strumenti specificata da `lpszResourceName` o `nIDResource`.  
  
```  
BOOL LoadToolBar(LPCTSTR lpszResourceName);  
BOOL LoadToolBar(UINT nIDResource);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszResourceName`  
 Puntatore al nome della risorsa della barra degli strumenti da caricare.  
  
 `nIDResource`  
 ID di risorsa della barra degli strumenti da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Vedere [editor barra degli strumenti](../../windows/toolbar-editor.md) in per altre informazioni sulla creazione di una risorsa barra degli strumenti.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CToolBar:: CreateEx](#createex).  
  
##  <a name="setbitmap"></a>  CToolBar::SetBitmap  
 Chiamare questa funzione membro per impostare l'immagine bitmap della barra degli strumenti.  
  
```  
BOOL SetBitmap(HBITMAP hbmImageWell);
```  
  
### <a name="parameters"></a>Parametri  
 *hbmImageWell*  
 Handle di un'immagine bitmap associata a una barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Ad esempio, chiamare `SetBitmap` per modificare l'immagine bitmap dopo che l'utente esegue un'azione in un documento che modifica l'azione di un pulsante.  
  
##  <a name="setbuttoninfo"></a>  CToolBar::  
 Chiamare questa funzione membro per impostare l'ID di comando, stile e il numero di immagine del pulsante.  
  
```  
void SetButtonInfo(
    int nIndex,  
    UINT nID,  
    UINT nStyle,  
    int iImage);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero del pulsante o separatore per cui sono necessario impostare le informazioni.  
  
 `nID`  
 Il valore su cui è impostata l'ID di comando del pulsante.  
  
 `nStyle`  
 Lo stile del pulsante nuovo. Sono supportati gli stili dei pulsanti seguenti:  
  
- **TBBS_BUTTON** pulsante di comando Standard (impostazione predefinita)  
  
- **TBBS_SEPARATOR** separatore  
  
- **TBBS_CHECKBOX** pulsante casella di controllo automaticamente  
  
- **TBBS_GROUP** contrassegna l'inizio di un gruppo di pulsanti  
  
- **TBBS_CHECKGROUP** contrassegna l'inizio di un gruppo di pulsanti della casella di controllo  
  
- **TBBS_DROPDOWN** crea un pulsante di menu a discesa elenco.  
  
- **TBBS_AUTOSIZE** verrà calcolata la larghezza del pulsante in base il testo del pulsante e non sulle dimensioni dell'immagine.  
  
- **TBBS_NOPREFIX** il testo del pulsante non avrà un prefisso di tasti di scelta rapida associato.  
  
 `iImage`  
 Nuovo indice per l'icona del pulsante della bitmap.  
  
### <a name="remarks"></a>Note  
 Per i separatori, cui è applicato lo stile **TBBS_SEPARATOR**, la funzione imposta la larghezza del separatore in pixel in base al valore archiviato nella `iImage`.  
  
> [!NOTE]
>  È inoltre possibile impostare gli stati dei pulsanti utilizzando la `nStyle` parametro; tuttavia, poiché gli stati dei pulsanti sono controllati dal [ON_UPDATE_COMMAND_UI](message-map-macros-mfc.md#on_update_command_ui) gestore, qualsiasi stato impostato utilizzando `SetButtonInfo` andranno perse durante la successiva inattivo l'elaborazione. Vedere [come oggetti dell'interfaccia utente aggiornamento](../../mfc/how-to-update-user-interface-objects.md) e [TN031: barre di controllo](../../mfc/tn031-control-bars.md) per ulteriori informazioni.  
  
 Per informazioni sui pulsanti e le immagini bitmap, vedere il [CToolBar](../../mfc/reference/ctoolbar-class.md) panoramica e [CToolBar::LoadBitmap](#loadbitmap).  
  
##  <a name="setbuttons"></a>  CToolBar::SetButtons  
 Questa funzione membro imposta l'ID di comando del pulsante di ogni barra degli strumenti al valore specificato dall'elemento corrispondente della matrice `lpIDArray`.  
  
```  
BOOL SetButtons(
    const UINT* lpIDArray,  
    int nIDCount);
```  
  
### <a name="parameters"></a>Parametri  
 `lpIDArray`  
 Puntatore a una matrice di ID di comando. Può essere **NULL** allocare pulsanti vuoti.  
  
 `nIDCount`  
 Numero di elementi nella matrice a cui puntava `lpIDArray`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se un elemento della matrice contiene il valore **ID_SEPARATOR**, viene creato un separatore nella posizione corrispondente della barra degli strumenti. La funzione imposta anche lo stile di ogni pulsante **TBBS_BUTTON** e lo stile del separatore ogni per **TBBS_SEPARATOR**e assegna un indice delle immagini a ogni pulsante. L'indice dell'immagine specifica la posizione dell'immagine del pulsante della bitmap.  
  
 Non è necessario perché questa funzione non assegna gli indici di immagine per il separatore dell'account per il separatore della bitmap. Se la barra degli strumenti è disponibili pulsanti in corrispondenza delle posizioni 0, 1, 3 e un separatore nella posizione 2, le immagini in posizioni 0, 1 e 2 la bitmap verranno assegnati ai pulsanti in corrispondenza delle posizioni 0, 1 e 3, rispettivamente.  
  
 Se `lpIDArray` è **NULL**, questa funzione consente di allocare spazio per il numero di elementi specificato da `nIDCount`. Utilizzare [utilizzando SetButtonInfo](#setbuttoninfo) per impostare gli attributi di ogni elemento.  
  
##  <a name="setbuttonstyle"></a>  CToolBar::SetButtonStyle  
 Chiamare questa funzione membro per impostare lo stile di un pulsante o un separatore o per raggruppare i pulsanti.  
  
```  
void SetButtonStyle(
    int nIndex,  
    UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice del pulsante o le cui informazioni sono necessario impostare separatore.  
  
 `nStyle`  
 Lo stile del pulsante. Sono supportati gli stili dei pulsanti seguenti:  
  
- **TBBS_BUTTON** pulsante di comando Standard (impostazione predefinita)  
  
- **TBBS_SEPARATOR** separatore  
  
- **TBBS_CHECKBOX** pulsante casella di controllo automaticamente  
  
- **TBBS_GROUP** contrassegna l'inizio di un gruppo di pulsanti  
  
- **TBBS_CHECKGROUP** contrassegna l'inizio di un gruppo di pulsanti della casella di controllo  
  
- **TBBS_DROPDOWN** crea un pulsante di menu a discesa elenco  
  
- **TBBS_AUTOSIZE** verrà calcolata la larghezza del pulsante in base il testo del pulsante e non sulle dimensioni dell'immagine  
  
- **TBBS_NOPREFIX** il testo del pulsante non avrà un prefisso di tasti di scelta rapida associato  
  
### <a name="remarks"></a>Note  
 Stile del pulsante determina l'aspetto del pulsante e la modalità di risposta all'input dell'utente.  
  
 Prima di chiamare `SetButtonStyle`, chiamare il [GetButtonStyle](#getbuttonstyle) funzione membro per recuperare lo stile del pulsante o un separatore.  
  
> [!NOTE]
>  È inoltre possibile impostare gli stati dei pulsanti utilizzando la `nStyle` parametro; tuttavia, poiché gli stati dei pulsanti sono controllati dal [ON_UPDATE_COMMAND_UI](message-map-macros-mfc.md#on_update_command_ui) gestore, qualsiasi stato impostato utilizzando `SetButtonStyle` andranno perse durante la successiva inattivo l'elaborazione. Vedere [come oggetti dell'interfaccia utente aggiornamento](../../mfc/how-to-update-user-interface-objects.md) e [TN031: barre di controllo](../../mfc/tn031-control-bars.md) per ulteriori informazioni.  
  
##  <a name="setbuttontext"></a>  CToolBar::SetButtonText  
 Chiamare questa funzione per impostare il testo su un pulsante.  
  
```  
BOOL SetButtonText(
    int nIndex,  
    LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice del pulsante il cui testo è necessario impostare.  
  
 `lpszText`  
 Punta al testo deve essere impostato su un pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CToolBar:: GetToolBarCtrl](#gettoolbarctrl).  
  
##  <a name="setheight"></a>  CToolBar::SetHeight  
 Questa funzione membro imposta l'altezza della barra degli strumenti per il valore, in pixel, specificato in `cyHeight`.  
  
```  
void SetHeight(int cyHeight);
```  
  
### <a name="parameters"></a>Parametri  
 `cyHeight`  
 L'altezza in pixel della barra degli strumenti.  
  
### <a name="remarks"></a>Note  
 Dopo la chiamata [SetSizes](#setsizes), utilizzare questa funzione membro per sostituire l'altezza della barra degli strumenti standard. Se l'altezza è troppo piccola, verranno ritagliati i pulsanti nella parte inferiore.  
  
 Se questa funzione non viene chiamata, il framework utilizza le dimensioni del pulsante per determinare l'altezza della barra degli strumenti.  
  
##  <a name="setsizes"></a>  CToolBar::SetSizes  
 Chiamare questa funzione membro per impostare i pulsanti della barra degli strumenti per la dimensione, in pixel, specificato in *sizeButton*.  
  
```  
void SetSizes(
    SIZE sizeButton,  
    SIZE sizeImage);
```  
  
### <a name="parameters"></a>Parametri  
 *sizeButton*  
 Le dimensioni in pixel di ogni pulsante.  
  
 `sizeImage`  
 Le dimensioni in pixel, di ogni immagine.  
  
### <a name="remarks"></a>Note  
 Il `sizeImage` parametro deve contenere le dimensioni, in pixel, delle immagini bitmap della barra degli strumenti. Le dimensioni in *sizeButton* deve essere sufficiente per contenere l'immagine più 7 aggiuntivi in larghezza e 6 pixel aggiuntivi in altezza. La funzione imposta anche l'altezza della barra degli strumenti per i pulsanti.  
  
 Chiamare questa funzione membro solo per le barre degli strumenti che non seguono *linee guida sull'interfaccia di Windows per la progettazione Software* indicazioni per le dimensioni di pulsante e l'immagine.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCListView#8](../../atl/reference/codesnippet/cpp/ctoolbar-class_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC viene](../../visual-cpp-samples.md)   
 [DLGCBR32 esempio MFC](../../visual-cpp-samples.md)   
 [Esempio MFC DOCKTOOL](../../visual-cpp-samples.md)   
 [CControlBar (classe)](../../mfc/reference/ccontrolbar-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CToolBarCtrl (classe)](../../mfc/reference/ctoolbarctrl-class.md)   
 [Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)

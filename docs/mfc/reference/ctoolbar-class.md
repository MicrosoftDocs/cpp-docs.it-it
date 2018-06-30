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
ms.openlocfilehash: 2d6dc2c196e40daf4aa793f6643da95206b12be0
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37123136"
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
|[CToolBar:: GetToolBarCtrl](#gettoolbarctrl)|Consente l'accesso diretto al controllo comune sottostante.|  
|[CToolBar::LoadBitmap](#loadbitmap)|Carica la mappa di bit contenente immagini pulsante bitmap.|  
|[CToolBar::LoadToolBar](#loadtoolbar)|Carica una risorsa barra degli strumenti creata con l'editor di risorse.|  
|[CToolBar::SetBitmap](#setbitmap)|Imposta un'immagine bitmap.|  
|[CToolBar::](#setbuttoninfo)|Imposta l'ID, stile e il numero di immagine di un pulsante.|  
|[CToolBar::SetButtons](#setbuttons)|Imposta pulsante stili e un indice delle immagini di pulsante della bitmap.|  
|[CToolBar::SetButtonStyle](#setbuttonstyle)|Imposta lo stile per un pulsante.|  
|[CToolBar::SetButtonText](#setbuttontext)|Imposta il testo che verrà visualizzato su un pulsante.|  
|[CToolBar::SetHeight](#setheight)|Imposta l'altezza della barra degli strumenti.|  
|[CToolBar::SetSizes](#setsizes)|Imposta le dimensioni dei pulsanti e le bitmap.|  
  
## <a name="remarks"></a>Note  
 I pulsanti possono fungere da pulsanti di comando, i pulsanti della casella di controllo o pulsanti di opzione. `CToolBar` gli oggetti sono in genere incorporati membri di oggetti finestra cornice derivati dalla classe [CFrameWnd](../../mfc/reference/cframewnd-class.md) oppure [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md).  
  
 [CToolBar:: GetToolBarCtrl](#gettoolbarctrl), una funzione membro nuovo alla versione 4.0 di MFC, consente di sfruttare i vantaggi del supporto di controlli comuni di Windows per la personalizzazione della barra degli strumenti e funzionalità aggiuntive. `CToolBar` funzioni membro consentono la maggior parte delle funzionalità dei controlli comuni di Windows; Tuttavia, quando si chiama `GetToolBarCtrl`, è possibile assegnare delle barre degli strumenti ulteriormente le caratteristiche delle barre degli strumenti Windows 95/98. Quando si chiama `GetToolBarCtrl`, verrà restituito un riferimento a un `CToolBarCtrl` oggetto. Vedere [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) per ulteriori informazioni sulla progettazione di barre degli strumenti usando i controlli comuni di Windows. Per informazioni generali sui controlli comuni, vedere [controlli comuni](http://msdn.microsoft.com/library/windows/desktop/bb775493) in Windows SDK.  
  
 Visual C++ fornisce due metodi per creare una barra degli strumenti. Per creare una risorsa barra degli strumenti tramite l'Editor di risorse, seguire questi passaggi:  
  
1.  Creare una risorsa barra degli strumenti.  
  
2.  Costruire l'oggetto `CToolBar`.  
  
3.  Chiamare il [Create](#create) (o [CreateEx](#createex)) funzione per creare la barra degli strumenti di Windows e associarlo al `CToolBar` oggetto.  
  
4.  Chiamare [LoadToolBar](#loadtoolbar) caricare la risorsa barra degli strumenti.  
  
 In caso contrario, seguire questi passaggi:  
  
1.  Costruire l'oggetto `CToolBar`.  
  
2.  Chiamare il [Create](#create) (o [CreateEx](#createex)) funzione per creare la barra degli strumenti di Windows e associarlo al `CToolBar` oggetto.  
  
3.  Chiamare [LoadBitmap](#loadbitmap) per caricare la mappa di bit che contiene le immagini dei pulsanti della barra degli strumenti.  
  
4.  Chiamare [SetButtons](#setbuttons) per impostare lo stile del pulsante e associare ogni pulsante con un'immagine nella bitmap.  
  
 Tutte le immagini dei pulsanti della barra degli strumenti provengono da un'immagine bitmap, che deve contenere un'immagine per ogni pulsante. Tutte le immagini devono essere le stesse dimensioni; il valore predefinito è 16 pixel di larghezza e 15 pixel di altezza. Le immagini devono essere affiancati nella bitmap.  
  
 Il `SetButtons` funzione accetta un puntatore a una matrice di ID di controllo e un numero intero che specifica il numero di elementi nella matrice. La funzione imposta sul valore dell'elemento corrispondente della matrice di ID di ogni pulsante e assegna ogni pulsante di un indice di immagine, che specifica la posizione dell'immagine del pulsante nella bitmap. Se un elemento di matrice ha il valore ID_SEPARATOR, non viene assegnato alcun indice dell'immagine.  
  
 L'ordine delle immagini nella bitmap è in genere l'ordine in cui vengono disegnati sullo schermo, ma è possibile usare il [utilizzando SetButtonInfo](#setbuttoninfo) funzione per modificare la relazione tra ordinazione di immagine e ordine di disegno.  
  
 Tutti i pulsanti in una barra degli strumenti sono le stesse dimensioni. Il valore predefinito è 24 x 22 pixel, in base a *linee guida sull'interfaccia di Windows per la progettazione Software*. Qualsiasi spazio aggiuntivo tra le dimensioni immagine e il pulsante viene usato in modo da formare un bordo intorno all'immagine.  
  
 Ogni pulsante ha un'immagine. I vari pulsante stati e stili (premuto, verso l'alto, verso il basso, disabilitato, disabilitato verso il basso e indeterminato) vengono generati da quell'uno immagine. Anche se le bitmap possono essere qualsiasi colore, è possibile ottenere risultati ottimali con le immagini in nero e gradazioni di grigio.  
  
> [!WARNING]
> `CToolBar` supporta mappe di bit con un massimo di 16 colori. Quando si carica un'immagine in un editor barra degli strumenti, Visual Studio automaticamente Converte l'immagine in una bitmap di 16 colori, se necessario e viene visualizzato un messaggio di avviso se l'immagine è stato convertito. Se si utilizza un'immagine con più di 16 colori (utilizzando un editor esterno per modificare l'immagine), l'applicazione potrebbe funzionare in modo imprevisto.  
  
 Pulsanti della barra degli strumenti imitano pulsanti di comando per impostazione predefinita. Tuttavia, i pulsanti della barra degli strumenti anche possono riprodurre i pulsanti della casella di controllo o pulsanti di opzione. Pulsanti della casella di controllo avere tre stati: selezionato, deselezionata e indeterminato. Pulsanti di opzione presentano solo due stati: archiviato e cancellato.  
  
 Per impostare un pulsante singoli o lo stile dei separatori senza che punta a una matrice, chiamare [GetButtonStyle](#getbuttonstyle) per recuperare lo stile e quindi chiamare [SetButtonStyle](#setbuttonstyle) anziché `SetButtons`. `SetButtonStyle` è molto utile quando si desidera modificare lo stile del pulsante in fase di esecuzione.  
  
 Per assegnare il testo venga visualizzata su un pulsante, chiamare [GetButtonText](#getbuttontext) per recuperare il testo da visualizzare sul pulsante e quindi chiamare [SetButtonText](#setbuttontext) per impostare il testo.  
  
 Per creare un pulsante della casella di controllo, assegnare lo stile TBBS_CHECKBOX o utilizzare un `CCmdUI` dell'oggetto `SetCheck` funzione membro in un gestore ON_UPDATE_COMMAND_UI. La chiamata `SetCheck` consente di trasformare un pulsante di comando in un pulsante della casella di controllo. Passare `SetCheck` l'argomento 0 1 non è selezionata, per selezionata o 2 per indeterminato.  
  
 Per creare un pulsante di opzione, chiamare un [CCmdUI](../../mfc/reference/ccmdui-class.md) dell'oggetto [SetRadio](../../mfc/reference/ccmdui-class.md#setradio) funzione membro da un gestore ON_UPDATE_COMMAND_UI. Passare `SetRadio` l'argomento 0 per diverso da zero per selezionata o deselezionata. Per un comportamento di un gruppo di opzione si escludono a vicenda, è necessario gestori ON_UPDATE_COMMAND_UI per tutti i pulsanti nel gruppo.  
  
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
 *nIDFind*  
 ID di comando di un pulsante della barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del pulsante, oppure -1 se nessun pulsante ha l'ID di comando specificato.  
  
##  <a name="create"></a>  CToolBar:: Create  
 Questa funzione membro crea una barra degli strumenti di Windows (una finestra figlio) e associa il `CToolBar` oggetto.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_TOP,  
    UINT nID = AFX_IDW_TOOLBAR);
```  
  
### <a name="parameters"></a>Parametri  
 *pParentWnd*  
 Puntatore alla finestra padre della barra degli strumenti.  
  
 *dwStyle*  
 Lo stile della barra degli strumenti. Gli stili aggiuntivi sulla barra degli strumenti supportati sono:  
  
- Barra di controllo CBRS_TOP è nella parte superiore della finestra cornice.  
  
- Barra di controllo CBRS_BOTTOM è nella parte inferiore della finestra cornice.  
  
- Barra di controllo CBRS_NOALIGN non viene riposizionata quando l'elemento padre viene ridimensionato.  
  
- Barra di controllo CBRS_TOOLTIPS consente di visualizzare descrizioni comandi.  
  
- Cbrs_size_dynamic la barra è dinamica.  
  
- Cbrs_size_fixed la barra è fissa.  
  
- Barra di controllo CBRS_FLOATING è mobile.  
  
- Barra di stato CBRS_FLYBY Visualizza le informazioni relative al pulsante.  
  
- Barra di controllo CBRS_HIDE_INPLACE non viene visualizzata all'utente.  
  
 *nID*  
 ID di finestra figlio. della barra degli strumenti  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Imposta inoltre l'altezza della barra degli strumenti su un valore predefinito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#179](../../mfc/codesnippet/cpp/ctoolbar-class_1.cpp)]  
  
##  <a name="createex"></a>  CToolBar:: CreateEx  
 Chiamare questa funzione per creare una barra degli strumenti di Windows (una finestra figlio) e associare quest'ultimo con la `CToolBar` oggetto.  
  
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
 *pParentWnd*  
 Puntatore alla finestra padre della barra degli strumenti.  
  
 *dwCtrlStyle*  
 Gli stili aggiuntivi per la creazione dell'incorporato [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) oggetto. Per impostazione predefinita, questo valore è impostato su TBSTYLE_FLAT. Per un elenco completo degli stili della barra degli strumenti, vedere *dwStyle*.  
  
 *dwStyle*  
 Lo stile della barra degli strumenti. Vedere [Toolbar (controllo) e stili dei pulsanti](http://msdn.microsoft.com/library/windows/desktop/bb760439) in Windows SDK per un elenco di stili appropriati.  
  
 *rcBorders*  
 Un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che definisce la larghezza dei bordi della finestra degli strumenti. I bordi sono su 0,0,0,0 per impostazione predefinita, in tal modo risultanti in una finestra degli strumenti con nessun bordo.  
  
 *nID*  
 ID di finestra figlio. della barra degli strumenti  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Imposta inoltre l'altezza della barra degli strumenti su un valore predefinito.  
  
 Uso `CreateEx`, anziché [crea](#create), quando alcuni stili devono essere presenti durante la creazione del controllo barra degli strumenti incorporata. Ad esempio, impostare *dwCtrlStyle* a TBSTYLE_FLAT &#124; TBSTYLE_TRANSPARENT per creare una barra degli strumenti che è simile alle barre degli strumenti di Internet Explorer 4.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#180](../../mfc/codesnippet/cpp/ctoolbar-class_2.cpp)]  
  
##  <a name="ctoolbar"></a>  CToolBar::CToolBar  
 Questa funzione membro costruisce una `CToolBar` dell'oggetto e imposta le dimensioni predefinite.  
  
```  
CToolBar();
```  
  
### <a name="remarks"></a>Note  
 Chiamare il [crea](#create) funzione membro per creare la finestra degli strumenti.  
  
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
 *nIndex*  
 Indice del pulsante della barra degli strumenti o le cui informazioni sono necessario recuperare separatore.  
  
 *nID*  
 Riferimento a un UINT impostata per l'ID di comando del pulsante.  
  
 *nStyle*  
 Riferimento a un UINT impostato lo stile del pulsante.  
  
 *iImage*  
 Riferimento a un intero che è impostato per l'indice dell'immagine del pulsante della bitmap.  
  
### <a name="remarks"></a>Note  
 Tali valori vengono assegnati alle variabili di cui fa riferimento *nID*, *nStyle*, e *iImage*. L'indice dell'immagine è la posizione dell'immagine della bitmap che contiene le immagini per tutti i pulsanti della barra degli strumenti. La prima immagine è nella posizione 0.  
  
 Se *nIndex* specifica un separatore *iImage* è impostato su larghezza del separatore in pixel.  
  
##  <a name="getbuttonstyle"></a>  CToolBar:: GetButtonStyle  
 Chiamare questa funzione membro per recuperare lo stile di un pulsante o un separatore sulla barra degli strumenti.  
  
```  
UINT GetButtonStyle(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 L'indice dello stile della barra degli strumenti pulsante o separatore da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Lo stile del pulsante o separatore specificato da *nIndex*.  
  
### <a name="remarks"></a>Note  
 Stile del pulsante determina come viene visualizzato il pulsante e la modalità di risposta all'input dell'utente. Vedere [SetButtonStyle](#setbuttonstyle) per esempi di stili dei pulsanti.  
  
##  <a name="getbuttontext"></a>  CToolBar::GetButtonText  
 Chiamare questa funzione membro per recuperare il testo visualizzato su un pulsante.  
  
```  
CString GetButtonText(int nIndex) const;  
  
void GetButtonText(
    int nIndex,  
    CString& rString) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice del testo da recuperare.  
  
 *rString*  
 Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenenti il testo da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` oggetto contenente il testo del pulsante.  
  
### <a name="remarks"></a>Note  
 La seconda forma di questo membro funzione riempimenti un `CString` oggetto con il testo della stringa.  
  
##  <a name="getitemid"></a>  CToolBar::GetItemID  
 Questa funzione membro restituisce l'ID di comando del pulsante o separatore specificato da *nIndex*.  
  
```  
UINT GetItemID(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice dell'elemento il cui ID è da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di comando del pulsante o separatore specificato da *nIndex*.  
  
### <a name="remarks"></a>Note  
 Separatori restituiscono ID_SEPARATOR.  
  
##  <a name="getitemrect"></a>  CToolBar::GetItemRect  
 Questa funzione membro inserisce la `RECT` struttura il cui indirizzo è inclusa nello *lpRect* con le coordinate del pulsante o separatore specificato da *nIndex*.  
  
```  
virtual void GetItemRect(
    int nIndex,  
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice dell'elemento (pulsante o separatore) devono essere recuperate le cui coordinate rettangolo.  
  
 *lpRect*  
 Indirizzo della [RECT](../../mfc/reference/rect-structure1.md) struttura che conterrà le coordinate dell'elemento.  
  
### <a name="remarks"></a>Note  
 Le coordinate sono espresse in pixel rispetto all'angolo superiore sinistro della barra degli strumenti.  
  
 Utilizzare `GetItemRect` per ottenere le coordinate di un separatore di cui si desidera sostituire con una casella combinata o un altro controllo.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CToolBar::SetSizes](#setsizes).  
  
##  <a name="gettoolbarctrl"></a>  CToolBar:: GetToolBarCtrl  
 Questa funzione membro consente l'accesso diretto al controllo comune sottostante.  
  
```  
CToolBarCtrl& GetToolBarCtrl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento a un oggetto `CToolBarCtrl`.  
  
### <a name="remarks"></a>Note  
 Uso `GetToolBarCtrl` per sfruttare le funzionalità di controllo comune barra degli strumenti di Windows e per sfruttare i vantaggi del supporto [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) fornisce per la personalizzazione della barra degli strumenti.  
  
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
 *lpszResourceName*  
 Puntatore al nome della risorsa della bitmap da caricare.  
  
 *nIDResource*  
 ID risorsa della bitmap da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La bitmap deve contenere un'immagine per ogni pulsante sulla barra degli strumenti. Se le immagini non hanno dimensioni standard (16 pixel di larghezza e 15 pixel), chiamata [SetSizes](#setsizes) per impostare le dimensioni dei pulsanti e le immagini.  
  
> [!WARNING]
> `CToolBar` supporta mappe di bit con un massimo di 16 colori. Quando si carica un'immagine in un editor barra degli strumenti, Visual Studio automaticamente Converte l'immagine in una bitmap di 16 colori, se necessario e viene visualizzato un messaggio di avviso se l'immagine è stato convertito. Se si utilizza un'immagine con più di 16 colori (utilizzando un editor esterno per modificare l'immagine), l'applicazione potrebbe funzionare in modo imprevisto.  
  
##  <a name="loadtoolbar"></a>  CToolBar::LoadToolBar  
 Chiamare questa funzione membro per caricare la barra degli strumenti specificato da *lpszResourceName* oppure *nIDResource*.  
  
```  
BOOL LoadToolBar(LPCTSTR lpszResourceName);  
BOOL LoadToolBar(UINT nIDResource);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszResourceName*  
 Puntatore al nome della risorsa della barra degli strumenti deve essere caricata.  
  
 *nIDResource*  
 ID risorsa della barra degli strumenti deve essere caricata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Vedere [editor barra degli strumenti](../../windows/toolbar-editor.md) in per altre informazioni sulla creazione di una risorsa barra degli strumenti.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CToolBar:: CreateEx](#createex).  
  
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
 Ad esempio, chiamare `SetBitmap` per impostare l'immagine bitmap dopo che l'utente esegue un'azione su un documento che modifica l'azione di un pulsante.  
  
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
 *nIndex*  
 Indice in base zero del pulsante o separatore per cui sono necessario impostare le informazioni.  
  
 *nID*  
 Il valore su cui è impostata l'ID di comando del pulsante.  
  
 *nStyle*  
 Lo stile del pulsante nuovo. Sono supportati gli stili dei pulsanti seguenti:  
  
- Pulsante di comando Standard TBBS_BUTTON (impostazione predefinita)  
  
- Separatore TBBS_SEPARATOR  
  
- Pulsante di casella di controllo TBBS_CHECKBOX automaticamente  
  
- TBBS_GROUP contrassegna l'inizio di un gruppo di pulsanti  
  
- TBBS_CHECKGROUP contrassegna l'inizio di un gruppo di pulsanti della casella di controllo  
  
- TBBS_DROPDOWN crea un pulsante di menu a discesa elenco.  
  
- TBBS_AUTOSIZE verrà calcolata la larghezza del pulsante in base al testo del pulsante, non alle dimensioni dell'immagine.  
  
- TBBS_NOPREFIX il testo del pulsante non avrà un prefisso di tasti di scelta rapida associato.  
  
 *iImage*  
 Nuovo indice per l'icona del pulsante della bitmap.  
  
### <a name="remarks"></a>Note  
 Per i separatori con lo stile TBBS_SEPARATOR, la funzione imposta la larghezza del separatore in pixel in base al valore archiviato nella *iImage*.  
  
> [!NOTE]
>  È inoltre possibile impostare gli stati dei pulsanti utilizzando la *nStyle* parametro; tuttavia, poiché gli stati dei pulsanti sono controllati dal [ON_UPDATE_COMMAND_UI](message-map-macros-mfc.md#on_update_command_ui) gestore, qualsiasi stato impostato con `SetButtonInfo` andranno perse durante la successiva elaborazione di inattività. Vedere [come gli oggetti dell'interfaccia utente di aggiornamento](../../mfc/how-to-update-user-interface-objects.md) e [TN031: barre di controllo](../../mfc/tn031-control-bars.md) per altre informazioni.  
  
 Per informazioni sui pulsanti e le immagini bitmap, vedere la [CToolBar](../../mfc/reference/ctoolbar-class.md) panoramica e [CToolBar::LoadBitmap](#loadbitmap).  
  
##  <a name="setbuttons"></a>  CToolBar::SetButtons  
 Questa funzione membro imposta sul valore specificato dall'elemento corrispondente della matrice di ID di comando del pulsante ogni barra degli strumenti *lpIDArray*.  
  
```  
BOOL SetButtons(
    const UINT* lpIDArray,  
    int nIDCount);
```  
  
### <a name="parameters"></a>Parametri  
 *lpIDArray*  
 Puntatore a una matrice di ID di comando. Può essere NULL per allocare i pulsanti vuoti.  
  
 *nIDCount*  
 Numero di elementi nella matrice a cui punta *lpIDArray*.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se un elemento della matrice contiene il valore ID_SEPARATOR, un separatore di viene creato nella posizione corrispondente della barra degli strumenti. Questa funzione imposta lo stile del pulsante ogni TBBS_BUTTON e stile di ogni separatore TBBS_SEPARATOR anche e assegna un indice dell'immagine a ogni pulsante. L'indice dell'immagine specifica la posizione dell'immagine del pulsante della bitmap.  
  
 Non è necessaria tenere conto dei separatori nella mappa di bit poiché questa funzione non assegna gli indici di immagine per il separatore. Se la barra degli strumenti è disponibili pulsanti in corrispondenza delle posizioni 0, 1, 3 e un separatore nella posizione 2, le immagini in posizioni 0, 1 e 2 la bitmap verranno assegnati ai pulsanti in corrispondenza delle posizioni 0, 1 e 3, rispettivamente.  
  
 Se *lpIDArray* è NULL, questa funzione consente di allocare spazio per il numero di elementi specificato da *nIDCount*. Uso [utilizzando SetButtonInfo](#setbuttoninfo) impostare gli attributi dell'elemento.  
  
##  <a name="setbuttonstyle"></a>  CToolBar::SetButtonStyle  
 Chiamare questa funzione membro per impostare lo stile di un pulsante o separatore, oppure raggruppare i pulsanti.  
  
```  
void SetButtonStyle(
    int nIndex,  
    UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice del pulsante o separatore le cui informazioni sono necessario impostare.  
  
 *nStyle*  
 Lo stile del pulsante. Sono supportati gli stili dei pulsanti seguenti:  
  
- Pulsante di comando Standard TBBS_BUTTON (impostazione predefinita)  
  
- Separatore TBBS_SEPARATOR  
  
- Pulsante di casella di controllo TBBS_CHECKBOX automaticamente  
  
- TBBS_GROUP contrassegna l'inizio di un gruppo di pulsanti  
  
- TBBS_CHECKGROUP contrassegna l'inizio di un gruppo di pulsanti della casella di controllo  
  
- TBBS_DROPDOWN crea un pulsante di menu a discesa elenco  
  
- TBBS_AUTOSIZE verrà calcolata la larghezza del pulsante in base al testo del pulsante, non alle dimensioni dell'immagine  
  
- TBBS_NOPREFIX il testo del pulsante non avrà un prefisso di tasti di scelta rapida associato  
  
### <a name="remarks"></a>Note  
 Stile del pulsante determina come viene visualizzato il pulsante e la modalità di risposta all'input dell'utente.  
  
 Prima di chiamare `SetButtonStyle`, chiamare il [GetButtonStyle](#getbuttonstyle) funzione membro per recuperare lo stile di pulsante o un separatore.  
  
> [!NOTE]
>  È inoltre possibile impostare gli stati dei pulsanti utilizzando la *nStyle* parametro; tuttavia, poiché gli stati dei pulsanti sono controllati dal [ON_UPDATE_COMMAND_UI](message-map-macros-mfc.md#on_update_command_ui) gestore, qualsiasi stato impostato con `SetButtonStyle` andranno perse durante la successiva elaborazione di inattività. Vedere [come gli oggetti dell'interfaccia utente di aggiornamento](../../mfc/how-to-update-user-interface-objects.md) e [TN031: barre di controllo](../../mfc/tn031-control-bars.md) per altre informazioni.  
  
##  <a name="setbuttontext"></a>  CToolBar::SetButtonText  
 Chiamare questa funzione per impostare il testo su un pulsante.  
  
```  
BOOL SetButtonText(
    int nIndex,  
    LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice del pulsante cui testo è necessario impostare.  
  
 *lpszText*  
 Punta al testo deve essere impostato su un pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CToolBar:: GetToolBarCtrl](#gettoolbarctrl).  
  
##  <a name="setheight"></a>  CToolBar::SetHeight  
 Questa funzione membro imposta sul valore, in pixel, all'altezza della barra degli strumenti *cyHeight*.  
  
```  
void SetHeight(int cyHeight);
```  
  
### <a name="parameters"></a>Parametri  
 *cyHeight*  
 L'altezza in pixel della barra degli strumenti.  
  
### <a name="remarks"></a>Note  
 Dopo la chiamata [SetSizes](#setsizes), utilizzare questa funzione membro per sostituire l'altezza della barra degli strumenti standard. Se l'altezza è troppo piccola, verranno ritagliati i pulsanti nella parte inferiore.  
  
 Se questa funzione non viene chiamata, il framework utilizza le dimensioni del pulsante per determinare l'altezza della barra degli strumenti.  
  
##  <a name="setsizes"></a>  CToolBar::SetSizes  
 Chiamare questa funzione membro per impostare i pulsanti della barra degli strumenti per le dimensioni, in pixel, specificato nel *sizeButton*.  
  
```  
void SetSizes(
    SIZE sizeButton,  
    SIZE sizeImage);
```  
  
### <a name="parameters"></a>Parametri  
 *sizeButton*  
 Le dimensioni in pixel di ogni pulsante.  
  
 *sizeImage*  
 Le dimensioni in pixel di ogni immagine.  
  
### <a name="remarks"></a>Note  
 Il *sizeImage* parametro deve contenere le dimensioni, in pixel, delle immagini bitmap della barra degli strumenti. Le dimensioni in *sizeButton* deve essere sufficiente per contenere l'immagine più 7 aggiuntiva in larghezza e 6 pixel aggiuntiva in altezza. Questa funzione imposta anche l'altezza della barra degli strumenti per adattare i pulsanti.  
  
 Chiamare questa funzione membro solo per le barre degli strumenti che non si attengono *linee guida sull'interfaccia di Windows per la progettazione Software* le indicazioni per le dimensioni pulsante e immagine.  
  
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

---
title: Classe CToolBar
ms.date: 11/04/2016
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
ms.openlocfilehash: ee1820601f80ed270221b3186188793f7fdcbe08
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57301454"
---
# <a name="ctoolbar-class"></a>Classe CToolBar

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
|[CToolBar::CommandToIndex](#commandtoindex)|Restituisce l'indice di un pulsante con l'ID del comando specificato.|
|[CToolBar::Create](#create)|Crea la barra degli strumenti di Windows e lo collega al `CToolBar` oggetto.|
|[CToolBar::CreateEx](#createex)|Crea una `CToolBar` oggetto con gli stili aggiuntivi per l'oggetto incorporato `CToolBarCtrl` oggetto.|
|[CToolBar::GetButtonInfo](#getbuttoninfo)|Recupera l'ID, stile e il numero di immagini di un pulsante.|
|[CToolBar::GetButtonStyle](#getbuttonstyle)|Recupera lo stile per un pulsante.|
|[CToolBar::GetButtonText](#getbuttontext)|Recupera il testo che verrà visualizzato su un pulsante.|
|[CToolBar::GetItemID](#getitemid)|Restituisce l'ID di comando di un pulsante o un separatore in corrispondenza dell'indice specificato.|
|[CToolBar::GetItemRect](#getitemrect)|Recupera il rettangolo di visualizzazione per l'elemento in corrispondenza dell'indice specificato.|
|[CToolBar::GetToolBarCtrl](#gettoolbarctrl)|Consente l'accesso diretto al controllo sottostante comune.|
|[CToolBar::LoadBitmap](#loadbitmap)|Carica la bitmap contenente immagini bitmap dei pulsanti.|
|[CToolBar::LoadToolBar](#loadtoolbar)|Carica una risorsa barra degli strumenti creata con l'editor di risorse.|
|[CToolBar::SetBitmap](#setbitmap)|Imposta un'immagine bitmap.|
|[CToolBar::SetButtonInfo](#setbuttoninfo)|Imposta l'ID, stile e il numero di immagini di un pulsante.|
|[CToolBar::SetButtons](#setbuttons)|Set di button stili e un indice delle immagini di pulsante della bitmap.|
|[CToolBar::SetButtonStyle](#setbuttonstyle)|Imposta lo stile per un pulsante.|
|[CToolBar::SetButtonText](#setbuttontext)|Imposta il testo che verrà visualizzato su un pulsante.|
|[CToolBar::SetHeight](#setheight)|Imposta l'altezza della barra degli strumenti.|
|[CToolBar::SetSizes](#setsizes)|Imposta le dimensioni dei pulsanti e le immagini bitmap.|

## <a name="remarks"></a>Note

I pulsanti possono agire come pulsanti di comando, pulsanti della casella di controllo o pulsanti di opzione. `CToolBar` gli oggetti sono in genere incorporato i membri di frame-window oggetti derivati dalla classe [CFrameWnd](../../mfc/reference/cframewnd-class.md) oppure [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md).

[CToolBar:: GetToolBarCtrl](#gettoolbarctrl), una funzione membro nuovo alla versione 4.0 di MFC, consente di sfruttare i vantaggi del supporto del controllo comune di Windows per la personalizzazione della barra degli strumenti e funzionalità aggiuntive. `CToolBar` funzioni membro offrono la maggior parte delle funzionalità dei controlli comuni di Windows; Tuttavia, quando si chiama `GetToolBarCtrl`, è possibile assegnare anche più delle caratteristiche delle barre degli strumenti Windows 95 o 98 delle barre degli strumenti. Quando si chiama `GetToolBarCtrl`, verrà restituito un riferimento a un `CToolBarCtrl` oggetto. Visualizzare [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) per altre informazioni sulla progettazione di controlli comuni di Windows usando le barre degli strumenti. Per informazioni più generali sui controlli comuni, vedere [Common Controls](/windows/desktop/Controls/common-controls-intro) nel SDK di Windows.

Visual C++ fornisce due metodi per creare una barra degli strumenti. Per creare una risorsa barra degli strumenti tramite l'Editor di risorse, seguire questa procedura:

1. Creare una risorsa barra degli strumenti.

1. Costruire l'oggetto `CToolBar`.

1. Chiamare il [Create](#create) (o [CreateEx](#createex)) (funzione) per creare la barra degli strumenti di Windows e associarlo al `CToolBar` oggetto.

1. Chiamare [LoadToolBar](#loadtoolbar) per caricare la risorsa barra degli strumenti.

In caso contrario, seguire questa procedura:

1. Costruire l'oggetto `CToolBar`.

1. Chiamare il [Create](#create) (o [CreateEx](#createex)) (funzione) per creare la barra degli strumenti di Windows e associarlo al `CToolBar` oggetto.

1. Chiamare [LoadBitmap](#loadbitmap) per caricare la bitmap che contiene le immagini dei pulsanti della barra degli strumenti.

1. Chiamare [SetButtons](#setbuttons) per impostare lo stile del pulsante e associare ogni pulsante con un'immagine nella bitmap.

Tutte le immagini dei pulsanti sulla barra degli strumenti provengono da una singola bitmap, che deve contenere una sola immagine per ogni pulsante. Tutte le immagini devono essere le stesse dimensioni; il valore predefinito è 16 pixel di larghezza e 15 pixel di altezza. Le immagini devono essere affiancati nella bitmap.

Il `SetButtons` funzione accetta un puntatore a una matrice di ID di controllo e un numero intero che specifica il numero di elementi nella matrice. La funzione imposta ID ogni pulsante per il valore dell'elemento corrispondente della matrice e assegna ogni pulsante di un indice di immagine, che specifica la posizione dell'immagine del pulsante nella bitmap. Se un elemento di matrice ha il valore ID_SEPARATOR, non viene assegnato alcun indice dell'immagine.

L'ordine delle immagini nella bitmap è in genere l'ordine in cui vengono disegnati sullo schermo, ma è possibile usare la [utilizzando SetButtonInfo](#setbuttoninfo) funzione per modificare la relazione tra l'ordine di immagine e ordine di disegno.

Tutti i pulsanti in una barra degli strumenti sono le stesse dimensioni. Il valore predefinito è 24 x 22 pixel, in base a *linee guida dell'interfaccia Windows per la progettazione Software*. Qualsiasi spazio aggiuntivo tra le dimensioni immagine e il pulsante viene usato in modo da formare un bordo intorno all'immagine.

Ogni pulsante ha un'unica immagine. I vari pulsante stati e stili (premuto, verso l'alto, verso il basso, disabilitato, indeterminato e disabilitato verso il basso) vengono generati da tale uno immagine. Sebbene le bitmap possono essere qualsiasi colore, è possibile ottenere risultati ottimali con le immagini in nero e gradazioni di grigio.

> [!WARNING]
> `CToolBar` supporta le bitmap con un massimo di 16 colori. Quando si carica un'immagine in un editor barra degli strumenti, Visual Studio automaticamente Converte l'immagine in una bitmap 16 colori, se necessario e viene visualizzato un messaggio di avviso se l'immagine è stata convertita. Se si usa un'immagine con più di 16 colori (utilizzando un editor esterno per modificare l'immagine), l'applicazione potrebbe comportarsi in modo imprevisto.

Per impostazione predefinita, i pulsanti della barra degli strumenti imitano pulsanti di comando. Tuttavia, i pulsanti della barra degli strumenti anche possono riprodurre i pulsanti della casella di controllo o pulsanti di opzione. Pulsanti della casella di controllo presentano tre stati: selezionata, deselezionata e indeterminato. Pulsanti di opzione presentano solo due stati: archiviato e cancellata.

Per impostare un pulsante singoli o stile dei separatori senza che punta a una matrice, chiamare [GetButtonStyle](#getbuttonstyle) per recuperare lo stile e quindi chiamare [SetButtonStyle](#setbuttonstyle) invece di `SetButtons`. `SetButtonStyle` è particolarmente utile quando si desidera modificare lo stile del pulsante in fase di esecuzione.

Per assegnare testo da visualizzare su un pulsante, chiamare [GetButtonText](#getbuttontext) per recuperare il testo visualizzato sul pulsante, e quindi chiamare [SetButtonText](#setbuttontext) per impostare il testo.

Per creare un pulsante della casella di controllo, assegnare lo stile TBBS_CHECKBOX o usare un `CCmdUI` dell'oggetto `SetCheck` funzione membro in un gestore ON_UPDATE_COMMAND_UI. La chiamata a `SetCheck` Trasforma un pulsante di comando in un pulsante della casella di controllo. Passare `SetCheck` un argomento pari a 0 per non è selezionata, 1 per selezionato o 2 per indeterminato.

Per creare un pulsante di opzione, chiamare un [CCmdUI](../../mfc/reference/ccmdui-class.md) dell'oggetto [SetRadio](../../mfc/reference/ccmdui-class.md#setradio) funzione membro da un gestore ON_UPDATE_COMMAND_UI. Passare `SetRadio` argomento pari a 0 per non selezionato o diverso da zero per l'archiviazione. Per garantire un comportamento che si escludono a vicenda del gruppo di un'opzione, è necessario disporre gestori ON_UPDATE_COMMAND_UI per tutti i pulsanti nel gruppo.

Per altre informazioni sull'uso `CToolBar`, vedere l'articolo [implementazione della barra degli strumenti MFC](../../mfc/mfc-toolbar-implementation.md) e [Nota tecnica 31: Le barre di controllo](../../mfc/tn031-control-bars.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`CToolBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="commandtoindex"></a>  CToolBar::CommandToIndex

Questa funzione membro restituisce l'indice della barra degli strumenti pulsante prima, a partire dalla posizione 0, il cui ID di comando corrisponde `nIDFind`.

```
int CommandToIndex(UINT nIDFind) const;
```

### <a name="parameters"></a>Parametri

*nIDFind*<br/>
ID di comando di un pulsante della barra degli strumenti.

### <a name="return-value"></a>Valore restituito

L'indice del pulsante, oppure -1 se nessun pulsante ha l'ID del comando specificato.

##  <a name="create"></a>  CToolBar:: Create

Questa funzione membro viene creata una barra degli strumenti di Windows (una finestra figlio) e la associa il `CToolBar` oggetto.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_TOP,
    UINT nID = AFX_IDW_TOOLBAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore alla finestra padre della barra degli strumenti.

*dwStyle*<br/>
Lo stile della barra degli strumenti. Stili della barra degli strumenti aggiuntivi supportati sono:

- Barra di controllo CBRS_TOP è nella parte superiore della finestra cornice.

- Barra di controllo CBRS_BOTTOM è nella parte inferiore della finestra cornice.

- Barra di controllo CBRS_NOALIGN non viene riposizionata quando l'elemento padre viene ridimensionato.

- Barra di controllo CBRS_TOOLTIPS consente di visualizzare le descrizioni comandi.

- Cbrs_size_dynamic la barra è dinamica.

- Cbrs_size_fixed la barra è fisso.

- Barra di controllo CBRS_FLOATING è mobile.

- Barra di stato CBRS_FLYBY Visualizza le informazioni relative al pulsante.

- Barra di controllo CBRS_HIDE_INPLACE non viene visualizzata all'utente.

*nID*<br/>
ID finestra figlio della barra degli strumenti

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Imposta inoltre l'altezza della barra degli strumenti su un valore predefinito.

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

*pParentWnd*<br/>
Puntatore alla finestra padre della barra degli strumenti.

*dwCtrlStyle*<br/>
Gli stili aggiuntivi per la creazione di incorporato [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) oggetto. Per impostazione predefinita, questo valore è impostato su TBSTYLE_FLAT. Per un elenco completo degli stili della barra degli strumenti, vedere *dwStyle*.

*dwStyle*<br/>
Lo stile della barra degli strumenti. Visualizzare [barra degli strumenti e gli stili di pulsante](/windows/desktop/Controls/toolbar-control-and-button-styles) nel SDK di Windows per un elenco degli stili appropriati.

*rcBorders*<br/>
Oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che definisce la larghezza dei bordi della finestra degli strumenti. I bordi impostati su 0,0,0,0 per impostazione predefinita, dando come risultato in una finestra degli strumenti con nessun bordo.

*nID*<br/>
ID finestra figlio della barra degli strumenti

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Imposta inoltre l'altezza della barra degli strumenti su un valore predefinito.

Uso `CreateEx`, anziché [Create](#create), quando alcuni stili devono essere presenti durante la creazione del controllo barra degli strumenti incorporata. Ad esempio, impostare *dwCtrlStyle* a TBSTYLE_FLAT &#124; TBSTYLE_TRANSPARENT per creare una barra degli strumenti che è simile alle barre degli strumenti di Internet Explorer 4.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#180](../../mfc/codesnippet/cpp/ctoolbar-class_2.cpp)]

##  <a name="ctoolbar"></a>  CToolBar::CToolBar

Questa funzione membro restituisce un `CToolBar` dell'oggetto e imposta le dimensioni predefinite.

```
CToolBar();
```

### <a name="remarks"></a>Note

Chiamare il [Create](#create) funzione membro per creare la finestra degli strumenti.

##  <a name="getbuttoninfo"></a>  CToolBar::GetButtonInfo

Questa funzione membro recupera l'ID di controllo, stile e indice dell'immagine del pulsante della barra degli strumenti o separatore in corrispondenza della posizione specificata da *nIndex.*

```
void GetButtonInfo(
    int nIndex,
    UINT& nID,
    UINT& nStyle,
    int& iImage) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del pulsante della barra degli strumenti o separatore cui informazioni sono da recuperare.

*nID*<br/>
Riferimento a un UINT impostato per l'ID di comando del pulsante.

*nStyle*<br/>
Riferimento a un UINT impostato lo stile del pulsante.

*iImage*<br/>
Riferimento a un integer che è impostato per l'indice dell'immagine del pulsante della bitmap.

### <a name="remarks"></a>Note

Tali valori vengono assegnati alle variabili di cui fa riferimento *nID*, *nStyle*, e *iImage*. L'indice dell'immagine è la posizione dell'immagine della bitmap che contiene le immagini per tutti i pulsanti della barra degli strumenti. La prima immagine si trova nella posizione 0.

Se *nIndex* specifica un separatore *iImage* è impostato su larghezza del separatore in pixel.

##  <a name="getbuttonstyle"></a>  CToolBar:: GetButtonStyle

Chiamare questa funzione membro per recuperare lo stile di un pulsante o un separatore sulla barra degli strumenti.

```
UINT GetButtonStyle(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dello stile di pulsante o un separatore di barra degli strumenti da recuperare.

### <a name="return-value"></a>Valore restituito

Lo stile del pulsante o separatore specificato da *nIndex*.

### <a name="remarks"></a>Note

Stile del pulsante determina come viene visualizzato il pulsante e modo in cui risponde all'input dell'utente. Visualizzare [SetButtonStyle](#setbuttonstyle) per esempi di stili dei pulsanti.

##  <a name="getbuttontext"></a>  CToolBar::GetButtonText

Chiamare questa funzione membro per recuperare il testo visualizzato su un pulsante.

```
CString GetButtonText(int nIndex) const;

void GetButtonText(
    int nIndex,
    CString& rString) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del testo da recuperare.

*rString*<br/>
Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) che conterrà il testo da recuperare.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` oggetto contenente il testo del pulsante.

### <a name="remarks"></a>Note

La seconda forma di questo membro funzione riempie un `CString` oggetto con il testo della stringa.

##  <a name="getitemid"></a>  CToolBar::GetItemID

Questa funzione membro restituisce l'ID di comando del pulsante o separatore specificato da *nIndex*.

```
UINT GetItemID(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento il cui ID sia da recuperare.

### <a name="return-value"></a>Valore restituito

L'ID di comando del pulsante o separatore specificato da *nIndex*.

### <a name="remarks"></a>Note

I separatori restituiscono ID_SEPARATOR.

##  <a name="getitemrect"></a>  CToolBar::GetItemRect

Questa funzione membro inserisce la `RECT` il cui indirizzo è contenuto nella struttura *lpRect* con le coordinate del pulsante o separatore specificato da *nIndex*.

```
virtual void GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento (pulsante o separatore) devono essere recuperate le cui coordinate del rettangolo.

*lpRect*<br/>
Indirizzo della [RECT](/windows/desktop/api/windef/ns-windef-tagrect) struttura che contiene le coordinate dell'elemento.

### <a name="remarks"></a>Note

Le coordinate sono espresse in pixel rispetto all'angolo superiore sinistro della barra degli strumenti.

Usare `GetItemRect` per ottenere le coordinate di un separatore che si desidera sostituire con una casella combinata o un altro controllo.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CToolBar::SetSizes](#setsizes).

##  <a name="gettoolbarctrl"></a>  CToolBar:: GetToolBarCtrl

Questa funzione membro consente l'accesso diretto al controllo sottostante comune.

```
CToolBarCtrl& GetToolBarCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento a un oggetto `CToolBarCtrl`.

### <a name="remarks"></a>Note

Uso `GetToolBarCtrl` possa sfruttare i vantaggi delle funzionalità del controllo comune barra degli strumenti Windows e per sfruttare i vantaggi del supporto [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) offre per la personalizzazione della barra degli strumenti.

Per altre informazioni sull'utilizzo dei controlli comuni, vedere l'articolo [controlli](../../mfc/controls-mfc.md) e [controlli comuni](/windows/desktop/Controls/common-controls-intro) nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocViewSDI#15](../../mfc/codesnippet/cpp/ctoolbar-class_3.cpp)]

##  <a name="loadbitmap"></a>  CToolBar::LoadBitmap

Chiamare questa funzione membro per caricare la bitmap specificata da `lpszResourceName` o `nIDResource`.

```
BOOL LoadBitmap(LPCTSTR lpszResourceName);
BOOL LoadBitmap(UINT nIDResource);
```

### <a name="parameters"></a>Parametri

*lpszResourceName*<br/>
Puntatore al nome della risorsa della bitmap da caricare.

*nIDResource*<br/>
ID risorsa della bitmap da caricare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

La bitmap deve contenere una sola immagine per ogni pulsante sulla barra degli strumenti. Se le immagini non sono della dimensione standard (16 pixel di larghezza e 15 pixel di altezza), chiamata [SetSizes](#setsizes) per impostare le dimensioni dei pulsanti e le relative immagini.

> [!WARNING]
> `CToolBar` supporta le bitmap con un massimo di 16 colori. Quando si carica un'immagine in un editor barra degli strumenti, Visual Studio automaticamente Converte l'immagine in una bitmap 16 colori, se necessario e viene visualizzato un messaggio di avviso se l'immagine è stata convertita. Se si usa un'immagine con più di 16 colori (utilizzando un editor esterno per modificare l'immagine), l'applicazione potrebbe comportarsi in modo imprevisto.

##  <a name="loadtoolbar"></a>  CToolBar::LoadToolBar

Chiamare questa funzione membro per la barra degli strumenti specificata da caricare *lpszResourceName* oppure *nIDResource*.

```
BOOL LoadToolBar(LPCTSTR lpszResourceName);
BOOL LoadToolBar(UINT nIDResource);
```

### <a name="parameters"></a>Parametri

*lpszResourceName*<br/>
Puntatore al nome della risorsa della barra degli strumenti da caricare.

*nIDResource*<br/>
ID risorsa della barra degli strumenti da caricare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Visualizzare [editor barra degli strumenti](../../windows/toolbar-editor.md) in per altre informazioni sulla creazione di una risorsa barra degli strumenti.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CToolBar:: CreateEx](#createex).

##  <a name="setbitmap"></a>  CToolBar::SetBitmap

Chiamare questa funzione membro per impostare l'immagine bitmap della barra degli strumenti.

```
BOOL SetBitmap(HBITMAP hbmImageWell);
```

### <a name="parameters"></a>Parametri

*hbmImageWell*<br/>
Handle di un'immagine bitmap associata a una barra degli strumenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Ad esempio, chiamare `SetBitmap` per modificare l'immagine bitmap dopo che l'utente esegue un'azione in un documento che modifica l'azione di un pulsante.

##  <a name="setbuttoninfo"></a>  CToolBar::SetButtonInfo

Chiamare questa funzione membro per impostare l'ID di comando del pulsante, stile e il numero di immagine.

```
void SetButtonInfo(
    int nIndex,
    UINT nID,
    UINT nStyle,
    int iImage);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero del pulsante o separatore per i quali sono necessario impostare le informazioni.

*nID*<br/>
Il valore su cui è impostato l'ID di comando del pulsante.

*nStyle*<br/>
Il nuovo stile del pulsante. Sono supportati gli stili dei pulsanti seguenti:

- Pulsante di comando TBBS_BUTTON Standard (impostazione predefinita)

- Separatore TBBS_SEPARATOR

- Pulsante di casella di controllo TBBS_CHECKBOX automaticamente

- TBBS_GROUP contrassegna l'inizio di un gruppo di pulsanti

- TBBS_CHECKGROUP contrassegna l'inizio di un gruppo di pulsanti della casella di controllo

- TBBS_DROPDOWN crea un pulsante elenco a discesa.

- TBBS_AUTOSIZE larghezza del pulsante verrà calcolata in base al testo del pulsante, non sulle dimensioni dell'immagine.

- TBBS_NOPREFIX il testo del pulsante non avrà un prefisso del tasto di scelta rapida associato.

*iImage*<br/>
Nuovo indice per l'immagine del pulsante della bitmap.

### <a name="remarks"></a>Note

Per il separatore, che hanno lo stile TBBS_SEPARATOR, questa funzione imposta la larghezza del separatore in pixel in base al valore archiviato nella *iImage*.

> [!NOTE]
>  È anche possibile impostare gli stati dei pulsanti tramite la *nStyle* parametro; tuttavia, poiché gli stati dei pulsanti sono controllati dal [ON_UPDATE_COMMAND_UI](message-map-macros-mfc.md#on_update_command_ui) gestore, qualsiasi stato che viene impostato utilizzando `SetButtonInfo` andranno perse durante l'elaborazione di inattività successiva. Visualizzare [come aggiornare oggetti dell'interfaccia utente](../../mfc/how-to-update-user-interface-objects.md) e [TN031: Le barre di controllo](../../mfc/tn031-control-bars.md) per altre informazioni.

Per informazioni sulle immagini bitmap e pulsanti, vedere la [CToolBar](../../mfc/reference/ctoolbar-class.md) Cenni preliminari e [CToolBar::LoadBitmap](#loadbitmap).

##  <a name="setbuttons"></a>  CToolBar::SetButtons

Questa funzione membro imposta sul valore specificato dall'elemento corrispondente della matrice di ID di comando del pulsante di ogni barra degli strumenti *lpIDArray*.

```
BOOL SetButtons(
    const UINT* lpIDArray,
    int nIDCount);
```

### <a name="parameters"></a>Parametri

*lpIDArray*<br/>
Puntatore a una matrice di ID di comando. Può essere NULL per allocare i pulsanti vuoti.

*nIDCount*<br/>
Numero di elementi nella matrice a cui punta *lpIDArray*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Se un elemento della matrice contiene il valore ID_SEPARATOR, un separatore viene creato nella posizione corrispondente della barra degli strumenti. Questa funzione imposta lo stile del pulsante ogni TBBS_BUTTON e stile del separatore ogni TBBS_SEPARATOR anche e assegna un indice delle immagini per ogni pulsante. L'indice dell'immagine specifica la posizione dell'immagine del pulsante della bitmap.

Non è necessario tenere conto dei separatori nella bitmap perché questa funzione non assegna gli indici dell'immagine per il separatore. Se la barra degli strumenti è disponibili pulsanti in corrispondenza delle posizioni 0, 1, 3 e un separatore nella posizione 2, le immagini in corrispondenza delle posizioni 0, 1 e 2 nella bitmap sono assegnati ai pulsanti disponibili nelle posizioni 0, 1 e 3, rispettivamente.

Se *lpIDArray* è NULL, questa funzione alloca spazio per il numero di elementi specificato da *nIDCount*. Uso [utilizzando SetButtonInfo](#setbuttoninfo) impostare gli attributi di ogni elemento.

##  <a name="setbuttonstyle"></a>  CToolBar::SetButtonStyle

Chiamare questa funzione membro per impostare lo stile di un pulsante o un separatore o per raggruppare i pulsanti.

```
void SetButtonStyle(
    int nIndex,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del pulsante o separatore le cui informazioni sono necessario impostare.

*nStyle*<br/>
Lo stile del pulsante. Sono supportati gli stili dei pulsanti seguenti:

- Pulsante di comando TBBS_BUTTON Standard (impostazione predefinita)

- Separatore TBBS_SEPARATOR

- Pulsante di casella di controllo TBBS_CHECKBOX automaticamente

- TBBS_GROUP contrassegna l'inizio di un gruppo di pulsanti

- TBBS_CHECKGROUP contrassegna l'inizio di un gruppo di pulsanti della casella di controllo

- TBBS_DROPDOWN crea un pulsante di riepilogo

- TBBS_AUTOSIZE larghezza del pulsante verrà calcolata in base al testo del pulsante, non sulle dimensioni dell'immagine

- TBBS_NOPREFIX il testo del pulsante non avrà un prefisso del tasto di scelta rapida associato

### <a name="remarks"></a>Note

Stile del pulsante determina come viene visualizzato il pulsante e modo in cui risponde all'input dell'utente.

Prima di chiamare `SetButtonStyle`, chiamare il [GetButtonStyle](#getbuttonstyle) funzione membro per recuperare lo stile di pulsante o un separatore.

> [!NOTE]
>  È anche possibile impostare gli stati dei pulsanti tramite la *nStyle* parametro; tuttavia, poiché gli stati dei pulsanti sono controllati dal [ON_UPDATE_COMMAND_UI](message-map-macros-mfc.md#on_update_command_ui) gestore, qualsiasi stato che viene impostato utilizzando `SetButtonStyle` andranno perse durante l'elaborazione di inattività successiva. Visualizzare [come aggiornare oggetti dell'interfaccia utente](../../mfc/how-to-update-user-interface-objects.md) e [TN031: Le barre di controllo](../../mfc/tn031-control-bars.md) per altre informazioni.

##  <a name="setbuttontext"></a>  CToolBar::SetButtonText

Chiamare questa funzione per impostare il testo su un pulsante.

```
BOOL SetButtonText(
    int nIndex,
    LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del pulsante di cui testo è da impostare.

*lpszText*<br/>
Punta al testo deve essere impostato su un pulsante.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CToolBar:: GetToolBarCtrl](#gettoolbarctrl).

##  <a name="setheight"></a>  CToolBar::SetHeight

Questa funzione membro imposta l'altezza della barra degli strumenti sul valore, in pixel, specificato nella *cyHeight*.

```
void SetHeight(int cyHeight);
```

### <a name="parameters"></a>Parametri

*cyHeight*<br/>
L'altezza in pixel della barra degli strumenti.

### <a name="remarks"></a>Note

Dopo avere chiamato [SetSizes](#setsizes), utilizzare questa funzione membro per sostituire l'altezza della barra degli strumenti standard. Se l'altezza è troppo piccolo, verranno ritagliati i pulsanti nella parte inferiore.

Se questa funzione non viene chiamata, il framework utilizza le dimensioni del pulsante per determinare l'altezza della barra degli strumenti.

##  <a name="setsizes"></a>  CToolBar::SetSizes

Chiamare questa funzione membro per impostare i pulsanti della barra degli strumenti per le dimensioni, in pixel, specificato nella *sizeButton*.

```
void SetSizes(
    SIZE sizeButton,
    SIZE sizeImage);
```

### <a name="parameters"></a>Parametri

*sizeButton*<br/>
Le dimensioni in pixel dei pulsanti.

*sizeImage*<br/>
Le dimensioni in pixel di ogni immagine.

### <a name="remarks"></a>Note

Il *sizeImage* parametro deve contenere le dimensioni, in pixel, delle immagini dell'immagine bitmap della barra degli strumenti. Le dimensioni in *sizeButton* deve essere sufficiente per contenere l'immagine di oltre 7 aggiuntivi di larghezza e 6 pixel extra in altezza. Questa funzione imposta anche l'altezza della barra degli strumenti per adattare i pulsanti.

Chiamare questa funzione membro solo per le barre degli strumenti che non seguono *linee guida dell'interfaccia Windows per la progettazione Software* raccomandazioni per le dimensioni di pulsante e l'immagine.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCListView#8](../../atl/reference/codesnippet/cpp/ctoolbar-class_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC viene](../../visual-cpp-samples.md)<br/>
[MFC Sample DLGCBR32](../../visual-cpp-samples.md)<br/>
[Esempio MFC DOCKTOOL](../../visual-cpp-samples.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)

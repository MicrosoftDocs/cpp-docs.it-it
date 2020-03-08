---
title: CToolBar (classe)
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
ms.openlocfilehash: 4977cbe0b749724f999d6d7089d46f12d1e2963e
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78866436"
---
# <a name="ctoolbar-class"></a>CToolBar (classe)

Barre di controllo con una riga di pulsanti bitmap e separatori facoltativi.

## <a name="syntax"></a>Sintassi

```
class CToolBar : public CControlBar
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Name|Descrizione|
|----------|-----------------|
|[CToolBar:: CToolBar](#ctoolbar)|Costruisce un oggetto `CToolBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Name|Descrizione|
|----------|-----------------|
|[CToolBar:: CommandToIndex](#commandtoindex)|Restituisce l'indice di un pulsante con l'ID di comando specificato.|
|[CToolBar:: create](#create)|Crea la barra degli strumenti di Windows e la collega all'oggetto `CToolBar`.|
|[CToolBar:: CreateEx](#createex)|Crea un oggetto `CToolBar` con stili aggiuntivi per l'oggetto `CToolBarCtrl` incorporato.|
|[CToolBar:: GetButtonInfo](#getbuttoninfo)|Recupera l'ID, lo stile e il numero di immagine di un pulsante.|
|[CToolBar:: GetButtonStyle](#getbuttonstyle)|Recupera lo stile per un pulsante.|
|[CToolBar:: GetButtonText](#getbuttontext)|Recupera il testo che verrà visualizzato su un pulsante.|
|[CToolBar:: GetItemID](#getitemid)|Restituisce l'ID del comando di un pulsante o di un separatore in corrispondenza dell'indice specificato.|
|[CToolBar:: GetItemRect](#getitemrect)|Recupera il rettangolo di visualizzazione per l'elemento in corrispondenza dell'indice specificato.|
|[CToolBar:: GetToolBarCtrl](#gettoolbarctrl)|Consente l'accesso diretto al controllo comune sottostante.|
|[CToolBar:: LoadBitmap](#loadbitmap)|Carica la bitmap contenente le immagini dei pulsanti bitmap.|
|[CToolBar:: LoadToolBar](#loadtoolbar)|Carica una risorsa della barra degli strumenti creata con l'editor risorse.|
|[CToolBar:: ToBitmap](#setbitmap)|Imposta un'immagine bitmap.|
|[CToolBar:: SetButtonInfo](#setbuttoninfo)|Imposta l'ID, lo stile e il numero di immagine di un pulsante.|
|[CToolBar:: MyButton](#setbuttons)|Imposta gli stili dei pulsanti e un indice delle immagini dei pulsanti all'interno della bitmap.|
|[CToolBar:: SetButtonStyle](#setbuttonstyle)|Imposta lo stile per un pulsante.|
|[CToolBar:: SetButtonText](#setbuttontext)|Imposta il testo che verrà visualizzato su un pulsante.|
|[CToolBar:: seheight](#setheight)|Imposta l'altezza della barra degli strumenti.|
|[CToolBar:: sesizes](#setsizes)|Imposta le dimensioni dei pulsanti e le relative bitmap.|

## <a name="remarks"></a>Osservazioni

I pulsanti possono fungere da pulsanti, pulsanti della casella di controllo o pulsanti di opzione. gli oggetti `CToolBar` sono in genere membri incorporati di oggetti della finestra cornice derivati dalla classe [CFrameWnd](../../mfc/reference/cframewnd-class.md) o [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md).

[CToolBar:: GetToolBarCtrl](#gettoolbarctrl), una funzione membro nuova per MFC 4,0, consente di sfruttare i vantaggi del supporto del controllo comune di Windows per la personalizzazione della barra degli strumenti e la funzionalità aggiuntiva. `CToolBar` funzioni membro forniscono la maggior parte delle funzionalità dei controlli comuni di Windows; Tuttavia, quando si chiama `GetToolBarCtrl`, è possibile assegnare le barre degli strumenti ancora più le caratteristiche delle barre degli strumenti di Windows 95/98. Quando si chiama `GetToolBarCtrl`, viene restituito un riferimento a un oggetto `CToolBarCtrl`. Per ulteriori informazioni sulla progettazione delle barre degli strumenti utilizzando i controlli comuni di Windows, vedere [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) . Per informazioni più generali sui controlli comuni, vedere [controlli comuni](/windows/win32/Controls/common-controls-intro) nell'Windows SDK.

L' C++ oggetto visivo fornisce due metodi per creare una barra degli strumenti. Per creare una risorsa della barra degli strumenti usando l'editor di risorse, seguire questa procedura:

1. Creare una risorsa della barra degli strumenti.

1. Costruire l'oggetto `CToolBar`.

1. Chiamare la funzione [create](#create) (o [CreateEx](#createex)) per creare la barra degli strumenti di Windows e collegarla all'oggetto `CToolBar`.

1. Chiamare [LoadToolBar](#loadtoolbar) per caricare la risorsa della barra degli strumenti.

In caso contrario, attenersi alla seguente procedura:

1. Costruire l'oggetto `CToolBar`.

1. Chiamare la funzione [create](#create) (o [CreateEx](#createex)) per creare la barra degli strumenti di Windows e collegarla all'oggetto `CToolBar`.

1. Chiamare [LoadBitmap](#loadbitmap) per caricare la bitmap che contiene le immagini dei pulsanti della barra degli strumenti.

1. Chiamare [i pulsanti per](#setbuttons) impostare lo stile del pulsante e associare ogni pulsante a un'immagine nella bitmap.

Tutte le immagini dei pulsanti della barra degli strumenti sono tratte da una bitmap, che deve contenere un'immagine per ogni pulsante. Tutte le immagini devono avere le stesse dimensioni; il valore predefinito è 16 pixel di larghezza e 15 pixel di altezza. Le immagini devono essere affiancate nella bitmap.

La funzione `SetButtons` accetta un puntatore a una matrice di ID di controllo e un Integer che specifica il numero di elementi nella matrice. La funzione imposta l'ID di ogni pulsante sul valore dell'elemento corrispondente della matrice e assegna a ogni pulsante un indice di immagine, che specifica la posizione dell'immagine del pulsante nella bitmap. Se un elemento della matrice ha il valore ID_SEPARATOR, non viene assegnato alcun indice di immagine.

L'ordine delle immagini nella bitmap è in genere l'ordine in cui vengono disegnate sullo schermo, ma è possibile usare la funzione [SetButtonInfo](#setbuttoninfo) per modificare la relazione tra l'ordine dell'immagine e l'ordine di disegno.

Tutti i pulsanti di una barra degli strumenti hanno le stesse dimensioni. Il valore predefinito è 24 x 22 pixel, in base alle *linee guida dell'interfaccia di Windows per la progettazione software*. Qualsiasi spazio aggiuntivo tra le dimensioni dell'immagine e del pulsante viene utilizzato per formare un bordo intorno all'immagine.

Ogni pulsante ha una sola immagine. I vari Stati e stili dei pulsanti (premuto, su, giù, disabilitato, disabilitato e indeterminato) vengono generati da tale immagine. Sebbene le bitmap possano essere di qualsiasi colore, è possibile ottenere risultati ottimali con le immagini in nero e sfumature di grigio.

> [!WARNING]
> `CToolBar` supporta bitmap con un massimo di 16 colori. Quando si carica un'immagine in un editor della barra degli strumenti, Visual Studio converte automaticamente l'immagine in una bitmap a 16 colori, se necessario, e visualizza un messaggio di avviso se l'immagine è stata convertita. Se si usa un'immagine con più di 16 colori (usando un editor esterno per modificare l'immagine), l'applicazione potrebbe comportarsi in modo imprevisto.

Per impostazione predefinita, i pulsanti della barra degli strumenti imitano i pulsanti. Tuttavia, i pulsanti della barra degli strumenti possono imitare anche pulsanti della casella di controllo o pulsanti di opzione. I pulsanti della casella di controllo sono tre stati: checked, cleared e Indeterminate. I pulsanti di opzione hanno solo due stati: checked e cleared.

Per impostare un singolo pulsante o uno stile separatore senza puntare a una matrice, chiamare [GetButtonStyle](#getbuttonstyle) per recuperare lo stile, quindi chiamare [SetButtonStyle](#setbuttonstyle) anziché `SetButtons`. `SetButtonStyle` è particolarmente utile quando si desidera modificare lo stile di un pulsante in fase di esecuzione.

Per assegnare testo da visualizzare in un pulsante, chiamare [GetButtonText](#getbuttontext) per recuperare il testo da visualizzare sul pulsante, quindi chiamare [SetButtonText](#setbuttontext) per impostare il testo.

Per creare un pulsante della casella di controllo, assegnargli lo stile TBBS_CHECKBOX o usare la funzione membro `SetCheck` di un oggetto `CCmdUI` in un gestore ON_UPDATE_COMMAND_UI. Chiamando `SetCheck` viene trasformato un pulsante in un pulsante della casella di controllo. Passare `SetCheck` un argomento di 0 per deselezionato, 1 per checked o 2 per indeterminato.

Per creare un pulsante di opzione, chiamare la funzione membro [Seradio](../../mfc/reference/ccmdui-class.md#setradio) di un oggetto [CCmdUI](../../mfc/reference/ccmdui-class.md) da un gestore di ON_UPDATE_COMMAND_UI. Passare `SetRadio` un argomento di 0 per l'opzione deselezionata o diversa da zero per l'oggetto selezionato. Per fornire un comportamento reciprocamente esclusivo del gruppo di Radio, è necessario disporre di ON_UPDATE_COMMAND_UI gestori per tutti i pulsanti del gruppo.

Per ulteriori informazioni sull'utilizzo di `CToolBar`, vedere l'articolo relativo all' [implementazione della barra degli strumenti MFC](../../mfc/mfc-toolbar-implementation.md) e alla [Nota tecnica 31: barre di controllo](../../mfc/tn031-control-bars.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`CToolBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="commandtoindex"></a>CToolBar:: CommandToIndex

Questa funzione membro restituisce l'indice del primo pulsante della barra degli strumenti, a partire dalla posizione 0, il cui ID di comando corrisponde `nIDFind`.

```
int CommandToIndex(UINT nIDFind) const;
```

### <a name="parameters"></a>Parametri

*nIDFind*<br/>
ID comando di un pulsante della barra degli strumenti.

### <a name="return-value"></a>Valore restituito

Indice del pulsante oppure-1 se nessun pulsante ha l'ID di comando specificato.

##  <a name="create"></a>CToolBar:: create

Questa funzione membro crea una barra degli strumenti di Windows (una finestra figlio) e la associa all'oggetto `CToolBar`.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_TOP,
    UINT nID = AFX_IDW_TOOLBAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore alla finestra che rappresenta l'elemento padre della barra degli strumenti.

*dwStyle*<br/>
Stile della barra degli strumenti. Gli stili aggiuntivi della barra degli strumenti supportati sono:

- CBRS_TOP barra di controllo si trova nella parte superiore della finestra cornice.

- CBRS_BOTTOM barra di controllo si trova nella parte inferiore della finestra cornice.

- La barra di controllo CBRS_NOALIGN non viene riposizionata quando l'elemento padre viene ridimensionato.

- CBRS_TOOLTIPS barra di controllo Visualizza le descrizioni comandi.

- La barra di controllo CBRS_SIZE_DYNAMIC è dinamica.

- La barra di controllo CBRS_SIZE_FIXED è fissa.

- La barra di controllo CBRS_FLOATING è mobile.

- CBRS_FLYBY barra di stato Visualizza informazioni sul pulsante.

- CBRS_HIDE_INPLACE barra di controllo non viene visualizzata all'utente.

*nID*<br/>
ID della finestra figlio della barra degli strumenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Imposta anche l'altezza della barra degli strumenti su un valore predefinito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#179](../../mfc/codesnippet/cpp/ctoolbar-class_1.cpp)]

##  <a name="createex"></a>CToolBar:: CreateEx

Chiamare questa funzione per creare una barra degli strumenti di Windows (una finestra figlio) e associarla all'oggetto `CToolBar`.

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
Puntatore alla finestra che rappresenta l'elemento padre della barra degli strumenti.

*dwCtrlStyle*<br/>
Stili aggiuntivi per la creazione dell'oggetto [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) incorporato. Per impostazione predefinita, questo valore è impostato su TBSTYLE_FLAT. Per un elenco completo degli stili della barra degli strumenti, vedere *dwStyle*.

*dwStyle*<br/>
Stile della barra degli strumenti. Per un elenco degli stili appropriati, vedere gli [stili del controllo e del pulsante della barra degli strumenti](/windows/win32/Controls/toolbar-control-and-button-styles) nel Windows SDK.

*rcBorders*<br/>
Oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che definisce le larghezze dei bordi della finestra della barra degli strumenti. Questi bordi vengono impostati su 0, 0, 0, 0 per impostazione predefinita, ottenendo pertanto una finestra della barra degli strumenti senza bordi.

*nID*<br/>
ID della finestra figlio della barra degli strumenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Imposta anche l'altezza della barra degli strumenti su un valore predefinito.

Utilizzare `CreateEx`, anziché [create](#create), quando è necessario che determinati stili siano presenti durante la creazione del controllo barra degli strumenti incorporato. Impostare ad esempio *dwCtrlStyle* su TBSTYLE_FLAT &#124; TBSTYLE_TRANSPARENT per creare una barra degli strumenti simile alle barre degli strumenti di Internet Explorer 4.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#180](../../mfc/codesnippet/cpp/ctoolbar-class_2.cpp)]

##  <a name="ctoolbar"></a>CToolBar:: CToolBar

Questa funzione membro costruisce un oggetto `CToolBar` e imposta le dimensioni predefinite.

```
CToolBar();
```

### <a name="remarks"></a>Osservazioni

Chiamare la funzione membro [create](#create) per creare la finestra della barra degli strumenti.

##  <a name="getbuttoninfo"></a>CToolBar:: GetButtonInfo

Questa funzione membro recupera l'ID di controllo, lo stile e l'indice immagine del pulsante o del separatore della barra degli strumenti nella posizione specificata da *nIndex.*

```
void GetButtonInfo(
    int nIndex,
    UINT& nID,
    UINT& nStyle,
    int& iImage) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del pulsante o del separatore della barra degli strumenti di cui è necessario recuperare le informazioni.

*nID*<br/>
Riferimento a UINT impostato sull'ID del comando del pulsante.

*nStyle*<br/>
Riferimento a UINT impostato sullo stile del pulsante.

*iImage*<br/>
Riferimento a un intero impostato sull'indice dell'immagine del pulsante all'interno della bitmap.

### <a name="remarks"></a>Osservazioni

Tali valori vengono assegnati alle variabili a cui viene fatto riferimento da *NID*, *nStyle*e *IImage*. L'indice dell'immagine è la posizione dell'immagine all'interno della bitmap che contiene immagini per tutti i pulsanti della barra degli strumenti. La prima immagine si trova nella posizione 0.

Se *nIndex* specifica un separatore, *IImage* viene impostato sulla larghezza del separatore in pixel.

##  <a name="getbuttonstyle"></a>CToolBar:: GetButtonStyle

Chiamare questa funzione membro per recuperare lo stile di un pulsante o di un separatore sulla barra degli strumenti.

```
UINT GetButtonStyle(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del pulsante o dello stile separatore della barra degli strumenti da recuperare.

### <a name="return-value"></a>Valore restituito

Stile del pulsante o del separatore specificato da *nIndex*.

### <a name="remarks"></a>Osservazioni

Lo stile di un pulsante determina come viene visualizzato il pulsante e come risponde all'input dell'utente. Per esempi di stili dei pulsanti, vedere [SetButtonStyle](#setbuttonstyle) .

##  <a name="getbuttontext"></a>CToolBar:: GetButtonText

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
Riferimento a un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che conterrà il testo da recuperare.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` contenente il testo del pulsante.

### <a name="remarks"></a>Osservazioni

Il secondo formato di questa funzione membro compila un oggetto `CString` con il testo della stringa.

##  <a name="getitemid"></a>CToolBar:: GetItemID

Questa funzione membro restituisce l'ID di comando del pulsante o del separatore specificato da *nIndex*.

```
UINT GetItemID(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento di cui è necessario recuperare l'ID.

### <a name="return-value"></a>Valore restituito

ID di comando del pulsante o del separatore specificato da *nIndex*.

### <a name="remarks"></a>Osservazioni

I separatori restituiscono ID_SEPARATOR.

##  <a name="getitemrect"></a>CToolBar:: GetItemRect

Questa funzione membro compila la struttura di `RECT` il cui indirizzo è contenuto in *lpRect* con le coordinate del pulsante o del separatore specificato da *nIndex*.

```
virtual void GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento (pulsante o separatore) di cui devono essere recuperate le coordinate del rettangolo.

*lpRect*<br/>
Indirizzo della struttura [Rect](/windows/win32/api/windef/ns-windef-rect) che conterrà le coordinate dell'elemento.

### <a name="remarks"></a>Osservazioni

Le coordinate sono espresse in pixel rispetto all'angolo superiore sinistro della barra degli strumenti.

Utilizzare `GetItemRect` per ottenere le coordinate di un separatore che si desidera sostituire con una casella combinata o un altro controllo.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CToolBar:: Sesizes](#setsizes).

##  <a name="gettoolbarctrl"></a>CToolBar:: GetToolBarCtrl

Questa funzione membro consente l'accesso diretto al controllo comune sottostante.

```
CToolBarCtrl& GetToolBarCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento a un oggetto `CToolBarCtrl`.

### <a name="remarks"></a>Osservazioni

Usare `GetToolBarCtrl` per sfruttare le funzionalità del controllo comune della barra degli strumenti di Windows e per sfruttare i vantaggi offerti dal supporto [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) per la personalizzazione della barra degli strumenti.

Per ulteriori informazioni sull'utilizzo dei controlli comuni, vedere l'articolo [controlli](../../mfc/controls-mfc.md) e [controlli comuni](/windows/win32/Controls/common-controls-intro) nell'Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocViewSDI#15](../../mfc/codesnippet/cpp/ctoolbar-class_3.cpp)]

##  <a name="loadbitmap"></a>CToolBar:: LoadBitmap

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

### <a name="remarks"></a>Osservazioni

La bitmap deve contenere un'immagine per ogni pulsante della barra degli strumenti. Se le immagini non hanno dimensioni standard (larghezza 16 pixel e 15 [pixel di altezza), chiamare le](#setsizes) dimensioni per impostare le dimensioni dei pulsanti e le relative immagini.

> [!WARNING]
> `CToolBar` supporta bitmap con un massimo di 16 colori. Quando si carica un'immagine in un editor della barra degli strumenti, Visual Studio converte automaticamente l'immagine in una bitmap a 16 colori, se necessario, e visualizza un messaggio di avviso se l'immagine è stata convertita. Se si usa un'immagine con più di 16 colori (usando un editor esterno per modificare l'immagine), l'applicazione potrebbe comportarsi in modo imprevisto.

##  <a name="loadtoolbar"></a>CToolBar:: LoadToolBar

Chiamare questa funzione membro per caricare la barra degli strumenti specificata da *lpszResourceName* o *nIDResource*.

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

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulla creazione di una risorsa della barra degli strumenti, vedere [Editor della barra degli](../../windows/toolbar-editor.md) strumenti in.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CToolBar:: CreateEx](#createex).

##  <a name="setbitmap"></a>CToolBar:: ToBitmap

Chiamare questa funzione membro per impostare l'immagine bitmap per la barra degli strumenti.

```
BOOL SetBitmap(HBITMAP hbmImageWell);
```

### <a name="parameters"></a>Parametri

*hbmImageWell*<br/>
Handle di un'immagine bitmap associata a una barra degli strumenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Ad esempio, chiamare `SetBitmap` per modificare l'immagine bitmap dopo che l'utente esegue un'azione su un documento che modifica l'azione di un pulsante.

##  <a name="setbuttoninfo"></a>CToolBar:: SetButtonInfo

Chiamare questa funzione membro per impostare l'ID di comando, lo stile e il numero di immagine del pulsante.

```
void SetButtonInfo(
    int nIndex,
    UINT nID,
    UINT nStyle,
    int iImage);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero del pulsante o del separatore per il quale è necessario impostare le informazioni.

*nID*<br/>
Valore su cui è impostato l'ID di comando del pulsante.

*nStyle*<br/>
Stile del nuovo pulsante. Sono supportati gli stili dei pulsanti seguenti:

- Pulsante di TBBS_BUTTON standard (impostazione predefinita)

- Separatore TBBS_SEPARATOR

- Pulsante casella di controllo TBBS_CHECKBOX automatico

- TBBS_GROUP contrassegna l'inizio di un gruppo di pulsanti

- TBBS_CHECKGROUP contrassegna l'inizio di un gruppo di pulsanti della casella di controllo

- TBBS_DROPDOWN crea un pulsante elenco a discesa.

- TBBS_AUTOSIZE la larghezza del pulsante verrà calcolata in base al testo del pulsante, non alla dimensione dell'immagine.

- TBBS_NOPREFIX al testo del pulsante non sarà associato alcun prefisso dell'acceleratore.

*iImage*<br/>
Nuovo indice per l'immagine del pulsante all'interno della bitmap.

### <a name="remarks"></a>Osservazioni

Per i separatori, che hanno lo stile TBBS_SEPARATOR, questa funzione imposta la larghezza del separatore in pixel sul valore archiviato in *IImage*.

> [!NOTE]
>  È anche possibile impostare gli Stati dei pulsanti usando il parametro *nStyle* . Tuttavia, poiché gli Stati dei pulsanti sono controllati dal gestore di [ON_UPDATE_COMMAND_UI](message-map-macros-mfc.md#on_update_command_ui) , qualsiasi stato impostato utilizzando `SetButtonInfo` andrà perso durante la successiva elaborazione inattiva. Per ulteriori informazioni [, vedere come aggiornare gli oggetti dell'interfaccia utente](../../mfc/how-to-update-user-interface-objects.md) e [TN031: barre di controllo](../../mfc/tn031-control-bars.md) .

Per informazioni sulle immagini bitmap e sui pulsanti, vedere la Panoramica di [CToolBar](../../mfc/reference/ctoolbar-class.md) e [CToolBar:: LoadBitmap](#loadbitmap).

##  <a name="setbuttons"></a>CToolBar:: MyButton

Questa funzione membro imposta l'ID di comando di ogni pulsante della barra degli strumenti sul valore specificato dall'elemento corrispondente della matrice *lpIDArray*.

```
BOOL SetButtons(
    const UINT* lpIDArray,
    int nIDCount);
```

### <a name="parameters"></a>Parametri

*lpIDArray*<br/>
Puntatore a una matrice di ID di comando. Può essere NULL per allocare pulsanti vuoti.

*nIDCount*<br/>
Numero di elementi nella matrice a cui punta *lpIDArray*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se un elemento della matrice ha il valore ID_SEPARATOR, viene creato un separatore nella posizione corrispondente della barra degli strumenti. Questa funzione imposta inoltre lo stile di ogni pulsante su TBBS_BUTTON e lo stile di ogni separatore su TBBS_SEPARATOR e assegna un indice immagine a ciascun pulsante. L'indice dell'immagine specifica la posizione dell'immagine del pulsante all'interno della bitmap.

Non è necessario tenere conto dei separatori nella bitmap perché questa funzione non assegna indici di immagini per i separatori. Se la barra degli strumenti contiene pulsanti nelle posizioni 0, 1 e 3 e un separatore nella posizione 2, le immagini nelle posizioni 0, 1 e 2 nella bitmap vengono assegnate rispettivamente ai pulsanti nelle posizioni 0, 1 e 3.

Se *lpIDArray* è null, questa funzione alloca spazio per il numero di elementi specificato da *nIDCount*. Usare [SetButtonInfo](#setbuttoninfo) per impostare gli attributi di ogni elemento.

##  <a name="setbuttonstyle"></a>CToolBar:: SetButtonStyle

Chiamare questa funzione membro per impostare lo stile di un pulsante o di un separatore o per raggruppare i pulsanti.

```
void SetButtonStyle(
    int nIndex,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del pulsante o del separatore di cui è necessario impostare le informazioni.

*nStyle*<br/>
Stile del pulsante. Sono supportati gli stili dei pulsanti seguenti:

- Pulsante di TBBS_BUTTON standard (impostazione predefinita)

- Separatore TBBS_SEPARATOR

- Pulsante casella di controllo TBBS_CHECKBOX automatico

- TBBS_GROUP contrassegna l'inizio di un gruppo di pulsanti

- TBBS_CHECKGROUP contrassegna l'inizio di un gruppo di pulsanti della casella di controllo

- TBBS_DROPDOWN crea un pulsante elenco a discesa

- TBBS_AUTOSIZE la larghezza del pulsante verrà calcolata in base al testo del pulsante, non alla dimensione dell'immagine

- TBBS_NOPREFIX al testo del pulsante non sarà associato alcun prefisso dell'acceleratore

### <a name="remarks"></a>Osservazioni

Lo stile di un pulsante determina come viene visualizzato il pulsante e come risponde all'input dell'utente.

Prima di chiamare `SetButtonStyle`, chiamare la funzione membro [GetButtonStyle](#getbuttonstyle) per recuperare lo stile del pulsante o del separatore.

> [!NOTE]
>  È anche possibile impostare gli Stati dei pulsanti usando il parametro *nStyle* . Tuttavia, poiché gli Stati dei pulsanti sono controllati dal gestore di [ON_UPDATE_COMMAND_UI](message-map-macros-mfc.md#on_update_command_ui) , qualsiasi stato impostato utilizzando `SetButtonStyle` andrà perso durante la successiva elaborazione inattiva. Per ulteriori informazioni [, vedere come aggiornare gli oggetti dell'interfaccia utente](../../mfc/how-to-update-user-interface-objects.md) e [TN031: barre di controllo](../../mfc/tn031-control-bars.md) .

##  <a name="setbuttontext"></a>CToolBar:: SetButtonText

Chiamare questa funzione per impostare il testo su un pulsante.

```
BOOL SetButtonText(
    int nIndex,
    LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del pulsante di cui è necessario impostare il testo.

*lpszText*<br/>
Punta al testo da impostare su un pulsante.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CToolBar:: GetToolBarCtrl](#gettoolbarctrl).

##  <a name="setheight"></a>CToolBar:: seheight

Questa funzione membro imposta l'altezza della barra degli strumenti sul valore, in pixel, specificato in *cyHeight*.

```
void SetHeight(int cyHeight);
```

### <a name="parameters"></a>Parametri

*cyHeight*<br/>
Altezza, in pixel, della barra degli strumenti.

### <a name="remarks"></a>Osservazioni

Dopo avere chiamato le [dimensioni](#setsizes), usare questa funzione membro per sostituire l'altezza della barra degli strumenti standard. Se l'altezza è troppo piccola, i pulsanti verranno ritagliati in basso.

Se questa funzione non viene chiamata, il Framework usa le dimensioni del pulsante per determinare l'altezza della barra degli strumenti.

##  <a name="setsizes"></a>CToolBar:: sesizes

Chiamare questa funzione membro per impostare i pulsanti della barra degli strumenti sulla dimensione, in pixel, specificata in *sizeButton*.

```
void SetSizes(
    SIZE sizeButton,
    SIZE sizeImage);
```

### <a name="parameters"></a>Parametri

*sizeButton*<br/>
Dimensioni in pixel di ciascun pulsante.

*sizeImage*<br/>
Dimensioni in pixel di ogni immagine.

### <a name="remarks"></a>Osservazioni

Il parametro *sizeImage* deve contenere le dimensioni, in pixel, delle immagini nella bitmap della barra degli strumenti. Le dimensioni in *sizeButton* devono essere sufficienti per contenere l'immagine più 7 pixel in larghezza e 6 pixel in altezza. Questa funzione imposta inoltre l'altezza della barra degli strumenti per adattarla ai pulsanti.

Chiamare questa funzione membro solo per le barre degli strumenti che non seguono le *linee guida dell'interfaccia di Windows per* le indicazioni relative alla progettazione software per le dimensioni di pulsanti e immagini.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCListView#8](../../atl/reference/codesnippet/cpp/ctoolbar-class_4.cpp)]

## <a name="see-also"></a>Vedere anche

[CTRLBARS di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[DLGCBR32 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[DOCKTOOL di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)

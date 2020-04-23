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
ms.openlocfilehash: cbb2d1bb797737a14e9728d339305bf9c371b543
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752203"
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
|[CToolBar::CommandToIndex](#commandtoindex)|Restituisce l'indice di un pulsante con l'ID di comando specificato.|
|[CToolBar::Creare](#create)|Crea la barra degli strumenti di `CToolBar` Windows e la associa all'oggetto.|
|[CToolBar::CreateEx](#createex)|Crea `CToolBar` un oggetto con stili `CToolBarCtrl` aggiuntivi per l'oggetto incorporato.|
|[CToolBar::GetButtonInfo](#getbuttoninfo)|Recupera l'ID, lo stile e il numero di immagine di un pulsante.|
|[CToolBar::GetButtonStyle](#getbuttonstyle)|Recupera lo stile per un pulsante.|
|[CToolBar::GetButtonText](#getbuttontext)|Recupera il testo che verrà visualizzato su un pulsante.|
|[CToolBar::GetItemID](#getitemid)|Restituisce l'ID di comando di un pulsante o separatore in corrispondenza dell'indice specificato.|
|[CToolBar::GetItemRect](#getitemrect)|Recupera il rettangolo di visualizzazione per l'elemento in corrispondenza dell'indice specificato.|
|[CToolBar::GetToolBarCtrl](#gettoolbarctrl)|Consente l'accesso diretto al controllo comune sottostante.|
|[CToolBar::LoadBitmap](#loadbitmap)|Carica la bitmap contenente le immagini dei pulsanti bitmap.|
|[CToolBar::LoadToolBar](#loadtoolbar)|Carica una risorsa barra degli strumenti creata con l'editor di risorse.|
|[CToolBar::SetBitmap](#setbitmap)|Imposta un'immagine bitmap.|
|[CToolBar::SetButtonInfo](#setbuttoninfo)|Imposta l'ID, lo stile e il numero di immagine di un pulsante.|
|[CToolBar::SetButtons](#setbuttons)|Imposta gli stili dei pulsanti e un indice delle immagini dei pulsanti all'interno della bitmap.|
|[CToolBar::SetButtonStyle](#setbuttonstyle)|Imposta lo stile per un pulsante.|
|[CToolBar::SetButtonText](#setbuttontext)|Imposta il testo che verrà visualizzato su un pulsante.|
|[CToolBar::SetHeight](#setheight)|Imposta l'altezza della barra degli strumenti.|
|[CToolBar::SetSizes](#setsizes)|Imposta le dimensioni dei pulsanti e delle relative bitmap.|

## <a name="remarks"></a>Osservazioni

I pulsanti possono agire come pulsanti, pulsanti della casella di controllo o pulsanti di opzione. `CToolBar`Gli oggetti sono in genere membri incorporati di oggetti finestra cornice derivati dalla classe [CFrameWnd](../../mfc/reference/cframewnd-class.md) o [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md).

[CToolBar::GetToolBarCtrl](#gettoolbarctrl), una funzione membro new di MFC 4.0, consente di sfruttare il supporto del controllo comune di Windows per la personalizzazione della barra degli strumenti e funzionalità aggiuntive. `CToolBar`Le funzioni membro offrono la maggior parte delle funzionalità dei controlli comuni di Windows; tuttavia, quando `GetToolBarCtrl`si chiama , è possibile assegnare alle barre degli strumenti ancora di più le caratteristiche delle barre degli strumenti di Windows 95/98. Quando si `GetToolBarCtrl`chiama , verrà restituito `CToolBarCtrl` un riferimento a un oggetto. Vedere CToolBarCtrl per ulteriori informazioni sulla progettazione di barre degli strumenti utilizzando i controlli comuni di Windows.See [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) for more information about designing toolbars using Windows common controls. Per ulteriori informazioni generali sui controlli comuni, vedere [controlli comuni](/windows/win32/Controls/common-controls-intro) in Windows SDK.

In Visual Cè sono disponibili due metodi per creare una barra degli strumenti. Per creare una risorsa barra degli strumenti utilizzando l'Editor risorse, attenersi alla seguente procedura:

1. Creare una risorsa barra degli strumenti.

1. Costruire l'oggetto `CToolBar`.

1. Chiamare la funzione [Create](#create) (o [CreateEx](#createex)) per creare `CToolBar` la barra degli strumenti di Windows e associarla all'oggetto.

1. Chiamare [LoadToolBar](#loadtoolbar) per caricare la risorsa barra degli strumenti.

In caso contrario, seguire questi passaggi:

1. Costruire l'oggetto `CToolBar`.

1. Chiamare la funzione [Create](#create) (o [CreateEx](#createex)) per creare `CToolBar` la barra degli strumenti di Windows e associarla all'oggetto.

1. Chiamare [LoadBitmap](#loadbitmap) per caricare la bitmap che contiene le immagini dei pulsanti della barra degli strumenti.

1. Chiamare [SetButtons](#setbuttons) per impostare lo stile del pulsante e associare ogni pulsante a un'immagine nella bitmap.

Tutte le immagini dei pulsanti nella barra degli strumenti sono tratte da una bitmap, che deve contenere un'immagine per ogni pulsante. Tutte le immagini devono avere le stesse dimensioni; il valore predefinito è 16 pixel di larghezza e 15 pixel di altezza. Le immagini devono essere affiancate nella bitmap.

La `SetButtons` funzione accetta un puntatore a una matrice di ID di controllo e un numero intero che specifica il numero di elementi nella matrice. La funzione imposta l'ID di ogni pulsante sul valore dell'elemento corrispondente della matrice e assegna a ogni pulsante un indice dell'immagine, che specifica la posizione dell'immagine del pulsante nella bitmap. Se un elemento della matrice ha il valore ID_SEPARATOR, non viene assegnato alcun indice di immagine.

L'ordine delle immagini nella bitmap è in genere l'ordine in cui vengono disegnate sullo schermo, ma è possibile utilizzare la funzione [SetButtonInfo](#setbuttoninfo) per modificare la relazione tra l'ordine delle immagini e l'ordine di disegno.

Tutti i pulsanti di una barra degli strumenti hanno le stesse dimensioni. Il valore predefinito è 24 x 22 pixel, in conformità con *le linee guida dell'interfaccia di Windows per*la progettazione software . Qualsiasi spazio aggiuntivo tra le dimensioni dell'immagine e del pulsante viene utilizzato per formare un bordo intorno all'immagine.

Ogni pulsante ha un'immagine. I vari stati e stili dei pulsanti (premuti, su, giù, disabilitati, disabilitati verso il basso e indeterminati) vengono generati da tale immagine. Sebbene le bitmap possano essere di qualsiasi colore, è possibile ottenere i migliori risultati con immagini in nero e sfumature di grigio.

> [!WARNING]
> `CToolBar`supporta bitmap con un massimo di 16 colori. Quando si carica un'immagine in un editor della barra degli strumenti, Visual Studio converte automaticamente l'immagine in una bitmap a 16 colori, se necessario, e visualizza un messaggio di avviso se l'immagine è stata convertita. Se si utilizza un'immagine con più di 16 colori (utilizzando un editor esterno per modificare l'immagine), l'applicazione potrebbe comportarsi in modo imprevisto.

I pulsanti della barra degli strumenti imitano i pulsanti per impostazione predefinita. Tuttavia, i pulsanti della barra degli strumenti possono anche imitare i pulsanti della casella di controllo o i pulsanti di opzione. I pulsanti delle caselle di controllo hanno tre stati: selezionato, deselezionato e indeterminato. I pulsanti di opzione hanno solo due stati: selezionato e cancellato.

Per impostare uno stile di pulsante o separatore individuale senza puntare a una matrice, `SetButtons`chiamare [GetButtonStyle](#getbuttonstyle) per recuperare lo stile, quindi chiamare [SetButtonStyle](#setbuttonstyle) anziché . `SetButtonStyle`è particolarmente utile quando si desidera modificare lo stile di un pulsante in fase di esecuzione.

Per assegnare il testo da visualizzare su un pulsante, chiamare [GetButtonText](#getbuttontext) per recuperare il testo da visualizzare sul pulsante e quindi chiamare [SetButtonText](#setbuttontext) per impostare il testo.

Per creare un pulsante della casella di controllo, assegnargli lo stile TBBS_CHECKBOX o utilizzare la funzione membro di `CCmdUI` `SetCheck` un oggetto in un gestore di ON_UPDATE_COMMAND_UI. La `SetCheck` chiamata trasforma un pulsante in un pulsante della casella di controllo. Passare `SetCheck` un argomento pari a 0 per unchecked, 1 per checked o 2 per indeterminato.

Per creare un pulsante di opzione, chiamare la funzione membro [SetRadio](../../mfc/reference/ccmdui-class.md#setradio) di un oggetto [CCmdUI](../../mfc/reference/ccmdui-class.md) da un gestore di ON_UPDATE_COMMAND_UI. Passare `SetRadio` un argomento pari a 0 per unchecked o diverso da zero per checked. Per fornire il comportamento che si escludono a vicenda di un gruppo di opzioni, è necessario disporre di gestori di ON_UPDATE_COMMAND_UI per tutti i pulsanti del gruppo.

Per ulteriori informazioni `CToolBar`sull'utilizzo di , vedere l'articolo [Implementazione della barra degli strumenti MFC](../../mfc/mfc-toolbar-implementation.md) e [Nota tecnica 31: barre di controllo](../../mfc/tn031-control-bars.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[Ccontrolbar](../../mfc/reference/ccontrolbar-class.md)

`CToolBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxext.h

## <a name="ctoolbarcommandtoindex"></a><a name="commandtoindex"></a>CToolBar::CommandToIndex

Questa funzione membro restituisce l'indice del primo pulsante della `nIDFind`barra degli strumenti, a partire dalla posizione 0, il cui ID di comando corrisponde a .

```
int CommandToIndex(UINT nIDFind) const;
```

### <a name="parameters"></a>Parametri

*nIDTrova*<br/>
ID di comando di un pulsante della barra degli strumenti.

### <a name="return-value"></a>Valore restituito

Indice del pulsante oppure -1 se nessun pulsante ha l'ID di comando specificato.

## <a name="ctoolbarcreate"></a><a name="create"></a>CToolBar::Creare

Questa funzione membro crea una barra degli strumenti di `CToolBar` Windows (una finestra figlio) e la associa all'oggetto.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_TOP,
    UINT nID = AFX_IDW_TOOLBAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre della barra degli strumenti.

*DwStyle (in stile dwStyle)*<br/>
Stile della barra degli strumenti. Ulteriori stili di barre degli strumenti supportati sono:

- CBRS_TOP barra di controllo si trova nella parte superiore della finestra cornice.

- CBRS_BOTTOM barra di controllo si trova nella parte inferiore della finestra cornice.

- CBRS_NOALIGN barra di controllo non viene riposizionata quando l'elemento padre viene ridimensionato.

- CBRS_TOOLTIPS barra Controllo vengono visualizzate le descrizioni comandi.

- CBRS_SIZE_DYNAMIC barra di controllo è dinamica.

- CBRS_SIZE_FIXED barra di controllo è fissa.

- CBRS_FLOATING barra di controllo è mobile.

- CBRS_FLYBY barra di stato vengono visualizzate informazioni sul pulsante.

- CBRS_HIDE_INPLACE barra di controllo non viene visualizzata all'utente.

*nID*<br/>
ID della finestra figlio della barra degli strumenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Imposta inoltre l'altezza della barra degli strumenti su un valore predefinito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#179](../../mfc/codesnippet/cpp/ctoolbar-class_1.cpp)]

## <a name="ctoolbarcreateex"></a><a name="createex"></a>CToolBar::CreateEx

Chiamare questa funzione per creare una barra degli strumenti `CToolBar` di Windows (una finestra figlio) e associarla all'oggetto.

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

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra che è padre della barra degli strumenti.

*dwCtrlStyle*<br/>
Stili aggiuntivi per la creazione dell'oggetto incorporato [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) oggetto. Per impostazione predefinita, questo valore è impostato su TBSTYLE_FLAT. Per un elenco completo degli stili della barra degli strumenti, vedere *dwStyle*.

*DwStyle (in stile dwStyle)*<br/>
Stile della barra degli strumenti. Per un elenco degli stili appropriati, vedere [Stili di controllo e pulsante](/windows/win32/Controls/toolbar-control-and-button-styles) della barra degli strumenti in Windows SDK.

*rcBorders*<br/>
Oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che definisce la larghezza dei bordi della finestra della barra degli strumenti. Questi bordi sono impostati su 0,0,0,0 per impostazione predefinita, generando così una finestra della barra degli strumenti senza bordi.

*nID*<br/>
ID della finestra figlio della barra degli strumenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Imposta inoltre l'altezza della barra degli strumenti su un valore predefinito.

Utilizzare `CreateEx`, anziché [Create](#create), quando determinati stili devono essere presenti durante la creazione del controllo barra degli strumenti incorporato. Ad esempio, impostare *dwCtrlStyle* su TBSTYLE_FLAT &#124; TBSTYLE_TRANSPARENT per creare una barra degli strumenti simile alle barre degli strumenti di Internet Explorer 4.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#180](../../mfc/codesnippet/cpp/ctoolbar-class_2.cpp)]

## <a name="ctoolbarctoolbar"></a><a name="ctoolbar"></a>CToolBar::CToolBar

Questa funzione membro `CToolBar` costruisce un oggetto e imposta le dimensioni predefinite.

```
CToolBar();
```

### <a name="remarks"></a>Osservazioni

Chiamare la funzione membro [Create](#create) per creare la finestra della barra degli strumenti.

## <a name="ctoolbargetbuttoninfo"></a><a name="getbuttoninfo"></a>CToolBar::GetButtonInfo

Questa funzione membro recupera l'ID del controllo, lo stile e l'indice dell'immagine del pulsante della barra degli strumenti o del separatore nella posizione specificata da *nIndex.*

```cpp
void GetButtonInfo(
    int nIndex,
    UINT& nID,
    UINT& nStyle,
    int& iImage) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del pulsante o del separatore della barra degli strumenti le cui informazioni devono essere recuperate.

*nID*<br/>
Riferimento a un UINT impostato sull'ID di comando del pulsante.

*nStyle*<br/>
Riferimento a un UINT impostato sullo stile del pulsante.

*iImage (immagine)*<br/>
Riferimento a un numero intero impostato sull'indice dell'immagine del pulsante all'interno della bitmap.

### <a name="remarks"></a>Osservazioni

Tali valori vengono assegnati alle variabili a cui fanno riferimento *nID*, *nStyle*e *iImage*. L'indice dell'immagine è la posizione dell'immagine all'interno della bitmap che contiene le immagini per tutti i pulsanti della barra degli strumenti. La prima immagine si trova nella posizione 0.

Se *nIndex* specifica un separatore, *iImage* viene impostato sulla larghezza del separatore in pixel.

## <a name="ctoolbargetbuttonstyle"></a><a name="getbuttonstyle"></a>CToolBar::GetButtonStyle

Chiamare questa funzione membro per recuperare lo stile di un pulsante o separatore sulla barra degli strumenti.

```
UINT GetButtonStyle(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del pulsante della barra degli strumenti o dello stile separatore da recuperare.

### <a name="return-value"></a>Valore restituito

Stile del pulsante o del separatore specificato da *nIndex*.

### <a name="remarks"></a>Osservazioni

Lo stile di un pulsante determina la modalità di visualizzazione e la modalità di risposta all'input dell'utente. Vedere [SetButtonStyle](#setbuttonstyle) per esempi di stili di pulsante.

## <a name="ctoolbargetbuttontext"></a><a name="getbuttontext"></a>CToolBar::GetButtonText

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

*rStringa*<br/>
Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che conterrà il testo da recuperare.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` contenente il testo del pulsante.

### <a name="remarks"></a>Osservazioni

Il secondo form di questa `CString` funzione membro riempie un oggetto con il testo della stringa.

## <a name="ctoolbargetitemid"></a><a name="getitemid"></a>CToolBar::GetItemID

Questa funzione membro restituisce l'ID di comando del pulsante o del separatore specificato da *nIndex*.

```
UINT GetItemID(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento il cui ID deve essere recuperato.

### <a name="return-value"></a>Valore restituito

ID di comando del pulsante o del separatore specificato da *nIndex*.

### <a name="remarks"></a>Osservazioni

I separatori restituiscono ID_SEPARATOR.

## <a name="ctoolbargetitemrect"></a><a name="getitemrect"></a>CToolBar::GetItemRect

Questa funzione membro `RECT` riempie la struttura il cui indirizzo è contenuto in *lpRect* con le coordinate del pulsante o del separatore specificato da *nIndex*.

```
virtual void GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento (pulsante o separatore) le cui coordinate del rettangolo devono essere recuperate.

*Lprect*<br/>
Indirizzo della struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che conterrà le coordinate dell'elemento.

### <a name="remarks"></a>Osservazioni

Le coordinate sono in pixel rispetto all'angolo superiore sinistro della barra degli strumenti.

Utilizzare `GetItemRect` per ottenere le coordinate di un separatore che si desidera sostituire con una casella combinata o un altro controllo.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CToolBar::SetSizes](#setsizes).

## <a name="ctoolbargettoolbarctrl"></a><a name="gettoolbarctrl"></a>CToolBar::GetToolBarCtrl

Questa funzione membro consente l'accesso diretto al controllo comune sottostante.

```
CToolBarCtrl& GetToolBarCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento a un oggetto `CToolBarCtrl`.

### <a name="remarks"></a>Osservazioni

Utilizzare `GetToolBarCtrl` per sfruttare le funzionalità del controllo comune barra degli strumenti di Windows e per sfruttare il supporto [CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md) fornisce per la personalizzazione della barra degli strumenti.

Per ulteriori informazioni sull'utilizzo di controlli comuni, vedere l'articolo [controlli](../../mfc/controls-mfc.md) e [controlli comuni](/windows/win32/Controls/common-controls-intro) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocViewSDI#15](../../mfc/codesnippet/cpp/ctoolbar-class_3.cpp)]

## <a name="ctoolbarloadbitmap"></a><a name="loadbitmap"></a>CToolBar::LoadBitmap

Chiamare questa funzione membro per `lpszResourceName` caricare `nIDResource`la bitmap specificata da o .

```
BOOL LoadBitmap(LPCTSTR lpszResourceName);
BOOL LoadBitmap(UINT nIDResource);
```

### <a name="parameters"></a>Parametri

*LpszResourceName (nome della risorsa)*<br/>
Puntatore al nome della risorsa della bitmap da caricare.

*nIDResource*<br/>
ID risorsa della bitmap da caricare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La bitmap deve contenere un'immagine per ogni pulsante della barra degli strumenti. Se le immagini non sono di dimensioni standard (16 pixel di larghezza e 15 pixel di altezza), chiama [SetSizes](#setsizes) per impostare le dimensioni dei pulsanti e le relative immagini.

> [!WARNING]
> `CToolBar`supporta bitmap con un massimo di 16 colori. Quando si carica un'immagine in un editor della barra degli strumenti, Visual Studio converte automaticamente l'immagine in una bitmap a 16 colori, se necessario, e visualizza un messaggio di avviso se l'immagine è stata convertita. Se si utilizza un'immagine con più di 16 colori (utilizzando un editor esterno per modificare l'immagine), l'applicazione potrebbe comportarsi in modo imprevisto.

## <a name="ctoolbarloadtoolbar"></a><a name="loadtoolbar"></a>CToolBar::LoadToolBar

Chiamare questa funzione membro per caricare la barra degli strumenti specificata da *lpszResourceName* o *nIDResource*.

```
BOOL LoadToolBar(LPCTSTR lpszResourceName);
BOOL LoadToolBar(UINT nIDResource);
```

### <a name="parameters"></a>Parametri

*LpszResourceName (nome della risorsa)*<br/>
Puntatore al nome della risorsa della barra degli strumenti da caricare.

*nIDResource*<br/>
ID risorsa della barra degli strumenti da caricare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulla creazione di una risorsa barra degli strumenti, vedere [Editor della barra degli strumenti.](../../windows/toolbar-editor.md)

### <a name="example"></a>Esempio

  Vedere l'esempio per [CToolBar::CreateEx](#createex).

## <a name="ctoolbarsetbitmap"></a><a name="setbitmap"></a>CToolBar::SetBitmap

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

Ad esempio, `SetBitmap` chiamare per modificare l'immagine bitmap dopo che l'utente esegue un'azione su un documento che modifica l'azione di un pulsante.

## <a name="ctoolbarsetbuttoninfo"></a><a name="setbuttoninfo"></a>CToolBar::SetButtonInfo

Chiamare questa funzione membro per impostare l'ID di comando del pulsante, lo stile e il numero di immagine.

```cpp
void SetButtonInfo(
    int nIndex,
    UINT nID,
    UINT nStyle,
    int iImage);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice in base zero del pulsante o del separatore per il quale devono essere impostate le informazioni.

*nID*<br/>
Valore su cui è impostato l'ID di comando del pulsante.

*nStyle*<br/>
Nuovo stile di pulsante. Sono supportati i seguenti stili di pulsante:

- TBBS_BUTTON pulsante Standard (predefinito)

- Separatore TBBS_SEPARATOR

- TBBS_CHECKBOX casella di controllo Auto

- TBBS_GROUP Contrassegna l'inizio di un gruppo di pulsanti

- TBBS_CHECKGROUP Contrassegna l'inizio di un gruppo di pulsanti della casella di controllo

- TBBS_DROPDOWN Crea un pulsante di elenco a discesa.

- TBBS_AUTOSIZE La larghezza del pulsante verrà calcolata in base al testo del pulsante, non alle dimensioni dell'immagine.

- TBBS_NOPREFIX Il testo del pulsante non avrà un prefisso di scelta rapida associato.

*iImage (immagine)*<br/>
Nuovo indice per l'immagine del pulsante all'interno della bitmap.

### <a name="remarks"></a>Osservazioni

Per i separatori, che hanno lo stile TBBS_SEPARATOR, questa funzione imposta la larghezza del separatore in pixel sul valore memorizzato in *iImage*.

> [!NOTE]
> È anche possibile impostare gli stati dei pulsanti utilizzando il parametro *nStyle;* Tuttavia, poiché gli stati dei pulsanti sono `SetButtonInfo` controllati dal [gestore di ON_UPDATE_COMMAND_UI,](message-map-macros-mfc.md#on_update_command_ui) qualsiasi stato impostato utilizzando andrà perso durante la successiva elaborazione inattiva. Per ulteriori informazioni, vedere Come aggiornare gli [oggetti dell'interfaccia utente](../../mfc/how-to-update-user-interface-objects.md) e [TN031: barre](../../mfc/tn031-control-bars.md) di controllo.

Per informazioni sulle immagini bitmap e sui pulsanti, vedere Cenni preliminari su [CToolBar](../../mfc/reference/ctoolbar-class.md) e [CToolBar::LoadBitmap](#loadbitmap).

## <a name="ctoolbarsetbuttons"></a><a name="setbuttons"></a>CToolBar::SetButtons

Questa funzione membro imposta l'ID di comando di ogni pulsante della barra degli strumenti sul valore specificato dall'elemento corrispondente della matrice *lpIDArray*.

```
BOOL SetButtons(
    const UINT* lpIDArray,
    int nIDCount);
```

### <a name="parameters"></a>Parametri

*lpIDArray (matrice di oggetti di lavoro)*<br/>
Puntatore a una matrice di ID di comando. Può essere NULL per allocare i pulsanti vuoti.

*nIDCount*<br/>
Numero di elementi nella matrice a cui punta *lpIDArray*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se un elemento della matrice ha il valore ID_SEPARATOR, viene creato un separatore nella posizione corrispondente della barra degli strumenti. Questa funzione imposta anche lo stile di ogni pulsante su TBBS_BUTTON e lo stile di ogni separatore su TBBS_SEPARATOR e assegna un indice immagine a ogni pulsante. L'indice dell'immagine specifica la posizione dell'immagine del pulsante all'interno della bitmap.

Non è necessario tenere conto dei separatori nella bitmap perché questa funzione non assegna indici di immagine per i separatori. Se la barra degli strumenti dispone di pulsanti nelle posizioni 0, 1 e 3 e un separatore nella posizione 2, le immagini nelle posizioni 0, 1 e 2 nella bitmap vengono assegnate ai pulsanti nelle posizioni 0, 1 e 3, rispettivamente.

Se *lpIDArray* è NULL, questa funzione alloca spazio per il numero di elementi specificato da *nIDCount*. Utilizzare [SetButtonInfo](#setbuttoninfo) per impostare gli attributi di ogni elemento.

## <a name="ctoolbarsetbuttonstyle"></a><a name="setbuttonstyle"></a>CToolBar::SetButtonStyle

Chiamare questa funzione membro per impostare lo stile di un pulsante o separatore o per raggruppare i pulsanti.

```cpp
void SetButtonStyle(
    int nIndex,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del pulsante o del separatore di cui devono essere impostate le informazioni.

*nStyle*<br/>
Stile del pulsante. Sono supportati i seguenti stili di pulsante:

- TBBS_BUTTON pulsante Standard (predefinito)

- Separatore TBBS_SEPARATOR

- TBBS_CHECKBOX casella di controllo Auto

- TBBS_GROUP Contrassegna l'inizio di un gruppo di pulsanti

- TBBS_CHECKGROUP Contrassegna l'inizio di un gruppo di pulsanti della casella di controllo

- TBBS_DROPDOWN Crea un pulsante di elenco a discesa

- TBBS_AUTOSIZE La larghezza del pulsante verrà calcolata in base al testo del pulsante, non alle dimensioni dell'immagine

- TBBS_NOPREFIX Il testo del pulsante non avrà un prefisso di scelta rapida associato

### <a name="remarks"></a>Osservazioni

Lo stile di un pulsante determina la modalità di visualizzazione e la modalità di risposta all'input dell'utente.

Prima `SetButtonStyle`di chiamare , chiamare il [GetButtonStyle](#getbuttonstyle) funzione membro per recuperare il pulsante o lo stile separatore.

> [!NOTE]
> È anche possibile impostare gli stati dei pulsanti utilizzando il parametro *nStyle;* Tuttavia, poiché gli stati dei pulsanti sono `SetButtonStyle` controllati dal [gestore di ON_UPDATE_COMMAND_UI,](message-map-macros-mfc.md#on_update_command_ui) qualsiasi stato impostato utilizzando andrà perso durante la successiva elaborazione inattiva. Per ulteriori informazioni, vedere Come aggiornare gli [oggetti dell'interfaccia utente](../../mfc/how-to-update-user-interface-objects.md) e [TN031: barre](../../mfc/tn031-control-bars.md) di controllo.

## <a name="ctoolbarsetbuttontext"></a><a name="setbuttontext"></a>CToolBar::SetButtonText

Chiamare questa funzione per impostare il testo su un pulsante.

```
BOOL SetButtonText(
    int nIndex,
    LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del pulsante di cui deve essere impostato il testo.

*lpszText*<br/>
Punta al testo da impostare su un pulsante.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CToolBar::GetToolBarCtrl](#gettoolbarctrl).

## <a name="ctoolbarsetheight"></a><a name="setheight"></a>CToolBar::SetHeight

Questa funzione membro imposta l'altezza della barra degli strumenti sul valore, in pixel, specificato in *cyHeight*.

```cpp
void SetHeight(int cyHeight);
```

### <a name="parameters"></a>Parametri

*cyAltezza*<br/>
Altezza in pixel della barra degli strumenti.

### <a name="remarks"></a>Osservazioni

Dopo aver chiamato [SetSizes](#setsizes), utilizzare questa funzione membro per eseguire l'override dell'altezza standard della barra degli strumenti. Se l'altezza è troppo piccola, i pulsanti verranno ritagliati nella parte inferiore.

Se questa funzione non viene chiamata, il framework utilizza le dimensioni del pulsante per determinare l'altezza della barra degli strumenti.

## <a name="ctoolbarsetsizes"></a><a name="setsizes"></a>CToolBar::SetSizes

Chiamare questa funzione membro per impostare i pulsanti della barra degli strumenti sulle dimensioni, in pixel, specificate in *sizeButton*.

```cpp
void SetSizes(
    SIZE sizeButton,
    SIZE sizeImage);
```

### <a name="parameters"></a>Parametri

*sizeButton*<br/>
Dimensioni in pixel di ogni pulsante.

*dimensioneImmagine*<br/>
Dimensioni in pixel di ogni immagine.

### <a name="remarks"></a>Osservazioni

Il *sizeImage* parametro deve contenere le dimensioni, in pixel, delle immagini nella bitmap della barra degli strumenti. Le dimensioni in *sizeButton* devono essere sufficienti per contenere l'immagine più 7 pixel in più in larghezza e 6 pixel in più in altezza. Questa funzione imposta anche l'altezza della barra degli strumenti per adattarsi ai pulsanti.

Chiamare questa funzione membro solo per le barre degli strumenti che non seguono *le linee guida dell'interfaccia* di Windows per i consigli di progettazione software per le dimensioni dei pulsanti e delle immagini.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCListView#8](../../atl/reference/codesnippet/cpp/ctoolbar-class_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC CTRLBARS](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC DLGCBR32](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC DOCKTOOL](../../overview/visual-cpp-samples.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CToolBarCtrl](../../mfc/reference/ctoolbarctrl-class.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)

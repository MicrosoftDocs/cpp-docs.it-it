---
title: Classe CMFCPropertySheet
ms.date: 11/19/2018
f1_keywords:
- CMFCPropertySheet
- AFXPROPERTYSHEET/CMFCPropertySheet
- AFXPROPERTYSHEET/CMFCPropertySheet::CMFCPropertySheet
- AFXPROPERTYSHEET/CMFCPropertySheet::AddPage
- AFXPROPERTYSHEET/CMFCPropertySheet::AddPageToTree
- AFXPROPERTYSHEET/CMFCPropertySheet::AddTreeCategory
- AFXPROPERTYSHEET/CMFCPropertySheet::EnablePageHeader
- AFXPROPERTYSHEET/CMFCPropertySheet::GetHeaderHeight
- AFXPROPERTYSHEET/CMFCPropertySheet::GetLook
- AFXPROPERTYSHEET/CMFCPropertySheet::GetNavBarWidth
- AFXPROPERTYSHEET/CMFCPropertySheet::GetTab
- AFXPROPERTYSHEET/CMFCPropertySheet::InitNavigationControl
- AFXPROPERTYSHEET/CMFCPropertySheet::OnActivatePage
- AFXPROPERTYSHEET/CMFCPropertySheet::OnDrawPageHeader
- AFXPROPERTYSHEET/CMFCPropertySheet::OnRemoveTreePage
- AFXPROPERTYSHEET/CMFCPropertySheet::RemoveCategory
- AFXPROPERTYSHEET/CMFCPropertySheet::RemovePage
- AFXPROPERTYSHEET/CMFCPropertySheet::SetIconsList
- AFXPROPERTYSHEET/CMFCPropertySheet::SetLook
helpviewer_keywords:
- CMFCPropertySheet [MFC], CMFCPropertySheet
- CMFCPropertySheet [MFC], AddPage
- CMFCPropertySheet [MFC], AddPageToTree
- CMFCPropertySheet [MFC], AddTreeCategory
- CMFCPropertySheet [MFC], EnablePageHeader
- CMFCPropertySheet [MFC], GetHeaderHeight
- CMFCPropertySheet [MFC], GetLook
- CMFCPropertySheet [MFC], GetNavBarWidth
- CMFCPropertySheet [MFC], GetTab
- CMFCPropertySheet [MFC], InitNavigationControl
- CMFCPropertySheet [MFC], OnActivatePage
- CMFCPropertySheet [MFC], OnDrawPageHeader
- CMFCPropertySheet [MFC], OnRemoveTreePage
- CMFCPropertySheet [MFC], RemoveCategory
- CMFCPropertySheet [MFC], RemovePage
- CMFCPropertySheet [MFC], SetIconsList
- CMFCPropertySheet [MFC], SetLook
ms.assetid: 01d93573-9698-440f-a6a4-5bebbee879dc
ms.openlocfilehash: 9b1bb2ce9a957b9cd9f7add983b4da7a228d7a1d
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81750068"
---
# <a name="cmfcpropertysheet-class"></a>Classe CMFCPropertySheet

La classe `CMFCPropertySheet` supporta una finestra delle proprietà in cui ogni pagina delle proprietà è identificata da una scheda, un pulsante della barra degli strumenti, un nodo del controllo dell'albero o un elemento di elenco.

## <a name="syntax"></a>Sintassi

```
class CMFCPropertySheet : public CPropertySheet
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCPropertySheet::CMFCPropertySheet](#cmfcpropertysheet)|Costruisce un oggetto `CMFCPropertySheet`.|
|`CMFCPropertySheet::~CMFCPropertySheet`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCPropertySheet::AddPage](#addpage)|Aggiunge una pagina alla finestra delle proprietà.|
|[CMFCPropertySheet::AddPageToTree](#addpagetotree)|Aggiunge una nuova pagina delle proprietà al controllo albero.|
|[CMFCPropertySheet::AddTreeCategory](#addtreecategory)|Aggiunge un nuovo nodo al controllo dell'albero.|
|[CMFCPropertySheet::EnablePageHeader](#enablepageheader)|Riserva spazio nella parte superiore di ogni pagina per creare un'intestazione personalizzata.|
|[CMFCPropertySheet::GetHeaderHeight](#getheaderheight)|Recupera l'altezza dell'intestazione corrente.|
|[CMFCPropertySheet::GetLook](#getlook)|Recupera il valore di enumerazione che specifica l'aspetto della finestra delle proprietà corrente.|
|[CMFCPropertySheet::GetNavBarWidth](#getnavbarwidth)|Recupera la larghezza della barra di navigazione in pixel.|
|[CMFCPropertySheet::GetTab](#gettab)|Recupera l'oggetto del controllo Struttura a schede interno che supporta il controllo corrente della finestra delle proprietà.|
|`CMFCPropertySheet::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCPropertySheet::InitNavigationControl](#initnavigationcontrol)|Inizializza l'aspetto del controllo corrente della finestra delle proprietà.|
|[CMFCPropertySheet::OnActivatePage](#onactivatepage)|Chiamato dal framework quando una pagina delle proprietà è abilitata.|
|[CMFCPropertySheet::OnDrawPageHeader](#ondrawpageheader)|Chiamato dal framework per creare un'intestazione pagina delle proprietà personalizzata.|
|`CMFCPropertySheet::OnInitDialog`|Gestisce il messaggio [WM_INITDIALOG.](/windows/win32/dlgbox/wm-initdialog) (Esegue l'override di [CPropertySheet::OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog).)|
|[CMFCPropertySheet::OnRemoveTreePage](#onremovetreepage)|Chiamato dal framework per rimuovere una pagina delle proprietà da un controllo albero.|
|`CMFCPropertySheet::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage.](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Esegue l'override di `CPropertySheet::PreTranslateMessage`.|
|[CMFCPropertySheet::RemoveCategory](#removecategory)|Rimuove un nodo dal controllo albero.|
|[CMFCPropertySheet::RemovePage](#removepage)|Rimuove una pagina delle proprietà dalla finestra delle proprietà.|
|[CMFCPropertySheet::SetIconsList](#seticonslist)|Specifica l'elenco delle immagini usate nel controllo di navigazione del riquadro di Outlook.|
|[CMFCPropertySheet::SetLook](#setlook)|Specifica l'aspetto della finestra delle proprietà.|

## <a name="remarks"></a>Osservazioni

La classe `CMFCPropertySheet` rappresenta le finestre delle proprietà, note anche come finestre di dialogo a schede. La classe `CMFCPropertySheet` può visualizzare una pagina delle proprietà in vari modi.

Per usare la classe `CMFCPropertySheet` nell'applicazione,seguire questa procedura:

1. Derivare una classe dalla classe `CMFCPropertySheet` e assegnare alla classe un nome, ad esempio, CMyPropertySheet.

1. Costruire un [CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md) oggetto per ogni pagina delle proprietà.

1. Chiamare il [CMFCPropertySheet::SetLook](#setlook) metodo il CMyPropertySheet costruttore. Un parametro del metodo specifica che le pagine delle proprietà vengono visualizzate come schede nella parte superiore o sinistra della finestra delle proprietà; le schede nello stile di una finestra delle proprietà di Microsoft OneNote; i pulsanti su un controllo della barra degli strumenti di Microsoft Outlook; i nodi in un controllo dell'albero oppure come un elenco di elementi sul lato sinistro della finestra delle proprietà.

1. Se si crea una finestra delle proprietà nello stile di una barra degli strumenti di Microsoft Outlook, chiamare il [CMFCPropertySheet::SetIconsList](#seticonslist) metodo per associare un elenco immagini con le pagine delle proprietà.

1. Chiamare il [CMFCPropertySheet::AddPage](#addpage) metodo per ogni pagina delle proprietà.

1. Creare un controllo `CMFCPropertySheet` e chiamare il relativo metodo `DoModal`.

## <a name="illustrations"></a>Illustrazioni

Nella figura seguente vengono illustrate una finestra delle proprietà nello stile della barra degli strumenti incorporata di Microsoft Outlook. La barra degli strumenti di Outlook viene visualizzata a sinistra della finestra delle proprietà.

![Controlli dei colori di CMFCPropertySheet](../../mfc/reference/media/cmfcpropertysheet_color.png "Controlli dei colori di CMFCPropertySheet")

Nella figura seguente viene illustrata una finestra delle proprietà che contiene un [CMFCPropertyGridCtrl classe](../../mfc/reference/cmfcpropertygridctrl-class.md) oggetto. Tale oggetto è una finestra delle proprietà nello stile di una finestra delle proprietà dei controlli standard.

![Controlli degli elenchi e delle proprietà di CMFCPropertySheet](../../mfc/reference/media/cmfcpropertysheet_list.png "Controlli degli elenchi e delle proprietà di CMFCPropertySheet")

La figura seguente mostra una finestra delle proprietà nello stile di un controllo albero.

![Albero delle proprietà](../../mfc/reference/media/proptree.png "Albero delle proprietà")

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

[CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpropertysheet.h

## <a name="cmfcpropertysheetaddpage"></a><a name="addpage"></a>CMFCPropertySheet::AddPage

Aggiunge una pagina alla finestra delle proprietà.

```cpp
void AddPage(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*pPagina*<br/>
[in] Puntatore a un oggetto pagina. Questo parametro non può essere NULL.

### <a name="remarks"></a>Osservazioni

Questo metodo aggiunge la pagina delle proprietà specificata come scheda all'estrema destra nella finestra delle proprietà. Pertanto, utilizzare questo metodo per aggiungere pagine in ordine da sinistra a destra.

Se la finestra delle proprietà è nello stile di Microsoft Outlook, il framework visualizza un elenco di pulsanti di spostamento a sinistra della finestra delle proprietà. Dopo che questo metodo aggiunge una pagina delle proprietà, aggiunge un pulsante corrispondente all'elenco. Per visualizzare una pagina delle proprietà, fare clic sul pulsante corrispondente. Per ulteriori informazioni sugli stili delle finestre delle proprietà, vedere [CMFCPropertySheet::SetLook](#setlook).

## <a name="cmfcpropertysheetaddpagetotree"></a><a name="addpagetotree"></a>CMFCPropertySheet::AddPageToTree

Aggiunge una nuova pagina delle proprietà al controllo albero.

```cpp
void AddPageToTree(
    CMFCPropertySheetCategoryInfo* pCategory,
    CMFCPropertyPage* pPage,
    int nIconNum=-1,
    int nSelIconNum=-1);
```

### <a name="parameters"></a>Parametri

*pCategoria*<br/>
[in] Puntatore a un nodo padre della struttura ad albero o NULL per associare la pagina specificata al nodo di primo livello. Chiamare il [CMFCPropertySheet::AddTreeCategory](#addtreecategory) metodo per ottenere questo puntatore.

*pPagina*<br/>
[in] Puntatore a un oggetto pagina delle proprietà.

*nIconNum (in uso)*<br/>
[in] Indice in base zero di un'icona oppure -1 se non viene utilizzata alcuna icona. L'icona viene visualizzata accanto alla pagina delle proprietà del controllo struttura ad albero quando la pagina non è selezionata. Il valore predefinito è -1.

*nSelIconNum*<br/>
[in] Indice in base zero di un'icona oppure -1 se non viene utilizzata alcuna icona. L'icona viene visualizzata accanto alla pagina delle proprietà del controllo struttura ad albero quando la pagina viene selezionata. Il valore predefinito è -1.

### <a name="remarks"></a>Osservazioni

Questo metodo aggiunge una pagina delle proprietà come foglia di un controllo struttura ad albero. Per aggiungere una pagina `CMFCPropertySheet` delle proprietà, creare un oggetto, chiamare il [metodo CMFCPropertySheet::SetLook](#setlook) con il parametro *look* impostato su `CMFCPropertySheet::PropSheetLook_Tree`, quindi utilizzare questo metodo per aggiungere la pagina delle proprietà.

## <a name="cmfcpropertysheetaddtreecategory"></a><a name="addtreecategory"></a>CMFCPropertySheet::AddTreeCategory

Aggiunge un nuovo nodo al controllo dell'albero.

```
CMFCPropertySheetCategoryInfo* AddTreeCategory(
    LPCTSTR lpszLabel,
    int nIconNum=-1,
    int nSelectedIconNum=-1,
    const CMFCPropertySheetCategoryInfo* pParentCategory=NULL);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Nome del nodo.

*nIconNum (in uso)*<br/>
[in] Indice in base zero di un'icona oppure -1 se non viene utilizzata alcuna icona. L'icona viene visualizzata accanto alla pagina delle proprietà del controllo struttura ad albero quando la pagina non è selezionata. Il valore predefinito è -1.

*nSelectedIconNum (incui)*<br/>
[in] Indice in base zero di un'icona oppure -1 se non viene utilizzata alcuna icona. L'icona viene visualizzata accanto alla pagina delle proprietà del controllo struttura ad albero quando la pagina viene selezionata. Il valore predefinito è -1.

*pCategoriaPadre*<br/>
[in] Puntatore a un nodo padre della struttura ad albero o NULL per associare la pagina specificata al nodo di primo livello. Impostare questo parametro con il [CMFCPropertySheet::AddTreeCategory](#addtreecategory) metodo.

### <a name="return-value"></a>Valore restituito

Puntatore al nuovo nodo nel controllo struttura ad albero.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per aggiungere un nuovo nodo, denominato anche categoria, al controllo struttura ad albero. Per aggiungere un nodo, creare `CMFCPropertySheet` un oggetto, chiamare il metodo [CMFCPropertySheet::SetLook](#setlook) con il parametro *look* impostato su `CMFCPropertySheet::PropSheetLook_Tree`, quindi utilizzare questo metodo per aggiungere il nodo.

Utilizzare il valore restituito di questo metodo nelle chiamate successive a [CMFCPropertySheet::AddPageToTree](#addpagetotree) e [CMFCPropertySheet::AddTreeCategory](#addtreecategory).

## <a name="cmfcpropertysheetcmfcpropertysheet"></a><a name="cmfcpropertysheet"></a>CMFCPropertySheet::CMFCPropertySheet

Costruisce un oggetto `CMFCPropertySheet`.

```
CMFCPropertySheet(
    UINT nIDCaption,
    CWnd* pParentWnd=NULL,
    UINT iSelectPage=0);

CMFCPropertySheet(
    LPCTSTR pszCaption,
    CWnd* pParentWnd=NULL,
    UINT iSelectPage=0);
```

### <a name="parameters"></a>Parametri

*pszCaption (didascalia)*<br/>
[in] Stringa contenente la didascalia della finestra delle proprietà. Non può essere NULL.

*nIDCaption (didascalie di identità)*<br/>
[in] ID risorsa che contiene la didascalia della finestra delle proprietà.

*pParentWnd (informazioni in due)*<br/>
[in] Puntatore alla finestra padre della finestra delle proprietà o NULL se la finestra padre è la finestra principale dell'applicazione. Il valore predefinito è NULL.

*ISelectPage (pagina in cui iSelectPage)*<br/>
[in] Indice in base zero della pagina delle proprietà principale. Il valore predefinito è 0.

### <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere i parametri per il [CPropertySheet::CPropertySheet](../../mfc/reference/cpropertysheet-class.md#cpropertysheet) costruttore.

## <a name="cmfcpropertysheetenablepageheader"></a><a name="enablepageheader"></a>CMFCPropertySheet::EnablePageHeader

Riserva spazio nella parte superiore di ogni pagina per creare un'intestazione personalizzata.

```cpp
void EnablePageHeader(int nHeaderHeight);
```

### <a name="parameters"></a>Parametri

*nHeaderHeight*<br/>
[in] Altezza dell'intestazione, in pixel.

### <a name="remarks"></a>Osservazioni

Per utilizzare il valore del *nHeaderHeight* parametro per disegnare un'intestazione personalizzata, eseguire l'override di [CMFCPropertySheet::OnDrawPageHeader](#ondrawpageheader) metodo.

## <a name="cmfcpropertysheetgetheaderheight"></a><a name="getheaderheight"></a>CMFCPropertySheet::GetHeaderHeight

Recupera l'altezza dell'intestazione corrente.

```
int GetHeaderHeight() const;
```

### <a name="return-value"></a>Valore restituito

Altezza dell'intestazione, in pixel.

### <a name="remarks"></a>Osservazioni

Chiamare il [CMFCPropertySheet::EnablePageHeader](#enablepageheader) metodo prima di chiamare questo metodo.

## <a name="cmfcpropertysheetgetlook"></a><a name="getlook"></a>CMFCPropertySheet::GetLook

Recupera il valore di enumerazione che specifica l'aspetto della finestra delle proprietà corrente.

```
PropSheetLook GetLook() const;
```

### <a name="return-value"></a>Valore restituito

Uno dei valori di enumerazione che specifica l'aspetto della finestra delle proprietà. Per un elenco dei valori possibili, vedere la tabella di enumerazione nella sezione Osservazioni di [CMFCPropertySheet::SetLook](#setlook).

## <a name="cmfcpropertysheetgetnavbarwidth"></a><a name="getnavbarwidth"></a>CMFCPropertySheet::GetNavBarWidth

Ottiene la larghezza della barra di spostamento.

```
int GetNavBarWidth() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza della barra di spostamento in pixel.

## <a name="cmfcpropertysheetgettab"></a><a name="gettab"></a>CMFCPropertySheet::GetTab

Recupera l'oggetto del controllo Struttura a schede interno che supporta il controllo corrente della finestra delle proprietà.

```
CMFCTabCtrl& GetTab() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto controllo struttura a schede interno.

### <a name="remarks"></a>Osservazioni

È possibile impostare una finestra delle proprietà in modo che venga visualizzata in stili diversi, ad esempio un controllo struttura ad albero, un elenco di pulsanti di spostamento o un set di pagine a schede.

Prima di chiamare questo metodo, chiamare il [CMFCPropertySheet::SetLook](#setlook) metodo per impostare l'aspetto del controllo della finestra delle proprietà. Chiamare quindi il [CMFCPropertySheet::InitNavigationControl](#initnavigationcontrol) metodo per inizializzare l'oggetto controllo struttura a schede interno. Utilizzare questo metodo per recuperare l'oggetto controllo struttura a schede e quindi utilizzare tale oggetto per utilizzare le schede nella finestra delle proprietà.

Questo metodo esegue un'asserzione in modalità di debug se il controllo della finestra delle proprietà non è impostato per essere visualizzato nello stile di Microsoft OneNote.

## <a name="cmfcpropertysheetinitnavigationcontrol"></a><a name="initnavigationcontrol"></a>CMFCPropertySheet::InitNavigationControl

Inizializza l'aspetto del controllo corrente della finestra delle proprietà.

```
virtual CWnd* InitNavigationControl();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra del controllo della finestra delle proprietà.

### <a name="remarks"></a>Osservazioni

Un controllo finestra delle proprietà può essere visualizzato in diversi form, ad esempio un set di pagine a schede, un controllo struttura ad albero o un elenco di pulsanti di spostamento. Utilizzare il [CMFCPropertySheet::SetLook](#setlook) metodo per specificare l'aspetto del controllo della finestra delle proprietà.

## <a name="cmfcpropertysheetonactivatepage"></a><a name="onactivatepage"></a>CMFCPropertySheet::OnActivatePage

Chiamato dal framework quando una pagina delle proprietà è abilitata.

```
virtual void OnActivatePage(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*pPagina*<br/>
[in] Puntatore a un oggetto pagina delle proprietà che rappresenta la pagina delle proprietà abilitata.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo assicura che la pagina delle proprietà abilitate viene eseguito lo scorrimento nella visualizzazione. Se lo stile della finestra delle proprietà corrente contiene un riquadro di Microsoft Outlook, questo metodo imposta il pulsante di Outlook corrispondente sullo stato selezionato.

## <a name="cmfcpropertysheetondrawpageheader"></a><a name="ondrawpageheader"></a>CMFCPropertySheet::OnDrawPageHeader

Chiamato dal framework per disegnare l'intestazione per una pagina delle proprietà personalizzata.

```
virtual void OnDrawPageHeader(
    CDC* pDC,
    int nPage,
    CRect rectHeader);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
[in] Puntatore a un contesto di dispositivo.

*nPagina*<br/>
[in] Numero di pagina delle proprietà in base zero.

*rectHeader*<br/>
[in] Rettangolo di delimitazione che specifica dove disegnare l'intestazione.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo non effettua alcuna operazione. Se si esegue l'override di questo metodo, chiamare il [CMFCPropertySheet::EnablePageHeader](#enablepageheader) metodo prima che il framework chiama questo metodo.

## <a name="cmfcpropertysheetonremovetreepage"></a><a name="onremovetreepage"></a>CMFCPropertySheet::OnRemoveTreePage

Chiamato dal framework per rimuovere una pagina delle proprietà da un controllo albero.

```
virtual BOOL OnRemoveTreePage(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*pPagina*<br/>
[in] Puntatore a un oggetto pagina delle proprietà che rappresenta la pagina delle proprietà da rimuovere.

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

## <a name="cmfcpropertysheetremovecategory"></a><a name="removecategory"></a>CMFCPropertySheet::RemoveCategory

Rimuove un nodo dal controllo albero.

```cpp
void RemoveCategory(CMFCPropertySheetCategoryInfo* pCategory);
```

### <a name="parameters"></a>Parametri

*pCategoria*<br/>
[in] Puntatore a una categoria (nodo) da rimuovere.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per rimuovere un nodo, noto anche come categoria, da un controllo struttura ad albero. Utilizzare il [CMFCPropertySheet::AddTreeCategory](#addtreecategory) metodo per aggiungere un nodo a un controllo struttura ad albero.

## <a name="cmfcpropertysheetremovepage"></a><a name="removepage"></a>CMFCPropertySheet::RemovePage

Rimuove una pagina delle proprietà dalla finestra delle proprietà.

```cpp
void RemovePage(CPropertyPage* pPage);
void RemovePage(int nPage);
```

### <a name="parameters"></a>Parametri

*pPagina*<br/>
[in] Puntatore all'oggetto pagina delle proprietà che rappresenta la pagina delle proprietà da rimuovere. Non può essere NULL.

*nPagina*<br/>
[in] Indice in base zero della pagina da rimuovere.

### <a name="remarks"></a>Osservazioni

Questo metodo rimuove la pagina delle proprietà specificata ed elimina la finestra associata. L'oggetto pagina delle proprietà specificato dal parametro *pPage* non viene eliminato fino a quando non viene chiusa la finestra [CMFCPropertySheet.](../../mfc/reference/cmfcpropertysheet-class.md)

## <a name="cmfcpropertysheetseticonslist"></a><a name="seticonslist"></a>CMFCPropertySheet::SetIconsList

Specifica l'elenco delle immagini usate nel controllo di navigazione del riquadro di Outlook.

```
BOOL SetIconsList(
    UINT uiImageListResID,
    int cx,
    COLORREF clrTransparent=RGB(255, 0, 255));
void SetIconsList(HIMAGELIST hIcons);
```

### <a name="parameters"></a>Parametri

*uiImageListResID (informazioni in stato in stato in attivo)*<br/>
[in] ID risorsa di un elenco immagini.

*Cx*<br/>
[in] Larghezza, in pixel, delle icone nell'elenco immagini.

*ClrTransparent*<br/>
[in] Colore dell'immagine trasparente. Le parti dell'immagine di questo colore saranno trasparenti. Il valore predefinito è il colore magenta, RGB(255,0,255).

*hIcone*<br/>
[in] Handle per un elenco di immagini esistente.

### <a name="return-value"></a>Valore restituito

Nella sintassi dell'overload del primo metodo, TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se la finestra delle proprietà è nello stile di Microsoft Outlook, il framework visualizza un elenco di pulsanti di spostamento, denominato controllo riquadro di Outlook, a sinistra della finestra delle proprietà. Utilizzare questo metodo per impostare l'elenco immagini che deve essere utilizzato dal controllo riquadro di Outlook.

Per ulteriori informazioni sui metodi che supportano questo metodo, vedere [CImageList::Create](../../mfc/reference/cimagelist-class.md#create) e [CImageList::Add](../../mfc/reference/cimagelist-class.md#add). Per ulteriori informazioni su come impostare lo stile di una finestra delle proprietà, vedere [CMFCPropertySheet::SetLook](#setlook).

## <a name="cmfcpropertysheetsetlook"></a><a name="setlook"></a>CMFCPropertySheet::SetLook

Specifica l'aspetto della finestra delle proprietà.

```cpp
void SetLook(
    PropSheetLook look,
    int nNavControlWidth=100);
```

### <a name="parameters"></a>Parametri

*Guardare*<br/>
[in] Uno dei valori di enumerazione che specifica l'aspetto della finestra delle proprietà. Lo stile predefinito per `CMFCPropertySheet::PropSheetLook_Tabs`una finestra delle proprietà è . Per ulteriori informazioni, vedere la tabella nella sezione Osservazioni di questo argomento.

*nNavControlWidth (larghezza)*<br/>
[in] Larghezza del controllo di spostamento, in pixel. Il valore predefinito è 100.

### <a name="remarks"></a>Osservazioni

Per visualizzare una finestra delle proprietà in uno stile diverso da quello predefinito, chiamare questo metodo prima di creare la finestra della finestra delle proprietà.

Nella tabella seguente sono elencati i valori di enumerazione che possono essere specificati nel parametro *look.*

|valore|Descrizione|
|-----------|-----------------|
|`CMFCPropertySheet::PropSheetLook_Tabs`|(Predefinito) Visualizza una scheda per ogni pagina delle proprietà. Le schede vengono visualizzate nella parte superiore della finestra delle proprietà e vengono impilate se sono presenti più schede di quelle che rientrano in una singola riga.|
|`CMFCPropertySheet::PropSheetLook_OutlookBar`|Visualizza un elenco di pulsanti di spostamento, nello stile della barra di Microsoft Outlook, sul lato sinistro della finestra delle proprietà. Ogni pulsante nell'elenco corrisponde a una pagina delle proprietà. Il framework visualizza le frecce di scorrimento se sono presenti più pulsanti che si adattano nell'area visibile dell'elenco.|
|`CMFCPropertySheet::PropSheetLook_Tree`|Visualizza un controllo struttura ad albero sul lato sinistro della finestra delle proprietà. Ogni nodo padre o figlio del controllo struttura ad albero corrisponde a una pagina delle proprietà. Il framework visualizza le frecce di scorrimento se sono presenti più nodi che rientrano nell'area visibile del controllo struttura ad albero.|
|`CMFCPropertySheet::PropSheetLook_OneNoteTabs`|Visualizza una scheda, nello stile di Microsoft OneNote, per ogni pagina delle proprietà. Il framework visualizza le schede nella parte superiore della finestra delle proprietà e le frecce di scorrimento se sono presenti più schede di quelle che rientrano in una singola riga.|
|`CMFCPropertySheet::PropSheetLook_List`|Visualizza un elenco sul lato sinistro della finestra delle proprietà. Ogni elemento dell'elenco corrisponde a una pagina delle proprietà. Il framework visualizza le frecce di scorrimento se sono presenti più voci di elenco di quelle che rientrano nell'area visibile dell'elenco.|

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md)<br/>
[Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)

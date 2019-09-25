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
ms.openlocfilehash: f7c9d2b472a443d8bf556d0b12dfe202ea8607a1
ms.sourcegitcommit: 389c559918d9bfaf303d262ee5430d787a662e92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2019
ms.locfileid: "69505075"
---
# <a name="cmfcpropertysheet-class"></a>Classe CMFCPropertySheet

La classe `CMFCPropertySheet` supporta una finestra delle proprietà in cui ogni pagina delle proprietà è identificata da una scheda, un pulsante della barra degli strumenti, un nodo del controllo dell'albero o un elemento di elenco.

## <a name="syntax"></a>Sintassi

```
class CMFCPropertySheet : public CPropertySheet
```

## <a name="members"></a>Members

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
|`CMFCPropertySheet::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCPropertySheet::InitNavigationControl](#initnavigationcontrol)|Inizializza l'aspetto del controllo corrente della finestra delle proprietà.|
|[CMFCPropertySheet::OnActivatePage](#onactivatepage)|Chiamato dal framework quando una pagina delle proprietà è abilitata.|
|[CMFCPropertySheet::OnDrawPageHeader](#ondrawpageheader)|Chiamato dal framework per creare un'intestazione pagina delle proprietà personalizzata.|
|`CMFCPropertySheet::OnInitDialog`|Gestisce il messaggio [WM_INITDIALOG](/windows/win32/dlgbox/wm-initdialog) . Esegue l'override di [CPropertySheet:: OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog).|
|[CMFCPropertySheet::OnRemoveTreePage](#onremovetreepage)|Chiamato dal framework per rimuovere una pagina delle proprietà da un controllo albero.|
|`CMFCPropertySheet::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) . Esegue l'override di `CPropertySheet::PreTranslateMessage`.|
|[CMFCPropertySheet::RemoveCategory](#removecategory)|Rimuove un nodo dal controllo albero.|
|[CMFCPropertySheet::RemovePage](#removepage)|Rimuove una pagina delle proprietà dalla finestra delle proprietà.|
|[CMFCPropertySheet::SetIconsList](#seticonslist)|Specifica l'elenco delle immagini usate nel controllo di navigazione del riquadro di Outlook.|
|[CMFCPropertySheet::SetLook](#setlook)|Specifica l'aspetto della finestra delle proprietà.|

## <a name="remarks"></a>Note

La classe `CMFCPropertySheet` rappresenta le finestre delle proprietà, note anche come finestre di dialogo a schede. La classe `CMFCPropertySheet` può visualizzare una pagina delle proprietà in vari modi.

Per usare la classe `CMFCPropertySheet` nell'applicazione,seguire questa procedura:

1. Derivare una classe dalla classe `CMFCPropertySheet` e assegnare alla classe un nome, ad esempio, CMyPropertySheet.

1. Costruire un oggetto [CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md) per ogni pagina delle proprietà.

1. Chiamare il metodo [CMFCPropertySheet:: selook](#setlook) nel costruttore CMyPropertySheet. Un parametro del metodo specifica che le pagine delle proprietà vengono visualizzate come schede nella parte superiore o sinistra della finestra delle proprietà; le schede nello stile di una finestra delle proprietà di Microsoft OneNote; i pulsanti su un controllo della barra degli strumenti di Microsoft Outlook; i nodi in un controllo dell'albero oppure come un elenco di elementi sul lato sinistro della finestra delle proprietà.

1. Se si crea una finestra delle proprietà nello stile di una barra degli strumenti di Microsoft Outlook, chiamare il metodo [CMFCPropertySheet::](#seticonslist) SetProperty per associare un elenco di immagini insieme alle pagine delle proprietà.

1. Chiamare il metodo [CMFCPropertySheet:: AddPage](#addpage) per ogni pagina delle proprietà.

1. Creare un controllo `CMFCPropertySheet` e chiamare il relativo metodo `DoModal`.

## <a name="illustrations"></a>Illustrazioni

Nella figura seguente vengono illustrate una finestra delle proprietà nello stile della barra degli strumenti incorporata di Microsoft Outlook. La barra degli strumenti di Outlook viene visualizzata a sinistra della finestra delle proprietà.

![Controlli colore CMFCPropertySheet](../../mfc/reference/media/cmfcpropertysheet_color.png "Controlli colore CMFCPropertySheet")

Nella figura seguente viene illustrata una finestra delle proprietà che contiene un oggetto della [classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md) . Tale oggetto è una finestra delle proprietà nello stile di una finestra delle proprietà dei controlli standard.

![Elenco di CMFCPropertySheet e controlli delle proprietà](../../mfc/reference/media/cmfcpropertysheet_list.png "Elenco di CMFCPropertySheet e controlli delle proprietà")

La figura seguente mostra una finestra delle proprietà nello stile di un controllo albero.

![Albero delle proprietà](../../mfc/reference/media/proptree.png "Albero delle proprietà")

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

[CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpropertysheet. h

##  <a name="addpage"></a>  CMFCPropertySheet::AddPage

Aggiunge una pagina alla finestra delle proprietà.

```
void AddPage(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*pPage*<br/>
in Puntatore a un oggetto pagina. Questo parametro non può essere NULL.

### <a name="remarks"></a>Note

Questo metodo aggiunge la pagina delle proprietà specificata come la scheda più a destra nella finestra delle proprietà. Pertanto, utilizzare questo metodo per aggiungere pagine in ordine da sinistra a destra.

Se la finestra delle proprietà è nello stile di Microsoft Outlook, il Framework Visualizza un elenco di pulsanti di spostamento a sinistra della finestra delle proprietà. Quando questo metodo aggiunge una pagina delle proprietà, aggiunge un pulsante corrispondente all'elenco. Per visualizzare una pagina delle proprietà, fare clic sul pulsante corrispondente. Per ulteriori informazioni sugli stili delle finestre delle proprietà, vedere [CMFCPropertySheet:: selook](#setlook).

##  <a name="addpagetotree"></a>  CMFCPropertySheet::AddPageToTree

Aggiunge una nuova pagina delle proprietà al controllo albero.

```
void AddPageToTree(
    CMFCPropertySheetCategoryInfo* pCategory,
    CMFCPropertyPage* pPage,
    int nIconNum=-1,
    int nSelIconNum=-1);
```

### <a name="parameters"></a>Parametri

*pCategory*<br/>
in Puntatore a un nodo dell'albero padre o NULL per associare la pagina specificata al nodo di livello superiore. Chiamare il metodo [CMFCPropertySheet:: AddTreeCategory](#addtreecategory) per ottenere questo puntatore.

*pPage*<br/>
in Puntatore a un oggetto pagina delle proprietà.

*nIconNum*<br/>
in Indice in base zero di un'icona oppure-1 se non viene usata alcuna icona. L'icona viene visualizzata accanto alla pagina delle proprietà del controllo albero quando la pagina non è selezionata. Il valore predefinito è -1.

*nSelIconNum*<br/>
in Indice in base zero di un'icona oppure-1 se non viene usata alcuna icona. L'icona viene visualizzata accanto alla pagina delle proprietà del controllo albero quando viene selezionata la pagina. Il valore predefinito è -1.

### <a name="remarks"></a>Note

Questo metodo aggiunge una pagina delle proprietà come foglia di un controllo albero. Per aggiungere una pagina delle proprietà, creare `CMFCPropertySheet` un oggetto, chiamare il metodo [CMFCPropertySheet:: selook](#setlook) con il parametro *look* impostato `CMFCPropertySheet::PropSheetLook_Tree`su e quindi usare questo metodo per aggiungere la pagina delle proprietà.

##  <a name="addtreecategory"></a>CMFCPropertySheet:: AddTreeCategory

Aggiunge un nuovo nodo al controllo dell'albero.

```
CMFCPropertySheetCategoryInfo* AddTreeCategory(
    LPCTSTR lpszLabel,
    int nIconNum=-1,
    int nSelectedIconNum=-1,
    const CMFCPropertySheetCategoryInfo* pParentCategory=NULL);
```

### <a name="parameters"></a>Parametri

*lpszLabel*<br/>
in Nome del nodo.

*nIconNum*<br/>
in Indice in base zero di un'icona oppure-1 se non viene usata alcuna icona. L'icona viene visualizzata accanto alla pagina delle proprietà del controllo albero quando la pagina non è selezionata. Il valore predefinito è -1.

*nSelectedIconNum*<br/>
in Indice in base zero di un'icona oppure-1 se non viene usata alcuna icona. L'icona viene visualizzata accanto alla pagina delle proprietà del controllo albero quando viene selezionata la pagina. Il valore predefinito è -1.

*pParentCategory*<br/>
in Puntatore a un nodo dell'albero padre o NULL per associare la pagina specificata al nodo di livello superiore. Impostare questo parametro con il metodo [CMFCPropertySheet:: AddTreeCategory](#addtreecategory) .

### <a name="return-value"></a>Valore restituito

Puntatore al nuovo nodo nel controllo struttura ad albero.

### <a name="remarks"></a>Note

Utilizzare questo metodo per aggiungere un nuovo nodo, definito anche categoria, al controllo albero. Per aggiungere un nodo, creare un `CMFCPropertySheet` oggetto, chiamare il metodo [CMFCPropertySheet:: selook](#setlook) con il parametro *look* impostato su `CMFCPropertySheet::PropSheetLook_Tree`e quindi usare questo metodo per aggiungere il nodo.

Usare il valore restituito di questo metodo nelle chiamate successive a [CMFCPropertySheet:: AddPageToTree](#addpagetotree) e [CMFCPropertySheet:: AddTreeCategory](#addtreecategory).

##  <a name="cmfcpropertysheet"></a>  CMFCPropertySheet::CMFCPropertySheet

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

*pszCaption*<br/>
in Stringa che contiene la didascalia della finestra delle proprietà. Non può essere NULL.

*nIDCaption*<br/>
in ID di risorsa che contiene la didascalia della finestra delle proprietà.

*pParentWnd*<br/>
in Puntatore alla finestra padre della finestra delle proprietà o NULL se la finestra padre è la finestra principale dell'applicazione. Il valore predefinito è NULL.

*iSelectPage*<br/>
in Indice in base zero della pagina delle proprietà Top. Il valore predefinito è 0.

### <a name="remarks"></a>Note

Per ulteriori informazioni, vedere i parametri per il costruttore [CPropertySheet:: CPropertySheet](../../mfc/reference/cpropertysheet-class.md#cpropertysheet) .

##  <a name="enablepageheader"></a>  CMFCPropertySheet::EnablePageHeader

Riserva spazio nella parte superiore di ogni pagina per creare un'intestazione personalizzata.

```
void EnablePageHeader(int nHeaderHeight);
```

### <a name="parameters"></a>Parametri

*nHeaderHeight*<br/>
in Altezza, in pixel, dell'intestazione.

### <a name="remarks"></a>Note

Per usare il valore del parametro *nHeaderHeight* per creare un'intestazione personalizzata, eseguire l'override del metodo [CMFCPropertySheet:: OnDrawPageHeader](#ondrawpageheader) .

##  <a name="getheaderheight"></a>CMFCPropertySheet:: GetHeaderHeight

Recupera l'altezza dell'intestazione corrente.

```
int GetHeaderHeight() const;
```

### <a name="return-value"></a>Valore restituito

Altezza, in pixel, dell'intestazione.

### <a name="remarks"></a>Note

Chiamare il metodo [CMFCPropertySheet:: EnablePageHeader](#enablepageheader) prima di chiamare questo metodo.

##  <a name="getlook"></a>  CMFCPropertySheet::GetLook

Recupera il valore di enumerazione che specifica l'aspetto della finestra delle proprietà corrente.

```
PropSheetLook GetLook() const;
```

### <a name="return-value"></a>Valore restituito

Uno dei valori di enumerazione che specifica l'aspetto della finestra delle proprietà. Per un elenco di valori possibili, vedere la tabella di enumerazione nella sezione Osservazioni di [CMFCPropertySheet:: selook](#setlook).

##  <a name="getnavbarwidth"></a>CMFCPropertySheet:: GetNavBarWidth

Ottiene la larghezza della barra di spostamento.

```
int GetNavBarWidth() const;
```

### <a name="return-value"></a>Valore restituito

Larghezza della barra di spostamento in pixel.

##  <a name="gettab"></a>CMFCPropertySheet:: GetTab

Recupera l'oggetto del controllo Struttura a schede interno che supporta il controllo corrente della finestra delle proprietà.

```
CMFCTabCtrl& GetTab() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto controllo struttura a schede interno.

### <a name="remarks"></a>Note

È possibile impostare una finestra delle proprietà in modo che venga visualizzata in stili diversi, ad esempio un controllo struttura ad albero, un elenco di pulsanti di spostamento o un set di pagine a schede.

Prima di chiamare questo metodo, chiamare il metodo [CMFCPropertySheet:: selook](#setlook) per impostare l'aspetto del controllo della finestra delle proprietà. Chiamare quindi il metodo [CMFCPropertySheet:: InitNavigationControl](#initnavigationcontrol) per inizializzare l'oggetto interno del controllo scheda. Utilizzare questo metodo per recuperare l'oggetto controllo Tab, quindi utilizzare tale oggetto per utilizzare le schede della finestra delle proprietà.

Questo metodo esegue l'asserzione in modalità debug se il controllo della finestra delle proprietà non è impostato per essere visualizzato nello stile di Microsoft OneNote.

##  <a name="initnavigationcontrol"></a>  CMFCPropertySheet::InitNavigationControl

Inizializza l'aspetto del controllo corrente della finestra delle proprietà.

```
virtual CWnd* InitNavigationControl();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra del controllo della finestra delle proprietà.

### <a name="remarks"></a>Note

Un controllo della finestra delle proprietà può essere visualizzato in più formati diversi, ad esempio un set di pagine a schede, un controllo albero o un elenco di pulsanti di spostamento. Usare il metodo [CMFCPropertySheet:: selook](#setlook) per specificare l'aspetto del controllo della finestra delle proprietà.

##  <a name="onactivatepage"></a>  CMFCPropertySheet::OnActivatePage

Chiamato dal framework quando una pagina delle proprietà è abilitata.

```
virtual void OnActivatePage(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*pPage*<br/>
in Puntatore a un oggetto pagina delle proprietà che rappresenta la pagina delle proprietà abilitata.

### <a name="remarks"></a>Note

Per impostazione predefinita, questo metodo garantisce che la pagina delle proprietà abilitata venga visualizzata nella visualizzazione. Se lo stile della finestra delle proprietà corrente contiene un riquadro di Microsoft Outlook, questo metodo imposta il pulsante di Outlook corrispondente sullo stato selezionato.

##  <a name="ondrawpageheader"></a>  CMFCPropertySheet::OnDrawPageHeader

Chiamata eseguita dal Framework per creare l'intestazione per una pagina delle proprietà personalizzata.

```
virtual void OnDrawPageHeader(
    CDC* pDC,
    int nPage,
    CRect rectHeader);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
in Puntatore a un contesto di dispositivo.

*nPage*<br/>
in Numero della pagina delle proprietà in base zero.

*rectHeader*<br/>
in Rettangolo di delimitazione che specifica la posizione in cui creare l'intestazione.

### <a name="remarks"></a>Note

Per impostazione predefinita, questo metodo non effettua alcuna operazione. Se si esegue l'override di questo metodo, chiamare il metodo [CMFCPropertySheet:: EnablePageHeader](#enablepageheader) prima che il Framework chiami questo metodo.

##  <a name="onremovetreepage"></a>  CMFCPropertySheet::OnRemoveTreePage

Chiamato dal framework per rimuovere una pagina delle proprietà da un controllo albero.

```
virtual BOOL OnRemoveTreePage(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*pPage*<br/>
in Puntatore a un oggetto pagina delle proprietà che rappresenta la pagina delle proprietà da rimuovere.

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

##  <a name="removecategory"></a>  CMFCPropertySheet::RemoveCategory

Rimuove un nodo dal controllo albero.

```
void RemoveCategory(CMFCPropertySheetCategoryInfo* pCategory);
```

### <a name="parameters"></a>Parametri

*pCategory*<br/>
in Puntatore a una categoria (nodo) da rimuovere.

### <a name="remarks"></a>Note

Utilizzare questo metodo per rimuovere un nodo, definito anche categoria, da un controllo albero. Usare il metodo [CMFCPropertySheet:: AddTreeCategory](#addtreecategory) per aggiungere un nodo a un controllo albero.

##  <a name="removepage"></a>  CMFCPropertySheet::RemovePage

Rimuove una pagina delle proprietà dalla finestra delle proprietà.

```
void RemovePage(CPropertyPage* pPage);
void RemovePage(int nPage);
```

### <a name="parameters"></a>Parametri

*pPage*<br/>
in Puntatore all'oggetto pagina delle proprietà che rappresenta la pagina delle proprietà da rimuovere. Non può essere NULL.

*nPage*<br/>
in Indice in base zero della pagina da rimuovere.

### <a name="remarks"></a>Note

Questo metodo rimuove la pagina delle proprietà specificata ed elimina la finestra associata. L'oggetto pagina delle proprietà specificato dal parametro *paginaf* non viene eliminato definitivamente finché non viene chiusa la finestra di [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md) .

##  <a name="seticonslist"></a>  CMFCPropertySheet::SetIconsList

Specifica l'elenco delle immagini usate nel controllo di navigazione del riquadro di Outlook.

```
BOOL SetIconsList(
    UINT uiImageListResID,
    int cx,
    COLORREF clrTransparent=RGB(255, 0, 255));
void SetIconsList(HIMAGELIST hIcons);
```

### <a name="parameters"></a>Parametri

*uiImageListResID*<br/>
in ID risorsa di un elenco di immagini.

*cx*<br/>
in Larghezza, in pixel, delle icone nell'elenco immagini.

*clrTransparent*<br/>
in Colore dell'immagine trasparente. Le parti dell'immagine che corrispondono a questo colore saranno trasparenti. Il valore predefinito è il colore magenta, RGB (255, 0255).

*hIcons*<br/>
in Handle per un elenco di immagini esistente.

### <a name="return-value"></a>Valore restituito

Nella prima sintassi di overload del metodo, TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Se la finestra delle proprietà è nello stile di Microsoft Outlook, il Framework Visualizza un elenco di pulsanti di spostamento, denominato controllo del riquadro di Outlook, a sinistra della finestra delle proprietà. Utilizzare questo metodo per impostare l'elenco di immagini che verrà utilizzato dal controllo del riquadro di Outlook.

Per ulteriori informazioni sui metodi che supportano questo metodo, vedere [CImageList:: create](../../mfc/reference/cimagelist-class.md#create) e [CImageList:: Add](../../mfc/reference/cimagelist-class.md#add). Per ulteriori informazioni su come impostare lo stile di una finestra delle proprietà, vedere [CMFCPropertySheet:: selook](#setlook).

##  <a name="setlook"></a>  CMFCPropertySheet::SetLook

Specifica l'aspetto della finestra delle proprietà.

```
void SetLook(
    PropSheetLook look,
    int nNavControlWidth=100);
```

### <a name="parameters"></a>Parametri

*look*<br/>
in Uno dei valori di enumerazione che specifica l'aspetto della finestra delle proprietà. Lo stile predefinito per una finestra delle proprietà `CMFCPropertySheet::PropSheetLook_Tabs`è. Per ulteriori informazioni, vedere la tabella nella sezione Osservazioni di questo argomento.

*nNavControlWidth*<br/>
in Larghezza in pixel del controllo di navigazione. Il valore predefinito è 100.

### <a name="remarks"></a>Note

Per visualizzare una finestra delle proprietà in uno stile diverso da quello predefinito, chiamare questo metodo prima di creare la finestra delle proprietà.

Nella tabella seguente sono elencati i valori di enumerazione che è possibile specificare nel parametro *look* .

|Value|Descrizione|
|-----------|-----------------|
|`CMFCPropertySheet::PropSheetLook_Tabs`|Predefinita Visualizza una scheda per ogni pagina delle proprietà. Le schede vengono visualizzate nella parte superiore della finestra delle proprietà e vengono impilate se sono presenti più schede che rientrano in una singola riga.|
|`CMFCPropertySheet::PropSheetLook_OutlookBar`|Visualizza un elenco di pulsanti di spostamento, nello stile della barra di Microsoft Outlook, sul lato sinistro della finestra delle proprietà. Ogni pulsante dell'elenco corrisponde a una pagina delle proprietà. Il Framework Visualizza le frecce di scorrimento se sono presenti più pulsanti che si adatteranno all'area visibile dell'elenco.|
|`CMFCPropertySheet::PropSheetLook_Tree`|Visualizza un controllo albero sul lato sinistro della finestra delle proprietà. Ogni nodo padre o figlio del controllo struttura ad albero corrisponde a una pagina delle proprietà. Il Framework Visualizza le frecce di scorrimento se sono presenti più nodi che rientrano nell'area visibile del controllo albero.|
|`CMFCPropertySheet::PropSheetLook_OneNoteTabs`|Visualizza una scheda, nello stile di Microsoft OneNote, per ogni pagina delle proprietà. Il Framework Visualizza le schede nella parte superiore della finestra delle proprietà e le frecce di scorrimento se sono presenti più schede che rientrano in una singola riga.|
|`CMFCPropertySheet::PropSheetLook_List`|Visualizza un elenco sul lato sinistro della finestra delle proprietà. Ogni elemento dell'elenco corrisponde a una pagina delle proprietà. Il Framework Visualizza le frecce di scorrimento se sono presenti più elementi di elenco che si adatteranno all'area visibile dell'elenco.|

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md)<br/>
[Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)

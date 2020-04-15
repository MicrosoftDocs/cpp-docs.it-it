---
title: Classe CPropertySheet
ms.date: 11/04/2016
f1_keywords:
- CPropertySheet
- AFXDLGS/CPropertySheet
- AFXDLGS/CPropertySheet::CPropertySheet
- AFXDLGS/CPropertySheet::AddPage
- AFXDLGS/CPropertySheet::Construct
- AFXDLGS/CPropertySheet::Create
- AFXDLGS/CPropertySheet::DoModal
- AFXDLGS/CPropertySheet::EnableStackedTabs
- AFXDLGS/CPropertySheet::EndDialog
- AFXDLGS/CPropertySheet::GetActiveIndex
- AFXDLGS/CPropertySheet::GetActivePage
- AFXDLGS/CPropertySheet::GetPage
- AFXDLGS/CPropertySheet::GetPageCount
- AFXDLGS/CPropertySheet::GetPageIndex
- AFXDLGS/CPropertySheet::GetTabControl
- AFXDLGS/CPropertySheet::MapDialogRect
- AFXDLGS/CPropertySheet::OnInitDialog
- AFXDLGS/CPropertySheet::PressButton
- AFXDLGS/CPropertySheet::RemovePage
- AFXDLGS/CPropertySheet::SetActivePage
- AFXDLGS/CPropertySheet::SetFinishText
- AFXDLGS/CPropertySheet::SetTitle
- AFXDLGS/CPropertySheet::SetWizardButtons
- AFXDLGS/CPropertySheet::SetWizardMode
- AFXDLGS/CPropertySheet::m_psh
helpviewer_keywords:
- CPropertySheet [MFC], CPropertySheet
- CPropertySheet [MFC], AddPage
- CPropertySheet [MFC], Construct
- CPropertySheet [MFC], Create
- CPropertySheet [MFC], DoModal
- CPropertySheet [MFC], EnableStackedTabs
- CPropertySheet [MFC], EndDialog
- CPropertySheet [MFC], GetActiveIndex
- CPropertySheet [MFC], GetActivePage
- CPropertySheet [MFC], GetPage
- CPropertySheet [MFC], GetPageCount
- CPropertySheet [MFC], GetPageIndex
- CPropertySheet [MFC], GetTabControl
- CPropertySheet [MFC], MapDialogRect
- CPropertySheet [MFC], OnInitDialog
- CPropertySheet [MFC], PressButton
- CPropertySheet [MFC], RemovePage
- CPropertySheet [MFC], SetActivePage
- CPropertySheet [MFC], SetFinishText
- CPropertySheet [MFC], SetTitle
- CPropertySheet [MFC], SetWizardButtons
- CPropertySheet [MFC], SetWizardMode
- CPropertySheet [MFC], m_psh
ms.assetid: 8461ccff-d14f-46e0-a746-42ad642ef94e
ms.openlocfilehash: 167c99f734e4538ff2704e032a6ca98fb1d82004
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363942"
---
# <a name="cpropertysheet-class"></a>Classe CPropertySheet

Rappresenta le finestre delle proprietà, note anche come finestre di dialogo a schede.

## <a name="syntax"></a>Sintassi

```
class CPropertySheet : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPropertySheet::CPropertySheet](#cpropertysheet)|Costruisce un oggetto `CPropertySheet`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPropertySheet::AddPage](#addpage)|Aggiunge una pagina alla finestra delle proprietà.|
|[CPropertySheet::Construct](#construct)|Costruisce un oggetto `CPropertySheet`.|
|[CPropertySheet::Creare](#create)|Visualizza una finestra delle proprietà non modale.|
|[CPropertySheet::DoModal](#domodal)|Visualizza una finestra delle proprietà modale.|
|[CPropertySheet::EnableStackedTabs](#enablestackedtabs)|Indica se la finestra delle proprietà utilizza schede impilate o scorrevole.|
|[CPropertySheet::EndDialog](#enddialog)|Termina la finestra delle proprietà.|
|[CPropertySheet::GetActiveIndex](#getactiveindex)|Recupera l'indice della pagina attiva della finestra delle proprietà.|
|[CPropertySheet::GetActivePage](#getactivepage)|Restituisce l'oggetto pagina attiva.|
|[CPropertySheet::GetPage](#getpage)|Recupera un puntatore alla pagina specificata.|
|[CPropertySheet::GetPageCount](#getpagecount)|Recupera il numero di pagine nella finestra delle proprietà.|
|[CPropertySheet::IndiceGetPageIndex](#getpageindex)|Recupera l'indice della pagina specificata della finestra delle proprietà.|
|[CPropertySheet::GetTabControl](#gettabcontrol)|Recupera un puntatore a un controllo struttura a schede.|
|[CPropertySheet::MapDialogRect](#mapdialogrect)|Converte le unità della finestra di dialogo di un rettangolo in unità dello schermo.|
|[CPropertySheet::OnInitDialog](#oninitdialog)|Eseguire l'override per aumentare l'inizializzazione della finestra delle proprietà.|
|[CPropertySheet::PressButton](#pressbutton)|Simula la scelta del pulsante specificato in una finestra delle proprietà.|
|[CPropertySheet::RemovePage](#removepage)|Rimuove una pagina dalla finestra delle proprietà.|
|[CPropertySheet::SetActivePage](#setactivepage)|Imposta a livello di codice l'oggetto pagina attiva.|
|[CPropertySheet::SetFinishText](#setfinishtext)|Imposta il testo per il pulsante Fine.|
|[CPropertySheet::SetTitle](#settitle)|Imposta la didascalia della finestra delle proprietà.|
|[CPropertySheet::SetWizardButtons](#setwizardbuttons)|Attiva i pulsanti della procedura guidata.|
|[CPropertySheet::SetWizardMode](#setwizardmode)|Attiva la modalità guidata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPropertySheet::m_psh](#m_psh)|Struttura [PROPSHEETHEADER di](/windows/win32/api/prsht/ns-prsht-propsheetheadera_v2) Windows. Fornisce l'accesso ai parametri della finestra delle proprietà di base.|

## <a name="remarks"></a>Osservazioni

Una finestra delle `CPropertySheet` proprietà è costituita da un oggetto e uno o più [CPropertyPage](../../mfc/reference/cpropertypage-class.md) oggetti. Il framework visualizza una finestra delle proprietà come una finestra con un set di indici di scheda e un'area che contiene la pagina attualmente selezionata. L'utente passa a una pagina specifica utilizzando la scheda appropriata.

`CPropertySheet`fornisce il supporto per la struttura [PROPSHEETHEADER](/windows/win32/api/prsht/ns-prsht-propsheetheadera_v2) espansa introdotta in Windows 98 e Windows NT 2000. La struttura contiene flag e membri aggiuntivi che supportano l'utilizzo di una bitmap di sfondo "filigrana".

Per visualizzare automaticamente queste nuove immagini nell'oggetto finestra delle proprietà, passare valori validi per le immagini bitmap e della tavolozza nella chiamata a [CPropertySheet::Construct](#construct) o [CPropertySheet::CPropertySheet](#cpropertysheet).

Anche `CPropertySheet` se non deriva da [CDialog](../../mfc/reference/cdialog-class.md), la gestione di un `CPropertySheet` oggetto è simile alla gestione di un `CDialog` oggetto. Ad esempio, la creazione di una finestra delle proprietà richiede la costruzione in due parti: chiamare il costruttore e quindi chiamare [DoModal](#domodal) per una finestra delle proprietà modale o [creare](#create) per una finestra delle proprietà non modale. `CPropertySheet`dispone di due tipi di costruttori: [CPropertySheet::Construct](#construct) e [CPropertySheet::CPropertySheet](#cpropertysheet).

Quando si `CPropertySheet` costruisce un oggetto, alcuni stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) possono causare un'eccezione first-chance. Il risultato del sistema che tenta di modificare lo stile della finestra delle proprietà prima della creazione della finestra. Per evitare questa eccezione, assicurarsi di impostare i seguenti stili quando si crea il `CPropertySheet`:

- DS_3DLOOK

- DS_CONTROL

- WS_CHILD

- WS_TABSTOP

Gli stili seguenti sono facoltativi e non generano l'eccezione first-chance:

- DS_SHELLFONT

- DS_LOCALEDIT

- WS_CLIPCHILDREN

Tutti `Window Styles` gli altri sono proibiti e non si dovrebbe abilitare loro.

Lo scambio `CPropertySheet` di dati tra un oggetto e un `CDialog` oggetto esterno è simile allo scambio di dati con un oggetto. La differenza importante è che le impostazioni di una `CPropertyPage` finestra delle `CPropertySheet` proprietà sono in genere variabili membro degli oggetti anziché dell'oggetto stesso.

È possibile creare un tipo di finestra di dialogo scheda denominata procedura guidata, costituita da una finestra delle proprietà con una sequenza di pagine delle proprietà che guidano l'utente attraverso i passaggi di un'operazione, ad esempio la configurazione di un dispositivo o la creazione di un notiziario. In una finestra di dialogo scheda di tipo procedura guidata, le pagine delle proprietà non dispongono di schede e solo una pagina delle proprietà è visibile alla volta. Inoltre, invece di avere **OK** e **Applica ora** pulsanti, una finestra di dialogo scheda tipo procedura guidata dispone di un **pulsante Indietro,** un pulsante **Avanti** o **Fine,** un pulsante **Annulla** e un pulsante **Guida.**

Per creare una finestra di dialogo di tipo procedura guidata, seguire la stessa procedura da seguire per creare una finestra delle proprietà standard, ma chiamare [SetWizardMode](#setwizardmode) prima di chiamare [DoModal](#domodal). Per attivare i pulsanti della procedura guidata, chiamare [SetWizardButtons](#setwizardbuttons), utilizzando i flag per personalizzarne la funzione e l'aspetto. Per abilitare il pulsante **Fine,** chiamare [SetFinishText](#setfinishtext) dopo che l'utente ha eseguito un'azione nell'ultima pagina della procedura guidata.

Per ulteriori informazioni sull'utilizzo `CPropertySheet` degli oggetti, vedere l'articolo Finestre delle proprietà e pagine delle [proprietà](../../mfc/property-sheets-and-property-pages-in-mfc.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CPropertySheet`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs.h

## <a name="cpropertysheetaddpage"></a><a name="addpage"></a>CPropertySheet::AddPage

Aggiunge la pagina fornita con la scheda più a destra nella finestra delle proprietà.

```
void AddPage(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*pPagina*<br/>
Punta alla pagina da aggiungere alla finestra delle proprietà. Non può essere NULL.

### <a name="remarks"></a>Osservazioni

Aggiungere pagine alla finestra delle proprietà nell'ordine da sinistra a destra in cui si desidera che vengano visualizzate.

`AddPage`aggiunge il [CPropertyPage](../../mfc/reference/cpropertypage-class.md#cpropertypage) `CPropertySheet` oggetto all'elenco di pagine dell'oggetto, ma non crea effettivamente la finestra per la pagina. Il framework posticipa la creazione della finestra per la pagina fino a quando l'utente seleziona tale pagina.

Quando si aggiunge una `AddPage`pagina `CPropertySheet` delle proprietà `CPropertyPage`utilizzando , l'oggetto è l'elemento padre del file . Per accedere alla finestra delle proprietà dalla pagina delle proprietà, chiamare [CWnd::GetParent](../../mfc/reference/cwnd-class.md#getparent).

Non è necessario attendere la creazione della finestra `AddPage`delle proprietà per chiamare . In genere, `AddPage` si chiamerà prima di chiamare [DoModal](#domodal) o [Create](#create).

Se si `AddPage` chiama dopo la visualizzazione della pagina delle proprietà, la riga della scheda rifletterà la pagina appena aggiunta.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#129](../../mfc/codesnippet/cpp/cpropertysheet-class_1.cpp)]

## <a name="cpropertysheetconstruct"></a><a name="construct"></a>CPropertySheet::Construct

Costruisce un oggetto `CPropertySheet`.

```
void Construct(
    UINT nIDCaption,
    CWnd* pParentWnd = NULL,
    UINT iSelectPage = 0);

void Construct(
    LPCTSTR pszCaption,
    CWnd* pParentWnd = NULL,
    UINT iSelectPage = 0);

void Construct(
    UINT nIDCaption,
    CWnd* pParentWnd,
    UINT iSelectPage,
    HBITMAP hbmWatermark,
    HPALETTE hpalWatermark = NULL,
    HBITMAP hbmHeader = NULL);

void Construct(
    LPCTSTR pszCaption,
    CWnd* pParentWnd,
    UINT iSelectPage,
    HBITMAP hbmWatermark,
    HPALETTE hpalWatermark = NULL,
    HBITMAP hbmHeader = NULL);
```

### <a name="parameters"></a>Parametri

*nIDCaption (didascalie di identità)*<br/>
ID della didascalia da utilizzare per la finestra delle proprietà.

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra padre della finestra delle proprietà. Se NULL, la finestra padre sarà la finestra principale dell'applicazione.

*ISelectPage (pagina in cui iSelectPage)*<br/>
Indice della pagina che inizialmente sarà in primo piano. L'impostazione predefinita è la prima pagina aggiunta al foglio.

*pszCaption (didascalia)*<br/>
Puntatore a una stringa contenente la didascalia da utilizzare per la finestra delle proprietà. Non può essere NULL.

*hbmWatermark*<br/>
Gestire la bitmap della filigrana della pagina delle proprietà.

*hpalWatermark*<br/>
Gestire la tavolozza della bitmap della filigrana e/o della bitmap dell'intestazione.

*hbmHeader*<br/>
Handle per la bitmap dell'intestazione della pagina delle proprietà.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro se uno dei costruttori di classe non è già stato chiamato. Ad esempio, `Construct` chiamare quando si dichiarano o allocano matrici di `CPropertySheet` oggetti. Nel caso di matrici, è `Construct` necessario chiamare per ogni membro nella matrice.

Per visualizzare la finestra delle proprietà, chiamare [DoModal](#domodal) o [Create](#create). La stringa contenuta nel primo parametro verrà inserita nella barra del titolo della finestra delle proprietà.

È possibile visualizzare automaticamente le immagini delle filigrane e/o delle intestazioni se si utilizzano il terzo o il quarto prototipo `Construct`di , elencati in precedenza e si passano valori validi per i parametri *hbmWatermark*, *hpalWatermark*e/o *hbmHeader* .

### <a name="example"></a>Esempio

Nell'esempio riportato di seguito `Construct`viene illustrato in quali circostanze si chiamerebbe .

[!code-cpp[NVC_MFCDocView#130](../../mfc/codesnippet/cpp/cpropertysheet-class_2.cpp)]

## <a name="cpropertysheetcpropertysheet"></a><a name="cpropertysheet"></a>CPropertySheet::CPropertySheet

Costruisce un oggetto `CPropertySheet`.

```
CPropertySheet();

explicit CPropertySheet(
    UINT nIDCaption,
    CWnd* pParentWnd = NULL,
    UINT iSelectPage = 0);

explicit CPropertySheet(
    LPCTSTR pszCaption,
    CWnd* pParentWnd = NULL,
    UINT iSelectPage = 0);

CPropertySheet(
    UINT nIDCaption,
    CWnd* pParentWnd,
    UINT iSelectPage,
    HBITMAP hbmWatermark,
    HPALETTE hpalWatermark = NULL,
    HBITMAP hbmHeader = NULL);

CPropertySheet(
    LPCTSTR pszCaption,
    CWnd* pParentWnd,
    UINT iSelectPage,
    HBITMAP hbmWatermark,
    HPALETTE hpalWatermark = NULL,
    HBITMAP hbmHeader = NULL);
```

### <a name="parameters"></a>Parametri

*nIDCaption (didascalie di identità)*<br/>
ID della didascalia da utilizzare per la finestra delle proprietà.

*pParentWnd (informazioni in due)*<br/>
Punta alla finestra padre della finestra delle proprietà. Se NULL, la finestra padre sarà la finestra principale dell'applicazione.

*ISelectPage (pagina in cui iSelectPage)*<br/>
Indice della pagina che inizialmente sarà in primo piano. L'impostazione predefinita è la prima pagina aggiunta al foglio.

*pszCaption (didascalia)*<br/>
Punta a una stringa contenente la didascalia da utilizzare per la finestra delle proprietà. Non può essere NULL.

*hbmWatermark*<br/>
Handle per la bitmap di sfondo della finestra delle proprietà.

*hpalWatermark*<br/>
Handle per la tavolozza della bitmap della filigrana e/o della bitmap dell'intestazione.

*hbmHeader*<br/>
Handle per la bitmap dell'intestazione della pagina delle proprietà.

### <a name="remarks"></a>Osservazioni

Per visualizzare la finestra delle proprietà, chiamare [DoModal](#domodal) o [Create](#create). La stringa contenuta nel primo parametro verrà inserita nella barra del titolo della finestra delle proprietà.

Se si dispone di più parametri (ad esempio, [Construct](#construct) se `CPropertySheet`si utilizza una matrice), utilizzare Construct anziché .

È possibile visualizzare automaticamente le immagini delle filigrane e/o delle intestazioni se si `CPropertySheet`utilizzano il terzo o il quarto prototipo di , sopra e si passano valori validi per i parametri *hbmWatermark*, *hpalWatermark*e/o *hbmHeader.*

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#131](../../mfc/codesnippet/cpp/cpropertysheet-class_3.cpp)]

## <a name="cpropertysheetcreate"></a><a name="create"></a>CPropertySheet::Creare

Visualizza una finestra delle proprietà non modale.

```
virtual BOOL Create(CWnd* pParentWnd = NULL,
    DWORD dwStyle = (DWORD)-1,
    DWORD dwExStyle = 0);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
Punta alla finestra padre. Se NULL, padre è il desktop.

*DwStyle (in stile dwStyle)*<br/>
Stili di finestra per la finestra delle proprietà. Per un elenco completo degli stili disponibili, consultate [Stili finestra.](../../mfc/reference/styles-used-by-mfc.md#window-styles)

*DwExStyle (in stile dwExStyle)*<br/>
Stili di finestra estesi per la finestra delle proprietà. Per un elenco completo degli stili disponibili, vedere [Stili di finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles)

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra delle proprietà viene creata correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La chiamata `Create` a può essere all'interno del costruttore oppure è possibile chiamarla dopo che il costruttore viene richiamato.

Lo stile predefinito, espresso passando -1 come *dwStyle*, è in realtà WS_SYSMENU&#124;WS_POPUP&#124;&#124;&#124;WS_CAPTION DS_MODALFRAME&#124;&#124;&#124;DS_CONTEXTHELP&#124;WS_VISIBLE. Lo stile predefinito della finestra estesa, espresso passando 0 come *dwExStyle*, viene effettivamente WS_EX_DLGMODALFRAME.

La `Create` funzione membro restituisce immediatamente dopo la creazione della finestra delle proprietà. Per eliminare la finestra delle proprietà, chiamare [CWnd::DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow).

Finestre delle proprietà non modali `Create` visualizzate con una chiamata a non disporre di OK, Annulla, Applica ora e Guida come finestre delle proprietà modali. I pulsanti desiderati devono essere creati dall'utente.

Per visualizzare una finestra delle proprietà modale, chiamare [DoModal](#domodal) invece.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#132](../../mfc/codesnippet/cpp/cpropertysheet-class_4.cpp)]

[!code-cpp[NVC_MFCDocView#133](../../mfc/codesnippet/cpp/cpropertysheet-class_5.cpp)]

## <a name="cpropertysheetdomodal"></a><a name="domodal"></a>CPropertySheet::DoModal

Visualizza una finestra delle proprietà modale.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL se la funzione ha avuto esito positivo; in caso contrario 0 o -1. Se la finestra delle proprietà è stata stabilita `DoModal` come procedura guidata (vedere [SetWizardMode](#setwizardmode)), viene restituito ID_WIZFINISH o IDCANCEL.

### <a name="remarks"></a>Osservazioni

Il valore restituito corrisponde all'ID del controllo che ha chiuso la finestra delle proprietà. Dopo la restituzione di questa funzione, le finestre corrispondenti alla finestra delle proprietà e tutte le pagine saranno state distrutte. Gli oggetti stessi esisteranno ancora. In genere, si recupereranno i `DoModal` dati dal [CPropertyPage](../../mfc/reference/cpropertypage-class.md) oggetti dopo restituisce IDOK.

Per visualizzare una finestra delle proprietà non modale, chiamare [invece Create.To](#create) display a modeless property sheet, call Create instead.

Quando una pagina delle proprietà viene creata dalla risorsa finestra di dialogo corrispondente, può causare un'eccezione first-chance. Ciò risulta dalla pagina delle proprietà che modifica lo stile della risorsa finestra di dialogo nello stile richiesto prima della creazione della pagina. Poiché le risorse sono in genere di sola lettura, viene generato un'eccezione. Il sistema gestisce l'eccezione e crea una copia della risorsa modificata. L'eccezione first-chance può pertanto essere ignorata.

> [!NOTE]
> Questa eccezione deve essere gestita dal sistema operativo se si esegue la compilazione con il modello di gestione delle eccezioni asincrona. Per ulteriori informazioni sui modelli di gestione delle eccezioni, vedere [/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md). In questo caso, non `CPropertySheet::DoModal` eseguire il wrapping delle chiamate a con un blocco try-catch `catch (...)`in cui catch gestisce tutte le eccezioni, ad esempio . Questo blocco gestirà l'eccezione destinata al sistema operativo e causerebbe un comportamento imprevedibile. Tuttavia, è possibile utilizzare in modo sicuro la gestione delle eccezioni di C , con tipi di eccezione specifici o la gestione delle eccezioni strutturata in cui l'eccezione di violazione di accesso viene passata al sistema operativo.

Per evitare di generare questa prima eccezione, è possibile garantire manualmente che la finestra delle proprietà disponga degli stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles)corretti. È necessario impostare i seguenti stili per una finestra delle proprietà:

- DS_3DLOOK

- DS_CONTROL

- WS_CHILD

- WS_TABSTOP

È possibile utilizzare i seguenti stili facoltativi senza causare un'eccezione first-chance:

- DS_SHELLFONT

- DS_LOCALEDIT

- WS_CLIPCHILDREN

Disattivare tutti gli altri stili di Windows perché non sono compatibili con le finestre delle proprietà. Questo consiglio non si applica agli stili estesi. L'impostazione appropriata di questi stili standard garantirà che la finestra delle proprietà non debba essere modificata ed eviterà di generare l'eccezione first-chance.

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertySheet::AddPage](#addpage).

## <a name="cpropertysheetenablestackedtabs"></a><a name="enablestackedtabs"></a>CPropertySheet::EnableStackedTabs

Indica se impilare righe di schede in una finestra delle proprietà.

```
void EnableStackedTabs(BOOL bStacked);
```

### <a name="parameters"></a>Parametri

*bIn pila*<br/>
Indica se le schede sovrapposte sono abilitate nella finestra delle proprietà. Disabilitare le righe di tag impilate impostando *bStacked* su FALSE.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, se una finestra delle proprietà contiene più schede di quelle che rientrano in una singola riga della larghezza della finestra delle proprietà, le schede verranno impilate in più righe. Per utilizzare le schede a scorrimento `EnableStackedTabs` anziché impilare le schede, chiamare con *bStacked* impostato su FALSE prima di chiamare [DoModal](#domodal) o [Create](#create).

È necessario `EnableStackedTabs` chiamare quando si crea una finestra delle proprietà modale o non modale. Per incorporare questo `CPropertySheet`stile in una classe derivata, scrivere un gestore messaggi per WM_CREATE. Nella versione sottoposta a override di [CWnd::OnCreate](../../mfc/reference/cwnd-class.md#oncreate), chiamare `EnableStackedTabs( FALSE )` prima di chiamare l'implementazione della classe base.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#134](../../mfc/codesnippet/cpp/cpropertysheet-class_6.cpp)]

## <a name="cpropertysheetenddialog"></a><a name="enddialog"></a>CPropertySheet::EndDialog

Termina la finestra delle proprietà.

```
void EndDialog(int nEndID);
```

### <a name="parameters"></a>Parametri

*nId fine*<br/>
Identificatore da utilizzare come valore restituito della finestra delle proprietà.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dal framework quando viene premuto il pulsante OK, Annulla o Chiudi. Chiamare questa funzione membro se si verifica un evento che deve chiudere la finestra delle proprietà.

Questa funzione membro viene utilizzata solo con una finestra di dialogo modale.

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertySheet::PressButton](#pressbutton).

## <a name="cpropertysheetgetactiveindex"></a><a name="getactiveindex"></a>CPropertySheet::GetActiveIndex

Ottiene il numero di indice della pagina attiva della finestra delle proprietà e `GetPage`quindi utilizza il numero di indice restituito come parametro per .

```
int GetActiveIndex() const;
```

### <a name="return-value"></a>Valore restituito

Numero di indice della pagina attiva.

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertySheet::GetActivePage](#getactivepage).

## <a name="cpropertysheetgetactivepage"></a><a name="getactivepage"></a>CPropertySheet::GetActivePage

Recupera la pagina attiva della finestra delle proprietà.

```
CPropertyPage* GetActivePage() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla pagina attiva.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione membro per eseguire un'azione nella pagina attiva.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#135](../../mfc/codesnippet/cpp/cpropertysheet-class_7.cpp)]

## <a name="cpropertysheetgetpage"></a><a name="getpage"></a>CPropertySheet::GetPage

Restituisce un puntatore alla pagina specificata in questa finestra delle proprietà.

```
CPropertyPage* GetPage(int nPage) const;
```

### <a name="parameters"></a>Parametri

*nPagina*<br/>
Indice della pagina desiderata, a partire da 0. Deve essere compreso tra 0 e uno inferiore al numero di pagine nella finestra delle proprietà, incluso.

### <a name="return-value"></a>Valore restituito

Puntatore alla pagina corrispondente al parametro *nPage.*

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertyPage::OnWizardFinish](../../mfc/reference/cpropertypage-class.md#onwizardfinish).

## <a name="cpropertysheetgetpagecount"></a><a name="getpagecount"></a>CPropertySheet::GetPageCount

Determina il numero di pagine attualmente presenti nella finestra delle proprietà.

```
int GetPageCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di pagine nella finestra delle proprietà.

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertyPage::OnWizardFinish](../../mfc/reference/cpropertypage-class.md#onwizardfinish).

## <a name="cpropertysheetgetpageindex"></a><a name="getpageindex"></a>CPropertySheet::IndiceGetPageIndex

Recupera il numero di indice della pagina specificata nella finestra delle proprietà.

```
int GetPageIndex(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*pPagina*<br/>
Punta alla pagina con l'indice da trovare. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Numero di indice di una pagina.

### <a name="remarks"></a>Osservazioni

Ad esempio, è `GetPageIndex` necessario utilizzare per ottenere l'indice della pagina per utilizzare [SetActivePage](#setactivepage) o [GetPage](#getpage).

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertySheet::GetActivePage](#getactivepage).

## <a name="cpropertysheetgettabcontrol"></a><a name="gettabcontrol"></a>CPropertySheet::GetTabControl

Recupera un puntatore a un controllo struttura a schede per eseguire un'operazione specifica per il controllo struttura a schede, ovvero per utilizzare una qualsiasi delle API in [CTabCtrl](../../mfc/reference/ctabctrl-class.md).

```
CTabCtrl* GetTabControl() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un controllo struttura a schede.

### <a name="remarks"></a>Osservazioni

Ad esempio, chiamare questa funzione membro se si desidera aggiungere bitmap a ciascuna delle schede durante l'inizializzazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#136](../../mfc/codesnippet/cpp/cpropertysheet-class_8.cpp)]

## <a name="cpropertysheetm_psh"></a><a name="m_psh"></a>CPropertySheet::m_psh

Struttura i cui membri archiviano le caratteristiche di [PROPSHEETHEADER](/windows/win32/api/prsht/ns-prsht-propsheetheadera_v2).

### <a name="remarks"></a>Osservazioni

Utilizzare questa struttura per inizializzare l'aspetto della finestra delle proprietà dopo che è stata costruita, ma prima che venga visualizzata con il [DoModal](#domodal) funzione membro. Ad esempio, impostare il `m_psh` *dwSize* membro di per la dimensione che si desidera che la finestra delle proprietà per avere.

Per ulteriori informazioni su questa struttura, incluso un elenco dei relativi membri, vedere PROPSHEETHEADER in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#143](../../mfc/codesnippet/cpp/cpropertysheet-class_9.cpp)]

## <a name="cpropertysheetmapdialogrect"></a><a name="mapdialogrect"></a>CPropertySheet::MapDialogRect

Converte le unità della finestra di dialogo di un rettangolo in unità dello schermo.

```
void MapDialogRect(LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*Lprect*<br/>
Punta a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene le coordinate della finestra di dialogo da convertire.

### <a name="remarks"></a>Osservazioni

Le unità della finestra di dialogo sono indicate in termini di unità di base della finestra di dialogo corrente derivata dalla larghezza media e dall'altezza dei caratteri nel tipo di carattere utilizzato per il testo della finestra di dialogo. Un'unità orizzontale è un quarto dell'unità di larghezza di base della finestra di dialogo e un'unità verticale è un ottavo dell'unità di altezza di base della finestra di dialogo.

La funzione di Windows [GetDialogBaseUnits](/windows/win32/api/winuser/nf-winuser-getdialogbaseunits) restituisce informazioni sulle dimensioni per il tipo di carattere di sistema, ma è possibile specificare un tipo di carattere diverso per ogni finestra delle proprietà se si utilizza lo stile di DS_SETFONT nel file di definizione delle risorse. La funzione di Windows [MapDialogRect,](/windows/win32/api/winuser/nf-winuser-mapdialogrect) descritta in Windows SDK, utilizza il tipo di carattere appropriato per questa finestra di dialogo.

La `MapDialogRect` funzione membro sostituisce le unità della finestra di dialogo in *lpRect* con unità dello schermo (pixel) in modo che il rettangolo può essere utilizzato per creare una finestra di dialogo o posizionare un controllo all'interno di una casella.

## <a name="cpropertysheetoninitdialog"></a><a name="oninitdialog"></a>CPropertySheet::OnInitDialog

Esegue l'override per aumentare l'inizializzazione della finestra delle proprietà.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

Specifica se l'applicazione ha impostato lo stato attivo per l'input su uno dei controlli nella finestra delle proprietà. Se `OnInitDialog` restituisce un valore diverso da zero, Windows imposta lo stato attivo per l'input sul primo controllo nella finestra delle proprietà. L'applicazione può restituire 0 solo se ha impostato in modo esplicito lo stato attivo per l'input su uno dei controlli nella finestra delle proprietà.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata in risposta al messaggio di WM_INITDIALOG. Questo messaggio viene inviato alla finestra delle proprietà durante le chiamate [Create](#create) o [DoModal,](#domodal) che si verificano immediatamente prima che venga visualizzata la finestra delle proprietà.

Eseguire l'override di questa funzione membro se è necessario eseguire un'elaborazione speciale quando viene inizializzata la finestra delle proprietà. Nella versione sottoposta a override, `OnInitDialog` chiamare prima la classe base ma ignorare il valore restituito. In genere verrà restituito TRUE dalla funzione membro sottoposta a override.

Non è necessaria una voce della mappa messaggi per questa funzione membro.

## <a name="cpropertysheetpressbutton"></a><a name="pressbutton"></a>CPropertySheet::PressButton

Simula la scelta del pulsante specificato in una finestra delle proprietà.

```
void PressButton(int nButton);
```

### <a name="parameters"></a>Parametri

*nButton (pulsante)*<br/>
nButton : Identifica il pulsante da premere. Questo parametro può essere uno dei seguenti valori:

- PSBTN_BACK Sceglie il pulsante Indietro.

- PSBTN_NEXT sceglie il pulsante Avanti.

- PSBTN_FINISH sceglie il pulsante Fine.

- PSBTN_OK sceglie il pulsante OK.

- PSBTN_APPLYNOW sceglie il pulsante Applica ora.

- PSBTN_CANCEL Sceglie il pulsante Annulla.

- PSBTN_HELP sceglie il pulsante ?.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sul messaggio Pressbutton di Windows SDK, [vedere PSM_PRESSBUTTON.](/windows/win32/Controls/psm-pressbutton)

Una chiamata `PressButton` a non invierà la [notifica PSN_APPLY](/windows/win32/Controls/psn-apply) da una pagina delle proprietà al framework. Per inviare questa notifica, chiamare [CPropertyPage::OnOK](../../mfc/reference/cpropertypage-class.md#onok).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#137](../../mfc/codesnippet/cpp/cpropertysheet-class_10.cpp)]

## <a name="cpropertysheetremovepage"></a><a name="removepage"></a>CPropertySheet::RemovePage

Rimuove una pagina dalla finestra delle proprietà ed elimina la finestra associata.

```
void RemovePage(CPropertyPage* pPage);
void RemovePage(int nPage);
```

### <a name="parameters"></a>Parametri

*pPagina*<br/>
Punta alla pagina da rimuovere dalla finestra delle proprietà. Non può essere NULL.

*nPagina*<br/>
Indice della pagina da rimuovere. Deve essere compreso tra 0 e uno inferiore al numero di pagine nella finestra delle proprietà, incluso.

### <a name="remarks"></a>Osservazioni

L'oggetto [CPropertyPage](../../mfc/reference/cpropertypage-class.md) stesso non viene eliminato `CPropertySheet` fino a quando non viene chiuso il proprietario della finestra.

## <a name="cpropertysheetsetactivepage"></a><a name="setactivepage"></a>CPropertySheet::SetActivePage

Modifica la pagina attiva.

```
BOOL SetActivePage(int nPage);
BOOL SetActivePage(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*nPagina*<br/>
Indice della pagina da impostare. Deve essere compreso tra 0 e uno in meno rispetto al numero di pagine nella finestra delle proprietà, incluso.

*pPagina*<br/>
Punta alla pagina da impostare nella finestra delle proprietà. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra delle proprietà viene attivata correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Ad esempio, `SetActivePage` utilizzare questa opzione se l'azione di un utente in una pagina deve far sì che un'altra pagina diventi la pagina attiva.

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertySheet::GetActivePage](#getactivepage).

## <a name="cpropertysheetsetfinishtext"></a><a name="setfinishtext"></a>CPropertySheet::SetFinishText

Imposta il testo nel pulsante di comando Fine.

```
void SetFinishText(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Punta al testo da visualizzare sul pulsante di comando Fine.

### <a name="remarks"></a>Osservazioni

Chiamare `SetFinishText` per visualizzare il testo sul pulsante di comando Fine e nascondere i pulsanti Avanti e Indietro dopo che l'utente ha completato l'azione nell'ultima pagina della procedura guidata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#138](../../mfc/codesnippet/cpp/cpropertysheet-class_11.cpp)]

## <a name="cpropertysheetsettitle"></a><a name="settitle"></a>CPropertySheet::SetTitle

Specifica la didascalia della finestra delle proprietà (il testo visualizzato nella barra del titolo di una finestra cornice).

```
void SetTitle(
    LPCTSTR lpszText,
    UINT nStyle = 0);
```

### <a name="parameters"></a>Parametri

*nStyle*<br/>
Specifica lo stile del titolo della finestra delle proprietà. Lo stile deve essere specificato a 0 o come PSH_PROPTITLE. Se lo stile è impostato come PSH_PROPTITLE, la parola "Proprietà" viene visualizzata dopo il testo specificato come didascalia. Ad esempio, `SetTitle`la chiamata a ("Simple", PSH_PROPTITLE) darà come risultato una didascalia della finestra delle proprietà "Proprietà semplici".

*lpszText*<br/>
Punta al testo da utilizzare come didascalia nella barra del titolo della finestra delle proprietà.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, una finestra delle proprietà utilizza il parametro caption nel costruttore della finestra delle proprietà.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#139](../../mfc/codesnippet/cpp/cpropertysheet-class_12.cpp)]

## <a name="cpropertysheetsetwizardbuttons"></a><a name="setwizardbuttons"></a>CPropertySheet::SetWizardButtons

Abilita o disabilita il pulsante Indietro, Avanti o Fine in una finestra delle proprietà della procedura guidata.

```
void SetWizardButtons(DWORD dwFlags);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Set di flag che consentono di personalizzare la funzione e l'aspetto dei pulsanti della procedura guidata. Questo parametro può essere una combinazione dei seguenti valori:

- PSWIZB_BACK Indietro

- PSWIZB_NEXT pulsante Avanti

- PSWIZB_FINISH pulsante Fine

- PSWIZB_DISABLEDFINISH Fine disabilitata

### <a name="remarks"></a>Osservazioni

Chiama `SetWizardButtons` solo dopo l'apertura della finestra di dialogo; non è possibile `SetWizardButtons` chiamare prima di chiamare [DoModal](#domodal). In genere, `SetWizardButtons` è necessario chiamare da [CPropertyPage::OnSetActive](../../mfc/reference/cpropertypage-class.md#onsetactive).

Se si desidera modificare il testo sul pulsante Fine o nascondere i pulsanti Avanti e Indietro una volta che l'utente ha completato la procedura guidata, chiamare [SetFinishText](#setfinishtext). Si noti che lo stesso pulsante viene condiviso per Fine e Avanti. È possibile visualizzare un pulsante Fine o Avanti contemporaneamente, ma non entrambi.

### <a name="example"></a>Esempio

A `CPropertySheet` dispone di tre `CStylePage` `CColorPage`pagine `CShapePage`delle proprietà della procedura guidata: , , e .  Nel frammento di codice riportato di seguito viene illustrato come abilitare e disabilitare i pulsanti **Indietro** e **Avanti** nella pagina delle proprietà della procedura guidata.

[!code-cpp[NVC_MFCDocView#140](../../mfc/codesnippet/cpp/cpropertysheet-class_13.cpp)]

[!code-cpp[NVC_MFCDocView#141](../../mfc/codesnippet/cpp/cpropertysheet-class_14.cpp)]

[!code-cpp[NVC_MFCDocView#138](../../mfc/codesnippet/cpp/cpropertysheet-class_11.cpp)]

## <a name="cpropertysheetsetwizardmode"></a><a name="setwizardmode"></a>CPropertySheet::SetWizardMode

Stabilisce una pagina delle proprietà come procedura guidata.

```
void SetWizardMode();
```

### <a name="remarks"></a>Osservazioni

Una caratteristica chiave di una pagina delle proprietà della procedura guidata è che l'utente si sposta utilizzando i pulsanti Avanti o Fine, Indietro e Annulla anziché le schede.

Chiamare `SetWizardMode` prima di chiamare [DoModal](#domodal). Dopo aver `SetWizardMode` `DoModal` chiamato , restituirà ID_WIZFINISH (se l'utente chiude con il pulsante Fine) o IDCANCEL.

`SetWizardMode`imposta il flag PSH_WIZARD.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#142](../../mfc/codesnippet/cpp/cpropertysheet-class_15.cpp)]

## <a name="see-also"></a>Vedere anche

[ESEMPIO MFC CMNCTRL1](../../overview/visual-cpp-samples.md)<br/>
[ESEMPIO MFC CMNCTRL2](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC PROPDLG](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC SNAPVW](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)

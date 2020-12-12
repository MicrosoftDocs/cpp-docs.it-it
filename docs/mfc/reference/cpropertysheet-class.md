---
description: 'Altre informazioni su: classe CPropertySheet'
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
ms.openlocfilehash: f2ca56fefbb192e9ed64a97bd75bee4fbb1c6360
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301373"
---
# <a name="cpropertysheet-class"></a>Classe CPropertySheet

Rappresenta le finestre delle proprietà, note anche come finestre di dialogo a schede.

## <a name="syntax"></a>Sintassi

```
class CPropertySheet : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CPropertySheet:: CPropertySheet](#cpropertysheet)|Costruisce un oggetto `CPropertySheet`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CPropertySheet:: AddPage](#addpage)|Aggiunge una pagina alla finestra delle proprietà.|
|[CPropertySheet:: Construct](#construct)|Costruisce un oggetto `CPropertySheet`.|
|[CPropertySheet:: create](#create)|Visualizza una finestra delle proprietà non modale.|
|[CPropertySheet::D oModal](#domodal)|Visualizza una finestra delle proprietà modale.|
|[CPropertySheet:: EnableStackedTabs](#enablestackedtabs)|Indica se la finestra delle proprietà utilizza schede in pila o a scorrimento.|
|[CPropertySheet:: EndDialog](#enddialog)|Termina la finestra delle proprietà.|
|[CPropertySheet:: GetActiveIndex](#getactiveindex)|Recupera l'indice della pagina attiva della finestra delle proprietà.|
|[CPropertySheet:: GetActivePage](#getactivepage)|Restituisce l'oggetto pagina attiva.|
|[CPropertySheet:: GetPage](#getpage)|Recupera un puntatore alla pagina specificata.|
|[CPropertySheet:: GetPageCount](#getpagecount)|Recupera il numero di pagine nella finestra delle proprietà.|
|[CPropertySheet:: GetPageIndex](#getpageindex)|Recupera l'indice della pagina specificata della finestra delle proprietà.|
|[CPropertySheet:: GetTabControl](#gettabcontrol)|Recupera un puntatore a un controllo struttura a schede.|
|[CPropertySheet:: MapDialogRect](#mapdialogrect)|Converte le unità della finestra di dialogo di un rettangolo in unità dello schermo.|
|[CPropertySheet:: OnInitDialog](#oninitdialog)|Override per aumentare l'inizializzazione della finestra delle proprietà.|
|[CPropertySheet::P ressButton](#pressbutton)|Simula la scelta del pulsante specificato in una finestra delle proprietà.|
|[CPropertySheet:: RemovePage](#removepage)|Rimuove una pagina dalla finestra delle proprietà.|
|[CPropertySheet:: SetActivePage](#setactivepage)|Imposta a livello di codice l'oggetto pagina attiva.|
|[CPropertySheet:: SetFinishText](#setfinishtext)|Imposta il testo per il pulsante fine.|
|[CPropertySheet:: toTitle](#settitle)|Imposta la didascalia della finestra delle proprietà.|
|[CPropertySheet:: SetWizardButtons](#setwizardbuttons)|Abilita i pulsanti della procedura guidata.|
|[CPropertySheet:: SetWizardMode](#setwizardmode)|Abilita la modalità procedura guidata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CPropertySheet:: m_psh](#m_psh)|Struttura [PROPSHEETHEADER](/windows/win32/api/prsht/ns-prsht-propsheetheadera_v2) di Windows. Fornisce l'accesso ai parametri della finestra delle proprietà di base.|

## <a name="remarks"></a>Commenti

Una finestra delle proprietà è costituita da un `CPropertySheet` oggetto e da uno o più oggetti [CPropertyPage](../../mfc/reference/cpropertypage-class.md) . Il Framework Visualizza una finestra delle proprietà come finestra con un set di indici di tabulazione e un'area che contiene la pagina attualmente selezionata. L'utente passa a una pagina specifica usando la scheda appropriata.

`CPropertySheet` fornisce supporto per la struttura [PROPSHEETHEADER](/windows/win32/api/prsht/ns-prsht-propsheetheadera_v2) espansa introdotta in Windows 98 e windows NT 2000. La struttura contiene flag e membri aggiuntivi che supportano l'utilizzo di una bitmap di sfondo "watermark".

Per visualizzare automaticamente le nuove immagini nell'oggetto finestra delle proprietà, passare i valori validi per le immagini bitmap e tavolozza nella chiamata a [CPropertySheet:: Construct](#construct) o [CPropertySheet:: CPropertySheet](#cpropertysheet).

Anche se `CPropertySheet` non è derivato da [CDialog](../../mfc/reference/cdialog-class.md), la gestione di un `CPropertySheet` oggetto è simile alla gestione di un `CDialog` oggetto. La creazione di una finestra delle proprietà, ad esempio, richiede una costruzione in due parti: chiamare il costruttore e quindi chiamare [DoModal](#domodal) per una finestra delle proprietà modale oppure [creare](#create) per una finestra delle proprietà non modale. `CPropertySheet` dispone di due tipi di costruttori: [CPropertySheet:: Construct](#construct) e [CPropertySheet:: CPropertySheet](#cpropertysheet).

Quando si costruisce un `CPropertySheet` oggetto, alcuni [stili della finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) possono causare l'esecuzione di un'eccezione first-chance. Questo risultato deriva dal sistema che tenta di modificare lo stile della finestra delle proprietà prima che il foglio venga creato. Per evitare questa eccezione, assicurarsi di impostare gli stili seguenti durante la creazione di `CPropertySheet` :

- DS_3DLOOK

- DS_CONTROL

- WS_CHILD

- WS_TABSTOP

Gli stili seguenti sono facoltativi e non determineranno l'eccezione first-chance:

- DS_SHELLFONT

- DS_LOCALEDIT

- WS_CLIPCHILDREN

Eventuali altri elementi `Window Styles` non sono consentiti e non devono essere abilitati.

Lo scambio di dati tra un `CPropertySheet` oggetto e un oggetto esterno è simile allo scambio di dati con un `CDialog` oggetto. La differenza importante è che le impostazioni di una finestra delle proprietà sono in genere variabili membro degli `CPropertyPage` oggetti anziché dell' `CPropertySheet` oggetto stesso.

È possibile creare una finestra di dialogo di tipo scheda denominata procedura guidata, costituita da una finestra delle proprietà con una sequenza di pagine delle proprietà che guida l'utente nei passaggi di un'operazione, ad esempio la configurazione di un dispositivo o la creazione di una newsletter. In una finestra di dialogo della procedura guidata-tipo, le pagine delle proprietà non dispongono di schede ed è visibile una sola pagina delle proprietà alla volta. Inoltre, anziché avere i pulsanti **OK** e **Applica ora** , una finestra di dialogo della scheda tipo di procedura guidata include un pulsante **indietro** , un pulsante **Avanti** o **fine** , un pulsante **Annulla** **e un pulsante** ?.

Per creare una finestra di dialogo di tipo procedura guidata, seguire la stessa procedura da eseguire per creare una finestra delle proprietà standard, ma chiamare [SetWizardMode](#setwizardmode) prima di chiamare [DoModal](#domodal). Per abilitare i pulsanti della procedura guidata, chiamare [SetWizardButtons](#setwizardbuttons), usando i flag per personalizzare la funzione e l'aspetto. Per abilitare il pulsante **fine** , chiamare [SetFinishText](#setfinishtext) dopo che l'utente ha eseguito un'azione nell'ultima pagina della procedura guidata.

Per ulteriori informazioni sull'utilizzo `CPropertySheet` degli oggetti, vedere l'articolo [finestre delle proprietà e pagine](../../mfc/property-sheets-and-property-pages-in-mfc.md)delle proprietà.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CPropertySheet`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

## <a name="cpropertysheetaddpage"></a><a name="addpage"></a> CPropertySheet:: AddPage

Aggiunge la pagina fornita con la scheda più a destra nella finestra delle proprietà.

```cpp
void AddPage(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*paginaf*<br/>
Punta alla pagina da aggiungere alla finestra delle proprietà. Non può essere NULL.

### <a name="remarks"></a>Commenti

Aggiungere pagine alla finestra delle proprietà nell'ordine da sinistra a destra che si desidera vengano visualizzate.

`AddPage` aggiunge l'oggetto [CPropertyPage](../../mfc/reference/cpropertypage-class.md#cpropertypage) all' `CPropertySheet` elenco di pagine dell'oggetto, ma non crea effettivamente la finestra per la pagina. Il framework posticipa la creazione della finestra per la pagina fino a quando l'utente non seleziona la pagina.

Quando si aggiunge una pagina delle proprietà utilizzando `AddPage` , `CPropertySheet` è l'elemento padre di `CPropertyPage` . Per accedere alla finestra delle proprietà dalla pagina delle proprietà, chiamare [CWnd:: GetParent](../../mfc/reference/cwnd-class.md#getparent).

Non è necessario attendere fino alla creazione della finestra delle proprietà da chiamare `AddPage` . In genere, si chiamerà `AddPage` prima di chiamare [DoModal](#domodal) o [create](#create).

Se si chiama `AddPage` dopo aver visualizzato la pagina delle proprietà, la riga di tabulazione rifletterà la pagina appena aggiunta.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#129](../../mfc/codesnippet/cpp/cpropertysheet-class_1.cpp)]

## <a name="cpropertysheetconstruct"></a><a name="construct"></a> CPropertySheet:: Construct

Costruisce un oggetto `CPropertySheet`.

```cpp
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

*nIDCaption*<br/>
ID della didascalia da usare per la finestra delle proprietà.

*pParentWnd*<br/>
Puntatore alla finestra padre della finestra delle proprietà. Se è NULL, la finestra padre sarà la finestra principale dell'applicazione.

*iSelectPage*<br/>
Indice della pagina che inizialmente si troverà in primo piano. Il valore predefinito è la prima pagina aggiunta al foglio.

*pszCaption*<br/>
Puntatore a una stringa che contiene la didascalia da usare per la finestra delle proprietà. Non può essere NULL.

*hbmWatermark*<br/>
Handle per la bitmap della filigrana della pagina delle proprietà.

*hpalWatermarke*<br/>
Handle per la tavolozza della bitmap della filigrana e/o della bitmap dell'intestazione.

*hbmHeader*<br/>
Handle per la bitmap dell'intestazione della pagina delle proprietà.

### <a name="remarks"></a>Commenti

Chiamare questa funzione membro se uno dei costruttori della classe non è già stato chiamato. Ad esempio, chiamare `Construct` quando si dichiarano o allocano matrici di `CPropertySheet` oggetti. Nel caso di matrici, è necessario chiamare `Construct` per ogni membro nella matrice.

Per visualizzare la finestra delle proprietà, chiamare [DoModal](#domodal) o [create](#create). La stringa contenuta nel primo parametro verrà inserita nella barra del titolo per la finestra delle proprietà.

È possibile visualizzare automaticamente le immagini di filigrana e/o intestazione se si usa il terzo o il quarto prototipo di `Construct` , elencato in precedenza, e si passano valori validi per i parametri *hbmWatermark*, *hpalWatermarke* e/o *hbmHeader* .

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato in quali circostanze chiamare `Construct` .

[!code-cpp[NVC_MFCDocView#130](../../mfc/codesnippet/cpp/cpropertysheet-class_2.cpp)]

## <a name="cpropertysheetcpropertysheet"></a><a name="cpropertysheet"></a> CPropertySheet:: CPropertySheet

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

*nIDCaption*<br/>
ID della didascalia da usare per la finestra delle proprietà.

*pParentWnd*<br/>
Punta alla finestra padre della finestra delle proprietà. Se è NULL, la finestra padre sarà la finestra principale dell'applicazione.

*iSelectPage*<br/>
Indice della pagina che inizialmente si troverà in primo piano. Il valore predefinito è la prima pagina aggiunta al foglio.

*pszCaption*<br/>
Punta a una stringa che contiene la didascalia da usare per la finestra delle proprietà. Non può essere NULL.

*hbmWatermark*<br/>
Handle per la bitmap di sfondo della finestra delle proprietà.

*hpalWatermarke*<br/>
Handle per la tavolozza della bitmap della filigrana e/o della bitmap dell'intestazione.

*hbmHeader*<br/>
Handle per la bitmap dell'intestazione della pagina delle proprietà.

### <a name="remarks"></a>Commenti

Per visualizzare la finestra delle proprietà, chiamare [DoModal](#domodal) o [create](#create). La stringa contenuta nel primo parametro verrà inserita nella barra del titolo per la finestra delle proprietà.

Se si dispone di più parametri, ad esempio se si utilizza una matrice, utilizzare il [costrutto](#construct) anziché `CPropertySheet` .

È possibile visualizzare automaticamente le immagini di intestazione e/o di filigrana se si usa il terzo o il quarto prototipo di `CPropertySheet` , sopra e si passano valori validi per i parametri *hbmWatermark*, *hpalWatermarke* e/o *hbmHeader* .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#131](../../mfc/codesnippet/cpp/cpropertysheet-class_3.cpp)]

## <a name="cpropertysheetcreate"></a><a name="create"></a> CPropertySheet:: create

Visualizza una finestra delle proprietà non modale.

```
virtual BOOL Create(CWnd* pParentWnd = NULL,
    DWORD dwStyle = (DWORD)-1,
    DWORD dwExStyle = 0);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Punta alla finestra padre. Se NULL, l'elemento padre è il desktop.

*dwStyle*<br/>
Stili di finestre per la finestra delle proprietà. Per un elenco completo degli stili disponibili, vedere [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*dwExStyle*<br/>
Stili di finestra estesi per la finestra delle proprietà. Per un elenco completo degli stili disponibili, vedere [stili finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles)

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra delle proprietà viene creata correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

La chiamata a `Create` può essere all'interno del costruttore oppure è possibile chiamarla dopo che il costruttore è stato richiamato.

Lo stile predefinito, espresso passando-1 come *dwStyle*, è in realtà WS_SYSMENU&#124;WS_POPUP&#124;WS_CAPTION&#124;DS_MODALFRAME&#124;DS_CONTEXTHELP&#124;WS_VISIBLE. Lo stile predefinito della finestra estesa, espresso passando 0 come *dwExStyle*, viene effettivamente WS_EX_DLGMODALFRAME.

La `Create` funzione membro viene restituita immediatamente dopo la creazione della finestra delle proprietà. Per eliminare definitivamente la finestra delle proprietà, chiamare [CWnd::D estroywindow](../../mfc/reference/cwnd-class.md#destroywindow).

Le finestre delle proprietà non modali visualizzate con una chiamata a non `Create` hanno i pulsanti OK, Annulla, applica adesso e guida come finestre delle proprietà modali. I pulsanti desiderati devono essere creati dall'utente.

Per visualizzare una finestra delle proprietà modale, chiamare invece [DoModal](#domodal) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#132](../../mfc/codesnippet/cpp/cpropertysheet-class_4.cpp)]

[!code-cpp[NVC_MFCDocView#133](../../mfc/codesnippet/cpp/cpropertysheet-class_5.cpp)]

## <a name="cpropertysheetdomodal"></a><a name="domodal"></a> CPropertySheet::D oModal

Visualizza una finestra delle proprietà modale.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL se la funzione ha avuto esito positivo; in caso contrario, 0 o-1. Se la finestra delle proprietà è stata stabilita come procedura guidata (vedere [SetWizardMode](#setwizardmode)), `DoModal` restituisce ID_WIZFINISH o IDCANCEL.

### <a name="remarks"></a>Commenti

Il valore restituito corrisponde all'ID del controllo che ha chiuso la finestra delle proprietà. Dopo la restituzione di questa funzione, le finestre corrispondenti alla finestra delle proprietà e a tutte le pagine vengono eliminate definitivamente. Gli oggetti stessi saranno ancora disponibili. In genere, i dati vengono recuperati dagli oggetti [CPropertyPage](../../mfc/reference/cpropertypage-class.md) dopo che `DoModal` restituisce IDOK.

Per visualizzare una finestra delle proprietà non modale, chiamare invece [create](#create) .

Quando una pagina delle proprietà viene creata dalla corrispondente risorsa della finestra di dialogo, può causare un'eccezione first-chance. Il risultato della pagina delle proprietà è la modifica dello stile della risorsa della finestra di dialogo sullo stile necessario prima della creazione della pagina. Poiché le risorse sono in genere di sola lettura, viene generata un'eccezione. Il sistema gestisce l'eccezione ed esegue una copia della risorsa modificata. L'eccezione first-chance può pertanto essere ignorata.

> [!NOTE]
> Questa eccezione deve essere gestita dal sistema operativo se si esegue la compilazione con il modello di gestione delle eccezioni asincrono. Per ulteriori informazioni sui modelli di gestione delle eccezioni, vedere [/eh (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md). In questo caso, non eseguire il wrapping delle chiamate a `CPropertySheet::DoModal` con un blocco try-catch C++ in cui l'oggetto catch gestisce tutte le eccezioni, ad esempio `catch (...)` . Questo blocco gestirebbe l'eccezione destinata al sistema operativo e causerebbe un comportamento imprevedibile. Tuttavia, è possibile utilizzare la gestione delle eccezioni C++ con tipi di eccezione specifici o la gestione delle eccezioni strutturata in cui l'eccezione di violazione di accesso viene passata al sistema operativo.

Per evitare di generare questa eccezione first-chance, è possibile garantire manualmente che la finestra delle proprietà abbia gli [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles)corretti. Per una finestra delle proprietà è necessario impostare gli stili seguenti:

- DS_3DLOOK

- DS_CONTROL

- WS_CHILD

- WS_TABSTOP

È possibile usare gli stili facoltativi seguenti senza causare un'eccezione first-chance:

- DS_SHELLFONT

- DS_LOCALEDIT

- WS_CLIPCHILDREN

Disabilitare tutti gli altri stili di Windows perché non sono compatibili con le finestre delle proprietà. Questo Consiglio non si applica agli stili estesi. L'impostazione appropriata di questi stili standard garantirà che non è necessario modificare la finestra delle proprietà e non verrà generata l'eccezione first-chance.

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertySheet:: AddPage](#addpage).

## <a name="cpropertysheetenablestackedtabs"></a><a name="enablestackedtabs"></a> CPropertySheet:: EnableStackedTabs

Indica se eseguire lo stack delle righe di tabulazioni in una finestra delle proprietà.

```cpp
void EnableStackedTabs(BOOL bStacked);
```

### <a name="parameters"></a>Parametri

*bStacked*<br/>
Indica se le schede in pila sono abilitate nella finestra delle proprietà. Disabilitare le righe in pila dei tag impostando *bStacked* su false.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, se una finestra delle proprietà dispone di più schede di quelle che rientrano in una singola riga nella larghezza della finestra delle proprietà, le schede vengono impilate in più righe. Per usare le schede di scorrimento anziché le schede di sovrapposizione, chiamare `EnableStackedTabs` con *bStacked* impostato su false prima di chiamare [DoModal](#domodal) o [create](#create).

È necessario chiamare `EnableStackedTabs` quando si crea una finestra delle proprietà modale o non modale. Per incorporare questo stile in una `CPropertySheet` classe derivata da, scrivere un gestore di messaggi per WM_CREATE. Nella versione sottoposta a override di [CWnd:: OnCreate](../../mfc/reference/cwnd-class.md#oncreate), chiamare `EnableStackedTabs( FALSE )` prima di chiamare l'implementazione della classe di base.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#134](../../mfc/codesnippet/cpp/cpropertysheet-class_6.cpp)]

## <a name="cpropertysheetenddialog"></a><a name="enddialog"></a> CPropertySheet:: EndDialog

Termina la finestra delle proprietà.

```cpp
void EndDialog(int nEndID);
```

### <a name="parameters"></a>Parametri

*nEndID*<br/>
Identificatore da utilizzare come valore restituito della finestra delle proprietà.

### <a name="remarks"></a>Commenti

Questa funzione membro viene chiamata dal framework quando viene premuto il pulsante OK, Annulla o Chiudi. Chiamare questa funzione membro se si verifica un evento che dovrebbe chiudere la finestra delle proprietà.

Questa funzione membro viene utilizzata solo con una finestra di dialogo modale.

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertySheet::P ressbutton](#pressbutton).

## <a name="cpropertysheetgetactiveindex"></a><a name="getactiveindex"></a> CPropertySheet:: GetActiveIndex

Ottiene il numero di indice della pagina attiva della finestra delle proprietà, quindi usa il numero di indice restituito come parametro per `GetPage` .

```
int GetActiveIndex() const;
```

### <a name="return-value"></a>Valore restituito

Numero di indice della pagina attiva.

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertySheet:: GetActivePage](#getactivepage).

## <a name="cpropertysheetgetactivepage"></a><a name="getactivepage"></a> CPropertySheet:: GetActivePage

Recupera la pagina attiva della finestra delle proprietà.

```
CPropertyPage* GetActivePage() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla pagina attiva.

### <a name="remarks"></a>Commenti

Usare questa funzione membro per eseguire alcune azioni nella pagina attiva.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#135](../../mfc/codesnippet/cpp/cpropertysheet-class_7.cpp)]

## <a name="cpropertysheetgetpage"></a><a name="getpage"></a> CPropertySheet:: GetPage

Restituisce un puntatore alla pagina specificata in questa finestra delle proprietà.

```
CPropertyPage* GetPage(int nPage) const;
```

### <a name="parameters"></a>Parametri

*nPage*<br/>
Indice della pagina desiderata, a partire da 0. Deve essere compreso tra 0 e uno inferiore al numero di pagine nella finestra delle proprietà, inclusi.

### <a name="return-value"></a>Valore restituito

Puntatore alla pagina corrispondente al parametro *nPage* .

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertyPage:: OnWizardFinish](../../mfc/reference/cpropertypage-class.md#onwizardfinish).

## <a name="cpropertysheetgetpagecount"></a><a name="getpagecount"></a> CPropertySheet:: GetPageCount

Determina il numero di pagine attualmente presenti nella finestra delle proprietà.

```
int GetPageCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di pagine nella finestra delle proprietà.

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertyPage:: OnWizardFinish](../../mfc/reference/cpropertypage-class.md#onwizardfinish).

## <a name="cpropertysheetgetpageindex"></a><a name="getpageindex"></a> CPropertySheet:: GetPageIndex

Recupera il numero di indice della pagina specificata nella finestra delle proprietà.

```
int GetPageIndex(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*paginaf*<br/>
Punta alla pagina con l'indice da trovare. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Numero di indice di una pagina.

### <a name="remarks"></a>Commenti

Ad esempio, è possibile usare `GetPageIndex` per ottenere l'indice della pagina per poter usare [SetActivePage](#setactivepage) o [GetPage](#getpage).

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertySheet:: GetActivePage](#getactivepage).

## <a name="cpropertysheetgettabcontrol"></a><a name="gettabcontrol"></a> CPropertySheet:: GetTabControl

Recupera un puntatore a un controllo struttura a schede per eseguire un'operazione specifica del controllo struttura a schede, ovvero per usare qualsiasi API in [CTabCtrl](../../mfc/reference/ctabctrl-class.md).

```
CTabCtrl* GetTabControl() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un controllo struttura a schede.

### <a name="remarks"></a>Commenti

Ad esempio, chiamare questa funzione membro se si desidera aggiungere bitmap a ognuna delle schede durante l'inizializzazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#136](../../mfc/codesnippet/cpp/cpropertysheet-class_8.cpp)]

## <a name="cpropertysheetm_psh"></a><a name="m_psh"></a> CPropertySheet:: m_psh

Struttura i cui membri archiviano le caratteristiche di [PROPSHEETHEADER](/windows/win32/api/prsht/ns-prsht-propsheetheadera_v2).

### <a name="remarks"></a>Commenti

Utilizzare questa struttura per inizializzare l'aspetto della finestra delle proprietà dopo che è stata creata, ma prima che venga visualizzata con la funzione membro [DoModal](#domodal) . Ad esempio, impostare il membro *dwSize* di sulle `m_psh` dimensioni desiderate per la finestra delle proprietà.

Per ulteriori informazioni su questa struttura, incluso un elenco dei relativi membri, vedere PROPSHEETHEADER nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#143](../../mfc/codesnippet/cpp/cpropertysheet-class_9.cpp)]

## <a name="cpropertysheetmapdialogrect"></a><a name="mapdialogrect"></a> CPropertySheet:: MapDialogRect

Converte le unità della finestra di dialogo di un rettangolo in unità dello schermo.

```cpp
void MapDialogRect(LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) o a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che contiene le coordinate della finestra di dialogo da convertire.

### <a name="remarks"></a>Commenti

Le unità della finestra di dialogo vengono indicate in termini di unità di base della finestra di dialogo corrente derivata dalla larghezza media e dall'altezza dei caratteri nel tipo di carattere utilizzato per il testo della finestra di dialogo. Un'unità orizzontale è un quarto dell'unità di larghezza base della finestra di dialogo e un'unità verticale è un ottavo dell'unità altezza di base della finestra di dialogo.

La funzione [GetDialogBaseUnits](/windows/win32/api/winuser/nf-winuser-getdialogbaseunits) di Windows restituisce le informazioni sulle dimensioni per il tipo di carattere del sistema, ma è possibile specificare un tipo di carattere diverso per ogni finestra delle proprietà se si usa lo stile DS_SETFONT nel file di definizione delle risorse. La funzione [MapDialogRect](/windows/win32/api/winuser/nf-winuser-mapdialogrect) di Windows, descritta nella Windows SDK, usa il tipo di carattere appropriato per questa finestra di dialogo.

La `MapDialogRect` funzione membro sostituisce le unità della finestra di dialogo in *lpRect* con unità schermo (pixel), in modo che il rettangolo possa essere utilizzato per creare una finestra di dialogo o posizionare un controllo all'interno di una casella.

## <a name="cpropertysheetoninitdialog"></a><a name="oninitdialog"></a> CPropertySheet:: OnInitDialog

Sostituisce per aumentare l'inizializzazione della finestra delle proprietà.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

Specifica se l'applicazione ha impostato lo stato attivo per l'input su uno dei controlli nella finestra delle proprietà. Se `OnInitDialog` restituisce un valore diverso da zero, Windows imposta lo stato attivo per l'input sul primo controllo nella finestra delle proprietà. L'applicazione può restituire 0 solo se ha impostato in modo esplicito lo stato attivo per l'input su uno dei controlli nella finestra delle proprietà.

### <a name="remarks"></a>Commenti

Questa funzione membro viene chiamata in risposta al messaggio di WM_INITDIALOG. Questo messaggio viene inviato alla finestra delle proprietà durante le chiamate [create](#create) o [DoModal](#domodal) , che si verificano immediatamente prima della visualizzazione della finestra delle proprietà.

Eseguire l'override di questa funzione membro se è necessario eseguire un'elaborazione speciale quando la finestra delle proprietà viene inizializzata. Nella versione sottoposta a override, chiamare prima la classe di base, `OnInitDialog` ma ignorare il relativo valore restituito. Normalmente viene restituito TRUE dalla funzione membro sottoposta a override.

Non è necessaria una voce della mappa messaggi per questa funzione membro.

## <a name="cpropertysheetpressbutton"></a><a name="pressbutton"></a> CPropertySheet::P ressButton

Simula la scelta del pulsante specificato in una finestra delle proprietà.

```cpp
void PressButton(int nButton);
```

### <a name="parameters"></a>Parametri

*Npulsante*<br/>
Npulsante: identifica il pulsante da premere. Questo parametro può essere uno dei valori seguenti:

- PSBTN_BACK scegliere il pulsante indietro.

- PSBTN_NEXT sceglie il pulsante Avanti.

- PSBTN_FINISH scegliere il pulsante fine.

- PSBTN_OK scegliere il pulsante OK.

- PSBTN_APPLYNOW sceglie il pulsante Applica ora.

- PSBTN_CANCEL sceglie il pulsante Annulla.

- PSBTN_HELP scegliere il pulsante della guida.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni sul messaggio di Windows SDK PressButton, vedere [PSM_PRESSBUTTON](/windows/win32/Controls/psm-pressbutton) .

Una chiamata a `PressButton` non invierà la notifica di [PSN_APPLY](/windows/win32/Controls/psn-apply) da una pagina delle proprietà al Framework. Per inviare la notifica, chiamare [CPropertyPage:: OnOK (](../../mfc/reference/cpropertypage-class.md#onok).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#137](../../mfc/codesnippet/cpp/cpropertysheet-class_10.cpp)]

## <a name="cpropertysheetremovepage"></a><a name="removepage"></a> CPropertySheet:: RemovePage

Rimuove una pagina dalla finestra delle proprietà ed Elimina definitivamente la finestra associata.

```cpp
void RemovePage(CPropertyPage* pPage);
void RemovePage(int nPage);
```

### <a name="parameters"></a>Parametri

*paginaf*<br/>
Punta alla pagina da rimuovere dalla finestra delle proprietà. Non può essere NULL.

*nPage*<br/>
Indice della pagina da rimuovere. Deve essere compreso tra 0 e uno inferiore al numero di pagine nella finestra delle proprietà, inclusi.

### <a name="remarks"></a>Commenti

L'oggetto [CPropertyPage](../../mfc/reference/cpropertypage-class.md) stesso non viene eliminato definitivamente fino a quando non `CPropertySheet` viene chiuso il proprietario della finestra.

## <a name="cpropertysheetsetactivepage"></a><a name="setactivepage"></a> CPropertySheet:: SetActivePage

Modifica la pagina attiva.

```
BOOL SetActivePage(int nPage);
BOOL SetActivePage(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*nPage*<br/>
Indice della pagina da impostare. Deve avere una lunghezza compresa tra 0 e uno inferiore al numero di pagine nella finestra delle proprietà, inclusi.

*paginaf*<br/>
Punta alla pagina da impostare nella finestra delle proprietà. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra delle proprietà è stata attivata correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Usare, ad esempio, `SetActivePage` se l'azione di un utente in una pagina deve fare in modo che un'altra pagina diventi la pagina attiva.

### <a name="example"></a>Esempio

Vedere l'esempio per [CPropertySheet:: GetActivePage](#getactivepage).

## <a name="cpropertysheetsetfinishtext"></a><a name="setfinishtext"></a> CPropertySheet:: SetFinishText

Imposta il testo nel pulsante di comando fine.

```cpp
void SetFinishText(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Punta al testo da visualizzare nel pulsante di comando fine.

### <a name="remarks"></a>Commenti

Chiamare `SetFinishText` per visualizzare il testo del pulsante di comando fine e nascondere i pulsanti avanti e indietro dopo che l'utente ha completato l'azione nell'ultima pagina della procedura guidata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#138](../../mfc/codesnippet/cpp/cpropertysheet-class_11.cpp)]

## <a name="cpropertysheetsettitle"></a><a name="settitle"></a> CPropertySheet:: toTitle

Specifica la didascalia della finestra delle proprietà, ovvero il testo visualizzato nella barra del titolo di una finestra cornice.

```cpp
void SetTitle(
    LPCTSTR lpszText,
    UINT nStyle = 0);
```

### <a name="parameters"></a>Parametri

*nStyle*<br/>
Specifica lo stile del titolo della finestra delle proprietà. Lo stile deve essere specificato a 0 o come PSH_PROPTITLE. Se lo stile è impostato come PSH_PROPTITLE, la parola "Properties" viene visualizzata dopo il testo specificato come didascalia. Ad esempio, la chiamata a `SetTitle` ("Simple", PSH_PROPTITLE) comporterà una didascalia della finestra delle proprietà "Simple Properties".

*lpszText*<br/>
Punta al testo da utilizzare come didascalia nella barra del titolo della finestra delle proprietà.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, una finestra delle proprietà usa il parametro Caption nel costruttore della finestra delle proprietà.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#139](../../mfc/codesnippet/cpp/cpropertysheet-class_12.cpp)]

## <a name="cpropertysheetsetwizardbuttons"></a><a name="setwizardbuttons"></a> CPropertySheet:: SetWizardButtons

Abilita o Disabilita il pulsante indietro, avanti o fine in una finestra delle proprietà della procedura guidata.

```cpp
void SetWizardButtons(DWORD dwFlags);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Set di flag che personalizzano la funzione e l'aspetto dei pulsanti della procedura guidata. Questo parametro può essere una combinazione dei valori seguenti:

- Pulsante indietro PSWIZB_BACK

- Pulsante Avanti PSWIZB_NEXT

- Pulsante fine PSWIZB_FINISH

- Pulsante fine PSWIZB_DISABLEDFINISH disabilitato

### <a name="remarks"></a>Commenti

Chiamare `SetWizardButtons` solo dopo l'apertura della finestra di dialogo. non è possibile chiamare `SetWizardButtons` prima di chiamare [DoModal](#domodal). In genere, è consigliabile chiamare `SetWizardButtons` da [CPropertyPage:: OnSetActive](../../mfc/reference/cpropertypage-class.md#onsetactive).

Se si desidera modificare il testo nel pulsante fine o nascondere i pulsanti avanti e indietro dopo che l'utente ha completato la procedura guidata, chiamare [SetFinishText](#setfinishtext). Si noti che lo stesso pulsante è condiviso per Finish e Next. È possibile visualizzare un pulsante fine o avanti in una sola volta, ma non entrambi.

### <a name="example"></a>Esempio

Un oggetto `CPropertySheet` dispone di tre pagine delle proprietà della procedura guidata: `CStylePage` , `CColorPage` e `CShapePage` .  Il frammento di codice seguente illustra come abilitare e disabilitare i pulsanti **indietro** e **Avanti** nella pagina delle proprietà della procedura guidata.

[!code-cpp[NVC_MFCDocView#140](../../mfc/codesnippet/cpp/cpropertysheet-class_13.cpp)]

[!code-cpp[NVC_MFCDocView#141](../../mfc/codesnippet/cpp/cpropertysheet-class_14.cpp)]

[!code-cpp[NVC_MFCDocView#138](../../mfc/codesnippet/cpp/cpropertysheet-class_11.cpp)]

## <a name="cpropertysheetsetwizardmode"></a><a name="setwizardmode"></a> CPropertySheet:: SetWizardMode

Stabilisce una pagina delle proprietà come procedura guidata.

```cpp
void SetWizardMode();
```

### <a name="remarks"></a>Commenti

Una caratteristica chiave di una pagina delle proprietà della procedura guidata è che l'utente si sposta usando i pulsanti avanti o fine, indietro e Annulla anziché le schede.

Chiamare `SetWizardMode` prima di chiamare [DoModal](#domodal). Una volta chiamato `SetWizardMode` , `DoModal` restituirà ID_WIZFINISH (se l'utente si chiude con il pulsante fine) o IDCANCEL.

`SetWizardMode` imposta il flag di PSH_WIZARD.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#142](../../mfc/codesnippet/cpp/cpropertysheet-class_15.cpp)]

## <a name="see-also"></a>Vedere anche

[CMNCTRL1 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[CMNCTRL2 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[PROPDLG di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[SNAPVW di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)

---
title: Classe CPropertySheet | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d2e9e13f7b5838cb13497dd874f7f0cf42f34e98
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43200146"
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
|[:: AddPage](#addpage)|Aggiunge una pagina alla finestra delle proprietà.|
|[CPropertySheet::Construct](#construct)|Costruisce un oggetto `CPropertySheet`.|
|[CPropertySheet:: Create](#create)|Visualizza una finestra delle proprietà non modale.|
|[CPropertySheet](#domodal)|Visualizza una finestra delle proprietà modale.|
|[CPropertySheet:: EnableStackedTabs](#enablestackedtabs)|Indica se la finestra delle proprietà Usa schede in pila o scorrimento.|
|[CPropertySheet::EndDialog](#enddialog)|Termina la finestra delle proprietà.|
|[CPropertySheet::GetActiveIndex](#getactiveindex)|Recupera l'indice della pagina attiva della finestra delle proprietà.|
|[CPropertySheet::GetActivePage](#getactivepage)|Restituisce l'oggetto pagina attiva.|
|[CPropertySheet::GetPage](#getpage)|Recupera un puntatore alla pagina specificata.|
|[CPropertySheet::GetPageCount](#getpagecount)|Recupera il numero di pagine nella finestra delle proprietà.|
|[CPropertySheet::GetPageIndex](#getpageindex)|Recupera l'indice della pagina della finestra delle proprietà specificata.|
|[CPropertySheet:: GetTabControl](#gettabcontrol)|Recupera un puntatore a un controllo struttura a schede.|
|[CPropertySheet::MapDialogRect](#mapdialogrect)|Converte le unità finestra di dialogo di un rettangolo in unità dello schermo.|
|[CPropertySheet:: OnInitDialog](#oninitdialog)|Eseguire l'override per aumentare l'inizializzazione della finestra delle proprietà.|
|[CPropertySheet::PressButton](#pressbutton)|Simula la scelta del pulsante specificato in una finestra delle proprietà.|
|[CPropertySheet::RemovePage](#removepage)|Rimuove una pagina dalla finestra delle proprietà.|
|[CPropertySheet::SetActivePage](#setactivepage)|A livello di codice imposta l'oggetto pagina attiva.|
|[CPropertySheet::SetFinishText](#setfinishtext)|Imposta il testo per il pulsante Fine.|
|[CPropertySheet::SetTitle](#settitle)|Imposta la didascalia della finestra delle proprietà.|
|[CPropertySheet::SetWizardButtons](#setwizardbuttons)|Abilita i pulsanti della procedura guidata.|
|[CPropertySheet:: SetWizardMode](#setwizardmode)|Abilita la modalità di creazione guidata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[PROPSHEETHEADER](#m_psh)|Il Windows [PROPSHEETHEADER](/windows/desktop/api/prsht/ns-prsht-_propsheetheadera_v2) struttura. Fornisce l'accesso ai parametri di finestra delle proprietà di base.|

## <a name="remarks"></a>Note

Una finestra delle proprietà è costituito da un `CPropertySheet` oggetto e uno o più [CPropertyPage](../../mfc/reference/cpropertypage-class.md) oggetti. Il framework visualizza una finestra delle proprietà come una finestra con un set di indici di scheda e un'area che contiene la pagina attualmente selezionata. L'utente passa a una pagina specifica usando la scheda appropriata.

`CPropertySheet` fornisce il supporto per espanso [PROPSHEETHEADER](/windows/desktop/api/prsht/ns-prsht-_propsheetheadera_v2) struttura introdotta in Windows 98 e 2000 di Windows NT. La struttura contiene i flag aggiuntivi e i membri che supportano l'utilizzo di una bitmap di sfondo "limite".

Per visualizzare le immagini nuove automaticamente nell'oggetto finestra delle proprietà, passare i valori validi per le immagini bitmap e tavolozza nella chiamata a [CPropertySheet::Construct](#construct) o [CPropertySheet::CPropertySheet](#cpropertysheet).

Sebbene `CPropertySheet` non è derivato da [CDialog](../../mfc/reference/cdialog-class.md), la gestione di un `CPropertySheet` oggetto è come la gestione una `CDialog` oggetto. Ad esempio, la creazione di una finestra delle proprietà richiede la costruzione di due parti: chiamare il costruttore e quindi chiamare [DoModal](#domodal) per una finestra delle proprietà modale o [crea](#create) per una finestra delle proprietà non modale. `CPropertySheet` Esistono due tipi di costruttori: [CPropertySheet::Construct](#construct) e [CPropertySheet::CPropertySheet](#cpropertysheet).

Quando si costruisce una `CPropertySheet` dell'oggetto, alcune [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) può causare un'eccezione first-chance si verifichi. Ciò è dovuto il sistema sta tentando di modificare lo stile della finestra delle proprietà prima che venga creato il foglio. Per evitare questa eccezione, assicurarsi di impostare gli stili seguenti quando si crea il `CPropertySheet`:

- DS_3DLOOK

- DS_CONTROL

- WS_CHILD

- WS_TABSTOP

Gli stili seguenti sono facoltativi e non genererà le eccezioni first-chance:

- DS_SHELLFONT

- DS_LOCALEDIT

- WS_CLIPCHILDREN

Qualsiasi altro `Window Styles` non sono consentiti e non è necessario abilitare tali.

Lo scambio di dati tra un `CPropertySheet` oggetto e un oggetto esterno è simile a scambio di dati con un `CDialog` oggetto. La differenza importante è che le impostazioni di una finestra delle proprietà sono in genere le variabili membro del `CPropertyPage` oggetti anziché del `CPropertySheet` oggetto stesso.

È possibile creare un tipo di finestra di dialogo scheda chiamato una procedura guidata, che consiste in una finestra delle proprietà con una sequenza di pagine delle proprietà che guidano l'utente tramite i passaggi di un'operazione, ad esempio si configura un dispositivo o la creazione di un notiziario. In una finestra di dialogo Creazione guidata tipo scheda, le pagine delle proprietà non dispongono di schede e pagina solo la proprietà è visibile alla volta. Inoltre, invece di dover **OK** e **si applicano a questo punto** dispone di una finestra di dialogo tipo di procedura guidata scheda pulsanti, una **nuovamente** pulsante, un **Avanti** o  **Completare** pulsante, un **annullare** pulsante e un **Guida** pulsante.

Per creare una finestra di dialogo tipo di procedura guidata, seguire gli stessi passaggi da seguire per creare una finestra delle proprietà standard, ma esegue una chiamata [SetWizardMode](#setwizardmode) prima di chiamare [DoModal](#domodal). Per abilitare i pulsanti della procedura guidata, chiamare [SetWizardButtons](#setwizardbuttons), usando i flag per personalizzare il funzionamento e l'aspetto. Per abilitare la **Finish** pulsante, chiamare [SetFinishText](#setfinishtext) dopo che l'utente ha eseguito alcuna azione nell'ultima pagina della procedura guidata.

Per altre informazioni su come usare `CPropertySheet` oggetti, vedere l'articolo [finestre delle proprietà e pagine delle proprietà](../../mfc/property-sheets-and-property-pages-in-mfc.md). Inoltre, vedere l'articolo della Knowledge Base Q146916: procedura: creare un CPropertySheet non modale con pulsanti Standard e l'articolo Q300606: HOWTO: progettare una finestra ridimensionabile delle proprietà di MFC.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CPropertySheet`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

##  <a name="addpage"></a>  :: AddPage

Aggiunge la pagina fornita con la scheda all'estrema destra nella finestra delle proprietà.

```
void AddPage(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*Esercitazione*  
Punta alla pagina da aggiungere alla finestra delle proprietà. Non può essere NULL.

### <a name="remarks"></a>Note

Aggiungere pagine alla finestra delle proprietà in ordine da sinistra a destra che si dovranno essere visualizzati.

`AddPage` Aggiunge il [CPropertyPage](../../mfc/reference/cpropertypage-class.md#cpropertypage) dell'oggetto per il `CPropertySheet` oggetto dell'elenco delle pagine, ma non crea effettivamente la finestra per la pagina. Il framework posticipa la creazione della finestra per la pagina fino a quando l'utente seleziona una pagina.

Quando si aggiunge una pagina di proprietà mediante `AddPage`, il `CPropertySheet` è il padre del `CPropertyPage`. Per ottenere l'accesso alla finestra delle proprietà dalla pagina delle proprietà, chiamare [CWnd::GetParent](../../mfc/reference/cwnd-class.md#getparent).

Non è necessario attendere fino alla creazione della finestra delle proprietà per chiamare `AddPage`. In genere, si chiamerà `AddPage` prima di chiamare [DoModal](#domodal) oppure [Create](#create).

Se si chiama `AddPage` dopo aver visualizzato la pagina delle proprietà, la riga scheda rifletterà la pagina appena aggiunta.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#129](../../mfc/codesnippet/cpp/cpropertysheet-class_1.cpp)]

##  <a name="construct"></a>  CPropertySheet::Construct

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

*nIDCaption*  
ID della didascalia da utilizzare per la finestra delle proprietà.

*pParentWnd*  
Puntatore alla finestra padre della finestra delle proprietà. Se NULL, la finestra padre sarà la finestra principale dell'applicazione.

*iSelectPage*  
L'indice della pagina che sarà inizialmente nella parte superiore. Valore predefinito è la prima pagina aggiunta al foglio.

*pszCaption*  
Puntatore a una stringa contenente la didascalia da utilizzare per la finestra delle proprietà. Non può essere NULL.

*hbmWatermark*  
Handle per la bitmap della filigrana della pagina delle proprietà.

*hpalWatermark*  
Handle per la tavolozza della bitmap della filigrana e/o bitmap di intestazione.

*hbmHeader*  
Handle per la bitmap di intestazione della pagina delle proprietà.

### <a name="remarks"></a>Note

Chiamare questa funzione membro se uno dei costruttori di classe non è già stato chiamato. Ad esempio, chiamare `Construct` quando si dichiara o allocare le matrici di `CPropertySheet` oggetti. Nel caso di matrici, è necessario chiamare `Construct` per ogni membro della matrice.

Per visualizzare la finestra delle proprietà, chiamare [DoModal](#domodal) oppure [crea](#create). La stringa contenuta nel primo parametro verrà inserita nella barra del titolo per la finestra delle proprietà.

È possibile visualizzare le immagini della filigrana e/o intestazione automaticamente se si usano i terzi o al quarto prototipi delle `Construct`elencati in precedenza e si passano i valori validi per il *hbmWatermark*, *hpalWatermark* , e/o *hbmHeader* parametri.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato in quali circostanze si chiamasse `Construct`.

[!code-cpp[NVC_MFCDocView#130](../../mfc/codesnippet/cpp/cpropertysheet-class_2.cpp)]

##  <a name="cpropertysheet"></a>  CPropertySheet::CPropertySheet

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

*nIDCaption*  
ID della didascalia da utilizzare per la finestra delle proprietà.

*pParentWnd*  
Punta alla finestra padre della finestra delle proprietà. Se NULL, la finestra padre sarà la finestra principale dell'applicazione.

*iSelectPage*  
L'indice della pagina che sarà inizialmente nella parte superiore. Valore predefinito è la prima pagina aggiunta al foglio.

*pszCaption*  
Punta a una stringa contenente la didascalia da utilizzare per la finestra delle proprietà. Non può essere NULL.

*hbmWatermark*  
Handle per la bitmap di sfondo della finestra delle proprietà.

*hpalWatermark*  
Handle per la tavolozza della bitmap della filigrana e/o bitmap di intestazione.

*hbmHeader*  
Handle per la bitmap di intestazione della pagina delle proprietà.

### <a name="remarks"></a>Note

Per visualizzare la finestra delle proprietà, chiamare [DoModal](#domodal) oppure [crea](#create). La stringa contenuta nel primo parametro verrà inserita nella barra del titolo per la finestra delle proprietà.

Se si dispongono di più parametri (ad esempio, se si usa una matrice), usare [costruire](#construct) invece di `CPropertySheet`.

È possibile visualizzare le immagini della filigrana e/o intestazione automaticamente se si usano i terzi o al quarto prototipi delle `CPropertySheet`precedente, e si passano i valori validi per il *hbmWatermark*, *hpalWatermark*, e / oppure *hbmHeader* parametri.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#131](../../mfc/codesnippet/cpp/cpropertysheet-class_3.cpp)]

##  <a name="create"></a>  CPropertySheet:: Create

Visualizza una finestra delle proprietà non modale.

```
virtual BOOL Create(CWnd* pParentWnd = NULL,
    DWORD dwStyle = (DWORD)-1,
    DWORD dwExStyle = 0);
```

### <a name="parameters"></a>Parametri

*pParentWnd*  
Punta alla finestra padre. Se NULL, l'elemento padre è il desktop.

*dwStyle*  
Stili di finestra per la finestra delle proprietà. Per un elenco completo degli stili disponibili, vedere [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*dwExStyle*  
Stili finestra estesi per la finestra delle proprietà. Per un elenco completo degli stili disponibili, vedere [stili finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles)

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra delle proprietà viene creato correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

La chiamata a `Create` può trovarsi all'interno del costruttore, oppure è possibile chiamarlo dopo aver richiamato il costruttore.

Lo stile predefinito, espresso mediante il passaggio di -1 come *dwStyle*, viene effettivamente WS_SYSMENU&#124;WS_POPUP&#124;WS_CAPTION&#124;DS_MODALFRAME&#124;DS_CONTEXTHELP&#124;WS_VISIBLE. Il valore predefinito esteso styl okna, espresso mediante il passaggio di 0 come *dwExStyle*, viene effettivamente WS_EX_DLGMODALFRAME.

Il `Create` funzione membro restituisce immediatamente dopo aver creato la finestra delle proprietà. Per eliminare la finestra delle proprietà, chiamare [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow).

Finestre delle proprietà non modale visualizzate con una chiamata a `Create` non è OK, Cancel, si applicano a questo punto e Guida i pulsanti come finestre delle proprietà modale. Pulsanti desiderati devono essere creati dall'utente.

Per visualizzare una finestra delle proprietà modali, chiamare [DoModal](#domodal) invece.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#132](../../mfc/codesnippet/cpp/cpropertysheet-class_4.cpp)]

[!code-cpp[NVC_MFCDocView#133](../../mfc/codesnippet/cpp/cpropertysheet-class_5.cpp)]

##  <a name="domodal"></a>  CPropertySheet

Visualizza una finestra delle proprietà modale.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL, se la funzione ha esito positivo; in caso contrario, 0 o -1. Se la finestra delle proprietà è stata stabilita come una procedura guidata (vedere [SetWizardMode](#setwizardmode)), `DoModal` restituisce ID_WIZFINISH o IDCANCEL.

### <a name="remarks"></a>Note

Il valore restituito corrisponde all'ID del controllo che chiuso la finestra delle proprietà. Al termine di questa funzione, di windows corrispondente per la finestra delle proprietà e tutte le pagine verranno sono stati eliminati definitivamente. Gli oggetti stessi saranno ancora presenti. In genere, si recupereranno i dati dal [CPropertyPage](../../mfc/reference/cpropertypage-class.md) gli oggetti dopo `DoModal` restituisce IDOK.

Per visualizzare una finestra delle proprietà non modale, chiamare [Create](#create) invece.

Quando viene creata una pagina delle proprietà dalla relativa risorsa finestra di dialogo corrispondente, può causare un'eccezione first-chance. Ciò è dovuto alla pagina delle proprietà modificando lo stile della risorsa finestra di dialogo per lo stile desiderato prima che venga creata la pagina. Poiché le risorse sono in genere di sola lettura, verrà generata un'eccezione. Il sistema gestisce l'eccezione e crea una copia della risorsa modificata. Le eccezioni first-chance pertanto possono essere ignorato.

> [!NOTE]
>  Questa eccezione deve essere gestita dal sistema operativo se si esegue la compilazione con il modello di gestione delle eccezioni asincrone. Per altre informazioni sui modelli di gestione delle eccezioni, vedere [/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md). In questo caso, non eseguire il wrapping di chiamate a `CPropertySheet::DoModal` con un blocco try-catch C++ in cui catch gestisce tutte le eccezioni, ad esempio, `catch (...)`. Questo blocco gestirà l'eccezione destinato al sistema operativo e causa un comportamento imprevedibile. Tuttavia, è possibile usare C++ di gestione delle eccezioni con tipi di eccezione specifici o la gestione delle eccezioni strutturata in cui l'eccezione di violazione di accesso viene passato tramite il sistema operativo.

Per evitare la generazione di questa eccezione first-chance, è possibile garantire manualmente che la finestra delle proprietà è corretta [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles). È necessario impostare gli stili per una finestra delle proprietà seguenti:

- DS_3DLOOK

- DS_CONTROL

- WS_CHILD

- WS_TABSTOP

È possibile usare i seguenti stili facoltativi senza causare un'eccezione first-chance:

- DS_SHELLFONT

- DS_LOCALEDIT

- WS_CLIPCHILDREN

Disabilitare tutti gli altri stili di Windows, perché non sono compatibili con le finestre delle proprietà. Questa raccomandazione non è applicabile agli stili estesi. L'impostazione di questi stili standard in modo appropriato garantisce che la finestra delle proprietà non deve essere modificato e verrà evitare la generazione di eccezioni first-chance.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CPropertySheet:: addPage](#addpage).

##  <a name="enablestackedtabs"></a>  CPropertySheet:: EnableStackedTabs

Indica se uno stack con le righe di schede in una finestra delle proprietà.

```
void EnableStackedTabs(BOOL bStacked);
```

### <a name="parameters"></a>Parametri

*bStacked*  
Indica se le barre in pila schede sono abilitate nella finestra delle proprietà. Disabilitare le righe in pila dei tag impostando *bStacked* su FALSE.

### <a name="remarks"></a>Note

Per impostazione predefinita, se una finestra delle proprietà dispone di più schede di quelle rientra in una singola riga alla larghezza della finestra delle proprietà, le schede vengono impilate su più righe. Per usare le schede di scorrimento anziché impilamento schede, chiamare `EnableStackedTabs` con *bStacked* impostato su FALSE prima di chiamare [DoModal](#domodal) oppure [Create](#create).

È necessario chiamare `EnableStackedTabs` quando si crea una finestra delle proprietà non modale o modale. Per incorporare questo stile di visualizzazione in un `CPropertySheet`-derivato (classe), scrivere un gestore di messaggi per WM_CREATE. Nella versione sottoposta a override del [CWnd::OnCreate](../../mfc/reference/cwnd-class.md#oncreate), chiamare `EnableStackedTabs( FALSE )` prima di chiamare l'implementazione della classe base.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#134](../../mfc/codesnippet/cpp/cpropertysheet-class_6.cpp)]

##  <a name="enddialog"></a>  CPropertySheet::EndDialog

Termina la finestra delle proprietà.

```
void EndDialog(int nEndID);
```

### <a name="parameters"></a>Parametri

*nEndID*  
Identificatore da utilizzare come valore restituito della finestra delle proprietà.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dal framework quando viene premuto il OK, Annulla o sul pulsante Chiudi. Chiamare questa funzione membro, se si verifica un evento che deve chiudere la finestra delle proprietà.

Questa funzione membro viene usata solo con una finestra di dialogo modale.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CPropertySheet::PressButton](#pressbutton).

##  <a name="getactiveindex"></a>  CPropertySheet::GetActiveIndex

Ottiene il numero di indice di pagina attiva della finestra delle proprietà e quindi Usa il numero di indice restituito come parametro per `GetPage`.

```
int GetActiveIndex() const;
```

### <a name="return-value"></a>Valore restituito

Numero di indice della pagina attiva.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CPropertySheet::GetActivePage](#getactivepage).

##  <a name="getactivepage"></a>  CPropertySheet::GetActivePage

Recupera pagina attiva della finestra delle proprietà.

```
CPropertyPage* GetActivePage() const;
```

### <a name="return-value"></a>Valore restituito

Il puntatore per la pagina attiva.

### <a name="remarks"></a>Note

Utilizzare questa funzione membro per eseguire un'azione nella pagina attiva.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#135](../../mfc/codesnippet/cpp/cpropertysheet-class_7.cpp)]

##  <a name="getpage"></a>  CPropertySheet::GetPage

Restituisce un puntatore alla pagina specificata in questa finestra delle proprietà.

```
CPropertyPage* GetPage(int nPage) const;
```

### <a name="parameters"></a>Parametri

*nPage*  
Indice della pagina desiderata, iniziando in corrispondenza di 0. Deve essere compreso tra 0 e uno minore del numero di pagine nella finestra delle proprietà, inclusiva.

### <a name="return-value"></a>Valore restituito

Il puntatore alla pagina corrispondente per il *nPage* parametro.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CPropertyPage::OnWizardFinish](../../mfc/reference/cpropertypage-class.md#onwizardfinish).

##  <a name="getpagecount"></a>  CPropertySheet::GetPageCount

Determina il numero di pagine attualmente nella finestra delle proprietà.

```
int GetPageCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di pagine nella finestra delle proprietà.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CPropertyPage::OnWizardFinish](../../mfc/reference/cpropertypage-class.md#onwizardfinish).

##  <a name="getpageindex"></a>  CPropertySheet::GetPageIndex

Recupera il numero di indice della pagina specificata nella finestra delle proprietà.

```
int GetPageIndex(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*Esercitazione*  
Punta alla pagina contenente l'indice da trovare. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Numero di indice di una pagina.

### <a name="remarks"></a>Note

Ad esempio, si utilizzerebbe `GetPageIndex` per ottenere l'indice della pagina per poter usare [SetActivePage](#setactivepage) oppure [GetPage](#getpage).

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CPropertySheet::GetActivePage](#getactivepage).

##  <a name="gettabcontrol"></a>  CPropertySheet:: GetTabControl

Recupera un puntatore a un controllo struttura a schede per svolgere operazioni specifiche per il controllo struttura a schede (vale a dire, usare una delle API in [CTabCtrl](../../mfc/reference/ctabctrl-class.md)).

```
CTabCtrl* GetTabControl() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un controllo struttura a schede.

### <a name="remarks"></a>Note

Chiamare questa funzione membro, ad esempio, se si desidera aggiungere bitmap per ognuna delle schede durante l'inizializzazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#136](../../mfc/codesnippet/cpp/cpropertysheet-class_8.cpp)]

##  <a name="m_psh"></a>  PROPSHEETHEADER

Una struttura i cui membri memorizzare le caratteristiche di [PROPSHEETHEADER](/windows/desktop/api/prsht/ns-prsht-_propsheetheadera_v2).

### <a name="remarks"></a>Note

Usare questa struttura per inizializzare l'aspetto della finestra delle proprietà dopo che viene costruita ma prima che venga visualizzato con il [DoModal](#domodal) funzione membro. Ad esempio, impostare il *dwSize* membro di `m_psh` le dimensioni si desidera utilizzare la finestra delle proprietà per avere.

Per altre informazioni su questa struttura, incluso un elenco dei relativi membri, vedere PROPSHEETHEADER nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#143](../../mfc/codesnippet/cpp/cpropertysheet-class_9.cpp)]

##  <a name="mapdialogrect"></a>  CPropertySheet::MapDialogRect

Converte le unità finestra di dialogo di un rettangolo in unità dello schermo.

```
void MapDialogRect(LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*lpRect*  
Punta a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura oppure [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene la finestra di dialogo coordina da convertire.

### <a name="remarks"></a>Note

Finestra di dialogo unità è espresse in termini di unità di base-finestra di dialogo corrente derivato dalla media larghezza e altezza dei caratteri nel tipo di carattere utilizzato per il testo della finestra di dialogo. Un'unità orizzontale è un quarto dell'unità di base-larghezza della finestra di dialogo e un'unità verticale è un ottavo dell'unità di base altezza della finestra di dialogo.

Il [GetDialogBaseUnits](/windows/desktop/api/winuser/nf-winuser-getdialogbaseunits) Windows funzione restituisce informazioni sulle dimensioni di carattere del sistema, ma è possibile specificare un carattere diverso per ogni finestra delle proprietà se si usa lo stile DS_SETFONT nel file di definizione di risorsa. Il [MapDialogRect](/windows/desktop/api/winuser/nf-winuser-mapdialogrect) per questa finestra di dialogo funzione di Windows, descritto nel SDK di Windows, utilizza il tipo di carattere appropriato.

Il `MapDialogRect` funzione membro sostituisce le unità finestra di dialogo *lpRect* con schermata unità (pixel) in modo che il rettangolo può essere utilizzato per creare una finestra di dialogo o posizionare un controllo all'interno di una finestra.

##  <a name="oninitdialog"></a>  CPropertySheet:: OnInitDialog

Esegue l'override per aumentare l'inizializzazione della finestra delle proprietà.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

Specifica se l'applicazione ha impostato lo stato attivo a uno dei controlli nella finestra delle proprietà. Se `OnInitDialog` restituisce un valore diverso da zero, Windows imposta lo stato attivo al primo controllo nella finestra delle proprietà. L'applicazione può restituire 0 solo se è impostato in modo esplicito lo stato attivo su uno dei controlli nella finestra delle proprietà.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata in risposta al messaggio WM_INITDIALOG. Questo messaggio viene inviato alla finestra delle proprietà durante la [Create](#create) oppure [DoModal](#domodal) chiamate, che vengono eseguiti immediatamente prima viene visualizzata la finestra delle proprietà.

Eseguire l'override di questa funzione membro se è necessario eseguire un'elaborazione speciale quando viene inizializzata la finestra delle proprietà. Nella versione sottoposta a override, chiamare innanzitutto la classe di base `OnInitDialog` ma ignorare il relativo valore restituito. In genere si restituirà TRUE dalla funzione membro sottoposto a override.

Non è necessaria una voce della mappa messaggi per questa funzione membro.

##  <a name="pressbutton"></a>  CPropertySheet::PressButton

Simula la scelta del pulsante specificato in una finestra delle proprietà.

```
void PressButton(int nButton);
```

### <a name="parameters"></a>Parametri

*Npulsante*  
Npulsante: identifica il pulsante ai tasti da premere. Questo parametro può essere uno dei valori seguenti:

- PSBTN_BACK sceglie il pulsante Indietro.

- PSBTN_NEXT sceglie il pulsante Avanti.

- PSBTN_FINISH sceglie il pulsante Fine.

- PSBTN_OK sceglie il pulsante OK.

- PSBTN_APPLYNOW sceglie il pulsante Applica.

- PSBTN_CANCEL sceglie il pulsante Annulla.

- PSBTN_HELP sceglie il pulsante?.

### <a name="remarks"></a>Note

Visualizzare [PSM_PRESSBUTTON](/windows/desktop/Controls/psm-pressbutton) per altre informazioni sul messaggio di Windows SDK Pressbutton.

Una chiamata a `PressButton` non verrà inviato il [PSN_APPLY](/windows/desktop/Controls/psn-apply) notifica da una pagina delle proprietà per il framework. Per inviare la notifica, chiamare [CPropertyPage::OnOK](../../mfc/reference/cpropertypage-class.md#onok).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#137](../../mfc/codesnippet/cpp/cpropertysheet-class_10.cpp)]

##  <a name="removepage"></a>  CPropertySheet::RemovePage

Rimuove una pagina dalla finestra delle proprietà ed elimina la finestra associata.

```
void RemovePage(CPropertyPage* pPage);
void RemovePage(int nPage);
```

### <a name="parameters"></a>Parametri

*Esercitazione*  
Punta alla pagina da rimuovere dalla finestra delle proprietà. Non può essere NULL.

*nPage*  
Indice della pagina da rimuovere. Deve essere compreso tra 0 e uno minore del numero di pagine nella finestra delle proprietà, inclusiva.

### <a name="remarks"></a>Note

Il [CPropertyPage](../../mfc/reference/cpropertypage-class.md) oggetto stesso non viene eliminato finché il proprietario del `CPropertySheet` finestra viene chiusa.

##  <a name="setactivepage"></a>  CPropertySheet::SetActivePage

Modifica la pagina attiva.

```
BOOL SetActivePage(int nPage);
BOOL SetActivePage(CPropertyPage* pPage);
```

### <a name="parameters"></a>Parametri

*nPage*  
Indice della pagina da impostare. Deve essere compreso tra 0 e uno minore del numero di pagine nella finestra delle proprietà, inclusiva.

*Esercitazione*  
Punta alla pagina per impostare nella finestra delle proprietà. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra delle proprietà viene attivato correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Ad esempio, usare `SetActivePage` se un'azione dell'utente in un'unica pagina deve generare un'altra pagina diventi la pagina attiva.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CPropertySheet::GetActivePage](#getactivepage).

##  <a name="setfinishtext"></a>  CPropertySheet::SetFinishText

Imposta il testo nel pulsante Fine comando.

```
void SetFinishText(LPCTSTR lpszText);
```

### <a name="parameters"></a>Parametri

*lpszText*  
Punta al testo da visualizzare sul pulsante Fine comando.

### <a name="remarks"></a>Note

Chiamare `SetFinishText` per visualizzare il testo sul pulsante di comando di fine e nascondere i pulsanti Avanti e indietro dopo che l'utente ha completato l'azione nell'ultima pagina della procedura guidata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#138](../../mfc/codesnippet/cpp/cpropertysheet-class_11.cpp)]

##  <a name="settitle"></a>  CPropertySheet::SetTitle

Specifica la didascalia della finestra delle proprietà (il testo visualizzato nella barra del titolo di una finestra cornice).

```
void SetTitle(
    LPCTSTR lpszText,
    UINT nStyle = 0);
```

### <a name="parameters"></a>Parametri

*nStyle*  
Specifica lo stile del titolo della finestra delle proprietà. Da 0 o come PSH_PROPTITLE, è necessario specificare lo stile. Se style è impostato come PSH_PROPTITLE, dopo il testo specificato come la didascalia viene visualizzata la parola "Proprietà". Ad esempio, chiamando `SetTitle`("Simple", PSH_PROPTITLE) comporterà una didascalia della finestra delle proprietà della "Proprietà semplice".

*lpszText*  
Punta al testo da utilizzare come didascalia nella barra del titolo della finestra delle proprietà.

### <a name="remarks"></a>Note

Per impostazione predefinita, una finestra delle proprietà Usa il parametro didascalia nel costruttore della finestra delle proprietà.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#139](../../mfc/codesnippet/cpp/cpropertysheet-class_12.cpp)]

##  <a name="setwizardbuttons"></a>  CPropertySheet::SetWizardButtons

Abilita o disabilita il pulsante Indietro, Avanti o fine in una finestra delle proprietà di procedura guidata.

```
void SetWizardButtons(DWORD dwFlags);
```

### <a name="parameters"></a>Parametri

*dwFlags*  
Un set di flag che consentono di personalizzare il funzionamento e l'aspetto di pulsanti della procedura guidata. Questo parametro può essere una combinazione dei valori seguenti:

- Pulsante Indietro PSWIZB_BACK

- Pulsante Avanti PSWIZB_NEXT

- Pulsante Fine PSWIZB_FINISH

- Pulsante Fine disabilitato PSWIZB_DISABLEDFINISH

### <a name="remarks"></a>Note

Chiamare `SetWizardButtons` solo dopo che la finestra di dialogo è aperta; non è possibile chiamare `SetWizardButtons` prima di chiamare [DoModal](#domodal). In genere, è necessario chiamare `SetWizardButtons` dal [CPropertyPage:: OnSetActive](../../mfc/reference/cpropertypage-class.md#onsetactive).

Se si desidera modificare il testo nel pulsante Fine o nascondere la successiva e Back pulsante una volta l'utente ha completato la procedura guidata, chiamata [SetFinishText](#setfinishtext). Si noti che per la fine e Avanti è condiviso il pulsante stesso. È possibile visualizzare una finitura o in una sola volta un pulsante Avanti, ma non entrambi.

### <a name="example"></a>Esempio

Oggetto `CPropertySheet` ha tre pagine della procedura guidata proprietà: `CStylePage`, `CColorPage`, e `CShapePage`.  Nel frammento di codice riportato di seguito viene illustrato come abilitare e disabilitare la **nuovamente** e **successivo** pulsanti nella pagina delle proprietà della procedura guidata.

[!code-cpp[NVC_MFCDocView#140](../../mfc/codesnippet/cpp/cpropertysheet-class_13.cpp)]

[!code-cpp[NVC_MFCDocView#141](../../mfc/codesnippet/cpp/cpropertysheet-class_14.cpp)]

[!code-cpp[NVC_MFCDocView#138](../../mfc/codesnippet/cpp/cpropertysheet-class_11.cpp)]

##  <a name="setwizardmode"></a>  CPropertySheet:: SetWizardMode

Determina che una pagina delle proprietà di una procedura guidata.

```
void SetWizardMode();
```

### <a name="remarks"></a>Note

Una caratteristica chiave una creazione guidata pagina delle proprietà è che l'utente consente di passare successivamente usando o fine, eseguire il backup e annullare i pulsanti invece di schede.

Chiamare `SetWizardMode` prima di chiamare [DoModal](#domodal). Dopo aver chiamato `SetWizardMode`, `DoModal` restituirà ID_WIZFINISH (se l'utente viene chiusa con il pulsante Fine) o IDCANCEL.

`SetWizardMode` Imposta il flag PSH_WIZARD.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#142](../../mfc/codesnippet/cpp/cpropertysheet-class_15.cpp)]

## <a name="see-also"></a>Vedere anche

[CMNCTRL1 esempio MFC](../../visual-cpp-samples.md)  
[CMNCTRL2 esempio MFC](../../visual-cpp-samples.md)  
[Esempio MFC PROPDLG](../../visual-cpp-samples.md)  
[Esempio MFC SNAPVW](../../visual-cpp-samples.md)  
[Classe CWnd](../../mfc/reference/cwnd-class.md)  
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)  

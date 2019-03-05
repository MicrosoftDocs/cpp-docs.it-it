---
title: Classe CMFCToolBarsCustomizeDialog
ms.date: 11/04/2016
f1_keywords:
- CMFCToolBarsCustomizeDialog
- AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog
- AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog
- AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::FillAllCommandsList
- AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::FillCategoriesComboBox
- AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::FillCategoriesListBox
- AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::GetCommandName
- AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::GetCountInCategory
- AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::GetFlags
- AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::OnInitDialog
- AFXTOOLBARSCUSTOMIZEDIALOG/CMFCToolBarsCustomizeDialog::PostNcDestroy
helpviewer_keywords:
- CMFCToolBarsCustomizeDialog [MFC], CMFCToolBarsCustomizeDialog
- CMFCToolBarsCustomizeDialog [MFC], FillAllCommandsList
- CMFCToolBarsCustomizeDialog [MFC], FillCategoriesComboBox
- CMFCToolBarsCustomizeDialog [MFC], FillCategoriesListBox
- CMFCToolBarsCustomizeDialog [MFC], GetCommandName
- CMFCToolBarsCustomizeDialog [MFC], GetCountInCategory
- CMFCToolBarsCustomizeDialog [MFC], GetFlags
- CMFCToolBarsCustomizeDialog [MFC], OnInitDialog
- CMFCToolBarsCustomizeDialog [MFC], PostNcDestroy
ms.assetid: 78e2cddd-4f13-4097-afc3-1ad646a113f1
ms.openlocfilehash: e4aaede3eb2d5c922c196e2bdfbbe533c4e65e47
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57295032"
---
# <a name="cmfctoolbarscustomizedialog-class"></a>Classe CMFCToolBarsCustomizeDialog

Una finestra di dialogo schede non modale ( [CPropertySheet (classe)](../../mfc/reference/cpropertysheet-class.md)) che consente all'utente di personalizzare le barre degli strumenti, menu, tasti di scelta rapida, gli strumenti definiti dall'utente e dello stile di visualizzazione in un'applicazione. In genere, l'utente accede a questa finestra di dialogo scegliendo **Personalizza** dal menu **Strumenti** .

Il **Personalizza** nella finestra di dialogo dispone di sei schede: **I comandi**, **barre degli strumenti**, **Tools**, **tastiera**, **dal Menu**, e **opzioni**.

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarsCustomizeDialog : public CPropertySheet
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog](#cmfctoolbarscustomizedialog)|Costruisce un oggetto `CMFCToolBarsCustomizeDialog`.|
|`CMFCToolBarsCustomizeDialog::~CMFCToolBarsCustomizeDialog`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::AddButton](#addbutton)|Inserisce un pulsante della barra degli strumenti nell'elenco di comandi nel **comandi** pagina|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::AddMenu](#addmenu)|Carica un menu di scelta dalle risorse e le chiamate [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands) per aggiungere tale menu per l'elenco dei comandi nella **comandi** pagina.|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands)|Carica un menu di scelta dalle risorse e le chiamate [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands) per aggiungere tale menu per l'elenco dei comandi nella **comandi** pagina.|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::AddToolBar](#addtoolbar)|Carica una barra degli strumenti dalle risorse. Quindi, per ogni comando nelle chiamate menu la [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) metodo per inserire un pulsante nell'elenco di comandi nel **comandi** pagina nella categoria specificata.|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::Create](#create)|Consente di visualizzare il **personalizzazione** nella finestra di dialogo.|
|`CMFCToolBarsCustomizeDialog::EnableTools`|Riservato per usi futuri.|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::EnableUserDefinedToolbars](#enableuserdefinedtoolbars)|Abilita o disabilita la creazione di nuove barre degli strumenti tramite il **Personalizza** nella finestra di dialogo.|
|[CMFCToolBarsCustomizeDialog::FillAllCommandsList](#fillallcommandslist)|Popola l'oggetto specificato `CListBox` oggetto con i comandi di **tutti i comandi** categoria.|
|[CMFCToolBarsCustomizeDialog::FillCategoriesComboBox](#fillcategoriescombobox)|Popola l'oggetto specificato `CComboBox` oggetto con il nome di ogni categoria di comandi nel **Personalizza** nella finestra di dialogo.|
|[CMFCToolBarsCustomizeDialog::FillCategoriesListBox](#fillcategorieslistbox)|Popola l'oggetto specificato `CListBox` oggetto con il nome di ogni categoria di comandi nel **Personalizza** nella finestra di dialogo.|
|[CMFCToolBarsCustomizeDialog::GetCommandName](#getcommandname)|Recupera il nome associato con l'ID del comando specificato.|
|[CMFCToolBarsCustomizeDialog::GetCountInCategory](#getcountincategory)|Recupera il numero di elementi nell'elenco fornito con un'etichetta di testo specificato.|
|[CMFCToolBarsCustomizeDialog::GetFlags](#getflags)|Recupera il set di flag che influiscono sul comportamento della finestra di dialogo.|
|`CMFCToolBarsCustomizeDialog::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage](#onedittoolbarmenuimage)|Avvia un editor di immagini in modo che un utente può personalizzare un'icona di elemento pulsante o menu barra degli strumenti.|
|[CMFCToolBarsCustomizeDialog::OnInitDialog](#oninitdialog)|Esegue l'override per aumentare l'inizializzazione della finestra delle proprietà. (Esegue l'override [CPropertySheet:: OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog).)|
|[CMFCToolBarsCustomizeDialog::PostNcDestroy](#postncdestroy)|Chiamato dal framework dopo che la finestra è stata eliminata. Esegue l'override di `CPropertySheet::PostNcDestroy`.|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::RemoveButton](#removebutton)|Rimuove il pulsante con l'ID di comando specificato dalla categoria specificata, o di tutte le categorie.|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::RenameCategory](#renamecategory)|Rinomina una categoria nella casella di riepilogo delle categorie nel **comandi** scheda.|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::ReplaceButton](#replacebutton)|Sostituisce un pulsante nell'elenco di comandi nel **comandi** scheda con un nuovo oggetto pulsante della barra degli strumenti.|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::SetUserCategory](#setusercategory)|Aggiunge una categoria all'elenco di categorie che verranno visualizzate sul **comandi** scheda.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::CheckToolsValidity](#checktoolsvalidity)|Chiamato dal framework per determinare se l'elenco degli strumenti definite dall'utente è valido.|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::OnAfterChangeTool](#onafterchangetool)|Chiamato dal framework quando le proprietà di uno strumento definito dall'utente vengono modificate.|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::OnAssignKey](#onassignkey)|Determina se un collegamento di mappatura della tastiera specificato può essere assegnato a un'azione.|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::OnBeforeChangeTool](#onbeforechangetool)|Determina se uno strumento definito dall'utente può essere modificato.|
|`CMFCToolBarsCustomizeDialog::` [CMFCToolBarsCustomizeDialog::OnInitToolsPage](#oninittoolspage)|Chiamato dal framework quando l'utente sceglie il **strumenti** scheda viene richiesto.|

## <a name="remarks"></a>Note

Per visualizzare il **Personalizza** finestra di dialogo casella, creare un `CMFCToolBarsCustomizeDialog` oggetto e chiamare il [CMFCToolBarsCustomizeDialog::Create](#create) (metodo).

Mentre il **Personalizza** nella finestra di dialogo è attiva, il funzionamento dell'applicazione in modalità speciale che limita l'utente per le attività di personalizzazione.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCToolBarsCustomizeDialog` . Nell'esempio viene illustrato come sostituire un pulsante della barra degli strumenti nella casella di riepilogo dei comandi nel **comandi** pagina, abilitare la creazione di nuove barre degli strumenti tramite il **Personalizza** nella finestra di dialogo e visualizzare il  **Personalizzazione** nella finestra di dialogo. Questo frammento di codice fa parte di [esempio dimostrativo di inserimento/espulsione](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_IEDemo#4](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

`CMFCToolBarsCustomizeDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxToolBarsCustomizeDialog.h

##  <a name="addbutton"></a>  CMFCToolBarsCustomizeDialog::AddButton

Inserisce un pulsante della barra degli strumenti nell'elenco di comandi nel **comandi** pagina.

```
void AddButton(
    UINT uiCategoryId,
    const CMFCToolBarButton& button,
    int iInsertBefore=-1);

void AddButton(
    LPCTSTR lpszCategory,
    const CMFCToolBarButton& button,
    int iInsertBefore=-1);
```

### <a name="parameters"></a>Parametri

*uiCategoryId*<br/>
[in] Specifica l'ID della categoria in cui inserire il pulsante.

*button*<br/>
[in] Specifica il pulsante da inserire.

*iInsertBefore*<br/>
[in] Specifica l'indice in base zero di un pulsante della barra degli strumenti prima del quale viene inserito il pulsante.

*lpszCategory*<br/>
[in] Specifica la stringa di categoria per l'inserimento del pulsante.

### <a name="remarks"></a>Note

Il `AddButton` metodo ignora i pulsanti con l'ID di comando standard (ad esempio ID_FILE_MRU_FILE1), i comandi che non sono consentite (vedere [CMFCToolBar::IsCommandPermitted](../../mfc/reference/cmfctoolbar-class.md#iscommandpermitted)) e i pulsanti fittizio.

Questo metodo crea un nuovo oggetto dello stesso tipo come `button` (in genere una [classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)) usando la classe di runtime del pulsante. Chiama poi [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom) per copiare i membri di dati del pulsante e inserisce la copia nella categoria specificata.

Quando viene inserito il nuovo pulsante, riceve il `OnAddToCustomizePage` notifica.

Se `iInsertBefore` è -1, il pulsante viene aggiunto all'elenco di categorie; in caso contrario, viene inserito prima dell'elemento con l'indice specificato.

### <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `AddButton` metodo del `CMFCToolBarsCustomizeDialog` classe. Questo frammento di codice fa parte di [esempio di dispositivo di scorrimento](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_Slider#1](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_2.cpp)]

##  <a name="addmenu"></a>  CMFCToolBarsCustomizeDialog::AddMenu

Carica un menu di scelta dalle risorse e le chiamate [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands) per aggiungere tale menu per l'elenco dei comandi nella **comandi** pagina.

```
BOOL AddMenu(UINT uiMenuResId);
```

### <a name="parameters"></a>Parametri

*uiMenuResId*<br/>
[in] Specifica l'ID di risorsa di un menu da caricare.

### <a name="return-value"></a>Valore restituito

TRUE se è stato aggiunto un menu di scelta; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Nella chiamata a `AddMenuCommands`, *bPopup* è FALSE. Di conseguenza, tale metodo non aggiunge voci di menu che includono sottomenu all'elenco dei comandi. Questo metodo aggiungere le voci di menu nel sottomenu all'elenco dei comandi.

##  <a name="addmenucommands"></a>  CMFCToolBarsCustomizeDialog::AddMenuCommands

Aggiunge elementi all'elenco di comandi nel **comandi** pagina per rappresentare tutti gli elementi nel menu di scelta specificato.

```
void AddMenuCommands(
    const CMenu* pMenu,
    BOOL bPopup,
    LPCTSTR lpszCategory=NULL,
    LPCTSTR lpszMenuPath=NULL);
```

### <a name="parameters"></a>Parametri

*pMenu*<br/>
[in] Puntatore a oggetto CMenu da aggiungere.

*bPopup*<br/>
[in] Specifica se inserire le voci di menu popup all'elenco dei comandi.

*lpszCategory*<br/>
[in] Il nome della categoria per inserire il menu di scelta.

*lpszMenuPath*<br/>
[in] Un prefisso che viene aggiunto al nome quando il comando viene visualizzato nel **tutte le categorie** elenco.

### <a name="remarks"></a>Note

Il `AddMenuCommands` metodo esegue un ciclo in tutte le voci di menu *pMenu*. Per ogni voce di menu che non contiene un sottomenu, questo metodo crea un' [classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) oggetto e chiama le [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) per aggiungere la voce di menu come una barra degli strumenti pulsante per l'elenco dei comandi di **comandi** pagina. I separatori vengono ignorati in questo processo.

Se *bPopup* è TRUE, per ogni voce di menu che contiene un sottomenu questo metodo crea un' [classe CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md) dell'oggetto e la inserisce nell'elenco di comandi chiamando `AddButton`. In caso contrario, le voci di menu che includono sottomenu non vengono visualizzate nell'elenco dei comandi. In entrambi i casi, quando `AddMenuCommands` rileva una voce di menu con un sottomenu chiama se stessa in modo ricorsivo, passando un puntatore al sottomenu come i *pMenu* parametro e aggiungendo l'etichetta del sottomenu al *lpszMenuPath*.

##  <a name="addtoolbar"></a>  CMFCToolBarsCustomizeDialog::AddToolBar

Carica una barra degli strumenti dalle risorse. Quindi, per ogni comando nelle chiamate menu la [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) metodo per inserire un pulsante nell'elenco di comandi nel **comandi** pagina nella categoria specificata.

```
BOOL AddToolBar(
    UINT uiCategoryId,
    UINT uiToolbarResId);

BOOL AddToolBar(
    LPCTSTR lpszCategory,
    UINT uiToolbarResId);
```

### <a name="parameters"></a>Parametri

*uiCategoryId*<br/>
[in] Specifica l'ID risorsa della categoria per aggiungere la barra degli strumenti.

*uiToolbarResId*<br/>
[in] Specifica l'ID di risorsa di una barra degli strumenti i cui comandi vengono inseriti nell'elenco dei comandi.

*lpszCategory*<br/>
[in] Specifica il nome della categoria a cui aggiungere la barra degli strumenti.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `AddToolBar` metodo nel `CMFCToolBarsCustomizeDialog` classe. Questo frammento di codice fa parte dell' [esempio di Word Pad](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#11](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_3.cpp)]

### <a name="remarks"></a>Note

Il controllo che viene usato per rappresentare ogni comando è un [classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) oggetto. Dopo aver aggiunto la barra degli strumenti, è possibile sostituire il pulsante con un controllo di un tipo derivato chiamando [CMFCToolBarsCustomizeDialog::ReplaceButton](#replacebutton).

##  <a name="checktoolsvalidity"></a>  CMFCToolBarsCustomizeDialog::CheckToolsValidity

Verifica la validità dell'elenco di strumenti dell'utente.

```
virtual BOOL CheckToolsValidity(const CObList& lstTools);
```

### <a name="parameters"></a>Parametri

*lstTools*<br/>
[in] Elenco di strumenti definiti dall'utente da controllare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elenco degli strumenti definite dall'utente è valido. in caso contrario, FALSE. L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Note

Il framework chiama questo metodo per verificare la validità di oggetti che rappresentano gli strumenti definiti dall'utente restituiti da [CMFCToolBarsCustomizeDialog::CheckToolsValidity](#checktoolsvalidity).

Eseguire l'override di `CheckToolsValidity` metodo in una classe derivata da `CMFCToolBarsCustomizeDialog` se si desidera convalidare gli strumenti dell'utente prima che l'utente chiude la finestra di dialogo. Se questo metodo restituisce FALSE quando l'utente fa clic su uno di **Close** pulsante nell'angolo superiore destro della finestra di dialogo o sul pulsante con etichettata **Chiudi** nell'angolo inferiore destro della finestra di dialogo, la finestra di dialogo Consente di visualizzare il **strumenti** scheda invece di chiusura. Se questo metodo restituisce FALSE quando l'utente fa clic su una scheda a esce dal **strumenti** scheda non si verifica la navigazione. Si dovrebbe visualizzare una finestra di messaggio appropriato per informare l'utente del problema che ha causato esito negativo della convalida.

##  <a name="cmfctoolbarscustomizedialog"></a>  CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog

Costruisce un oggetto `CMFCToolBarsCustomizeDialog`.

```
CMFCToolBarsCustomizeDialog(
    CFrameWnd* pWndParentFrame,
    BOOL bAutoSetFromMenus = FALSE,
    UINT uiFlags = (AFX_CUSTOMIZE_MENU_SHADOWS | AFX_CUSTOMIZE_TEXT_LABELS | AFX_CUSTOMIZE_MENU_ANIMATIONS | AFX_CUSTOMIZE_NOHELP),
    CList <CRuntimeClass*, CRuntimeClass*>* p listCustomPages = NULL);
```

### <a name="parameters"></a>Parametri

*pWndParentFrame*<br/>
[in] Puntatore al frame padre. Questo parametro non deve essere NULL.

*bAutoSetFromMenus*<br/>
[in] Valore booleano che specifica se aggiungere i comandi di menu da tutti i menu per l'elenco di comandi nel **comandi** pagina. Se questo parametro è TRUE, vengono aggiunti i comandi di menu. In caso contrario, non vengono aggiunti i comandi di menu.

*uiFlags*<br/>
[in] Una combinazione di flag che influiscono sul comportamento della finestra di dialogo. Questo parametro può essere uno o più dei valori seguenti:

- AFX_CUSTOMIZE_MENU_SHADOWS

- AFX_CUSTOMIZE_TEXT_LABELS

- AFX_CUSTOMIZE_MENU_ANIMATIONS

- AFX_CUSTOMIZE_NOHELP

- AFX_CUSTOMIZE_CONTEXT_HELP

- AFX_CUSTOMIZE_NOTOOLS

- AFX_CUSTOMIZE_MENUAMPERS

- AFX_CUSTOMIZE_NO_LARGE_ICONS

*plistCustomPages*<br/>
[in] Un puntatore a un elenco di `CRuntimeClass` oggetti che specificano le pagine personalizzate aggiuntive.

### <a name="remarks"></a>Note

Il *plistCustomPages* parametro fa riferimento all'elenco di `CRuntimeClass` oggetti che specificano le pagine personalizzate aggiuntive. Il costruttore aggiunge altre pagine alla finestra di dialogo tramite il [CRuntimeClass::CreateObject](../../mfc/reference/cruntimeclass-structure.md#createobject) (metodo). Vedere l'esempio CustomPages per un esempio che consente di aggiungere altre pagine per il **Personalizza** nella finestra di dialogo.

Per altre informazioni sui valori che è possibile passare il *uiFlags* parametro, vedere [CMFCToolBarsCustomizeDialog::GetFlags](#getflags).

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto del `CMFCToolBarsCustomizeDialog` classe. Questo frammento di codice fa parte il [esempio di pagine personalizzate](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_CustomPages#3](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_4.cpp)]

##  <a name="create"></a>  CMFCToolBarsCustomizeDialog::Create

Consente di visualizzare il **personalizzazione** nella finestra di dialogo.

```
virtual BOOL Create();
```

### <a name="return-value"></a>Valore restituito

TRUE se la finestra delle proprietà di personalizzazione viene creato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Chiamare il `Create` metodo solo dopo l'inizializzazione completa della classe.

##  <a name="enableuserdefinedtoolbars"></a>  CMFCToolBarsCustomizeDialog::EnableUserDefinedToolbars

Abilita o disabilita la creazione di nuove barre degli strumenti tramite il **Personalizza** nella finestra di dialogo.

```
void EnableUserDefinedToolbars(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per abilitare barre degli strumenti definite dall'utente; FALSE per disabilitare le barre degli strumenti.

### <a name="remarks"></a>Note

Se *bAttivare il* è TRUE, il **New**, **rinominare** e **Elimina** pulsanti vengono visualizzati nei **barre degli strumenti** pagina.

Per impostazione predefinita, oppure se *bAttivare il* è FALSE, questi pulsanti non vengono visualizzati e l'utente non è possibile definire nuove barre degli strumenti.

##  <a name="fillallcommandslist"></a>  CMFCToolBarsCustomizeDialog::FillAllCommandsList

Popola l'oggetto specificato `CListBox` oggetto con i comandi di **tutti i comandi** categoria.

```
virtual void FillAllCommandsList(CListBox& wndListOfCommands) const;
```

### <a name="parameters"></a>Parametri

*wndListOfCommands*<br/>
[out] Un riferimento al `CListBox` oggetto da popolare.

### <a name="remarks"></a>Note

Il **tutti i comandi** categoria contiene i comandi di tutte le categorie. Il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) metodo aggiunge il comando associato con il pulsante specificato per il **tutti i comandi** categoria per l'utente.

Questo metodo cancella il contenuto dell'oggetto fornito `CListBox` oggetto prima popolarlo con i comandi di **tutti i comandi** categoria.

Il `CMFCMousePropertyPage` classe utilizza questo metodo per popolare la casella di riepilogo fare doppio clic su eventi.

##  <a name="fillcategoriescombobox"></a>  CMFCToolBarsCustomizeDialog::FillCategoriesComboBox

Popola l'oggetto specificato `CComboBox` oggetto con il nome di ogni categoria di comandi nel **Personalizza** nella finestra di dialogo.

```
void FillCategoriesComboBox(
    CComboBox& wndCategory,
    BOOL bAddEmpty = TRUE) const;
```

### <a name="parameters"></a>Parametri

*wndCategory*<br/>
[out] Un riferimento al `CComboBox` oggetto da popolare.

*bAddEmpty*<br/>
[in] Valore booleano che specifica se aggiungere categorie alla casella combinata privi di comandi. Se questo parametro è TRUE, vuote categorie vengono aggiunti alla casella combinata. In caso contrario, le categorie vuote non vengono aggiunti.

### <a name="remarks"></a>Note

Questo metodo è simile al [CMFCToolBarsCustomizeDialog::FillCategoriesListBox](#fillcategorieslistbox) metodo ad eccezione del fatto che questo metodo funziona con un `CComboBox` oggetto.

Questo metodo non cancella il contenuto del `CComboBox` oggetto prima del suo popolamento. Garantisce che il **tutti i comandi** categoria è l'elemento finale della casella combinata.

È possibile aggiungere nuove categorie di comando usando il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) (metodo). È possibile modificare il nome di una categoria esistente usando il [CMFCToolBarsCustomizeDialog::RenameCategory](#renamecategory) (metodo).

Il `CMFCToolBarsKeyboardPropertyPage` e `CMFCKeyMapDialog` classi utilizzano questo metodo per suddividere in categorie le mappature della tastiera.

##  <a name="fillcategorieslistbox"></a>  CMFCToolBarsCustomizeDialog::FillCategoriesListBox

Popola l'oggetto specificato `CListBox` oggetto con il nome di ogni categoria di comandi nel **Personalizza** nella finestra di dialogo.

```
void FillCategoriesListBox(
    CListBox& wndCategory,
    BOOL bAddEmpty = TRUE) const;
```

### <a name="parameters"></a>Parametri

*wndCategory*<br/>
[out] Un riferimento al `CListBox` oggetto da popolare.

*bAddEmpty*<br/>
[in] Valore booleano che specifica se aggiungere categorie nella casella di riepilogo che non dispongono di comandi. Se questo parametro è TRUE, vuote categorie vengono aggiunti alla casella di riepilogo. In caso contrario, le categorie vuote non vengono aggiunti.

### <a name="remarks"></a>Note

Questo metodo è simile al [CMFCToolBarsCustomizeDialog::FillCategoriesComboBox](#fillcategoriescombobox) metodo ad eccezione del fatto che questo metodo funziona con un `CListBox` oggetto.

Questo metodo non cancella il contenuto del `CListBox` oggetto prima del suo popolamento. Garantisce che il **tutti i comandi** categoria è l'elemento finale nella casella di riepilogo.

È possibile aggiungere nuove categorie di comando usando il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) (metodo). È possibile modificare il nome di una categoria esistente usando il [CMFCToolBarsCustomizeDialog::RenameCategory](#renamecategory) (metodo).

Il `CMFCToolBarsCommandsPropertyPage` classe utilizza questo metodo per visualizzare l'elenco di comandi che è associato a ogni categoria di comandi.

##  <a name="getcommandname"></a>  CMFCToolBarsCustomizeDialog::GetCommandName

Recupera il nome associato con l'ID del comando specificato.

```
LPCTSTR GetCommandName(UINT uiCmd) const;
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
[in] L'ID del comando da recuperare.

### <a name="return-value"></a>Valore restituito

Il nome che è associato l'ID di comando specificato o NULL se il comando non esiste.

##  <a name="getcountincategory"></a>  CMFCToolBarsCustomizeDialog::GetCountInCategory

Recupera il numero di elementi nell'elenco fornito con un'etichetta di testo specificato.

```
int GetCountInCategory(
    LPCTSTR lpszItemName,
    const CObList& lstCommands) const;
```

### <a name="parameters"></a>Parametri

*lpszItemName*<br/>
[in] L'etichetta di testo in modo che corrispondano.

*lstCommands*<br/>
[in] Un riferimento a un elenco contenente `CMFCToolBarButton` oggetti.

### <a name="return-value"></a>Valore restituito

Il numero di elementi nell'oggetto fornito è uguale a cui etichetta di testo di elenco *lpszItemName*.

### <a name="remarks"></a>Note

Ogni elemento nell'elenco di oggetti fornito deve essere di tipo `CMFCToolBarButton`. Questo metodo confronta *lpszItemName* con il [CMFCToolBarButton::m_strText](../../mfc/reference/cmfctoolbarbutton-class.md#m_strtext) (membro dati).

##  <a name="getflags"></a>  CMFCToolBarsCustomizeDialog::GetFlags

Recupera il set di flag che influiscono sul comportamento della finestra di dialogo.

```
UINT GetFlags() const;
```

### <a name="return-value"></a>Valore restituito

Il set di flag che influiscono sul comportamento della finestra di dialogo.

### <a name="remarks"></a>Note

Questo metodo recupera il valore della *uiFlags* parametro che viene passato al costruttore. Il valore restituito può essere uno o più dei valori seguenti:

|||
|-|-|
|AFX_CUSTOMIZE_MENU_SHADOWS|Consente all'utente di specificare l'aspetto dell'ombreggiatura del menu.  |
|AFX_CUSTOMIZE_TEXT_LABELS|Consente all'utente di specificare se le etichette di testo vengono visualizzate sotto le immagini dei pulsanti della barra degli strumenti.  |
|AFX_CUSTOMIZE_MENU_ANIMATIONS|Consente all'utente di specificare lo stile di animazione del menu.  |
|AFX_CUSTOMIZE_NOHELP|Rimuove il pulsante nella finestra di dialogo personalizzazione.  |
|AFX_CUSTOMIZE_CONTEXT_HELP|Abilita lo stile di visualizzazione WS_EX_CONTEXTHELP.  |
|AFX_CUSTOMIZE_NOTOOLS|Rimuove il **strumenti** pagina dalla finestra di dialogo di personalizzazione. Questo flag è valido se l'applicazione usa il `CUserToolsManager` classe.  |
|AFX_CUSTOMIZE_MENUAMPERS|Consente le didascalie dei pulsanti contenere il carattere e commerciale ( **&**) caratteri.  |
|AFX_CUSTOMIZE_NO_LARGE_ICONS|Rimuove il **icone grandi** opzione dalla finestra di dialogo di personalizzazione.  |

Per altre informazioni sullo stile di visualizzazione WS_EX_CONTEXTHELP, vedere [stili finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles).

##  <a name="onafterchangetool"></a>  CMFCToolBarsCustomizeDialog::OnAfterChangeTool

Risponde a una modifica in uno strumento utente subito dopo si verifica.

```
virtual void OnAfterChangeTool(CUserTool* pSelTool);
```

### <a name="parameters"></a>Parametri

*pSelTool*<br/>
[in, out] Un puntatore all'oggetto utente dello strumento che è stato modificato.

### <a name="remarks"></a>Note

Questo metodo viene chiamato dal framework quando un utente modifica le proprietà di uno strumento definito dall'utente. L'implementazione predefinita non esegue alcuna operazione. L'override del metodo in una classe derivata da `CMFCToolBarsCustomizeDialog` per eseguire l'elaborazione dopo viene apportata una modifica a uno strumento dell'utente.

##  <a name="onassignkey"></a>  CMFCToolBarsCustomizeDialog::OnAssignKey

Convalida i tasti di scelta rapida quando sono definiti da un utente.

```
virtual BOOL OnAssignKey(ACCEL* pAccel);
```

### <a name="parameters"></a>Parametri

*pAccel*<br/>
[in, out] Puntatore per l'assegnazione del proposto da tastiera che è espresso come un [accelerazione](/windows/desktop/api/winuser/ns-winuser-tagaccel) struct.

### <a name="return-value"></a>Valore restituito

TRUE se la chiave può essere assegnata o FALSE se la chiave non può essere assegnata. L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Note

L'override del metodo in una classe derivata per eseguire un'elaborazione aggiuntiva quando un utente assegna un nuovo tasto di scelta rapida o per convalidare i tasti di scelta rapida quando l'utente li definisce. Per impedire l'assegnazione di un collegamento, restituisce FALSE. Devi inoltre visualizzare una finestra di messaggio o in caso contrario, informare l'utente del motivo per cui è stato rifiutato tasti di scelta rapida.

##  <a name="onbeforechangetool"></a>  CMFCToolBarsCustomizeDialog::OnBeforeChangeTool

Esegue un'elaborazione personalizzata quando una modifica a uno strumento dell'utente quando l'utente sta per applicare una modifica.

```
virtual void OnBeforeChangeTool(CUserTool* pSelTool);
```

### <a name="parameters"></a>Parametri

*pSelTool*<br/>
[in, out] Un puntatore all'oggetto strumento utente che sta per essere sostituito.

### <a name="remarks"></a>Note

Questo metodo viene chiamato dal framework quando sta per modificare le proprietà di uno strumento definito dall'utente. L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di `OnBeforeChangeTool` metodo in una classe derivata da `CMFCToolBarsCustomizeDialog` se si desidera eseguire l'elaborazione prima che si verifica una modifica a uno strumento dell'utente, ad esempio rilasciando le risorse che *pSelTool* Usa.

##  <a name="onedittoolbarmenuimage"></a>  CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage

Avvia un editor di immagini in modo che un utente può personalizzare un'icona di elemento pulsante o menu barra degli strumenti.

```
virtual BOOL OnEditToolbarMenuImage(
    CWnd* pWndParent,
    CBitmap& bitmap,
    int nBitsPerPixel);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
[in] Puntatore alla finestra padre.

*bitmap*<br/>
[in] Un riferimento a un oggetto bitmap da modificare.

*nBitsPerPixel*<br/>
[in] Risoluzione colore, in bit per pixel delle bitmap.

### <a name="return-value"></a>Valore restituito

TRUE se è in corso il commit di una modifica; in caso contrario, FALSE. L'implementazione predefinita consente di visualizzare una finestra di dialogo e restituisce TRUE se l'utente fa clic **OK**, oppure FALSE se l'utente fa clic **Annulla** o nella **Chiudi** pulsante.

### <a name="remarks"></a>Note

Questo metodo viene chiamato dal framework quando l'utente esegue l'editor di immagini. Visualizza l'implementazione predefinita [classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md) nella finestra di dialogo. Eseguire l'override `OnEditToolbarMenuImage` in una classe derivata per usare un editor di immagini personalizzate.

##  <a name="oninitdialog"></a>  CMFCToolBarsCustomizeDialog::OnInitDialog

Esegue l'override per aumentare l'inizializzazione della finestra delle proprietà.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

Il risultato della chiamata di [CPropertySheet:: OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog) (metodo).

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe base, [CPropertySheet:: OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog), visualizzando le **Chiudi** pulsante, assicurandosi che la finestra di dialogo adatta alle dimensioni dello schermo corrente e spostando la **Aiutare** pulsante nell'angolo inferiore sinistro della finestra di dialogo.

##  <a name="oninittoolspage"></a>  CMFCToolBarsCustomizeDialog::OnInitToolsPage

Gestisce la notifica dal framework che la **strumenti** pagina sta per essere inizializzato.

```
virtual void OnInitToolsPage();
```

### <a name="remarks"></a>Note

L'implementazione predefinita non esegue alcuna operazione. L'override del metodo in una classe derivata per elaborare la notifica.

##  <a name="postncdestroy"></a>  CMFCToolBarsCustomizeDialog::PostNcDestroy

Chiamato dal framework dopo che la finestra è stata eliminata.

```
virtual void PostNcDestroy();
```

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe base, `CPropertySheet::PostNcDestroy`, ripristinando l'applicazione per la modalità precedente.

Il [CMFCToolBarsCustomizeDialog::Create](#create) metodo inserisce l'applicazione in modalità speciale che limita l'utente per le attività di personalizzazione.

##  <a name="removebutton"></a>  CMFCToolBarsCustomizeDialog::RemoveButton

Rimuove il pulsante con l'ID di comando specificato dalla categoria specificata, o di tutte le categorie.

```
int RemoveButton(
    UINT uiCategoryId,
    UINT uiCmdId);

int RemoveButton(
    LPCTSTR lpszCategory,
    UINT uiCmdId);
```

### <a name="parameters"></a>Parametri

*uiCategoryId*<br/>
[in] Specifica l'ID della categoria da cui rimuovere il pulsante.

*uiCmdId*<br/>
[in] Specifica l'ID di comando del pulsante.

*lpszCategory*<br/>
[in] Specifica il nome della categoria da cui rimuovere il pulsante.

### <a name="return-value"></a>Valore restituito

Indice a base zero del pulsante rimosso oppure -1 se l'ID di comando specificato non è stato trovato nella categoria specificata. Se *uiCategoryId* è -1, il valore restituito è 0.

### <a name="remarks"></a>Note

Per rimuovere un pulsante di tutte le categorie, chiamare il primo overload di questo metodo e impostare *uiCategoryId* su -1.

##  <a name="renamecategory"></a>  CMFCToolBarsCustomizeDialog::RenameCategory

Rinomina una categoria nella casella di riepilogo delle categorie nel **comandi** pagina.

```
BOOL RenameCategory(
    LPCTSTR lpszCategoryOld,
    LPCTSTR lpszCategoryNew);
```

### <a name="parameters"></a>Parametri

*lpszCategoryOld*<br/>
[in] Per modificare il nome della categoria.

*lpszCategoryNew*<br/>
[in] Il nuovo nome di categoria.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Il nome della categoria deve essere univoco.

##  <a name="replacebutton"></a>  CMFCToolBarsCustomizeDialog::ReplaceButton

Sostituisce un pulsante della barra degli strumenti nella casella di riepilogo dei comandi nel **comandi** pagina.

```
void ReplaceButton(
    UINT uiCmd,
    const CMFCToolBarButton& button);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
[in] Specifica il comando del pulsante da sostituire.

*button*<br/>
[in] Oggetto **const** riferimento all'oggetto pulsante della barra degli strumenti che sostituisce il precedente pulsante.

### <a name="remarks"></a>Note

Quando [CMFCToolBarsCustomizeDialog::AddMenu](#addmenu), [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands), o [CMFCToolBarsCustomizeDialog::AddToolBar](#addtoolbar) aggiunge un comando per il **comandi** pagina, che comando sia sotto forma di un [classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) oggetto (o un [classe CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md) oggetto per un menu elemento contenente un sottomenu aggiunto da `AddMenuCommands`). Il framework chiama anche questi tre metodi per aggiungere automaticamente comandi. Se si desidera che un comando per essere rappresentato da un tipo derivato, chiamare `ReplaceButton` e passare un pulsante del tipo derivato.

### <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `ReplaceButton` metodo nel `CMFCToolBarsCustomizeDialog` classe. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#34](../../mfc/codesnippet/cpp/cmfctoolbarscustomizedialog-class_5.cpp)]

##  <a name="setusercategory"></a>  CMFCToolBarsCustomizeDialog::SetUserCategory

Specifica la categoria nell'elenco delle categorie per il **comandi** pagina è la categoria di utente. È necessario chiamare questa funzione prima di chiamare [CMFCToolBarsCustomizeDialog::Create](#create).

```
BOOL SetUserCategory(LPCTSTR lpszCategory);
```

### <a name="parameters"></a>Parametri

*lpszCategory*<br/>
[in] Il nome della categoria.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Note

L'impostazione di categoria di utente non è attualmente utilizzata dal framework.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

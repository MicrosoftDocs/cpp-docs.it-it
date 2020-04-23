---
title: CMFCToolBarsCustomizeDialog (classe)
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
ms.openlocfilehash: 29e2c3d0238ac5a084ea916d95ad953f8c4aedce
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753409"
---
# <a name="cmfctoolbarscustomizedialog-class"></a>CMFCToolBarsCustomizeDialog (classe)

Finestra di dialogo scheda non modale ( [CPropertySheet Class](../../mfc/reference/cpropertysheet-class.md)) che consente all'utente di personalizzare le barre degli strumenti, i menu, i tasti di scelta rapida, gli strumenti definiti dall'utente e lo stile di visualizzazione in un'applicazione. In genere, l'utente accede a questa finestra di dialogo scegliendo **Personalizza** dal menu **Strumenti** .

Nella finestra di dialogo **Personalizza** sono disponibili sei schede: **Comandi**, **Barre degli strumenti**, **Strumenti**, **Tastiera,** **Menu**e **Opzioni**.

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
|[CMFCToolBarsCustomizeDialog::AddButton](#addbutton)|Inserisce un pulsante della barra degli strumenti nell'elenco dei comandi nella pagina **Comandi**|
|[CMFCToolBarsCustomizeDialog::AddMenu](#addmenu)|Carica un menu dalle risorse e chiama [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands) per aggiungere tale menu all'elenco dei comandi nella pagina **Comandi.**|
|[CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands)|Carica un menu dalle risorse e chiama [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands) per aggiungere tale menu all'elenco dei comandi nella pagina **Comandi.**|
|[CMFCToolBarsCustomizeDialog::AddToolBar](#addtoolbar)|Carica una barra degli strumenti dalle risorse. Quindi, per ogni comando nel menu chiama il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) metodo per inserire un pulsante nell'elenco dei comandi nel **comandi** pagina sotto la categoria specificata.|
|[CMFCToolBarsCustomizeDialog::Create](#create)|Visualizza la finestra di dialogo **Personalizzazione.**|
|`CMFCToolBarsCustomizeDialog::EnableTools`|Riservato per utilizzi futuri.|
|[CMFCToolBarsCustomizeDialog::EnableUserDefinedToolbars](#enableuserdefinedtoolbars)|Abilita o disabilita la creazione di nuove barre degli strumenti utilizzando la finestra di dialogo **Personalizza.**|
|[CMFCToolBarsCustomizeDialog::FillAllCommandsList](#fillallcommandslist)|Popola `CListBox` l'oggetto fornito con i comandi nella categoria **Tutti i comandi.**|
|[CMFCToolBarsCustomizeDialog::FillCategoriesComboBox](#fillcategoriescombobox)|Popola `CComboBox` l'oggetto fornito con il nome di ogni categoria di comandi nella finestra di dialogo **Personalizza.**|
|[CMFCToolBarsCustomizeDialog::FillCategoriesListBox](#fillcategorieslistbox)|Popola `CListBox` l'oggetto fornito con il nome di ogni categoria di comandi nella finestra di dialogo **Personalizza.**|
|[CMFCToolBarsCustomizeDialog::GetCommandName](#getcommandname)|Recupera il nome associato all'ID di comando specificato.|
|[CMFCToolBarsCustomizeDialog::GetCountInCategory](#getcountincategory)|Recupera il numero di elementi nell'elenco fornito che hanno una determinata etichetta di testo.|
|[CMFCToolBarsCustomizeDialog::GetFlags](#getflags)|Recupera il set di flag che influiscono sul comportamento della finestra di dialogo.|
|`CMFCToolBarsCustomizeDialog::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage](#onedittoolbarmenuimage)|Avvia un editor di immagini in modo che un utente possa personalizzare un pulsante della barra degli strumenti o un'icona di voce di menu.|
|[CMFCToolBarsCustomizeDialog::OnInitDialog](#oninitdialog)|Esegue l'override per aumentare l'inizializzazione della finestra delle proprietà. (Esegue l'override di [CPropertySheet::OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog).)|
|[CMFCToolBarsCustomizeDialog::PostNcDestroy](#postncdestroy)|Chiamato dal framework dopo che la finestra è stata eliminata. Esegue l'override di `CPropertySheet::PostNcDestroy`.|
|[CMFCToolBarsCustomizeDialog::RemoveButton](#removebutton)|Rimuove il pulsante con l'ID di comando specificato dalla categoria specificata o da tutte le categorie.|
|[CMFCToolBarsCustomizeDialog::RenameCategory](#renamecategory)|Rinomina una categoria nella casella di riepilogo delle categorie nella scheda **Comandi.**|
|[CMFCToolBarsCustomizeDialog::ReplaceButton](#replacebutton)|Sostituisce un pulsante nell'elenco dei comandi nella scheda **Comandi** con un nuovo oggetto pulsante della barra degli strumenti.|
|[CMFCToolBarsCustomizeDialog::SetUserCategory](#setusercategory)|Aggiunge una categoria all'elenco delle categorie che verranno visualizzate nella scheda **Comandi.**|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarsCustomizeDialog::CheckToolsValidity](#checktoolsvalidity)|Chiamato dal framework per determinare se l'elenco di strumenti definiti dall'utente è valido.|
|[CMFCToolBarsCustomizeDialog::OnAfterChangeTool](#onafterchangetool)|Chiamato dal framework quando vengono modificate le proprietà di uno strumento definito dall'utente.|
|[CMFCToolBarsCustomizeDialog::OnAssignKey](#onassignkey)|Determina se un tasto di scelta rapida specificato può essere assegnato a un'azione.|
|[CMFCToolBarsCustomizeDialog::OnBeforeChangeTool](#onbeforechangetool)|Determina se uno strumento definito dall'utente può essere modificato.|
|[CMFCToolBarsCustomizeDialog::OnInitToolsPagina](#oninittoolspage)|Chiamato dal framework quando l'utente sceglie la scheda **Strumenti** è richiesta.|

## <a name="remarks"></a>Osservazioni

Per visualizzare la finestra di `CMFCToolBarsCustomizeDialog` dialogo **Personalizza,** creare un oggetto e chiamare il [CMFCToolBarsCustomizeDialog::Create](#create) metodo.

Mentre la finestra di dialogo **Personalizza** è attiva, l'applicazione funziona in una modalità speciale che limita l'utente alle attività di personalizzazione.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCToolBarsCustomizeDialog` . Nell'esempio viene illustrato come sostituire un pulsante della barra degli strumenti nella casella di riepilogo dei comandi nella pagina **Comandi,** abilitare la creazione di nuove barre degli strumenti utilizzando la finestra di dialogo **Personalizza** e visualizzare la finestra di dialogo **Personalizzazione.** Questo frammento di codice fa parte dell'esempio Demo di [IE.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_IEDemo#4](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

`CMFCToolBarsCustomizeDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxToolBarsCustomizeDialog.h

## <a name="cmfctoolbarscustomizedialogaddbutton"></a><a name="addbutton"></a>CMFCToolBarsCustomizeDialog::AddButton

Inserisce un pulsante della barra degli strumenti nell'elenco dei comandi nella pagina **Comandi.**

```cpp
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

*uiCategoryId (informazioni in questo gruppo)*<br/>
[in] Specifica l'ID di categoria in cui inserire il pulsante.

*Pulsante*<br/>
[in] Specifica il pulsante da inserire.

*iInsertBefore (Informazioni in stati incommidi*<br/>
[in] Specifica l'indice in base zero di un pulsante della barra degli strumenti prima del quale il pulsante viene inserito.

*lpszCategoria*<br/>
[in] Specifica la stringa di categoria in cui inserire il pulsante.

### <a name="remarks"></a>Osservazioni

Il `AddButton` metodo ignora i pulsanti che dispongono di ID di comando standard (ad esempio ID_FILE_MRU_FILE1), i comandi non consentiti (vedere [CMFCToolBar::IsCommandPermitted](../../mfc/reference/cmfctoolbar-class.md#iscommandpermitted)) e i pulsanti fittizi.

Questo metodo crea un nuovo oggetto `button` dello stesso tipo di (in genere una [classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)) utilizzando la classe di runtime del pulsante. Chiama quindi [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom) per copiare i membri dati del pulsante e inserisce la copia nella categoria specificata.

Quando il nuovo pulsante viene `OnAddToCustomizePage` inserito, riceve la notifica.

Se `iInsertBefore` è -1, il pulsante viene aggiunto all'elenco delle categorie; in caso contrario, viene inserito prima dell'elemento con l'indice specificato.

### <a name="example"></a>Esempio

Nell'esempio riportato di `AddButton` seguito `CMFCToolBarsCustomizeDialog` viene illustrato come utilizzare il metodo della classe . Questo frammento di codice fa parte [dell'esempio Slider](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_Slider#1](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_2.cpp)]

## <a name="cmfctoolbarscustomizedialogaddmenu"></a><a name="addmenu"></a>CMFCToolBarsCustomizeDialog::AddMenu

Carica un menu dalle risorse e chiama [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands) per aggiungere tale menu all'elenco dei comandi nella pagina **Comandi.**

```
BOOL AddMenu(UINT uiMenuResId);
```

### <a name="parameters"></a>Parametri

*uiMenuResId*<br/>
[in] Specifica l'ID risorsa di un menu da caricare.

### <a name="return-value"></a>Valore restituito

TRUESe un menu è stato aggiunto correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Nella chiamata `AddMenuCommands`a , *bPopup* è FALSE. Di conseguenza, tale metodo non aggiunge voci di menu che contengono sottomenu all'elenco dei comandi. Questo metodo aggiunge le voci di menu nei sottomenu all'elenco dei comandi.

## <a name="cmfctoolbarscustomizedialogaddmenucommands"></a><a name="addmenucommands"></a>CMFCToolBarsCustomizeDialog::AddMenuCommands

Aggiunge voci all'elenco di comandi nella pagina **Comandi** per rappresentare tutte le voci del menu specificato.

```cpp
void AddMenuCommands(
    const CMenu* pMenu,
    BOOL bPopup,
    LPCTSTR lpszCategory=NULL,
    LPCTSTR lpszMenuPath=NULL);
```

### <a name="parameters"></a>Parametri

*pMenu (Menu)*<br/>
[in] Puntatore all'oggetto CMenu da aggiungere.

*bPopup (popup)*<br/>
[in] Specifica se inserire le voci di menu a comparsa nell'elenco dei comandi.

*lpszCategoria*<br/>
[in] Nome della categoria in cui inserire il menu.

*Percorso di menu lpsz*<br/>
[in] Prefisso che viene aggiunto al nome quando il comando viene visualizzato nell'elenco **Tutte le categorie.**

### <a name="remarks"></a>Osservazioni

Il `AddMenuCommands` metodo esegue un ciclo su tutte le voci di menu di *pMenu*. Per ogni voce di menu che non contiene un sottomenu, questo metodo crea un [CMFCToolBarButton classe](../../mfc/reference/cmfctoolbarbutton-class.md) oggetto e chiama il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) metodo per aggiungere la voce di menu come un pulsante della barra degli strumenti all'elenco di comandi nel **comandi** pagina. I separatori vengono ignorati in questo processo.

Se *bPopup* è TRUE, per ogni voce di menu che contiene un sottomenu questo metodo crea un [CMFCToolBarMenuButton classe](../../mfc/reference/cmfctoolbarmenubutton-class.md) e lo inserisce nell'elenco di comandi chiamando `AddButton`. In caso contrario, le voci di menu che contengono sottomenu non vengono visualizzate nell'elenco dei comandi. In entrambi i `AddMenuCommands` casi, quando rileva una voce di menu con un sottomenu, viene chiamata in modo ricorsivo, passando un puntatore al sottomenu come parametro *pMenu* e aggiungendo l'etichetta del sottomenu a *lpszMenuPath*.

## <a name="cmfctoolbarscustomizedialogaddtoolbar"></a><a name="addtoolbar"></a>CMFCToolBarsCustomizeDialog::AddToolBar

Carica una barra degli strumenti dalle risorse. Quindi, per ogni comando nel menu chiama il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) metodo per inserire un pulsante nell'elenco dei comandi nel **comandi** pagina sotto la categoria specificata.

```
BOOL AddToolBar(
    UINT uiCategoryId,
    UINT uiToolbarResId);

BOOL AddToolBar(
    LPCTSTR lpszCategory,
    UINT uiToolbarResId);
```

### <a name="parameters"></a>Parametri

*uiCategoryId (informazioni in questo gruppo)*<br/>
[in] Specifica l'ID risorsa della categoria a cui aggiungere la barra degli strumenti.

*uiToolbarResId*<br/>
[in] Specifica l'ID risorsa di una barra degli strumenti i cui comandi vengono inseriti nell'elenco dei comandi.

*lpszCategoria*<br/>
[in] Specifica il nome della categoria a cui aggiungere la barra degli strumenti.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="example"></a>Esempio

Nell'esempio `CMFCToolBarsCustomizeDialog` riportato di `AddToolBar` seguito viene illustrato come utilizzare il metodo nella classe . Questo frammento di codice fa parte dell' [esempio di Word Pad](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#11](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_3.cpp)]

### <a name="remarks"></a>Osservazioni

Il controllo utilizzato per rappresentare ogni comando è un [CMFCToolBarButton classe](../../mfc/reference/cmfctoolbarbutton-class.md) oggetto. Dopo aver aggiunto la barra degli strumenti, è possibile sostituire il pulsante con un controllo di un tipo derivato chiamando [CMFCToolBarsCustomizeDialog::ReplaceButton](#replacebutton).

## <a name="cmfctoolbarscustomizedialogchecktoolsvalidity"></a><a name="checktoolsvalidity"></a>CMFCToolBarsCustomizeDialog::CheckToolsValidity

Verifica la validità dell'elenco degli strumenti utente.

```
virtual BOOL CheckToolsValidity(const CObList& lstTools);
```

### <a name="parameters"></a>Parametri

*lstStrumenti*<br/>
[in] Elenco di strumenti definiti dall'utente da controllare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elenco di strumenti definiti dall'utente è valido; in caso contrario, FALSE. L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo per verificare la validità degli oggetti che rappresentano gli strumenti definiti dall'utente restituiti da [CMFCToolBarsCustomizeDialog::CheckToolsValidity](#checktoolsvalidity).

Eseguire `CheckToolsValidity` l'override del `CMFCToolBarsCustomizeDialog` metodo in una classe derivata da se si desidera convalidare gli strumenti utente prima che l'utente chiuda la finestra di dialogo. Se questo metodo restituisce FALSE quando l'utente fa clic sul pulsante **Chiudi** nell'angolo superiore destro della finestra di dialogo o sul pulsante con etichetta **Chiudi** nell'angolo inferiore destro della finestra di dialogo, nella finestra di dialogo viene visualizzata la scheda **Strumenti** anziché la chiusura. Se questo metodo restituisce FALSE quando l'utente fa clic su una scheda per spostarsi dalla scheda **Strumenti** , la navigazione non si verifica. È necessario visualizzare una finestra di messaggio appropriata per informare l'utente del problema che ha causato l'esito negativo della convalida.

## <a name="cmfctoolbarscustomizedialogcmfctoolbarscustomizedialog"></a><a name="cmfctoolbarscustomizedialog"></a>CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog

Costruisce un oggetto `CMFCToolBarsCustomizeDialog`.

```
CMFCToolBarsCustomizeDialog(
    CFrameWnd* pWndParentFrame,
    BOOL bAutoSetFromMenus = FALSE,
    UINT uiFlags = (AFX_CUSTOMIZE_MENU_SHADOWS | AFX_CUSTOMIZE_TEXT_LABELS | AFX_CUSTOMIZE_MENU_ANIMATIONS | AFX_CUSTOMIZE_NOHELP),
    CList <CRuntimeClass*, CRuntimeClass*>* p listCustomPages = NULL);
```

### <a name="parameters"></a>Parametri

*pWndParentFrame (fotogramma pWndParentFrame)*<br/>
[in] Puntatore al frame padre. Questo parametro non deve essere NULL.

*bAutoSetFromMenus*<br/>
[in] Valore booleano che specifica se aggiungere i comandi di menu da tutti i menu all'elenco dei comandi nella pagina **Comandi.** Se questo parametro è TRUE, vengono aggiunti i comandi di menu. In caso contrario, i comandi di menu non vengono aggiunti.

*uiFlags (flag)*<br/>
[in] Combinazione di flag che influiscono sul comportamento della finestra di dialogo. Questo parametro può essere uno o più dei seguenti valori:

- AFX_CUSTOMIZE_MENU_SHADOWS

- AFX_CUSTOMIZE_TEXT_LABELS

- AFX_CUSTOMIZE_MENU_ANIMATIONS

- AFX_CUSTOMIZE_NOHELP

- AFX_CUSTOMIZE_CONTEXT_HELP

- AFX_CUSTOMIZE_NOTOOLS

- AFX_CUSTOMIZE_MENUAMPERS

- AFX_CUSTOMIZE_NO_LARGE_ICONS

*plistCustomPages (pagine personalizzate di plist*<br/>
[in] Puntatore a un `CRuntimeClass` elenco di oggetti che specificano pagine personalizzate aggiuntive.

### <a name="remarks"></a>Osservazioni

Il parametro *plistCustomPages* fa `CRuntimeClass` riferimento all'elenco di oggetti che specificano pagine personalizzate aggiuntive. Il costruttore aggiunge più pagine alla finestra di dialogo utilizzando il [CRuntimeClass::CreateObject](../../mfc/reference/cruntimeclass-structure.md#createobject) metodo. Vedere l'esempio CustomPages per un esempio che aggiunge più pagine alla finestra di dialogo **Personalizza.See** the CustomPages sample for an example that adds more pages to the Customize dialog box.

Per ulteriori informazioni sui valori che è possibile passare nel parametro *uiFlags,* vedere [CMFCToolBarsCustomizeDialog::GetFlags](#getflags).

### <a name="example"></a>Esempio

Nell'esempio `CMFCToolBarsCustomizeDialog` seguente viene illustrato come costruire un oggetto della classe. Questo frammento di codice fa parte [dell'esempio Pagine personalizzate](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_CustomPages#3](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_4.cpp)]

## <a name="cmfctoolbarscustomizedialogcreate"></a><a name="create"></a>CMFCToolBarsCustomizeDialog::Create

Visualizza la finestra di dialogo **Personalizzazione.**

```
virtual BOOL Create();
```

### <a name="return-value"></a>Valore restituito

TRUESe la finestra delle proprietà di personalizzazione viene creata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare `Create` il metodo solo dopo aver inizializzato completamente la classe.

## <a name="cmfctoolbarscustomizedialogenableuserdefinedtoolbars"></a><a name="enableuserdefinedtoolbars"></a>CMFCToolBarsCustomizeDialog::EnableUserDefinedToolbars

Abilita o disabilita la creazione di nuove barre degli strumenti utilizzando la finestra di dialogo **Personalizza.**

```cpp
void EnableUserDefinedToolbars(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per abilitare le barre degli strumenti definite dall'utente. FALSE per disabilitare le barre degli strumenti.

### <a name="remarks"></a>Osservazioni

Se *bEnable* è TRUE, i pulsanti **Nuovo**, **Rinomina** ed **Elimina** vengono visualizzati nella pagina Barre **degli strumenti.**

Per impostazione predefinita, o se *bEnable* è FALSE, questi pulsanti non vengono visualizzati e l'utente non può definire nuove barre degli strumenti.

## <a name="cmfctoolbarscustomizedialogfillallcommandslist"></a><a name="fillallcommandslist"></a>CMFCToolBarsCustomizeDialog::FillAllCommandsList

Popola `CListBox` l'oggetto fornito con i comandi nella categoria **Tutti i comandi.**

```
virtual void FillAllCommandsList(CListBox& wndListOfCommands) const;
```

### <a name="parameters"></a>Parametri

*wndListOfCommands (wndListOfCommands)*<br/>
[fuori] Riferimento all'oggetto `CListBox` da popolare.

### <a name="remarks"></a>Osservazioni

La categoria **Tutti i comandi** contiene i comandi di tutte le categorie. Il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) metodo aggiunge il comando associato al pulsante fornito per il **tutti i comandi** categoria per l'utente.

Questo metodo cancella il contenuto `CListBox` dell'oggetto fornito prima di popolarlo con i comandi nella categoria **Tutti i comandi.**

La `CMFCMousePropertyPage` classe utilizza questo metodo per popolare la casella di riepilogo degli eventi di doppio clic.

## <a name="cmfctoolbarscustomizedialogfillcategoriescombobox"></a><a name="fillcategoriescombobox"></a>CMFCToolBarsCustomizeDialog::FillCategoriesComboBox

Popola `CComboBox` l'oggetto fornito con il nome di ogni categoria di comandi nella finestra di dialogo **Personalizza.**

```cpp
void FillCategoriesComboBox(
    CComboBox& wndCategory,
    BOOL bAddEmpty = TRUE) const;
```

### <a name="parameters"></a>Parametri

*wndCategory*<br/>
[fuori] Riferimento all'oggetto `CComboBox` da popolare.

*bDa vuota*<br/>
[in] Valore booleano che specifica se aggiungere categorie alla casella combinata che non dispongono di comandi. Se questo parametro è TRUE, le categorie vuote vengono aggiunte alla casella combinata. In caso contrario, le categorie vuote non vengono aggiunte.

### <a name="remarks"></a>Osservazioni

Questo metodo è simile al [CMFCToolBarsCustomizeDialog::FillCategoriesListBox](#fillcategorieslistbox) metodo `CComboBox` con la differenza che questo metodo funziona con un oggetto.

Questo metodo non cancella il `CComboBox` contenuto dell'oggetto prima di popolarlo. Garantisce che la categoria **Tutti i comandi** sia l'elemento finale nella casella combinata.

È possibile aggiungere nuove categorie di comandi utilizzando il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) metodo. È possibile modificare il nome di una categoria esistente utilizzando il [CMFCToolBarsCustomizeDialog::RenameCategory](#renamecategory) metodo.

Le `CMFCToolBarsKeyboardPropertyPage` `CMFCKeyMapDialog` classi e utilizzano questo metodo per classificare i mapping della tastiera.

## <a name="cmfctoolbarscustomizedialogfillcategorieslistbox"></a><a name="fillcategorieslistbox"></a>CMFCToolBarsCustomizeDialog::FillCategoriesListBox

Popola `CListBox` l'oggetto fornito con il nome di ogni categoria di comandi nella finestra di dialogo **Personalizza.**

```cpp
void FillCategoriesListBox(
    CListBox& wndCategory,
    BOOL bAddEmpty = TRUE) const;
```

### <a name="parameters"></a>Parametri

*wndCategory*<br/>
[fuori] Riferimento all'oggetto `CListBox` da popolare.

*bDa vuota*<br/>
[in] Valore booleano che specifica se aggiungere categorie alla casella di riepilogo che non dispongono di comandi. Se questo parametro è TRUE, le categorie vuote vengono aggiunte alla casella di riepilogo. In caso contrario, le categorie vuote non vengono aggiunte.

### <a name="remarks"></a>Osservazioni

Questo metodo è simile al [CMFCToolBarsCustomizeDialog::FillCategoriesComboBox](#fillcategoriescombobox) metodo `CListBox` con la differenza che questo metodo funziona con un oggetto.

Questo metodo non cancella il `CListBox` contenuto dell'oggetto prima di popolarlo. Garantisce che la categoria **Tutti i comandi** sia l'elemento finale nella casella di riepilogo.

È possibile aggiungere nuove categorie di comandi utilizzando il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) metodo. È possibile modificare il nome di una categoria esistente utilizzando il [CMFCToolBarsCustomizeDialog::RenameCategory](#renamecategory) metodo.

La `CMFCToolBarsCommandsPropertyPage` classe utilizza questo metodo per visualizzare l'elenco dei comandi associati a ogni categoria di comandi.

## <a name="cmfctoolbarscustomizedialoggetcommandname"></a><a name="getcommandname"></a>CMFCToolBarsCustomizeDialog::GetCommandName

Recupera il nome associato all'ID di comando specificato.

```
LPCTSTR GetCommandName(UINT uiCmd) const;
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] ID del comando da recuperare.

### <a name="return-value"></a>Valore restituito

Nome associato all'ID di comando specificato oppure NULL se il comando non esiste.

## <a name="cmfctoolbarscustomizedialoggetcountincategory"></a><a name="getcountincategory"></a>CMFCToolBarsCustomizeDialog::GetCountInCategory

Recupera il numero di elementi nell'elenco fornito che hanno una determinata etichetta di testo.

```
int GetCountInCategory(
    LPCTSTR lpszItemName,
    const CObList& lstCommands) const;
```

### <a name="parameters"></a>Parametri

*lpszItemName (nome dall'elemento in stato di inademp*<br/>
[in] Etichetta di testo da trovare.

*lstCommands (Comandi lst)lestCommands*<br/>
[in] Riferimento a un elenco `CMFCToolBarButton` che contiene oggetti.

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'elenco fornito la cui etichetta di testo è uguale a *lpszItemName*.

### <a name="remarks"></a>Osservazioni

Ogni elemento nell'elenco di oggetti `CMFCToolBarButton`fornito deve essere di tipo . Questo metodo confronta *lpszItemName* con il [CMFCToolBarButton::m_strText](../../mfc/reference/cmfctoolbarbutton-class.md#m_strtext) membro dati.

## <a name="cmfctoolbarscustomizedialoggetflags"></a><a name="getflags"></a>CMFCToolBarsCustomizeDialog::GetFlags

Recupera il set di flag che influiscono sul comportamento della finestra di dialogo.

```
UINT GetFlags() const;
```

### <a name="return-value"></a>Valore restituito

Set di flag che influiscono sul comportamento della finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Questo metodo recupera il valore del *uiFlags* parametro che viene passato al costruttore. Il valore restituito può essere uno o più dei seguenti valori:

|||
|-|-|
|AFX_CUSTOMIZE_MENU_SHADOWS|Consente all'utente di specificare l'aspetto dell'ombreggiatura del menu.  |
|AFX_CUSTOMIZE_TEXT_LABELS|Consente all'utente di specificare se le etichette di testo vengono visualizzate sotto le immagini dei pulsanti della barra degli strumenti.  |
|AFX_CUSTOMIZE_MENU_ANIMATIONS|Consente all'utente di specificare lo stile di animazione del menu.  |
|AFX_CUSTOMIZE_NOHELP|Rimuove il pulsante della Guida dalla finestra di dialogo di personalizzazione.  |
|AFX_CUSTOMIZE_CONTEXT_HELP|Abilita lo stile di visualizzazione WS_EX_CONTEXTHELP.  |
|AFX_CUSTOMIZE_NOTOOLS|Rimuove la pagina **Strumenti** dalla finestra di dialogo di personalizzazione. Questo flag è valido se `CUserToolsManager` l'applicazione utilizza la classe .  |
|AFX_CUSTOMIZE_MENUAMPERS|Consente alle didascalie dei pulsanti **&** di contenere il carattere e commerciale ( ).  |
|AFX_CUSTOMIZE_NO_LARGE_ICONS|Rimuove l'opzione **Icone grandi** dalla finestra di dialogo di personalizzazione.  |

Per ulteriori informazioni sullo stile di visualizzazione WS_EX_CONTEXTHELP, vedere [Stili di finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles).

## <a name="cmfctoolbarscustomizedialogonafterchangetool"></a><a name="onafterchangetool"></a>CMFCToolBarsCustomizeDialog::OnAfterChangeTool

Risponde a una modifica in uno strumento utente subito dopo che si verifica.

```
virtual void OnAfterChangeTool(CUserTool* pSelTool);
```

### <a name="parameters"></a>Parametri

*PSelTool (strumento pSElTool)*<br/>
[in, out] Puntatore all'oggetto strumento utente che è stato modificato.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal framework quando un utente modifica le proprietà di uno strumento definito dall'utente. L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di `CMFCToolBarsCustomizeDialog` questo metodo in una classe derivata da per eseguire l'elaborazione dopo che si verifica una modifica a uno strumento utente.

## <a name="cmfctoolbarscustomizedialogonassignkey"></a><a name="onassignkey"></a>CMFCToolBarsCustomizeDialog::OnAssignKey

Convalida i tasti di scelta rapida come definiti dall'utente.

```
virtual BOOL OnAssignKey(ACCEL* pAccel);
```

### <a name="parameters"></a>Parametri

*pAccel*<br/>
[in, out] Puntatore all'assigment della tastiera proposto che viene espresso come una struttura [ACCEL.](/windows/win32/api/winuser/ns-winuser-accel)

### <a name="return-value"></a>Valore restituito

TRUE se il tasto può essere assegnato o FALSE se il tasto non può essere assegnato. L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per eseguire un'elaborazione aggiuntiva quando un utente assegna un nuovo tasto di scelta rapida o per convalidare i tasti di scelta rapida come definiti dall'utente. Per impedire l'assegnazione di un collegamento, restituire FALSE. È inoltre necessario visualizzare una finestra di messaggio o informare in altro modo l'utente del motivo per cui la scelta rapida da tastiera è stata rifiutata.

## <a name="cmfctoolbarscustomizedialogonbeforechangetool"></a><a name="onbeforechangetool"></a>CMFCToolBarsCustomizeDialog::OnBeforeChangeTool

Esegue un'elaborazione personalizzata quando una modifica a uno strumento utente quando l'utente sta per applicare una modifica.

```
virtual void OnBeforeChangeTool(CUserTool* pSelTool);
```

### <a name="parameters"></a>Parametri

*PSelTool (strumento pSElTool)*<br/>
[in, out] Puntatore all'oggetto strumento utente che sta per essere sostituito.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal framework quando le proprietà di uno strumento definito dall'utente sta per essere modificate. L'implementazione predefinita non esegue alcuna operazione. Eseguire `OnBeforeChangeTool` l'override del `CMFCToolBarsCustomizeDialog` metodo in una classe derivata da se si desidera eseguire l'elaborazione prima che si verifichi una modifica a uno strumento utente, ad esempio il rilascio delle risorse utilizzate da *pSelTool.*

## <a name="cmfctoolbarscustomizedialogonedittoolbarmenuimage"></a><a name="onedittoolbarmenuimage"></a>CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage

Avvia un editor di immagini in modo che un utente possa personalizzare un pulsante della barra degli strumenti o un'icona di voce di menu.

```
virtual BOOL OnEditToolbarMenuImage(
    CWnd* pWndParent,
    CBitmap& bitmap,
    int nBitsPerPixel);
```

### <a name="parameters"></a>Parametri

*pWndParent (padre di pWndParent)*<br/>
[in] Puntatore alla finestra padre.

*Bitmap*<br/>
[in] Un riferimento a un oggetto bitmap da modificare.

*nBitsPerPixel*<br/>
[in] Risoluzione del colore bitmap, in bit per pixel.

### <a name="return-value"></a>Valore restituito

TRUESe viene eseguito il commit di una modifica. in caso contrario, FALSE. L'implementazione predefinita visualizza una finestra di dialogo e restituisce TRUE se l'utente fa clic su **OK**o FALSE se l'utente fa clic su **Annulla** o sul pulsante **Chiudi** .

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal framework quando l'utente esegue l'editor di immagini. L'implementazione predefinita viene visualizzata la finestra di dialogo [della classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md) . Eseguire `OnEditToolbarMenuImage` l'override in una classe derivata per utilizzare un editor di immagini personalizzato.

## <a name="cmfctoolbarscustomizedialogoninitdialog"></a><a name="oninitdialog"></a>CMFCToolBarsCustomizeDialog::OnInitDialog

Esegue l'override per aumentare l'inizializzazione della finestra delle proprietà.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

Risultato della chiamata al metodo [CPropertySheet::OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog) .

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base, [CPropertySheet::OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog), visualizzando il pulsante **Chiudi** , verificando che la finestra di dialogo si adatti alle dimensioni correnti dello schermo e spostando il pulsante **?nell'angolo** inferiore sinistro della finestra di dialogo.

## <a name="cmfctoolbarscustomizedialogoninittoolspage"></a><a name="oninittoolspage"></a>CMFCToolBarsCustomizeDialog::OnInitToolsPagina

Gestisce la notifica dal framework che la pagina **strumenti** sta per essere inizializzata.

```
virtual void OnInitToolsPage();
```

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questo metodo in una classe derivata per elaborare questa notifica.

## <a name="cmfctoolbarscustomizedialogpostncdestroy"></a><a name="postncdestroy"></a>CMFCToolBarsCustomizeDialog::PostNcDestroy

Chiamato dal framework dopo che la finestra è stata eliminata.

```
virtual void PostNcDestroy();
```

### <a name="remarks"></a>Osservazioni

Questo metodo estende l'implementazione della classe base, `CPropertySheet::PostNcDestroy`, ripristinando l'applicazione alla modalità precedente.

Il [CMFCToolBarsCustomizeDialog::Create](#create) metodo inserisce l'applicazione in una modalità speciale che limita l'utente alle attività di personalizzazione.

## <a name="cmfctoolbarscustomizedialogremovebutton"></a><a name="removebutton"></a>CMFCToolBarsCustomizeDialog::RemoveButton

Rimuove il pulsante con l'ID di comando specificato dalla categoria specificata o da tutte le categorie.

```
int RemoveButton(
    UINT uiCategoryId,
    UINT uiCmdId);

int RemoveButton(
    LPCTSTR lpszCategory,
    UINT uiCmdId);
```

### <a name="parameters"></a>Parametri

*uiCategoryId (informazioni in questo gruppo)*<br/>
[in] Specifica l'ID di categoria da cui rimuovere il pulsante.

*uiCmdId (informazioni in questo base elementi)*<br/>
[in] Specifica l'ID di comando del pulsante.

*lpszCategoria*<br/>
[in] Specifica il nome della categoria da cui rimuovere il pulsante.

### <a name="return-value"></a>Valore restituito

Indice in base zero del pulsante rimosso oppure -1 se l'ID di comando specificato non è stato trovato nella categoria specificata. Se *uiCategoryId* è -1, il valore restituito è 0.

### <a name="remarks"></a>Osservazioni

Per rimuovere un pulsante da tutte le categorie, chiamare il primo overload di questo metodo e impostare *uiCategoryId* su -1.

## <a name="cmfctoolbarscustomizedialogrenamecategory"></a><a name="renamecategory"></a>CMFCToolBarsCustomizeDialog::RenameCategory

Rinomina una categoria nella casella di riepilogo delle categorie nella pagina **Comandi.**

```
BOOL RenameCategory(
    LPCTSTR lpszCategoryOld,
    LPCTSTR lpszCategoryNew);
```

### <a name="parameters"></a>Parametri

*lpszCategoryOld (elenco spzCategoryOld)*<br/>
[in] Nome della categoria da modificare.

*lpszCategoryNuovo*<br/>
[in] Nome della nuova categoria.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il nome della categoria deve essere univoco.

## <a name="cmfctoolbarscustomizedialogreplacebutton"></a><a name="replacebutton"></a>CMFCToolBarsCustomizeDialog::ReplaceButton

Sostituisce un pulsante della barra degli strumenti nella casella di riepilogo dei comandi nella pagina **Comandi.**

```cpp
void ReplaceButton(
    UINT uiCmd,
    const CMFCToolBarButton& button);
```

### <a name="parameters"></a>Parametri

*uiCmd (informazioni in stato in questo*<br/>
[in] Specifica il comando del pulsante da sostituire.

*Pulsante*<br/>
[in] Un riferimento **const** all'oggetto pulsante della barra degli strumenti che sostituisce il pulsante precedente.

### <a name="remarks"></a>Osservazioni

Quando [CMFCToolBarsCustomizeDialog::AddMenu](#addmenu), [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands)o [CMFCToolBarsCustomizeDialog::AddToolBar](#addtoolbar) aggiunge un comando alla pagina **Dei comandi,** tale comando è sotto forma di un oggetto [classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) (o un oggetto [classe CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md) per una voce di menu contenente un sottomenu aggiunto). `AddMenuCommands` Il framework chiama anche questi tre metodi per aggiungere automaticamente i comandi. Se invece si desidera che un comando `ReplaceButton` venga rappresentato da un tipo derivato, chiamare e passare un pulsante del tipo derivato.

### <a name="example"></a>Esempio

Nell'esempio `CMFCToolBarsCustomizeDialog` riportato di `ReplaceButton` seguito viene illustrato come utilizzare il metodo nella classe . Questo frammento di codice fa parte dell'esempio Demo di [Visual Studio.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_VisualStudioDemo#34](../../mfc/codesnippet/cpp/cmfctoolbarscustomizedialog-class_5.cpp)]

## <a name="cmfctoolbarscustomizedialogsetusercategory"></a><a name="setusercategory"></a>CMFCToolBarsCustomizeDialog::SetUserCategory

Specifica quale categoria nell'elenco delle categorie nella pagina **Comandi** è la categoria utente. È necessario chiamare questa funzione prima di chiamare [CMFCToolBarsCustomizeDialog::Create](#create).

```
BOOL SetUserCategory(LPCTSTR lpszCategory);
```

### <a name="parameters"></a>Parametri

*lpszCategoria*<br/>
[in] Nome della categoria.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

L'impostazione della categoria utente non è attualmente utilizzata dal framework.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

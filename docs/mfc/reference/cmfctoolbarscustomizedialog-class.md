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
ms.openlocfilehash: 4e6bdef10d5747abd344750c888cf6726c47d99e
ms.sourcegitcommit: effb516760c0f956c6308eeded48851accc96b92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70929929"
---
# <a name="cmfctoolbarscustomizedialog-class"></a>Classe CMFCToolBarsCustomizeDialog

Una finestra di dialogo a schede non modale ( [classe CPropertySheet](../../mfc/reference/cpropertysheet-class.md)) che consente all'utente di personalizzare le barre degli strumenti, i menu, i tasti di scelta rapida, gli strumenti definiti dall'utente e lo stile di visualizzazione in un'applicazione. In genere, l'utente accede a questa finestra di dialogo scegliendo **Personalizza** dal menu **Strumenti** .

Nella finestra di dialogo **Personalizza** sono presenti sei schede: **Comandi**, **barre degli**strumenti, **strumenti**, **tastiera**, **menu**e **Opzioni**.

## <a name="syntax"></a>Sintassi

```
class CMFCToolBarsCustomizeDialog : public CPropertySheet
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCToolBarsCustomizeDialog:: CMFCToolBarsCustomizeDialog](#cmfctoolbarscustomizedialog)|Costruisce un oggetto `CMFCToolBarsCustomizeDialog`.|
|`CMFCToolBarsCustomizeDialog::~CMFCToolBarsCustomizeDialog`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CMFCToolBarsCustomizeDialog:: AddButton](#addbutton)|Inserisce un pulsante della barra degli strumenti nell'elenco dei comandi della pagina **comandi**|
|[CMFCToolBarsCustomizeDialog:: AggiungiMenu](#addmenu)|Carica un menu dalle risorse e chiama [CMFCToolBarsCustomizeDialog:: AddMenuCommands](#addmenucommands) per aggiungere tale menu all'elenco di comandi nella pagina **comandi** .|
|[CMFCToolBarsCustomizeDialog:: AddMenuCommands](#addmenucommands)|Carica un menu dalle risorse e chiama [CMFCToolBarsCustomizeDialog:: AddMenuCommands](#addmenucommands) per aggiungere tale menu all'elenco di comandi nella pagina **comandi** .|
|[CMFCToolBarsCustomizeDialog:: AddToolBar](#addtoolbar)|Carica una barra degli strumenti dalle risorse. Quindi, per ogni comando nel menu chiama il metodo [CMFCToolBarsCustomizeDialog:: AddButton](#addbutton) per inserire un pulsante nell'elenco di comandi della pagina **comandi** nella categoria specificata.|
|[CMFCToolBarsCustomizeDialog:: create](#create)|Consente di visualizzare la finestra di dialogo **personalizzazione** .|
|`CMFCToolBarsCustomizeDialog::EnableTools`|Riservato per usi futuri.|
|[CMFCToolBarsCustomizeDialog:: EnableUserDefinedToolbars](#enableuserdefinedtoolbars)|Abilita o Disabilita la creazione di nuove barre degli strumenti tramite la finestra di dialogo **Personalizza** .|
|[CMFCToolBarsCustomizeDialog::FillAllCommandsList](#fillallcommandslist)|Compila l'oggetto fornito `CListBox` con i comandi nella categoria **tutti i comandi** .|
|[CMFCToolBarsCustomizeDialog::FillCategoriesComboBox](#fillcategoriescombobox)|Compila l'oggetto fornito `CComboBox` con il nome di ogni categoria di comandi nella finestra di dialogo **Personalizza** .|
|[CMFCToolBarsCustomizeDialog::FillCategoriesListBox](#fillcategorieslistbox)|Compila l'oggetto fornito `CListBox` con il nome di ogni categoria di comandi nella finestra di dialogo **Personalizza** .|
|[CMFCToolBarsCustomizeDialog:: GetCommandName](#getcommandname)|Recupera il nome associato all'ID di comando specificato.|
|[CMFCToolBarsCustomizeDialog:: GetCountInCategory](#getcountincategory)|Recupera il numero di elementi nell'elenco fornito con un'etichetta di testo specificata.|
|[CMFCToolBarsCustomizeDialog:: GetFlags](#getflags)|Recupera il set di flag che influiscono sul comportamento della finestra di dialogo.|
|`CMFCToolBarsCustomizeDialog::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCToolBarsCustomizeDialog:: OnEditToolbarMenuImage](#onedittoolbarmenuimage)|Avvia un editor di immagini in modo che un utente possa personalizzare un pulsante della barra degli strumenti o un'icona della voce di menu.|
|[CMFCToolBarsCustomizeDialog::OnInitDialog](#oninitdialog)|Sostituisce per aumentare l'inizializzazione della finestra delle proprietà. Esegue l'override di [CPropertySheet:: OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog).|
|[CMFCToolBarsCustomizeDialog::P ostNcDestroy](#postncdestroy)|Chiamata eseguita dal Framework dopo che la finestra è stata eliminata. Esegue l'override di `CPropertySheet::PostNcDestroy`.|
|[CMFCToolBarsCustomizeDialog:: RemoveButton](#removebutton)|Rimuove il pulsante con l'ID di comando specificato dalla categoria specificata o da tutte le categorie.|
|[CMFCToolBarsCustomizeDialog:: RenameCategory](#renamecategory)|Rinomina una categoria nella casella di riepilogo delle categorie nella scheda **comandi** .|
|[CMFCToolBarsCustomizeDialog:: ReplaceButton](#replacebutton)|Sostituisce un pulsante nell'elenco dei comandi della scheda **comandi** con un nuovo oggetto pulsante della barra degli strumenti.|
|[CMFCToolBarsCustomizeDialog:: SetUserCategory](#setusercategory)|Aggiunge una categoria all'elenco di categorie che verranno visualizzate nella scheda **comandi** .|

### <a name="protected-methods"></a>Metodi protetti

|Name|DESCRIZIONE|
|----------|-----------------|
|[CMFCToolBarsCustomizeDialog:: CheckToolsValidity](#checktoolsvalidity)|Chiamata eseguita dal Framework per determinare se l'elenco di strumenti definiti dall'utente è valido.|
|[CMFCToolBarsCustomizeDialog:: OnAfterChangeTool](#onafterchangetool)|Chiamata eseguita dal framework quando le proprietà di uno strumento definito dall'utente cambiano.|
|[CMFCToolBarsCustomizeDialog:: OnAssignKey](#onassignkey)|Determina se un tasto di scelta rapida specificato può essere assegnato a un'azione.|
|[CMFCToolBarsCustomizeDialog:: OnBeforeChangeTool](#onbeforechangetool)|Determina se è possibile modificare uno strumento definito dall'utente.|
|[CMFCToolBarsCustomizeDialog:: OnInitToolsPage](#oninittoolspage)|Chiamata eseguita dal framework quando l'utente sceglie la scheda **strumenti** è richiesta.|

## <a name="remarks"></a>Note

Per visualizzare la finestra di dialogo **Personalizza** , creare `CMFCToolBarsCustomizeDialog` un oggetto e chiamare il metodo [CMFCToolBarsCustomizeDialog:: create](#create) .

Quando la finestra di dialogo **Personalizza** è attiva, l'applicazione funziona in una modalità speciale che limita l'utente alle attività di personalizzazione.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare i vari metodi nella classe `CMFCToolBarsCustomizeDialog` . Nell'esempio viene illustrato come sostituire un pulsante della barra degli strumenti nella casella di riepilogo dei comandi della pagina **comandi** , abilitare la creazione di nuove barre degli strumenti utilizzando la finestra di dialogo **Personalizza** e visualizzare la finestra di dialogo **personalizzazione** . Questo frammento di codice fa parte dell' [esempio demo IE](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_IEDemo#4](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

`CMFCToolBarsCustomizeDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxToolBarsCustomizeDialog. h

##  <a name="addbutton"></a>CMFCToolBarsCustomizeDialog:: AddButton

Inserisce un pulsante della barra degli strumenti nell'elenco dei comandi della pagina **comandi** .

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
in Specifica l'ID della categoria in cui inserire il pulsante.

*button*<br/>
in Specifica il pulsante da inserire.

*iInsertBefore*<br/>
in Specifica l'indice in base zero di un pulsante della barra degli strumenti prima del quale viene inserito il pulsante.

*lpszCategory*<br/>
in Specifica la stringa di categoria per inserire il pulsante.

### <a name="remarks"></a>Note

Il `AddButton` metodo ignora i pulsanti che contengono gli ID del comando standard (ad esempio ID_FILE_MRU_FILE1), i comandi non consentiti (vedere [CMFCToolBar:: IsCommandPermitted](../../mfc/reference/cmfctoolbar-class.md#iscommandpermitted)) e i pulsanti fittizi.

Questo metodo crea un nuovo oggetto dello stesso tipo di ( `button` in genere una [classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)) utilizzando la classe runtime del pulsante. Chiama quindi [CMFCToolBarButton:: CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom) per copiare i membri dati di Button e inserisce la copia nella categoria specificata.

Quando il pulsante nuovo viene inserito, riceve la `OnAddToCustomizePage` notifica.

Se `iInsertBefore` è-1, il pulsante viene aggiunto all'elenco di categorie; in caso contrario, viene inserito prima dell'elemento con l'indice specificato.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `AddButton` metodo `CMFCToolBarsCustomizeDialog` della classe. Questo frammento di codice fa parte dell' [esempio di dispositivo di scorrimento](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_Slider#1](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_2.cpp)]

##  <a name="addmenu"></a>CMFCToolBarsCustomizeDialog:: AggiungiMenu

Carica un menu dalle risorse e chiama [CMFCToolBarsCustomizeDialog:: AddMenuCommands](#addmenucommands) per aggiungere tale menu all'elenco di comandi nella pagina **comandi** .

```
BOOL AddMenu(UINT uiMenuResId);
```

### <a name="parameters"></a>Parametri

*uiMenuResId*<br/>
in Specifica l'ID risorsa di un menu da caricare.

### <a name="return-value"></a>Valore restituito

TRUE se un menu è stato aggiunto correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Nella chiamata a `AddMenuCommands`, *bPopup* è false. Di conseguenza, il metodo non aggiunge voci di menu che contengono sottomenu all'elenco di comandi. Questo metodo aggiunge le voci di menu nei sottomenu all'elenco di comandi.

##  <a name="addmenucommands"></a>CMFCToolBarsCustomizeDialog:: AddMenuCommands

Aggiunge elementi all'elenco di comandi nella pagina **comandi** per rappresentare tutti gli elementi nel menu specificato.

```
void AddMenuCommands(
    const CMenu* pMenu,
    BOOL bPopup,
    LPCTSTR lpszCategory=NULL,
    LPCTSTR lpszMenuPath=NULL);
```

### <a name="parameters"></a>Parametri

*pMenu*<br/>
in Puntatore all'oggetto CMenu da aggiungere.

*bPopup*<br/>
in Specifica se inserire le voci di menu popup nell'elenco di comandi.

*lpszCategory*<br/>
in Nome della categoria in cui inserire il menu.

*lpszMenuPath*<br/>
in Prefisso aggiunto al nome quando il comando viene visualizzato nell'elenco **tutte le categorie** .

### <a name="remarks"></a>Note

Il `AddMenuCommands` metodo esegue il ciclo su tutte le voci di menu di *pMenu*. Per ogni voce di menu che non contiene un sottomenu, questo metodo crea un oggetto [classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) e chiama il metodo [CMFCToolBarsCustomizeDialog:: AddButton](#addbutton) per aggiungere la voce di menu come pulsante della barra degli strumenti all'elenco di comandi nel  **Pagina comandi** . I separatori vengono ignorati in questo processo.

Se *bPopup* è true, per ogni voce di menu che contiene un sottomenu questo metodo crea un oggetto della [Classe CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md) e lo inserisce nell'elenco di `AddButton`comandi chiamando. In caso contrario, le voci di menu che contengono sottomenu non vengono visualizzate nell'elenco di comandi. In entrambi i casi, `AddMenuCommands` quando rileva una voce di menu con un sottomenu chiama se stesso in modo ricorsivo, passando un puntatore al sottomenu come parametro *pMenu* e aggiungendo l'etichetta del sottomenu a *lpszMenuPath*.

##  <a name="addtoolbar"></a>CMFCToolBarsCustomizeDialog:: AddToolBar

Carica una barra degli strumenti dalle risorse. Quindi, per ogni comando nel menu chiama il metodo [CMFCToolBarsCustomizeDialog:: AddButton](#addbutton) per inserire un pulsante nell'elenco di comandi della pagina **comandi** nella categoria specificata.

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
in Specifica l'ID risorsa della categoria a cui aggiungere la barra degli strumenti.

*uiToolbarResId*<br/>
in Specifica l'ID risorsa di una barra degli strumenti i cui comandi vengono inseriti nell'elenco di comandi.

*lpszCategory*<br/>
in Specifica il nome della categoria a cui aggiungere la barra degli strumenti.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `AddToolBar` metodo `CMFCToolBarsCustomizeDialog` nella classe. Questo frammento di codice fa parte dell' [esempio di Word Pad](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_WordPad#11](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_3.cpp)]

### <a name="remarks"></a>Note

Il controllo utilizzato per rappresentare ogni comando è un oggetto [classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) . Dopo aver aggiunto la barra degli strumenti, è possibile sostituire il pulsante con un controllo di un tipo derivato chiamando [CMFCToolBarsCustomizeDialog:: ReplaceButton](#replacebutton).

##  <a name="checktoolsvalidity"></a>CMFCToolBarsCustomizeDialog:: CheckToolsValidity

Verifica la validità dell'elenco di strumenti utente.

```
virtual BOOL CheckToolsValidity(const CObList& lstTools);
```

### <a name="parameters"></a>Parametri

*lstTools*<br/>
in Elenco di strumenti definiti dall'utente da controllare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elenco di strumenti definiti dall'utente è valido. in caso contrario, FALSE. L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Note

Il Framework chiama questo metodo per verificare la validità degli oggetti che rappresentano gli strumenti definiti dall'utente restituiti da [CMFCToolBarsCustomizeDialog:: CheckToolsValidity](#checktoolsvalidity).

Eseguire l' `CheckToolsValidity` override del metodo in una classe `CMFCToolBarsCustomizeDialog` derivata da se si desidera convalidare gli strumenti utente prima che l'utente chiuda la finestra di dialogo. Se questo metodo restituisce FALSE quando l'utente fa clic sul pulsante **Chiudi** nell'angolo superiore destro della finestra di dialogo o sul pulsante **Chiudi** nell'angolo inferiore destro della finestra di dialogo, nella finestra di dialogo viene visualizzata la scheda **strumenti** anziché chiusura. Se questo metodo restituisce FALSE quando l'utente fa clic su una scheda per uscire dalla scheda **strumenti** , la navigazione non viene eseguita. È necessario visualizzare una finestra di messaggio appropriata per informare l'utente del problema che ha causato l'esito negativo della convalida.

##  <a name="cmfctoolbarscustomizedialog"></a>CMFCToolBarsCustomizeDialog:: CMFCToolBarsCustomizeDialog

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
in Puntatore al frame padre. Questo parametro non può essere NULL.

*bAutoSetFromMenus*<br/>
in Valore booleano che specifica se aggiungere i comandi di menu da tutti i menu all'elenco di comandi nella pagina **comandi** . Se questo parametro è TRUE, vengono aggiunti i comandi di menu. In caso contrario, i comandi di menu non vengono aggiunti.

*uiFlags*<br/>
in Combinazione di flag che influiscono sul comportamento della finestra di dialogo. Il parametro può essere costituito da uno o più dei valori seguenti:

- AFX_CUSTOMIZE_MENU_SHADOWS

- AFX_CUSTOMIZE_TEXT_LABELS

- AFX_CUSTOMIZE_MENU_ANIMATIONS

- AFX_CUSTOMIZE_NOHELP

- AFX_CUSTOMIZE_CONTEXT_HELP

- AFX_CUSTOMIZE_NOTOOLS

- AFX_CUSTOMIZE_MENUAMPERS

- AFX_CUSTOMIZE_NO_LARGE_ICONS

*plistCustomPages*<br/>
in Puntatore a un elenco di `CRuntimeClass` oggetti che specificano pagine personalizzate aggiuntive.

### <a name="remarks"></a>Note

Il parametro *plistCustomPages* fa riferimento all'elenco di `CRuntimeClass` oggetti che specificano pagine personalizzate aggiuntive. Il costruttore aggiunge più pagine alla finestra di dialogo tramite il metodo [CRuntimeClass:: CreateObject](../../mfc/reference/cruntimeclass-structure.md#createobject) . Vedere l'esempio CustomPages per un esempio in cui vengono aggiunte altre pagine alla finestra di dialogo **Personalizza** .

Per ulteriori informazioni sui valori che è possibile passare nel parametro *uiFlags* , vedere [CMFCToolBarsCustomizeDialog:: GetFlags](#getflags).

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCToolBarsCustomizeDialog` classe. Questo frammento di codice fa parte dell' [esempio di pagine personalizzate](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_CustomPages#3](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_4.cpp)]

##  <a name="create"></a>CMFCToolBarsCustomizeDialog:: create

Consente di visualizzare la finestra di dialogo **personalizzazione** .

```
virtual BOOL Create();
```

### <a name="return-value"></a>Valore restituito

TRUE se la finestra delle proprietà di personalizzazione viene creata correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Chiamare il `Create` metodo solo dopo avere inizializzato completamente la classe.

##  <a name="enableuserdefinedtoolbars"></a>CMFCToolBarsCustomizeDialog:: EnableUserDefinedToolbars

Abilita o Disabilita la creazione di nuove barre degli strumenti tramite la finestra di dialogo **Personalizza** .

```
void EnableUserDefinedToolbars(BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE per abilitare le barre degli strumenti definite dall'utente; FALSE per disabilitare le barre degli strumenti.

### <a name="remarks"></a>Note

Se *bEnable* è true, i pulsanti **nuovo**, **Rinomina** ed **Elimina** vengono visualizzati nella pagina **barre degli strumenti** .

Per impostazione predefinita, o se *bEnable* è false, questi pulsanti non vengono visualizzati e l'utente non può definire nuove barre degli strumenti.

##  <a name="fillallcommandslist"></a>CMFCToolBarsCustomizeDialog:: FillAllCommandsList

Compila l'oggetto fornito `CListBox` con i comandi nella categoria **tutti i comandi** .

```
virtual void FillAllCommandsList(CListBox& wndListOfCommands) const;
```

### <a name="parameters"></a>Parametri

*wndListOfCommands*<br/>
out Riferimento all' `CListBox` oggetto da popolare.

### <a name="remarks"></a>Note

La categoria **tutti i comandi** contiene i comandi di tutte le categorie. Il metodo [CMFCToolBarsCustomizeDialog:: AddButton](#addbutton) aggiunge automaticamente il comando associato al pulsante fornito alla categoria tutti i **comandi** .

Questo metodo cancella il contenuto dell'oggetto specificato `CListBox` prima di popolarlo con i comandi nella categoria tutti i **comandi** .

La `CMFCMousePropertyPage` classe utilizza questo metodo per popolare la casella di riepilogo degli eventi di doppio clic.

##  <a name="fillcategoriescombobox"></a>CMFCToolBarsCustomizeDialog:: FillCategoriesComboBox

Compila l'oggetto fornito `CComboBox` con il nome di ogni categoria di comandi nella finestra di dialogo **Personalizza** .

```
void FillCategoriesComboBox(
    CComboBox& wndCategory,
    BOOL bAddEmpty = TRUE) const;
```

### <a name="parameters"></a>Parametri

*wndCategory*<br/>
out Riferimento all' `CComboBox` oggetto da popolare.

*bAddEmpty*<br/>
in Valore booleano che specifica se aggiungere categorie alla casella combinata che non dispongono di comandi. Se questo parametro è TRUE, vengono aggiunte categorie vuote alla casella combinata. In caso contrario, non vengono aggiunte categorie vuote.

### <a name="remarks"></a>Note

Questo metodo è simile al metodo [CMFCToolBarsCustomizeDialog:: FillCategoriesListBox](#fillcategorieslistbox) con la differenza che questo metodo funziona `CComboBox` con un oggetto.

Questo metodo non cancella il contenuto dell' `CComboBox` oggetto prima di popolarlo. Garantisce che la categoria **tutti i comandi** sia l'elemento finale della casella combinata.

È possibile aggiungere nuove categorie di comandi usando il metodo [CMFCToolBarsCustomizeDialog:: AddButton](#addbutton) . È possibile modificare il nome di una categoria esistente usando il metodo [CMFCToolBarsCustomizeDialog:: RenameCategory](#renamecategory) .

Le `CMFCToolBarsKeyboardPropertyPage` classi `CMFCKeyMapDialog` e utilizzano questo metodo per suddividere in categorie i mapping della tastiera.

##  <a name="fillcategorieslistbox"></a>CMFCToolBarsCustomizeDialog:: FillCategoriesListBox

Compila l'oggetto fornito `CListBox` con il nome di ogni categoria di comandi nella finestra di dialogo **Personalizza** .

```
void FillCategoriesListBox(
    CListBox& wndCategory,
    BOOL bAddEmpty = TRUE) const;
```

### <a name="parameters"></a>Parametri

*wndCategory*<br/>
out Riferimento all' `CListBox` oggetto da popolare.

*bAddEmpty*<br/>
in Valore booleano che specifica se aggiungere categorie alla casella di riepilogo che non dispongono di comandi. Se questo parametro è TRUE, vengono aggiunte categorie vuote alla casella di riepilogo. In caso contrario, non vengono aggiunte categorie vuote.

### <a name="remarks"></a>Note

Questo metodo è simile al metodo [CMFCToolBarsCustomizeDialog:: FillCategoriesComboBox](#fillcategoriescombobox) con la differenza che questo metodo funziona `CListBox` con un oggetto.

Questo metodo non cancella il contenuto dell' `CListBox` oggetto prima di popolarlo. Garantisce che la categoria **tutti i comandi** sia l'elemento finale nella casella di riepilogo.

È possibile aggiungere nuove categorie di comandi usando il metodo [CMFCToolBarsCustomizeDialog:: AddButton](#addbutton) . È possibile modificare il nome di una categoria esistente usando il metodo [CMFCToolBarsCustomizeDialog:: RenameCategory](#renamecategory) .

La `CMFCToolBarsCommandsPropertyPage` classe utilizza questo metodo per visualizzare l'elenco dei comandi associati a ogni categoria di comandi.

##  <a name="getcommandname"></a>CMFCToolBarsCustomizeDialog:: GetCommandName

Recupera il nome associato all'ID di comando specificato.

```
LPCTSTR GetCommandName(UINT uiCmd) const;
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in ID del comando da recuperare.

### <a name="return-value"></a>Valore restituito

Nome associato all'ID di comando specificato oppure NULL se il comando non esiste.

##  <a name="getcountincategory"></a>CMFCToolBarsCustomizeDialog:: GetCountInCategory

Recupera il numero di elementi nell'elenco fornito con un'etichetta di testo specificata.

```
int GetCountInCategory(
    LPCTSTR lpszItemName,
    const CObList& lstCommands) const;
```

### <a name="parameters"></a>Parametri

*lpszItemName*<br/>
in Etichetta di testo di cui trovare la corrispondenza.

*lstCommands*<br/>
in Riferimento a un elenco `CMFCToolBarButton` contenente oggetti.

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'elenco fornito la cui etichetta di testo è uguale a *lpszItemName*.

### <a name="remarks"></a>Note

Ogni elemento nell'elenco di oggetti fornito deve essere di tipo `CMFCToolBarButton`. Questo metodo confronta *lpszItemName* con il membro dati [CMFCToolBarButton:: m_strText](../../mfc/reference/cmfctoolbarbutton-class.md#m_strtext) .

##  <a name="getflags"></a>CMFCToolBarsCustomizeDialog:: GetFlags

Recupera il set di flag che influiscono sul comportamento della finestra di dialogo.

```
UINT GetFlags() const;
```

### <a name="return-value"></a>Valore restituito

Set di flag che influiscono sul comportamento della finestra di dialogo.

### <a name="remarks"></a>Note

Questo metodo recupera il valore del parametro *uiFlags* passato al costruttore. Il valore restituito può essere uno o più dei valori seguenti:

|||
|-|-|
|AFX_CUSTOMIZE_MENU_SHADOWS|Consente all'utente di specificare l'aspetto dell'ombreggiatura del menu.  |
|AFX_CUSTOMIZE_TEXT_LABELS|Consente all'utente di specificare se le etichette di testo vengono visualizzate sotto le immagini dei pulsanti della barra degli strumenti.  |
|AFX_CUSTOMIZE_MENU_ANIMATIONS|Consente all'utente di specificare lo stile di animazione del menu.  |
|AFX_CUSTOMIZE_NOHELP|Consente di rimuovere il pulsante? dalla finestra di dialogo di personalizzazione.  |
|AFX_CUSTOMIZE_CONTEXT_HELP|Abilita lo stile di visualizzazione WS_EX_CONTEXTHELP.  |
|AFX_CUSTOMIZE_NOTOOLS|Consente di rimuovere la pagina **strumenti** dalla finestra di dialogo personalizzazione. Questo flag è valido se l'applicazione usa la `CUserToolsManager` classe.  |
|AFX_CUSTOMIZE_MENUAMPERS|Consente alle didascalie dei pulsanti di contenere il **&** carattere e commerciale ().  |
|AFX_CUSTOMIZE_NO_LARGE_ICONS|Rimuove l'opzione **Icone grandi** dalla finestra di dialogo di personalizzazione.  |

Per altre informazioni sullo stile di visualizzazione WS_EX_CONTEXTHELP, vedere [stili finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles).

##  <a name="onafterchangetool"></a>CMFCToolBarsCustomizeDialog:: OnAfterChangeTool

Risponde a una modifica in uno strumento utente immediatamente dopo che si è verificata.

```
virtual void OnAfterChangeTool(CUserTool* pSelTool);
```

### <a name="parameters"></a>Parametri

*pSelTool*<br/>
[in, out] Puntatore all'oggetto strumento utente che è stato modificato.

### <a name="remarks"></a>Note

Questo metodo viene chiamato dal framework quando un utente modifica le proprietà di uno strumento definito dall'utente. L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questo metodo in una `CMFCToolBarsCustomizeDialog` classe derivata da per eseguire l'elaborazione dopo che si è verificata una modifica a uno strumento utente.

##  <a name="onassignkey"></a>CMFCToolBarsCustomizeDialog:: OnAssignKey

Convalida le scelte rapide da tastiera come definito dall'utente.

```
virtual BOOL OnAssignKey(ACCEL* pAccel);
```

### <a name="parameters"></a>Parametri

*pAccel*<br/>
[in, out] Puntatore al assigment della tastiera proposto espresso come uno struct di [accelerazione](/windows/win32/api/winuser/ns-winuser-accel) .

### <a name="return-value"></a>Valore restituito

TRUE se la chiave può essere assegnata o FALSE se la chiave non può essere assegnata. L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo in una classe derivata per eseguire un'elaborazione aggiuntiva quando un utente assegna un nuovo tasto di scelta rapida o per convalidare le scelte rapide da tastiera quando vengono definite dall'utente. Per impedire l'assegnazione di un collegamento, restituire FALSE. È inoltre necessario visualizzare una finestra di messaggio oppure informare l'utente del motivo per cui il tasto di scelta rapida è stato rifiutato.

##  <a name="onbeforechangetool"></a>CMFCToolBarsCustomizeDialog:: OnBeforeChangeTool

Esegue un'elaborazione personalizzata quando si modifica uno strumento utente quando l'utente sta per applicare una modifica.

```
virtual void OnBeforeChangeTool(CUserTool* pSelTool);
```

### <a name="parameters"></a>Parametri

*pSelTool*<br/>
[in, out] Puntatore all'oggetto strumento utente che sta per essere sostituito.

### <a name="remarks"></a>Note

Questo metodo viene chiamato dal framework quando le proprietà di uno strumento definito dall'utente stanno per essere modificate. L'implementazione predefinita non esegue alcuna operazione. Eseguire l' `OnBeforeChangeTool` override del metodo in una classe `CMFCToolBarsCustomizeDialog` derivata da se si desidera eseguire l'elaborazione prima che si verifichi una modifica a uno strumento utente, ad esempio il rilascio di risorse utilizzate da *pSelTool* .

##  <a name="onedittoolbarmenuimage"></a>CMFCToolBarsCustomizeDialog:: OnEditToolbarMenuImage

Avvia un editor di immagini in modo che un utente possa personalizzare un pulsante della barra degli strumenti o un'icona della voce di menu.

```
virtual BOOL OnEditToolbarMenuImage(
    CWnd* pWndParent,
    CBitmap& bitmap,
    int nBitsPerPixel);
```

### <a name="parameters"></a>Parametri

*pWndParent*<br/>
in Puntatore alla finestra padre.

*bitmap*<br/>
in Riferimento a un oggetto bitmap da modificare.

*nBitsPerPixel*<br/>
in Risoluzione dei colori bitmap, in bit per pixel.

### <a name="return-value"></a>Valore restituito

TRUE se è in corso il commit di una modifica; in caso contrario, FALSE. L'implementazione predefinita Visualizza una finestra di dialogo e restituisce TRUE se l'utente fa clic su **OK**oppure su false se l'utente fa clic su **Annulla** o sul pulsante **Chiudi** .

### <a name="remarks"></a>Note

Questo metodo viene chiamato dal framework quando l'utente esegue l'editor di immagini. Nell'implementazione predefinita viene visualizzata la finestra di dialogo [classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md) . Eseguire `OnEditToolbarMenuImage` l'override in una classe derivata per utilizzare un editor di immagini personalizzato.

##  <a name="oninitdialog"></a>CMFCToolBarsCustomizeDialog:: OnInitDialog

Sostituisce per aumentare l'inizializzazione della finestra delle proprietà.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

Risultato della chiamata al metodo [CPropertySheet:: OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog) .

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di base, [CPropertySheet:: OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog), visualizzando il pulsante **Chiudi** , verificando che la finestra di dialogo corrisponda alle dimensioni correnti dello schermo e spostando **il pulsante? nell'angolo** inferiore sinistro della finestra di dialogo.

##  <a name="oninittoolspage"></a>CMFCToolBarsCustomizeDialog:: OnInitToolsPage

Gestisce la notifica dal Framework che sta per essere inizializzata la pagina **degli strumenti** .

```
virtual void OnInitToolsPage();
```

### <a name="remarks"></a>Note

L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questo metodo in una classe derivata per elaborare la notifica.

##  <a name="postncdestroy"></a>CMFCToolBarsCustomizeDialog::P ostNcDestroy

Chiamata eseguita dal Framework dopo che la finestra è stata eliminata.

```
virtual void PostNcDestroy();
```

### <a name="remarks"></a>Note

Questo metodo estende l'implementazione della classe di `CPropertySheet::PostNcDestroy`base,, ripristinando l'applicazione nella modalità precedente.

Il metodo [CMFCToolBarsCustomizeDialog:: create](#create) inserisce l'applicazione in una modalità speciale che limita l'utente alle attività di personalizzazione.

##  <a name="removebutton"></a>CMFCToolBarsCustomizeDialog:: RemoveButton

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

*uiCategoryId*<br/>
in Specifica l'ID della categoria da cui rimuovere il pulsante.

*uiCmdId*<br/>
in Specifica l'ID di comando del pulsante.

*lpszCategory*<br/>
in Specifica il nome della categoria dalla quale rimuovere il pulsante.

### <a name="return-value"></a>Valore restituito

Indice in base zero del pulsante rimosso oppure-1 se l'ID di comando specificato non è stato trovato nella categoria specificata. Se *uiCategoryId* è-1, il valore restituito è 0.

### <a name="remarks"></a>Note

Per rimuovere un pulsante da tutte le categorie, chiamare il primo overload del metodo e impostare *uiCategoryId* su-1.

##  <a name="renamecategory"></a>CMFCToolBarsCustomizeDialog:: RenameCategory

Rinomina una categoria nella casella di riepilogo delle categorie nella pagina **comandi** .

```
BOOL RenameCategory(
    LPCTSTR lpszCategoryOld,
    LPCTSTR lpszCategoryNew);
```

### <a name="parameters"></a>Parametri

*lpszCategoryOld*<br/>
in Nome della categoria da modificare.

*lpszCategoryNew*<br/>
in Nome della nuova categoria.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha avuto esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Il nome della categoria deve essere univoco.

##  <a name="replacebutton"></a>CMFCToolBarsCustomizeDialog:: ReplaceButton

Sostituisce un pulsante della barra degli strumenti nella casella di riepilogo dei comandi della pagina **comandi** .

```
void ReplaceButton(
    UINT uiCmd,
    const CMFCToolBarButton& button);
```

### <a name="parameters"></a>Parametri

*uiCmd*<br/>
in Specifica il comando del pulsante da sostituire.

*button*<br/>
in Un riferimento **const** all'oggetto pulsante della barra degli strumenti che sostituisce il pulsante precedente.

### <a name="remarks"></a>Note

Quando [CMFCToolBarsCustomizeDialog:: AggiungiMenu](#addmenu), [CMFCToolBarsCustomizeDialog:: AddMenuCommands](#addmenucommands)o [CMFCToolBarsCustomizeDialog:: AddToolbar](#addtoolbar) aggiunge un comando alla pagina **comandi** , il comando è nel formato [ Oggetto della classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) (o oggetto della [Classe CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md) per una voce di menu che contiene un sottomenu `AddMenuCommands`aggiunto da). Il Framework chiama anche questi tre metodi per aggiungere automaticamente i comandi. Se invece si desidera che un comando venga rappresentato da un tipo derivato, chiamare `ReplaceButton` e passare un pulsante del tipo derivato.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `ReplaceButton` metodo `CMFCToolBarsCustomizeDialog` nella classe. Questo frammento di codice fa parte dell' [esempio demo di Visual Studio](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#34](../../mfc/codesnippet/cpp/cmfctoolbarscustomizedialog-class_5.cpp)]

##  <a name="setusercategory"></a>CMFCToolBarsCustomizeDialog:: SetUserCategory

Specifica quale categoria nell'elenco di categorie nella pagina **comandi** è la categoria utente. Prima di chiamare [CMFCToolBarsCustomizeDialog:: create](#create), è necessario chiamare questa funzione.

```
BOOL SetUserCategory(LPCTSTR lpszCategory);
```

### <a name="parameters"></a>Parametri

*lpszCategory*<br/>
in Nome della categoria.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

L'impostazione della categoria User non è attualmente utilizzata dal Framework.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

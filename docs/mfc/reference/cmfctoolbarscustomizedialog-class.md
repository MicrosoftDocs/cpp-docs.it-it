---
title: Classe CMFCToolBarsCustomizeDialog | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 978303c9edaec2d9776d6e1c81b530df791ca5ff
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfctoolbarscustomizedialog-class"></a>Classe CMFCToolBarsCustomizeDialog
Una finestra di dialogo non modale scheda ( [CPropertySheet (classe)](../../mfc/reference/cpropertysheet-class.md)) che consente all'utente di personalizzare le barre degli strumenti, menu, tasti di scelta rapida, strumenti definiti dall'utente e dello stile di visualizzazione in un'applicazione. In genere, l'utente accede a questa finestra di dialogo scegliendo **Personalizza** dal menu **Strumenti** .  
  
 Il **Personalizza** la finestra di dialogo contiene sei schede: **comandi**, **barre degli strumenti**, **strumenti**, **tastiera**,  **Menu**, e **opzioni**.  
  
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
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::AddButton](#addbutton)|Inserisce un pulsante della barra degli strumenti nell'elenco di comandi sul **comandi** pagina|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::AddMenu](#addmenu)|Carica un menu dalle risorse e le chiamate [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands) aggiungere tale menu per l'elenco di comandi sul **comandi** pagina.|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands)|Carica un menu dalle risorse e le chiamate [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands) aggiungere tale menu per l'elenco di comandi sul **comandi** pagina.|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::AddToolBar](#addtoolbar)|Carica una barra degli strumenti dalle risorse. Quindi, per ogni comando nel menu chiama il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) per inserire un pulsante nell'elenco di comandi sul **comandi** pagina nella categoria specificata.|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::Create](#create)|Consente di visualizzare il **personalizzazione** la finestra di dialogo.|  
|`CMFCToolBarsCustomizeDialog::EnableTools`|Riservato per utilizzi futuri.|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::EnableUserDefinedToolbars](#enableuserdefinedtoolbars)|Abilita o disabilita la creazione di nuove barre degli strumenti utilizzando il **Personalizza** la finestra di dialogo.|  
|[CMFCToolBarsCustomizeDialog::FillAllCommandsList](#fillallcommandslist)|Popola l'oggetto specificato `CListBox` oggetto con i comandi di **tutti i comandi** categoria.|  
|[CMFCToolBarsCustomizeDialog::FillCategoriesComboBox](#fillcategoriescombobox)|Popola l'oggetto specificato `CComboBox` oggetto con il nome di ogni categoria di comando nel **Personalizza** la finestra di dialogo.|  
|[CMFCToolBarsCustomizeDialog::FillCategoriesListBox](#fillcategorieslistbox)|Popola l'oggetto specificato `CListBox` oggetto con il nome di ogni categoria di comando nel **Personalizza** la finestra di dialogo.|  
|[CMFCToolBarsCustomizeDialog::GetCommandName](#getcommandname)|Recupera il nome associato all'ID di comando specificato.|  
|[CMFCToolBarsCustomizeDialog::GetCountInCategory](#getcountincategory)|Recupera il numero di elementi che hanno un'etichetta di testo specificato dall'elenco fornito.|  
|[CMFCToolBarsCustomizeDialog::GetFlags](#getflags)|Recupera il set di flag che influenzano il comportamento della finestra di dialogo.|  
|`CMFCToolBarsCustomizeDialog::GetThisClass`|Usato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage](#onedittoolbarmenuimage)|Avvia un editor di immagini in modo che un utente può personalizzare una barra degli strumenti pulsante o menu icona dell'elemento.|  
|[CMFCToolBarsCustomizeDialog::OnInitDialog](#oninitdialog)|Esegue l'override per aumentare l'inizializzazione della finestra delle proprietà. (Esegue l'override [CPropertySheet:: OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog).)|  
|[CMFCToolBarsCustomizeDialog::PostNcDestroy](#postncdestroy)|Chiamato dal framework dopo che la finestra è stata eliminata. Esegue l'override`CPropertySheet::PostNcDestroy`.|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::RemoveButton](#removebutton)|Rimuove il pulsante con l'ID di comando specificato dalla categoria specificata, o di tutte le categorie.|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::RenameCategory](#renamecategory)|Rinomina una categoria nella casella di riepilogo delle categorie nel **comandi** scheda.|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::ReplaceButton](#replacebutton)|Sostituisce un pulsante nell'elenco dei comandi nella **comandi** scheda con un nuovo oggetto pulsante della barra degli strumenti.|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::SetUserCategory](#setusercategory)|Aggiunge all'elenco delle categorie verrà visualizzato in una categoria di **comandi** scheda.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::CheckToolsValidity](#checktoolsvalidity)|Chiamato dal framework per determinare se l'elenco degli strumenti definite dall'utente è valido.|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::OnAfterChangeTool](#onafterchangetool)|Chiamato dal framework quando le proprietà definite dall'utente dello strumento di modifica.|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::OnAssignKey](#onassignkey)|Determina se un collegamento di tastiera specificato può essere assegnato a un'azione.|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::OnBeforeChangeTool](#onbeforechangetool)|Determina se uno strumento definito dall'utente può essere modificato.|  
|`CMFCToolBarsCustomizeDialog::`[CMFCToolBarsCustomizeDialog::OnInitToolsPage](#oninittoolspage)|Chiamato dal framework quando l'utente sceglie il **strumenti** scheda viene richiesto.|  
  
## <a name="remarks"></a>Note  
 Per visualizzare il **Personalizza** finestra di dialogo casella, creare un `CMFCToolBarsCustomizeDialog` oggetto e chiamare il [CMFCToolBarsCustomizeDialog::Create](#create) metodo.  
  
 Mentre il **Personalizza** la finestra di dialogo è attiva, l'applicazione funziona in modalità speciale che limita l'utente per le attività di personalizzazione.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi nella `CMFCToolBarsCustomizeDialog` classe. Nell'esempio viene illustrato come sostituire un pulsante della barra degli strumenti nella casella di riepilogo di comandi nel **comandi** pagina, abilitare la creazione di nuove barre degli strumenti utilizzando il **Personalizza** la finestra di dialogo e visualizzare il  **Personalizzazione** la finestra di dialogo. Questo frammento di codice fa parte di [esempio dimostrativo di inserimento/espulsione](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_IEDemo#4](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CPropertySheet](../../mfc/reference/cpropertysheet-class.md)  
  
 `CMFCToolBarsCustomizeDialog`   
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxToolBarsCustomizeDialog.h  
  
##  <a name="addbutton"></a>CMFCToolBarsCustomizeDialog::AddButton  
 Inserisce un pulsante della barra degli strumenti nell'elenco di comandi sul **comandi** pagina.  
  
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
 [in] `uiCategoryId`  
 Specifica l'ID di categoria in cui inserire il pulsante.  
  
 [in] `button`  
 Specifica il pulsante da inserire.  
  
 [in] `iInsertBefore`  
 Specifica l'indice in base zero di un pulsante della barra degli strumenti prima della quale viene inserito il pulsante.  
  
 [in] `lpszCategory`  
 Specifica la stringa di categoria per il pulsante Inserisci.  
  
### <a name="remarks"></a>Note  
 Il `AddButton` metodo ignora i pulsanti con l'ID di comando standard (ad esempio ID_FILE_MRU_FILE1), i comandi che non sono consentiti (vedere [CMFCToolBar::IsCommandPermitted](../../mfc/reference/cmfctoolbar-class.md#iscommandpermitted)) e i pulsanti fittizio.  
  
 Questo metodo crea un nuovo oggetto dello stesso tipo `button` (in genere un [CMFCToolBarButton classe](../../mfc/reference/cmfctoolbarbutton-class.md)) utilizzando la classe di runtime del pulsante. Chiama quindi [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom) per copiare i membri di dati del pulsante e inserisce la copia nella categoria specificata.  
  
 Quando viene inserito il nuovo pulsante, riceve il `OnAddToCustomizePage` notifica.  
  
 Se `iInsertBefore` è -1, il pulsante viene aggiunto all'elenco di categorie; in caso contrario viene inserito prima dell'elemento con l'indice specificato.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `AddButton` metodo la `CMFCToolBarsCustomizeDialog` classe. Questo frammento di codice fa parte di [esempio Slider](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_Slider#1](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_2.cpp)]  
  
##  <a name="addmenu"></a>CMFCToolBarsCustomizeDialog::AddMenu  
 Carica un menu dalle risorse e le chiamate [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands) aggiungere tale menu per l'elenco di comandi sul **comandi** pagina.  
  
```  
BOOL AddMenu(UINT uiMenuResId);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiMenuResId`  
 Specifica l'ID di risorsa di un menu da caricare.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è stato aggiunto un menu; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Nella chiamata a `AddMenuCommands`, `bPopup` è `FALSE`. Di conseguenza, tale metodo non aggiunge voci di menu che contengono i sottomenu all'elenco di comandi. Questo metodo aggiunge le voci di menu nel sottomenu all'elenco di comandi.  
  
##  <a name="addmenucommands"></a>CMFCToolBarsCustomizeDialog::AddMenuCommands  
 Aggiunge elementi all'elenco dei comandi di **comandi** pagina per rappresentare tutti gli elementi di menu specificato.  
  
```  
void AddMenuCommands(
    const CMenu* pMenu,  
    BOOL bPopup,  
    LPCTSTR lpszCategory=NULL,  
    LPCTSTR lpszMenuPath=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMenu`  
 Puntatore a oggetto CMenu da aggiungere.  
  
 [in] `bPopup`  
 Specifica se inserire le voci di menu popup all'elenco di comandi.  
  
 [in] `lpszCategory`  
 Il nome della categoria per il menu Inserisci.  
  
 [in] `lpszMenuPath`  
 Un prefisso che viene aggiunto al nome quando il comando viene visualizzato nel **tutte le categorie** elenco.  
  
### <a name="remarks"></a>Note  
 Il `AddMenuCommands` metodo esegue un ciclo in tutte le voci di menu `pMenu`. Per ogni voce di menu che non contiene un sottomenu, questo metodo crea un [CMFCToolBarButton classe](../../mfc/reference/cmfctoolbarbutton-class.md) e viene chiamato il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) per aggiungere la voce di menu come una barra degli strumenti pulsante per l'elenco di comandi di **comandi** pagina. I separatori vengono ignorati in questo processo.  
  
 Se `bPopup` è `TRUE`, per ogni voce di menu che contiene un sottomenu, questo metodo crea un [CMFCToolBarMenuButton classe](../../mfc/reference/cmfctoolbarmenubutton-class.md) dell'oggetto e lo inserisce nell'elenco di comandi chiamando `AddButton`. In caso contrario le voci di menu che contengono i sottomenu non vengono visualizzate nell'elenco dei comandi. In entrambi i casi, quando `AddMenuCommands` rileva una voce di menu con un sottomenu chiama se stessa in modo ricorsivo, passando un puntatore al sottomenu come il `pMenu` parametro e aggiungendo l'etichetta del sottomenu in `lpszMenuPath`.  
  
##  <a name="addtoolbar"></a>CMFCToolBarsCustomizeDialog::AddToolBar  
 Carica una barra degli strumenti dalle risorse. Quindi, per ogni comando nel menu chiama il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) per inserire un pulsante nell'elenco di comandi sul **comandi** pagina nella categoria specificata.  
  
```  
BOOL AddToolBar(
    UINT uiCategoryId,  
    UINT uiToolbarResId);

BOOL AddToolBar(
    LPCTSTR lpszCategory,  
    UINT uiToolbarResId);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCategoryId`  
 Specifica l'ID risorsa della categoria per la barra degli strumenti per aggiungere.  
  
 [in] `uiToolbarResId`  
 Specifica l'ID di risorsa di una barra degli strumenti di cui i comandi vengono inseriti nell'elenco dei comandi.  
  
 [in] `lpszCategory`  
 Specifica il nome della categoria a cui aggiungere la barra degli strumenti.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo; in caso contrario `FALSE`.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `AddToolBar` metodo la `CMFCToolBarsCustomizeDialog` classe. Questo frammento di codice fa parte dell' [esempio di Word Pad](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#11](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_3.cpp)]  
  
### <a name="remarks"></a>Note  
 Il controllo viene utilizzato per rappresentare ogni comando è un [CMFCToolBarButton classe](../../mfc/reference/cmfctoolbarbutton-class.md) oggetto. Dopo aver aggiunto la barra degli strumenti, è possibile sostituire il pulsante con un controllo di un tipo derivato chiamando [CMFCToolBarsCustomizeDialog::ReplaceButton](#replacebutton).  
  
##  <a name="checktoolsvalidity"></a>CMFCToolBarsCustomizeDialog::CheckToolsValidity  
 Verifica la validità dell'elenco di strumenti utente.  
  
```  
virtual BOOL CheckToolsValidity(const CObList& lstTools);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lstTools`  
 L'elenco degli strumenti definite dall'utente da controllare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se l'elenco degli strumenti definiti dall'utente è valido; in caso contrario `FALSE`. L'implementazione predefinita restituisce sempre `TRUE`.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo per verificare la validità di oggetti che rappresentano strumenti definiti dall'utente restituiti da [CMFCToolBarsCustomizeDialog::CheckToolsValidity](#checktoolsvalidity).  
  
 Eseguire l'override di `CheckToolsValidity` metodo in una classe derivata da `CMFCToolBarsCustomizeDialog` se si desidera convalidare gli strumenti utente prima che l'utente chiude la finestra di dialogo. Se questo metodo restituisce `FALSE` quando l'utente sceglie il **Chiudi** pulsante nell'angolo superiore destro della finestra di dialogo o sul pulsante con etichettata **Chiudi** nell'angolo inferiore destro della finestra di dialogo, il Consente di visualizzare la finestra di dialogo di **strumenti** scheda anziché chiusura. Se questo metodo restituisce `FALSE` quando l'utente fa clic su Sposta da una scheda di **strumenti** scheda, non si verifica la navigazione. È necessario visualizzare una finestra di messaggio appropriato per informare l'utente del problema che causa l'esito negativo della convalida.  
  
##  <a name="cmfctoolbarscustomizedialog"></a>CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog  
 Costruisce un oggetto `CMFCToolBarsCustomizeDialog`.  
  
```  
CMFCToolBarsCustomizeDialog(
    CFrameWnd* pWndParentFrame,  
    BOOL bAutoSetFromMenus = FALSE,  
    UINT uiFlags = (AFX_CUSTOMIZE_MENU_SHADOWS | AFX_CUSTOMIZE_TEXT_LABELS | AFX_CUSTOMIZE_MENU_ANIMATIONS | AFX_CUSTOMIZE_NOHELP),  
    CList <CRuntimeClass*, CRuntimeClass*>* p listCustomPages = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParentFrame`  
 Puntatore al frame padre. Questo parametro non deve essere `NULL`.  
  
 [in] `bAutoSetFromMenus`  
 Un valore booleano che specifica se aggiungere i comandi di menu da tutti i menu per l'elenco di comandi sul **comandi** pagina. Se questo parametro è `TRUE`, vengono aggiunti i comandi di menu. In caso contrario, non vengono aggiunti i comandi di menu.  
  
 [in] `uiFlags`  
 Una combinazione di flag che influenzano il comportamento della finestra di dialogo. Questo parametro può essere uno o più dei seguenti valori:  
  
- `AFX_CUSTOMIZE_MENU_SHADOWS`  
  
- `AFX_CUSTOMIZE_TEXT_LABELS`  
  
- `AFX_CUSTOMIZE_MENU_ANIMATIONS`  
  
- `AFX_CUSTOMIZE_NOHELP`  
  
- `AFX_CUSTOMIZE_CONTEXT_HELP`  
  
- `AFX_CUSTOMIZE_NOTOOLS`  
  
- `AFX_CUSTOMIZE_MENUAMPERS`  
  
- `AFX_CUSTOMIZE_NO_LARGE_ICONS`  
  
 [in] `plistCustomPages`  
 Un puntatore a un elenco di `CRuntimeClass` oggetti che specificano ulteriori pagine personalizzate.  
  
### <a name="remarks"></a>Note  
 Il `plistCustomPages` parametro fa riferimento all'elenco di `CRuntimeClass` oggetti che specificano ulteriori pagine personalizzate. Il costruttore aggiunge ulteriori pagine nella finestra di dialogo utilizzando il [CRuntimeClass::CreateObject](../../mfc/reference/cruntimeclass-structure.md#createobject) metodo. Vedere l'esempio CustomPages per un esempio che consente di aggiungere altre pagine di **Personalizza** la finestra di dialogo.  
  
 Per ulteriori informazioni sui valori che è possibile passare il `uiFlags` parametro, vedere [CMFCToolBarsCustomizeDialog::GetFlags](#getflags).  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un oggetto della `CMFCToolBarsCustomizeDialog` classe. Questo frammento di codice fa parte di [esempio pagine personalizzate](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_CustomPages#3](../../mfc/reference/codesnippet/cpp/cmfctoolbarscustomizedialog-class_4.cpp)]  
  
##  <a name="create"></a>CMFCToolBarsCustomizeDialog::Create  
 Consente di visualizzare il **personalizzazione** la finestra di dialogo.  
  
```  
virtual BOOL Create();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra delle proprietà di personalizzazione viene creato correttamente. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare il `Create` metodo solo dopo l'inizializzazione completa della classe.  
  
##  <a name="enableuserdefinedtoolbars"></a>CMFCToolBarsCustomizeDialog::EnableUserDefinedToolbars  
 Abilita o disabilita la creazione di nuove barre degli strumenti utilizzando il **Personalizza** la finestra di dialogo.  
  
```  
void EnableUserDefinedToolbars(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per abilitare barre degli strumenti definite dall'utente; `FALSE` per disabilitare le barre degli strumenti.  
  
### <a name="remarks"></a>Note  
 Se `bEnable` è `TRUE`, **New**, **rinominare** e **eliminare** pulsanti vengono visualizzati nel **barre degli strumenti** pagina.  
  
 Per impostazione predefinita, oppure se `bEnable` è `FALSE`, questi pulsanti non vengono visualizzati e l'utente non è possibile definire nuove barre degli strumenti.  
  
##  <a name="fillallcommandslist"></a>CMFCToolBarsCustomizeDialog::FillAllCommandsList  
 Popola l'oggetto specificato `CListBox` oggetto con i comandi di **tutti i comandi** categoria.  
  
```  
virtual void FillAllCommandsList(CListBox& wndListOfCommands) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `wndListOfCommands`  
 Un riferimento di `CListBox` oggetto da popolare.  
  
### <a name="remarks"></a>Note  
 Il **tutti i comandi** categoria contiene i comandi di tutte le categorie. Il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) metodo aggiunge il comando che è associato l'apposito pulsante per la **tutti i comandi** categoria per l'utente.  
  
 Questo metodo cancella il contenuto dell'oggetto fornito `CListBox` oggetto prima di popolarlo con i comandi di **tutti i comandi** categoria.  
  
 La `CMFCMousePropertyPage` classe utilizza questo metodo per popolare la casella di riepilogo fare doppio clic su eventi.  
  
##  <a name="fillcategoriescombobox"></a>CMFCToolBarsCustomizeDialog::FillCategoriesComboBox  
 Popola l'oggetto specificato `CComboBox` oggetto con il nome di ogni categoria di comando nel **Personalizza** la finestra di dialogo.  
  
```  
void FillCategoriesComboBox(
    CComboBox& wndCategory,  
    BOOL bAddEmpty = TRUE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `wndCategory`  
 Un riferimento di `CComboBox` oggetto da popolare.  
  
 [in] `bAddEmpty`  
 Valore booleano che specifica se aggiungere categorie alla casella combinata che non contengono i comandi. Se questo parametro è `TRUE`, le categorie vuote vengono aggiunti alla casella combinata. In caso contrario, le categorie vuote non vengono aggiunti.  
  
### <a name="remarks"></a>Note  
 Questo metodo è simile di [CMFCToolBarsCustomizeDialog::FillCategoriesListBox](#fillcategorieslistbox) metodo ad eccezione del fatto che questo metodo funziona con un `CComboBox` oggetto.  
  
 Questo metodo non cancella il contenuto del `CComboBox` oggetto prima di compilarlo. Garantisce che il **tutti i comandi** categoria è l'elemento finale nella casella combinata.  
  
 È possibile aggiungere nuove categorie di comando utilizzando il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) metodo. È possibile modificare il nome di una categoria esistente utilizzando il [CMFCToolBarsCustomizeDialog::RenameCategory](#renamecategory) metodo.  
  
 Il `CMFCToolBarsKeyboardPropertyPage` e `CMFCKeyMapDialog` classi utilizzano questo metodo per classificare le mappature della tastiera.  
  
##  <a name="fillcategorieslistbox"></a>CMFCToolBarsCustomizeDialog::FillCategoriesListBox  
 Popola l'oggetto specificato `CListBox` oggetto con il nome di ogni categoria di comando nel **Personalizza** la finestra di dialogo.  
  
```  
void FillCategoriesListBox(
    CListBox& wndCategory,  
    BOOL bAddEmpty = TRUE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `wndCategory`  
 Un riferimento di `CListBox` oggetto da popolare.  
  
 [in] `bAddEmpty`  
 Valore booleano che specifica se aggiungere categorie per la casella di riepilogo che non contengono i comandi. Se questo parametro è `TRUE`, le categorie vuote vengono aggiunti alla casella di riepilogo. In caso contrario, le categorie vuote non vengono aggiunti.  
  
### <a name="remarks"></a>Note  
 Questo metodo è simile di [CMFCToolBarsCustomizeDialog::FillCategoriesComboBox](#fillcategoriescombobox) metodo ad eccezione del fatto che questo metodo funziona con un `CListBox` oggetto.  
  
 Questo metodo non cancella il contenuto del `CListBox` oggetto prima di compilarlo. Garantisce che il **tutti i comandi** categoria è l'elemento finale nella casella di riepilogo.  
  
 È possibile aggiungere nuove categorie di comando utilizzando il [CMFCToolBarsCustomizeDialog::AddButton](#addbutton) metodo. È possibile modificare il nome di una categoria esistente utilizzando il [CMFCToolBarsCustomizeDialog::RenameCategory](#renamecategory) metodo.  
  
 La `CMFCToolBarsCommandsPropertyPage` classe utilizza questo metodo per visualizzare l'elenco di comandi che è associata a ogni categoria di comando.  
  
##  <a name="getcommandname"></a>CMFCToolBarsCustomizeDialog::GetCommandName  
 Recupera il nome associato all'ID di comando specificato.  
  
```  
LPCTSTR GetCommandName(UINT uiCmd) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID del comando da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Il nome associato all'ID di comando specificato o `NULL` se il comando non esiste.  
  
##  <a name="getcountincategory"></a>CMFCToolBarsCustomizeDialog::GetCountInCategory  
 Recupera il numero di elementi che hanno un'etichetta di testo specificato dall'elenco fornito.  
  
```  
int GetCountInCategory(
    LPCTSTR lpszItemName,  
    const CObList& lstCommands) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszItemName`  
 L'etichetta di testo per trovare la corrispondenza.  
  
 [in] `lstCommands`  
 Un riferimento a un elenco contenente `CMFCToolBarButton` oggetti.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nell'oggetto fornito è uguale a cui etichetta di testo di elenco `lpszItemName`.  
  
### <a name="remarks"></a>Note  
 Ogni elemento nell'elenco di oggetti fornito deve essere di tipo `CMFCToolBarButton`. Questo metodo confronta `lpszItemName` con il [CMFCToolBarButton::m_strText](../../mfc/reference/cmfctoolbarbutton-class.md#m_strtext) (membro dati).  
  
##  <a name="getflags"></a>CMFCToolBarsCustomizeDialog::GetFlags  
 Recupera il set di flag che influenzano il comportamento della finestra di dialogo.  
  
```  
UINT GetFlags() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il set di flag che influenzano il comportamento della finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Questo metodo recupera il valore di `uiFlags` parametro passato al costruttore. Il valore restituito può essere uno o più dei seguenti valori:  
  
 `AFX_CUSTOMIZE_MENU_SHADOWS`  
 Consente all'utente di specificare l'aspetto dell'ombreggiatura del menu.  
  
 `AFX_CUSTOMIZE_TEXT_LABELS`  
 Consente all'utente di specificare se le etichette di testo vengono visualizzate sotto le immagini dei pulsanti della barra degli strumenti.  
  
 `AFX_CUSTOMIZE_MENU_ANIMATIONS`  
 Consente all'utente di specificare lo stile di animazione del menu.  
  
 `AFX_CUSTOMIZE_NOHELP`  
 Rimuove il pulsante nella finestra di dialogo di personalizzazione.  
  
 `AFX_CUSTOMIZE_CONTEXT_HELP`  
 Consente di `WS_EX_CONTEXTHELP` dello stile di visualizzazione.  
  
 `AFX_CUSTOMIZE_NOTOOLS`  
 Rimuove il **strumenti** pagina nella finestra di dialogo di personalizzazione. Questo flag è valido se l'applicazione usa la `CUserToolsManager` classe.  
  
 `AFX_CUSTOMIZE_MENUAMPERS`  
 Consente di didascalie contenere la e commerciale (  **&** ) caratteri.  
  
 `AFX_CUSTOMIZE_NO_LARGE_ICONS`  
 Rimuove il **icone grandi** opzione nella finestra di dialogo di personalizzazione.  
  
 Per ulteriori informazioni sul `WS_EX_CONTEXTHELP` dello stile di visualizzazione, vedere [stili finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles).  
  
##  <a name="onafterchangetool"></a>CMFCToolBarsCustomizeDialog::OnAfterChangeTool  
 Risponde a una modifica in uno strumento utente immediatamente dopo che si verifica.  
  
```  
virtual void OnAfterChangeTool(CUserTool* pSelTool);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `pSelTool`  
 Un puntatore all'oggetto strumento utente è stato modificato.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando un utente modifica le proprietà di uno strumento definito dall'utente. L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questo metodo in una classe derivata da `CMFCToolBarsCustomizeDialog` per eseguire l'elaborazione dopo che viene apportata una modifica a uno strumento dell'utente.  
  
##  <a name="onassignkey"></a>CMFCToolBarsCustomizeDialog::OnAssignKey  
 Convalida i tasti di scelta rapida come sono definiti da un utente.  
  
```  
virtual BOOL OnAssignKey(ACCEL* pAccel);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `pAccel`  
 Puntatore per l'assegnazione del tastiera proposto espresso come un [accelerazione](http://msdn.microsoft.com/library/windows/desktop/ms646340) struct.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la chiave può essere assegnata, o `FALSE` se la chiave non può essere assegnata. L'implementazione predefinita restituisce sempre `TRUE`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override in una classe derivata per eseguire un'elaborazione aggiuntiva quando un utente assegna un nuovo tasto di scelta rapida o per convalidare i tasti di scelta rapida quando l'utente definisce questo metodo. Per impedire l'assegnazione di un collegamento, restituire `FALSE`. È consigliabile inoltre visualizzare una finestra di messaggio o in caso contrario informare l'utente del motivo per cui è stato rifiutato tasto di scelta rapida.  
  
##  <a name="onbeforechangetool"></a>CMFCToolBarsCustomizeDialog::OnBeforeChangeTool  
 Esegue un'elaborazione personalizzata quando una modifica a uno strumento utente quando l'utente sta per applicare una modifica.  
  
```  
virtual void OnBeforeChangeTool(CUserTool* pSelTool);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `pSelTool`  
 Un puntatore all'oggetto strumento utente che sta per essere sostituito.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando sta per modificare le proprietà di uno strumento definito dall'utente. L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di `OnBeforeChangeTool` metodo in una classe derivata da `CMFCToolBarsCustomizeDialog` se si desidera eseguire l'elaborazione prima che si verifica una modifica a uno strumento utente, ad esempio il rilascio delle risorse che `pSelTool` utilizza.  
  
##  <a name="onedittoolbarmenuimage"></a>CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage  
 Avvia un editor di immagini in modo che un utente può personalizzare una barra degli strumenti pulsante o menu icona dell'elemento.  
  
```  
virtual BOOL OnEditToolbarMenuImage(
    CWnd* pWndParent,  
    CBitmap& bitmap,  
    int nBitsPerPixel);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 Puntatore alla finestra padre.  
  
 [in] `bitmap`  
 Un riferimento a un oggetto bitmap da modificare.  
  
 [in] `nBitsPerPixel`  
 La risoluzione del colore, in bit per pixel delle bitmap.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il commit di una modifica; in caso contrario `FALSE`. L'implementazione predefinita consente di visualizzare una finestra di dialogo e restituisce `TRUE` se l'utente fa clic **OK**, o `FALSE` se l'utente fa clic **Annulla** o **Chiudi** pulsante.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando l'utente esegue l'editor di immagini. Le visualizzazioni di implementazione predefinita [CMFCImageEditorDialog classe](../../mfc/reference/cmfcimageeditordialog-class.md) la finestra di dialogo. Eseguire l'override `OnEditToolbarMenuImage` in una classe derivata da utilizzare un editor di immagini personalizzate.  
  
##  <a name="oninitdialog"></a>CMFCToolBarsCustomizeDialog::OnInitDialog  
 Esegue l'override per aumentare l'inizializzazione della finestra delle proprietà.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il risultato della chiamata di [CPropertySheet:: OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog) metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base, [CPropertySheet:: OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog), visualizzando il **Chiudi** pulsante, assicurandosi che la finestra di dialogo Adatta dimensioni dello schermo corrente e lo spostamento di **Guida** pulsante nell'angolo inferiore sinistro della finestra di dialogo.  
  
##  <a name="oninittoolspage"></a>CMFCToolBarsCustomizeDialog::OnInitToolsPage  
 Gestisce la notifica di framework che la **strumenti** pagina sta per essere inizializzato.  
  
```  
virtual void OnInitToolsPage();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non esegue alcuna operazione. Eseguire l'override di questo metodo in una classe derivata per elaborare la notifica.  
  
##  <a name="postncdestroy"></a>CMFCToolBarsCustomizeDialog::PostNcDestroy  
 Chiamato dal framework dopo che la finestra è stata eliminata.  
  
```  
virtual void PostNcDestroy();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base, `CPropertySheet::PostNcDestroy`, ripristinando l'applicazione per la modalità precedente.  
  
 Il [CMFCToolBarsCustomizeDialog::Create](#create) che determina l'applicazione in modalità speciale che limita l'utente per le attività di personalizzazione.  
  
##  <a name="removebutton"></a>CMFCToolBarsCustomizeDialog::RemoveButton  
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
 [in] `uiCategoryId`  
 Specifica l'ID di categoria da cui rimuovere il pulsante.  
  
 [in] `uiCmdId`  
 Specifica l'ID di comando del pulsante.  
  
 [in] `lpszCategory`  
 Specifica il nome della categoria da cui rimuovere il pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero del pulsante rimosso oppure -1 se l'ID di comando specificato non è stato trovato nella categoria specificata. Se `uiCategoryId` è -1, il valore restituito è 0.  
  
### <a name="remarks"></a>Note  
 Per rimuovere un pulsante in tutte le categorie, chiamare il primo overload di questo metodo e impostare `uiCategoryId` su -1.  
  
##  <a name="renamecategory"></a>CMFCToolBarsCustomizeDialog::RenameCategory  
 Rinomina una categoria nella casella di riepilogo delle categorie nel **comandi** pagina.  
  
```  
BOOL RenameCategory(
    LPCTSTR lpszCategoryOld,  
    LPCTSTR lpszCategoryNew);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszCategoryOld`  
 Per modificare il nome della categoria.  
  
 [in] `lpszCategoryNew`  
 Il nuovo nome di categoria.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il nome della categoria deve essere univoco.  
  
##  <a name="replacebutton"></a>CMFCToolBarsCustomizeDialog::ReplaceButton  
 Sostituisce un pulsante della barra degli strumenti nella casella di riepilogo di comandi sul **comandi** pagina.  
  
```  
void ReplaceButton(
    UINT uiCmd,  
    const CMFCToolBarButton& button);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 Specifica il comando del pulsante da sostituire.  
  
 [in] `button`  
 Oggetto `const` riferimento all'oggetto pulsante della barra degli strumenti che sostituisce il pulsante precedente.  
  
### <a name="remarks"></a>Note  
 Quando [CMFCToolBarsCustomizeDialog::AddMenu](#addmenu), [CMFCToolBarsCustomizeDialog::AddMenuCommands](#addmenucommands), o [CMFCToolBarsCustomizeDialog::AddToolBar](#addtoolbar) aggiunge un comando per il **comandi** pagina, che è sotto forma di un [CMFCToolBarButton classe](../../mfc/reference/cmfctoolbarbutton-class.md) oggetto (o un [CMFCToolBarMenuButton classe](../../mfc/reference/cmfctoolbarmenubutton-class.md) oggetto per un menu elemento che contiene un sottomenu aggiunto da `AddMenuCommands`). Inoltre, il framework chiama tre metodi seguenti per aggiungere automaticamente comandi. Se si desidera un comando per essere rappresentato da un tipo derivato, chiamare `ReplaceButton` e passare un pulsante del tipo derivato.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `ReplaceButton` metodo la `CMFCToolBarsCustomizeDialog` classe. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#34](../../mfc/codesnippet/cpp/cmfctoolbarscustomizedialog-class_5.cpp)]  
  
##  <a name="setusercategory"></a>CMFCToolBarsCustomizeDialog::SetUserCategory  
 Specifica la categoria nell'elenco di categorie di **comandi** pagina è la categoria di utente. È necessario chiamare questa funzione prima di chiamare [CMFCToolBarsCustomizeDialog::Create](#create).  
  
```  
BOOL SetUserCategory(LPCTSTR lpszCategory);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszCategory`  
 Nome della categoria.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 L'impostazione di categoria di utente non è attualmente utilizzata dal framework.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

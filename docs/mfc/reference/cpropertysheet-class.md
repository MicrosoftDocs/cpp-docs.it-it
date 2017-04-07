---
title: CPropertySheet (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- dialog boxes, tabs
- CPropertySheet class
- property sheets, CPropertySheet class
- tab dialog boxes
ms.assetid: 8461ccff-d14f-46e0-a746-42ad642ef94e
caps.latest.revision: 30
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 41ad7b598016b1fa04aa7ca63575f853195b5359
ms.lasthandoff: 02/24/2017

---
# <a name="cpropertysheet-class"></a>CPropertySheet (classe)
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
|[CPropertySheet:: addPage](#addpage)|Aggiunge una pagina alla finestra delle proprietà.|  
|[CPropertySheet::Construct](#construct)|Costruisce un oggetto `CPropertySheet`.|  
|[CPropertySheet:: Create](#create)|Visualizza una finestra delle proprietà non modale.|  
|[CPropertySheet](#domodal)|Visualizza una finestra delle proprietà modale.|  
|[CPropertySheet:: EnableStackedTabs](#enablestackedtabs)|Indica se la finestra delle proprietà utilizza schede in pila o scorrimento.|  
|[CPropertySheet::EndDialog](#enddialog)|Termina la finestra delle proprietà.|  
|[CPropertySheet::GetActiveIndex](#getactiveindex)|Recupera l'indice della pagina attiva della finestra delle proprietà.|  
|[CPropertySheet::GetActivePage](#getactivepage)|Restituisce l'oggetto pagina attiva.|  
|[CPropertySheet::GetPage](#getpage)|Recupera un puntatore alla pagina specificata.|  
|[CPropertySheet::GetPageCount](#getpagecount)|Recupera il numero di pagine nella finestra delle proprietà.|  
|[CPropertySheet::GetPageIndex](#getpageindex)|Recupera l'indice della pagina della finestra delle proprietà specificata.|  
|[CPropertySheet:: GetTabControl](#gettabcontrol)|Recupera un puntatore a un controllo tab.|  
|[CPropertySheet::MapDialogRect](#mapdialogrect)|Converte le unità finestra di dialogo di un rettangolo in unità schermo.|  
|[CPropertySheet:: OnInitDialog](#oninitdialog)|Eseguire l'override per aumentare l'inizializzazione di finestra delle proprietà.|  
|[CPropertySheet::PressButton](#pressbutton)|Simula la scelta del pulsante specificato in una finestra delle proprietà.|  
|[CPropertySheet::RemovePage](#removepage)|Rimuove una pagina delle proprietà.|  
|[CPropertySheet::SetActivePage](#setactivepage)|A livello di codice imposta l'oggetto pagina attiva.|  
|[CPropertySheet::SetFinishText](#setfinishtext)|Imposta il testo del pulsante Fine.|  
|[CPropertySheet::SetTitle](#settitle)|Imposta la didascalia della finestra delle proprietà.|  
|[CPropertySheet::SetWizardButtons](#setwizardbuttons)|Abilita i pulsanti della procedura guidata.|  
|[CPropertySheet:: SetWizardMode](#setwizardmode)|Attiva la modalità di creazione guidata.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[PROPSHEETHEADER](#m_psh)|Windows [PROPSHEETHEADER](http://msdn.microsoft.com/library/windows/desktop/bb774546) struttura. Consente di accedere ai parametri di finestra delle proprietà di base.|  
  
## <a name="remarks"></a>Note  
 Una finestra delle proprietà è costituito da un `CPropertySheet` oggetto e uno o più [CPropertyPage](../../mfc/reference/cpropertypage-class.md) oggetti. Il framework consente di visualizzare una finestra delle proprietà come finestra con un set di indici scheda e un'area che contiene la pagina attualmente selezionata. L'utente passa a una pagina specifica utilizzando la scheda appropriata.  
  
 `CPropertySheet`fornisce il supporto per l'espanso [PROPSHEETHEADER](http://msdn.microsoft.com/library/windows/desktop/bb774546) struttura introdotte in [!INCLUDE[Win98](../../mfc/reference/includes/win98_md.md)] e NT di Windows 2000. La struttura contiene flag aggiuntivi e i membri che supportano l'utilizzo di una bitmap di sfondo "filigrana".  
  
 Per visualizzare queste immagini di nuovo automaticamente nell'oggetto finestra delle proprietà, passare i valori validi per le immagini bitmap e tavolozza nella chiamata a [CPropertySheet::Construct](#construct) o [CPropertySheet::CPropertySheet](#cpropertysheet).  
  
 Anche se `CPropertySheet` non è derivato da [CDialog](../../mfc/reference/cdialog-class.md), la gestione di un `CPropertySheet` oggetto è simile alla gestione di un `CDialog` oggetto. Ad esempio, la creazione di una finestra delle proprietà richiede la costruzione di due parti: chiamare il costruttore e quindi chiamare [DoModal](#domodal) per una finestra delle proprietà modale o [crea](#create) per una finestra delle proprietà non modale. `CPropertySheet`Esistono due tipi di costruttori: [CPropertySheet::Construct](#construct) e [CPropertySheet::CPropertySheet](#cpropertysheet).  
  
 Quando si crea un `CPropertySheet` alcune oggetto [stili finestra](../../mfc/reference/window-styles.md) può causare un'eccezione first-chance a verificarsi. Ciò è dovuto il sistema sta tentando di modificare lo stile della finestra delle proprietà prima che venga creato il foglio. Per evitare questa eccezione, assicurarsi di impostare gli stili seguenti quando si crea il `CPropertySheet`:  
  
-   DS_3DLOOK  
  
-   DS_CONTROL  
  
-   WS_CHILD  
  
-   WS_TABSTOP  
  
 Gli stili seguenti sono facoltativi e non genererà l'eccezione first-chance:  
  
-   DS_SHELLFONT  
  
-   DS_LOCALEDIT  
  
-   WS_CLIPCHILDREN  
  
 Qualsiasi altro `Window Styles` non sono consentiti e non è necessario abilitare tali.  
  
 Scambio di dati tra un `CPropertySheet` oggetto e un oggetto esterno è simile per lo scambio di dati con un `CDialog` oggetto. L'importante differenza è che le impostazioni di una finestra delle proprietà sono in genere le variabili membro di `CPropertyPage` oggetti anziché di `CPropertySheet` oggetto stesso.  
  
 È possibile creare un tipo di scheda finestra di dialogo denominata una procedura guidata, è costituito da una finestra delle proprietà con una sequenza di pagine delle proprietà che guida l'utente attraverso i passaggi di un'operazione, ad esempio l'impostazione di un dispositivo o la creazione di un notiziario. In una tipo di procedura guidata scheda finestra di dialogo Pagine delle proprietà non sono presenti schede e pagina solo una proprietà è visibile alla volta. Inoltre, anziché **OK** e **applica** dispone di una finestra di dialogo tipo di procedura guidata scheda pulsanti, un **nuovamente** pulsante, un **Avanti** o **fine** pulsante, un **Annulla** pulsante e un **Guida** pulsante.  
  
 Per creare una finestra di dialogo tipo di procedura guidata, seguire la stessa procedura da seguire per creare una finestra delle proprietà standard, ma chiamata [SetWizardMode](#setwizardmode) prima di chiamare [DoModal](#domodal). Per abilitare i pulsanti della procedura guidata, chiamare [SetWizardButtons](#setwizardbuttons), utilizzare i contrassegni per personalizzare la funzione e l'aspetto. Per abilitare il **fine** pulsante, chiamare [SetFinishText](#setfinishtext) dopo che l'utente ha eseguito alcuna azione nell'ultima pagina della procedura guidata.  
  
 Per ulteriori informazioni su come usare `CPropertySheet` oggetti, vedere l'articolo [finestre delle proprietà e pagine delle proprietà](../../mfc/property-sheets-and-property-pages-in-mfc.md). Inoltre, vedere l'articolo della Knowledge Base Q146916: procedura: creare un oggetto non modale CPropertySheet con pulsanti Standard e l'articolo Q300606: procedura: progettare una finestra delle proprietà MFC ridimensionabile.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CPropertySheet`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdlgs. h  
  
##  <a name="addpage"></a>CPropertySheet:: addPage  
 Aggiunge la pagina fornita con la scheda a destra nella finestra delle proprietà.  
  
```  
void AddPage(CPropertyPage* pPage);
```  
  
### <a name="parameters"></a>Parametri  
 `pPage`  
 Punta alla pagina da aggiungere alla finestra delle proprietà. Non può essere **NULL**.  
  
### <a name="remarks"></a>Note  
 Aggiungere pagine alla finestra delle proprietà nell'ordine da sinistra a destra che si desidera vengano visualizzati.  
  
 `AddPage`Aggiunge il [CPropertyPage](../../mfc/reference/cpropertypage-class.md#cpropertypage) dell'oggetto per il `CPropertySheet` oggetto dell'elenco di pagine, ma non crea effettivamente la finestra per la pagina. Il framework esegue la creazione della finestra per la pagina fino a quando l'utente seleziona la pagina.  
  
 Quando si aggiunge una pagina delle proprietà mediante `AddPage`, `CPropertySheet` è il padre di `CPropertyPage`. Per accedere alla finestra delle proprietà dalla pagina delle proprietà, chiamare [CWnd::GetParent](../../mfc/reference/cwnd-class.md#getparent).  
  
 Non è necessario attendere fino alla creazione della finestra delle proprietà per chiamare `AddPage`. In genere, si chiamerà `AddPage` prima di chiamare [DoModal](#domodal) o [crea](#create).  
  
 Se si chiama `AddPage` dopo aver visualizzato la pagina delle proprietà, la riga scheda rifletterà la pagina appena aggiunta.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#129;](../../mfc/codesnippet/cpp/cpropertysheet-class_1.cpp)]  
  
##  <a name="construct"></a>CPropertySheet::Construct  
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
 `nIDCaption`  
 ID della didascalia da utilizzare per la finestra delle proprietà.  
  
 `pParentWnd`  
 Puntatore alla finestra padre della finestra delle proprietà. Se **NULL**, la finestra padre sarà la finestra principale dell'applicazione.  
  
 `iSelectPage`  
 L'indice della pagina che verrà inizialmente nella parte superiore. Valore predefinito è la prima pagina aggiunta al foglio.  
  
 `pszCaption`  
 Puntatore a una stringa contenente la didascalia da utilizzare per la finestra delle proprietà. Non può essere **NULL**.  
  
 `hbmWatermark`  
 Handle per la bitmap della filigrana della pagina delle proprietà.  
  
 `hpalWatermark`  
 Handle per la tavolozza della bitmap di filigrana e/o bitmap di intestazione.  
  
 `hbmHeader`  
 Handle per la bitmap di intestazione della pagina delle proprietà.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro se uno dei costruttori di classe non è già stato chiamato. Ad esempio, chiamare `Construct` quando si dichiara o allocare le matrici di `CPropertySheet` oggetti. Nel caso di matrici, è necessario chiamare `Construct` per ogni membro della matrice.  
  
 Per visualizzare la finestra delle proprietà, chiamare [DoModal](#domodal) o [crea](#create). La stringa contenuta nel primo parametro verrà inserita nella barra del titolo per la finestra delle proprietà.  
  
 È possibile visualizzare immagini della filigrana e/o intestazione automaticamente se si utilizzano i terzo o quarti prototipi di `Construct`, elencati in precedenza e si passano i valori validi per il `hbmWatermark`, `hpalWatermark`, e/o `hbmHeader` parametri.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato in quali circostanze si chiamerebbe `Construct`.  
  
 [!code-cpp[NVC_MFCDocView&#130;](../../mfc/codesnippet/cpp/cpropertysheet-class_2.cpp)]  
  
##  <a name="cpropertysheet"></a>CPropertySheet::CPropertySheet  
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
 `nIDCaption`  
 ID della didascalia da utilizzare per la finestra delle proprietà.  
  
 `pParentWnd`  
 Punta alla finestra padre della finestra delle proprietà. Se **NULL**, la finestra padre sarà la finestra principale dell'applicazione.  
  
 `iSelectPage`  
 L'indice della pagina che verrà inizialmente nella parte superiore. Valore predefinito è la prima pagina aggiunta al foglio.  
  
 `pszCaption`  
 Punta a una stringa contenente la didascalia da utilizzare per la finestra delle proprietà. Non può essere **NULL**.  
  
 `hbmWatermark`  
 Handle per la bitmap di sfondo della finestra delle proprietà.  
  
 `hpalWatermark`  
 Handle per la tavolozza della bitmap di filigrana e/o bitmap di intestazione.  
  
 `hbmHeader`  
 Handle per la bitmap di intestazione della pagina delle proprietà.  
  
### <a name="remarks"></a>Note  
 Per visualizzare la finestra delle proprietà, chiamare [DoModal](#domodal) o [crea](#create). La stringa contenuta nel primo parametro verrà inserita nella barra del titolo per la finestra delle proprietà.  
  
 Se si dispongono di più parametri (ad esempio, se si utilizza una matrice), utilizzare [costruire](#construct) anziché `CPropertySheet`.  
  
 È possibile visualizzare immagini della filigrana e/o intestazione automaticamente se si utilizzano il terza o quarti prototipi di `CPropertySheet`, precedente, e si passano i valori validi il `hbmWatermark`, `hpalWatermark`, e/o `hbmHeader` parametri.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#131; NVC_MFCDocView](../../mfc/codesnippet/cpp/cpropertysheet-class_3.cpp)]  
  
##  <a name="create"></a>CPropertySheet:: Create  
 Visualizza una finestra delle proprietà non modale.  
  
```  
virtual BOOL Create(CWnd* pParentWnd = NULL,
    DWORD dwStyle = (DWORD)–1,
    DWORD dwExStyle = 0);  
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Punta alla finestra padre. Se **NULL**, padre è il desktop.  
  
 `dwStyle`  
 Stili di finestra per la finestra delle proprietà. Per un elenco completo di stili disponibili, vedere [stili finestra](../../mfc/reference/window-styles.md).  
  
 `dwExStyle`  
 Stili finestra estesi per la finestra delle proprietà. Per un elenco completo di stili disponibili, vedere [stili finestra estesi](../../mfc/reference/extended-window-styles.md)  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la finestra delle proprietà viene creata correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La chiamata a **crea** può essere all'interno del costruttore, oppure è possibile chiamare dopo il costruttore viene richiamato.  
  
 Lo stile predefinito, espresso mediante il passaggio di –&1; come `dwStyle`, è effettivamente **WS_SYSMENU |** `WS_POPUP`**| WS_CAPTION | DS_MODALFRAME | DS_CONTEXTHELP | WS_VISIBLE**. Il valore predefinito è esteso stile della finestra, espresso passando 0 come `dwExStyle`, è effettivamente **WS_EX_DLGMODALFRAME**.  
  
 Il **crea** funzione membro restituisce immediatamente dopo la creazione delle proprietà. Per eliminare la finestra delle proprietà, chiamare [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow).  
  
 Finestre delle proprietà non modale visualizzate con una chiamata a **crea** si dispone di pulsanti OK, Annulla, applica e Guida in linea, come le finestre delle proprietà modale. Pulsanti desiderati devono essere creati dall'utente.  
  
 Per visualizzare una finestra delle proprietà modale, chiamare [DoModal](#domodal) invece.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#132;](../../mfc/codesnippet/cpp/cpropertysheet-class_4.cpp)]  
  
 [!code-cpp[&#133; NVC_MFCDocView](../../mfc/codesnippet/cpp/cpropertysheet-class_5.cpp)]  
  
##  <a name="domodal"></a>CPropertySheet  
 Visualizza una finestra delle proprietà modale.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 `IDOK`o `IDCANCEL` se la funzione era; in caso contrario ha esito positivo, 0 o -1. Se la finestra delle proprietà è stata stabilita una procedura guidata (vedere [SetWizardMode](#setwizardmode)), `DoModal` restituisce `ID_WIZFINISH` o `IDCANCEL`.  
  
### <a name="remarks"></a>Note  
 Il valore restituito corrisponde all'ID del controllo di chiudere la finestra delle proprietà. Dopo che questa funzione restituisce, windows corrispondente per la finestra delle proprietà e tutte le pagine verranno eliminati. Gli oggetti stessi continuano a esistere. In genere, verranno recuperati i dati dal [CPropertyPage](../../mfc/reference/cpropertypage-class.md) oggetti dopo `DoModal` restituisce `IDOK`.  
  
 Per visualizzare una finestra delle proprietà non modale, chiamare [crea](#create) invece.  
  
 Creazione di una pagina delle proprietà dalla relativa risorsa finestra di dialogo corrispondente, è possibile che un'eccezione first-chance. Ciò è dovuto alla pagina delle proprietà modificando lo stile della risorsa finestra di dialogo per lo stile desiderato prima della creazione della pagina. Poiché le risorse sono in genere di sola lettura, verrà generata un'eccezione. Il sistema gestisce l'eccezione e crea una copia della risorsa modificata. Le eccezioni first-chance possono pertanto essere ignorato.  
  
> [!NOTE]
>  Questa eccezione deve essere gestita dal sistema operativo se si esegue la compilazione con il modello di gestione delle eccezioni asincrone. Per ulteriori informazioni sui modelli di gestione delle eccezioni, vedere [/EH (modello di gestione delle eccezioni)](../../build/reference/eh-exception-handling-model.md). In questo caso, non eseguire il wrapping di chiamate a `CPropertySheet::DoModal` con un blocco try-catch C++ in cui catch gestisce tutte le eccezioni, ad esempio, `catch (...)`. Questo blocco gestisce l'eccezione destinato al sistema operativo e causa un comportamento imprevedibile. Tuttavia, è possibile utilizzare in modo sicuro C++ di gestione delle eccezioni con tipi di eccezione specifici o gestione delle eccezioni strutturata in cui viene passato l'eccezione di violazione di accesso al sistema operativo.  
  
 Per evitare la generazione di questa eccezione first-chance, è possibile garantire manualmente ha corretto la finestra delle proprietà [stili finestra](../../mfc/reference/window-styles.md). È necessario impostare gli stili per una finestra delle proprietà seguenti:  
  
-   DS_3DLOOK  
  
-   DS_CONTROL  
  
-   WS_CHILD  
  
-   WS_TABSTOP  
  
 È possibile utilizzare i seguenti stili facoltativi senza causare un'eccezione first-chance:  
  
-   DS_SHELLFONT  
  
-   DS_LOCALEDIT  
  
-   WS_CLIPCHILDREN  
  
 Disabilitare tutti gli altri stili di Windows perché non sono compatibili con le finestre delle proprietà. Questo avviso non è applicabile agli stili estesi. Impostazione in modo appropriato gli stili standard garantisce che la finestra delle proprietà non deve necessariamente essere modificato e verrà evitare la generazione di eccezioni first-chance.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [:: addPage](#addpage).  
  
##  <a name="enablestackedtabs"></a>CPropertySheet:: EnableStackedTabs  
 Indica se per stack delle righe di schede in una finestra delle proprietà.  
  
```  
void EnableStackedTabs(BOOL bStacked);
```  
  
### <a name="parameters"></a>Parametri  
 `bStacked`  
 Indica se le schede in pila sono abilitate nella finestra delle proprietà. Disabilitare le righe in pila dei tag impostando `bStacked` a **FALSE**.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, se una finestra delle proprietà dispone di più schede di quelle in una singola riga nella larghezza della finestra delle proprietà, le schede vengono impilate su più righe. Per utilizzare le schede scorrimento anziché tramite schede sovrapposizione, chiamare `EnableStackedTabs` con `bStacked` impostato su **FALSE** prima di chiamare [DoModal](#domodal) o [crea](#create).  
  
 È necessario chiamare `EnableStackedTabs` quando si crea un oggetto modale o una finestra delle proprietà non modale. Per incorporare questo stile in un `CPropertySheet`-derivata, scrivere un gestore messaggi per `WM_CREATE`. Nella versione sottoposta a override di [CWnd::OnCreate](../../mfc/reference/cwnd-class.md#oncreate), chiamare **EnableStackedTabs (FALSE)** prima di chiamare l'implementazione della classe base.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#134; NVC_MFCDocView](../../mfc/codesnippet/cpp/cpropertysheet-class_6.cpp)]  
  
##  <a name="enddialog"></a>CPropertySheet::EndDialog  
 Termina la finestra delle proprietà.  
  
```  
void EndDialog(int nEndID);
```  
  
### <a name="parameters"></a>Parametri  
 *nEndID*  
 Identificatore da utilizzare come valore restituito della finestra delle proprietà.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal framework quando viene premuto il pulsante Chiudi, OK o Annulla. Chiamare questa funzione membro se si verifica un evento che deve chiudere la finestra delle proprietà.  
  
 Questa funzione membro viene utilizzata solo con una finestra di dialogo modale.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPropertySheet::PressButton](#pressbutton).  
  
##  <a name="getactiveindex"></a>CPropertySheet::GetActiveIndex  
 Ottiene il numero di pagina attiva del finestra delle proprietà indice e viene utilizzato il numero di indice restituito come parametro per `GetPage`.  
  
```  
int GetActiveIndex() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di indice della pagina attiva.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPropertySheet::GetActivePage](#getactivepage).  
  
##  <a name="getactivepage"></a>CPropertySheet::GetActivePage  
 Recupera pagina attiva della finestra delle proprietà.  
  
```  
CPropertyPage* GetActivePage() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla pagina attiva.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro per eseguire un'azione nella pagina attiva.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#135;](../../mfc/codesnippet/cpp/cpropertysheet-class_7.cpp)]  
  
##  <a name="getpage"></a>CPropertySheet::GetPage  
 Restituisce un puntatore alla pagina specificata in questa finestra delle proprietà.  
  
```  
CPropertyPage* GetPage(int nPage) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nPage`  
 Indice della pagina desiderata, a partire da 0. Deve essere compreso tra 0 e uno minore del numero di pagine nella finestra delle proprietà, inclusiva.  
  
### <a name="return-value"></a>Valore restituito  
 Il puntatore di pagina corrispondente per il `nPage` parametro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPropertyPage::OnWizardFinish](../../mfc/reference/cpropertypage-class.md#onwizardfinish).  
  
##  <a name="getpagecount"></a>CPropertySheet::GetPageCount  
 Determina il numero di pagine attualmente nella finestra delle proprietà.  
  
```  
int GetPageCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di pagine nella finestra delle proprietà.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPropertyPage::OnWizardFinish](../../mfc/reference/cpropertypage-class.md#onwizardfinish).  
  
##  <a name="getpageindex"></a>CPropertySheet::GetPageIndex  
 Recupera il numero di indice della pagina specificata nella finestra delle proprietà.  
  
```  
int GetPageIndex(CPropertyPage* pPage);
```  
  
### <a name="parameters"></a>Parametri  
 `pPage`  
 Punta alla pagina con l'indice da trovare. Non può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Numero di indice di una pagina.  
  
### <a name="remarks"></a>Note  
 Ad esempio, si utilizzerebbe `GetPageIndex` per ottenere l'indice della pagina per poter utilizzare [SetActivePage](#setactivepage) o [GetPage](#getpage).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPropertySheet::GetActivePage](#getactivepage).  
  
##  <a name="gettabcontrol"></a>CPropertySheet:: GetTabControl  
 Recupera un puntatore a un controllo scheda per eseguire operazioni specifiche per il controllo scheda (ovvero, utilizzare le API in [CTabCtrl](../../mfc/reference/ctabctrl-class.md)).  
  
```  
CTabCtrl* GetTabControl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un controllo struttura a schede.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro ad esempio, se si desidera aggiungere immagini bitmap a ognuna delle schede durante l'inizializzazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#136;](../../mfc/codesnippet/cpp/cpropertysheet-class_8.cpp)]  
  
##  <a name="m_psh"></a>PROPSHEETHEADER  
 Una struttura i cui membri memorizzare le caratteristiche di [PROPSHEETHEADER](http://msdn.microsoft.com/library/windows/desktop/bb774546).  
  
### <a name="remarks"></a>Note  
 Utilizzare questa struttura per inizializzare l'aspetto della finestra delle proprietà dopo la creazione, ma prima che venga visualizzato con il [DoModal](#domodal) funzione membro. Ad esempio, impostare il `dwSize` membro del `m_psh` le dimensioni si desidera utilizzare la finestra delle proprietà di.  
  
 Per ulteriori informazioni su tale struttura, compreso un elenco dei relativi membri, vedere **PROPSHEETHEADER** nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#143; NVC_MFCDocView](../../mfc/codesnippet/cpp/cpropertysheet-class_9.cpp)]  
  
##  <a name="mapdialogrect"></a>CPropertySheet::MapDialogRect  
 Converte le unità finestra di dialogo di un rettangolo in unità schermo.  
  
```  
void MapDialogRect(LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura o [CRect](../../atl-mfc-shared/reference/crect-class.md) coordina l'oggetto che contiene la finestra di dialogo da convertire.  
  
### <a name="remarks"></a>Note  
 La finestra di dialogo unità sono espresse in termini di corrente la finestra di dialogo unità di base derivato dalla media larghezza e altezza dei caratteri nel tipo di carattere utilizzato per la finestra di dialogo testo. Un'unità orizzontale è un quarto dell'unità di base larghezza la finestra di dialogo e un'unità verticale è un ottavo dell'unità di base altezza la finestra di dialogo.  
  
 Il [GetDialogBaseUnits](http://msdn.microsoft.com/library/windows/desktop/ms645475) funzione Windows restituisce informazioni sulle dimensioni di carattere del sistema, ma è possibile specificare un carattere diverso per ogni finestra delle proprietà se si utilizza il **DS_SETFONT** stile nel file di definizione di risorsa. Il [MapDialogRect](http://msdn.microsoft.com/library/windows/desktop/ms645502) funzione di Windows, descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)], utilizza il tipo di carattere appropriato per questa finestra di dialogo.  
  
 Il `MapDialogRect` funzione membro sostituisce le unità finestra di dialogo `lpRect` con schermata unità (pixel) in modo che il rettangolo può essere utilizzato per creare una finestra di dialogo o posizionare un controllo all'interno di una casella.  
  
##  <a name="oninitdialog"></a>CPropertySheet:: OnInitDialog  
 Le sostituzioni per ottimizzare l'inizializzazione di finestra delle proprietà.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### <a name="return-value"></a>Valore restituito  
 Specifica se l'applicazione ha impostato lo stato attivo a uno dei controlli nella finestra delle proprietà. Se **OnInitDialog** restituisce un valore diverso da zero, Windows imposta lo stato attivo per il primo controllo nella finestra delle proprietà. L'applicazione può restituire 0 solo se è impostata in modo esplicito lo stato attivo su uno dei controlli nella finestra delle proprietà.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata in risposta al **WM_INITDIALOG** messaggio. Questo messaggio viene inviato alla finestra delle proprietà durante la [crea](#create) o [DoModal](#domodal) chiamate, che si verificano immediatamente prima della visualizzazione della finestra delle proprietà.  
  
 Eseguire l'override di questa funzione membro se è necessario eseguire un'elaborazione speciale quando viene inizializzata la finestra delle proprietà. Nella versione sottoposta a override, chiamare innanzitutto la classe di base `OnInitDialog` ma ignora il valore restituito. In genere si ritornerà **TRUE** dalla funzione membro sottoposto a override.  
  
 Non è necessaria una voce nella mappa messaggi per questa funzione membro.  
  
##  <a name="pressbutton"></a>CPropertySheet::PressButton  
 Simula la scelta del pulsante specificato in una finestra delle proprietà.  
  
```  
void PressButton(int nButton);
```  
  
### <a name="parameters"></a>Parametri  
 `nButton`  
 nButton: identifica il pulsante premuto. Questo parametro può essere uno dei valori seguenti:  
  
- **PSBTN_BACK** sceglie il pulsante Indietro.  
  
- **PSBTN_NEXT** fa clic sul pulsante Avanti.  
  
- **PSBTN_FINISH** sceglie il pulsante Fine.  
  
- **PSBTN_OK** sceglie il pulsante OK.  
  
- **PSBTN_APPLYNOW** sceglie il pulsante Applica.  
  
- **PSBTN_CANCEL** sceglie il pulsante Annulla.  
  
- **PSBTN_HELP** sceglie il pulsante?.  
  
### <a name="remarks"></a>Note  
 Vedere [PSM_PRESSBUTTON](http://msdn.microsoft.com/library/windows/desktop/bb774597) per ulteriori informazioni sul messaggio di Windows SDK Pressbutton.  
  
 Una chiamata a `PressButton` non verrà inviato il [PSN_APPLY](http://msdn.microsoft.com/library/windows/desktop/bb774552) notifica da una pagina delle proprietà per il framework. Per inviare la notifica, chiamare [CPropertyPage::OnOK](../../mfc/reference/cpropertypage-class.md#onok).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#137;](../../mfc/codesnippet/cpp/cpropertysheet-class_10.cpp)]  
  
##  <a name="removepage"></a>CPropertySheet::RemovePage  
 Rimuove una pagina delle proprietà ed elimina la finestra associata.  
  
```  
void RemovePage(CPropertyPage* pPage);  
void RemovePage(int nPage);
```  
  
### <a name="parameters"></a>Parametri  
 `pPage`  
 Punta alla pagina da rimuovere dalla finestra delle proprietà. Non può essere `NULL`.  
  
 `nPage`  
 Indice della pagina da rimuovere. Deve essere compreso tra 0 e uno minore del numero di pagine nella finestra delle proprietà, inclusiva.  
  
### <a name="remarks"></a>Note  
 Il [CPropertyPage](../../mfc/reference/cpropertypage-class.md) oggetto stesso non viene eliminato finché il proprietario del `CPropertySheet` finestra viene chiusa.  
  
##  <a name="setactivepage"></a>CPropertySheet::SetActivePage  
 Modifica la pagina attiva.  
  
```  
BOOL SetActivePage(int nPage);  
BOOL SetActivePage(CPropertyPage* pPage);
```  
  
### <a name="parameters"></a>Parametri  
 `nPage`  
 Indice della pagina per impostare. Deve essere compreso tra 0 e uno minore del numero di pagine nella finestra delle proprietà, inclusiva.  
  
 `pPage`  
 Punta alla pagina per impostare nella finestra delle proprietà. Non può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la finestra delle proprietà è attivata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Ad esempio, utilizzare `SetActivePage` se un'azione dell'utente in un'unica pagina dovrebbe provocare un'altra pagina per diventare la pagina attiva.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPropertySheet::GetActivePage](#getactivepage).  
  
##  <a name="setfinishtext"></a>CPropertySheet::SetFinishText  
 Imposta il testo del pulsante di comando di fine.  
  
```  
void SetFinishText(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszText`  
 Punta al testo da visualizzare sul pulsante di comando di fine.  
  
### <a name="remarks"></a>Note  
 Chiamare `SetFinishText` per visualizzare il testo sul pulsante di comando di fine e nascondere i pulsanti Avanti e indietro azione nell'ultima pagina della procedura guidata al termine dell'operazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#138;](../../mfc/codesnippet/cpp/cpropertysheet-class_11.cpp)]  
  
##  <a name="settitle"></a>CPropertySheet::SetTitle  
 Specifica la didascalia della finestra delle proprietà (il testo visualizzato nella barra del titolo di una finestra cornice).  
  
```  
void SetTitle(
    LPCTSTR lpszText,  
    UINT nStyle = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `nStyle`  
 Specifica lo stile del titolo della finestra delle proprietà. Specificare lo stile 0 o come **PSH_PROPTITLE**. Se lo stile è impostato come **PSH_PROPTITLE**, la parola "Proprietà" viene visualizzato dopo il testo specificato come didascalia. Ad esempio, la chiamata `SetTitle`("Semplice", **PSH_PROPTITLE**) comporterà una didascalia finestra delle proprietà di "Proprietà semplice".  
  
 `lpszText`  
 Punta al testo da utilizzare come didascalia della barra del titolo della finestra delle proprietà.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, una finestra delle proprietà Usa il parametro didascalia nel costruttore della finestra delle proprietà.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#139;](../../mfc/codesnippet/cpp/cpropertysheet-class_12.cpp)]  
  
##  <a name="setwizardbuttons"></a>CPropertySheet::SetWizardButtons  
 Abilita o disabilita il pulsante Indietro, Avanti o fine in una finestra delle proprietà di procedura guidata.  
  
```  
void SetWizardButtons(DWORD dwFlags);
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlags`  
 Un set di flag che consentono di personalizzare la funzione e l'aspetto dei pulsanti della procedura guidata. Questo parametro può essere una combinazione dei valori seguenti:  
  
- **PSWIZB_BACK** pulsante Indietro  
  
- **PSWIZB_NEXT** successivo, pulsante  
  
- **PSWIZB_FINISH** Finish (fine)  
  
- **PSWIZB_DISABLEDFINISH** pulsante Fine disabilitato  
  
### <a name="remarks"></a>Note  
 Chiamare `SetWizardButtons` solo dopo che la finestra di dialogo è aperta; non è possibile chiamare `SetWizardButtons` prima di chiamare [DoModal](#domodal). In genere, è necessario chiamare `SetWizardButtons` da [CPropertyPage:: OnSetActive](../../mfc/reference/cpropertypage-class.md#onsetactive).  
  
 Se si desidera modificare il testo nel pulsante Fine o nascondere la successiva e Back pulsanti una volta l'utente ha completato la procedura guidata, chiamata [SetFinishText](#setfinishtext). Si noti che per la fine e Avanti è condiviso lo stesso pulsante. È possibile visualizzare una fine o in una sola volta un pulsante Avanti, ma non entrambi.  
  
### <a name="example"></a>Esempio  
 Oggetto `CPropertySheet` ha tre pagine di proprietà della procedura guidata: `CStylePage`, `CColorPage`, e `CShapePage`.  Il frammento di codice riportato di seguito viene illustrato come abilitare e disabilitare il **nuovamente** e **Avanti** pulsanti nella pagina delle proprietà della procedura guidata.  
  
 [!code-cpp[NVC_MFCDocView&#140;](../../mfc/codesnippet/cpp/cpropertysheet-class_13.cpp)]  
  
 [!code-cpp[NVC_MFCDocView&#141;](../../mfc/codesnippet/cpp/cpropertysheet-class_14.cpp)]  
  
 [!code-cpp[NVC_MFCDocView&#138;](../../mfc/codesnippet/cpp/cpropertysheet-class_11.cpp)]  
  
##  <a name="setwizardmode"></a>CPropertySheet:: SetWizardMode  
 Determina che una pagina delle proprietà di una procedura guidata.  
  
```  
void SetWizardMode();
```  
  
### <a name="remarks"></a>Note  
 Una caratteristica chiave di una pagina delle proprietà guidata è che l'utente passa tramite accanto o fine, eseguire il backup e annullare i pulsanti anziché schede.  
  
 Chiamare `SetWizardMode` prima di chiamare [DoModal](#domodal). Dopo aver chiamato `SetWizardMode`, `DoModal` , verrà ripristinato **ID_WIZFINISH** (se l'utente viene chiusa con il pulsante Fine) o **IDCANCEL**.  
  
 `SetWizardMode`Imposta il flag PSH_WIZARD.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#142;](../../mfc/codesnippet/cpp/cpropertysheet-class_15.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [MFC esempio CMNCTRL1](../../visual-cpp-samples.md)   
 [MFC esempio CMNCTRL2](../../visual-cpp-samples.md)   
 [Esempio MFC PROPDLG](../../visual-cpp-samples.md)   
 [Esempio MFC SNAPVW](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)





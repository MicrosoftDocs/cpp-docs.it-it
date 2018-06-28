---
title: Classe di CMFCPropertySheet | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 53ec20a6fb45efc3848381d165256a429b80a386
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37040012"
---
# <a name="cmfcpropertysheet-class"></a>Classe di CMFCPropertySheet
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
|[CMFCPropertySheet:: addPage](#addpage)|Aggiunge una pagina alla finestra delle proprietà.|  
|[CMFCPropertySheet::AddPageToTree](#addpagetotree)|Aggiunge una nuova pagina delle proprietà al controllo albero.|  
|[CMFCPropertySheet::AddTreeCategory](#addtreecategory)|Aggiunge un nuovo nodo al controllo albero.|  
|[CMFCPropertySheet::EnablePageHeader](#enablepageheader)|Riserva spazio nella parte superiore di ogni pagina per creare un'intestazione personalizzata.|  
|[CMFCPropertySheet::GetHeaderHeight](#getheaderheight)|Recupera l'altezza dell'intestazione corrente.|  
|[CMFCPropertySheet::GetLook](#getlook)|Recupera il valore di enumerazione che specifica l'aspetto della finestra delle proprietà corrente.|  
|[CMFCPropertySheet::GetNavBarWidth](#getnavbarwidth)|Recupera la larghezza della barra di navigazione in pixel.|  
|[CMFCPropertySheet::GetTab](#gettab)|Recupera l'oggetto del controllo Struttura a schede interno che supporta il controllo corrente della finestra delle proprietà.|  
|`CMFCPropertySheet::GetThisClass`|Usato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCPropertySheet::InitNavigationControl](#initnavigationcontrol)|Inizializza l'aspetto del controllo corrente della finestra delle proprietà.|  
|[CMFCPropertySheet::OnActivatePage](#onactivatepage)|Chiamato dal framework quando una pagina delle proprietà è abilitata.|  
|[CMFCPropertySheet::OnDrawPageHeader](#ondrawpageheader)|Chiamato dal framework per creare un'intestazione pagina delle proprietà personalizzata.|  
|`CMFCPropertySheet::OnInitDialog`|Gestisce il [WM_INITDIALOG](http://msdn.microsoft.com/library/windows/desktop/ms645428) messaggio. (Esegue l'override [CPropertySheet:: OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog).)|  
|[CMFCPropertySheet::OnRemoveTreePage](#onremovetreepage)|Chiamato dal framework per rimuovere una pagina delle proprietà da un controllo albero.|  
|`CMFCPropertySheet::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati per la [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) funzioni di Windows. Esegue l'override`CPropertySheet::PreTranslateMessage`.|  
|[CMFCPropertySheet::RemoveCategory](#removecategory)|Rimuove un nodo dal controllo albero.|  
|[CMFCPropertySheet::RemovePage](#removepage)|Rimuove una pagina delle proprietà dalla finestra delle proprietà.|  
|[CMFCPropertySheet::SetIconsList](#seticonslist)|Specifica l'elenco delle immagini usate nel controllo di navigazione del riquadro di Outlook.|  
|[CMFCPropertySheet:: Setlook](#setlook)|Specifica l'aspetto della finestra delle proprietà.|  
  
## <a name="remarks"></a>Note  
 La classe `CMFCPropertySheet` rappresenta le finestre delle proprietà, note anche come finestre di dialogo a schede. La classe `CMFCPropertySheet` può visualizzare una pagina delle proprietà in vari modi.  
  
 Per usare la classe `CMFCPropertySheet` nell'applicazione,seguire questa procedura:  
  
1.  Derivare una classe dalla classe `CMFCPropertySheet` e assegnare alla classe un nome, ad esempio, CMyPropertySheet.  
  
2.  Costruire un [CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md) oggetto per ogni pagina delle proprietà.  
  
3.  Chiamare il [CMFCPropertySheet:: Setlook](#setlook) metodo nel costruttore CMyPropertySheet. Un parametro del metodo specifica che le pagine delle proprietà vengono visualizzate come schede nella parte superiore o sinistra della finestra delle proprietà, come schede nello stile di una finestra delle proprietà di Microsoft OneNote, come pulsanti su un controllo della barra degli strumenti di Microsoft Outlook, come nodi di un controllo albero oppure come un elenco di elementi sul lato sinistro della finestra delle proprietà.  
  
4.  Se si crea una finestra delle proprietà nello stile di una barra degli strumenti di Microsoft Outlook, chiamare il [CMFCPropertySheet::SetIconsList](#seticonslist) metodo per associare un elenco immagini con le pagine delle proprietà.  
  
5.  Chiamare il [CMFCPropertySheet:: addPage](#addpage) metodo per ogni pagina delle proprietà.  
  
6.  Creare un controllo `CMFCPropertySheet` e chiamare il relativo metodo `DoModal`.  
  
## <a name="illustrations"></a>Illustrazioni  
 Nella figura seguente vengono illustrate una finestra delle proprietà nello stile della barra degli strumenti incorporata di Microsoft Outlook. La barra degli strumenti di Outlook viene visualizzata a sinistra della finestra delle proprietà.  
  
 ![Colori di CMFCPropertySheet](../../mfc/reference/media/cmfcpropertysheet_color.png "cmfcpropertysheet_color")  
  
 La figura seguente mostra una finestra delle proprietà che contiene un [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md) oggetto. Tale oggetto è una finestra delle proprietà nello stile di una finestra delle proprietà dei controlli standard.  
  
 ![Elenchi e delle proprietà di CMFCPropertySheet](../../mfc/reference/media/cmfcpropertysheet_list.png "cmfcpropertysheet_list")  
  
 La figura seguente mostra una finestra delle proprietà nello stile di un controllo albero.  
  
 ![Property Tree](../../mfc/reference/media/proptree.png "proptree")  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CPropertySheet](../../mfc/reference/cpropertysheet-class.md)  
  
 [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpropertysheet. h  
  
##  <a name="addpage"></a>  CMFCPropertySheet:: addPage  
 Aggiunge una pagina alla finestra delle proprietà.  
  
```  
void AddPage(CPropertyPage* pPage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *esercitazione*  
 Puntatore a un oggetto di pagina. Questo parametro non può essere `NULL`.  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiunge la pagina delle proprietà specificata come scheda a destra nella pagina delle proprietà. Pertanto, è possibile usare questo metodo per aggiungere le pagine in ordine da sinistra a destra.  
  
 Se la finestra delle proprietà nello stile di Microsoft Outlook, il framework visualizza un elenco di pulsanti di navigazione a sinistra della finestra delle proprietà. Dopo che questo metodo aggiunge una pagina delle proprietà, aggiunge un pulsante corrispondente all'elenco. Per visualizzare una pagina delle proprietà, fare clic sul pulsante corrispondente. Per ulteriori informazioni sugli stili di finestre delle proprietà, vedere [CMFCPropertySheet:: Setlook](#setlook).  
  
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
 [in] *pCategory*  
 Puntatore a un nodo dell'albero padre, o `NULL` per associare la pagina specificata con il nodo di primo livello. Chiamare il [CMFCPropertySheet::AddTreeCategory](#addtreecategory) metodo per ottenere l'indicatore di misura.  
  
 [in] *esercitazione*  
 Puntatore a un oggetto pagina delle proprietà.  
  
 [in] *nIconNum*  
 Indice in base zero di un'icona o -1 se nessuna icona viene utilizzata. Quando la pagina non è selezionata, l'icona viene visualizzata accanto alla pagina delle proprietà del controllo struttura ad albero. Il valore predefinito è -1.  
  
 [in] *nSelIconNum*  
 Indice in base zero di un'icona o -1 se nessuna icona viene utilizzata. L'icona viene visualizzata accanto alla pagina delle proprietà del controllo albero quando è selezionata la pagina. Il valore predefinito è -1.  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiunge una pagina delle proprietà come un nodo foglia di un controllo struttura ad albero. Per aggiungere una pagina delle proprietà, creare una `CMFCPropertySheet` dell'oggetto, chiamare il [CMFCPropertySheet:: Setlook](#setlook) metodo con il *Cerca* parametro impostato su `CMFCPropertySheet::PropSheetLook_Tree`e quindi utilizzare questo metodo per aggiungere la pagina delle proprietà .  
  
##  <a name="addtreecategory"></a>  CMFCPropertySheet::AddTreeCategory  
 Aggiunge un nuovo nodo al controllo albero.  
  
```  
CMFCPropertySheetCategoryInfo* AddTreeCategory(
    LPCTSTR lpszLabel,  
    int nIconNum=-1,  
    int nSelectedIconNum=-1,  
    const CMFCPropertySheetCategoryInfo* pParentCategory=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszLabel*  
 Nome del nodo.  
  
 [in] *nIconNum*  
 Indice in base zero di un'icona o -1 se nessuna icona viene utilizzata. Quando la pagina non è selezionata, l'icona viene visualizzata accanto alla pagina delle proprietà del controllo struttura ad albero. Il valore predefinito è -1.  
  
 [in] *nSelectedIconNum*  
 Indice in base zero di un'icona o -1 se nessuna icona viene utilizzata. L'icona viene visualizzata accanto alla pagina delle proprietà del controllo albero quando è selezionata la pagina. Il valore predefinito è -1.  
  
 [in] *pParentCategory*  
 Puntatore a un nodo dell'albero padre, o `NULL` per associare la pagina specificata con il nodo di primo livello. Impostare questo parametro con il [CMFCPropertySheet::AddTreeCategory](#addtreecategory) metodo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al nuovo nodo nel controllo struttura ad albero.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per aggiungere un nuovo nodo, viene definito come una categoria, al controllo albero. Per aggiungere un nodo, creare una `CMFCPropertySheet` dell'oggetto, chiamare il [CMFCPropertySheet:: Setlook](#setlook) metodo con il *Cerca* parametro impostato su `CMFCPropertySheet::PropSheetLook_Tree`e quindi utilizzare questo metodo per aggiungere il nodo.  
  
 Usare il valore restituito di questo metodo nelle chiamate successive a [CMFCPropertySheet::AddPageToTree](#addpagetotree) e [CMFCPropertySheet::AddTreeCategory](#addtreecategory).  
  
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
 [in] *pszCaption*  
 Stringa che contiene la didascalia della finestra delle proprietà. Non può essere `NULL`.  
  
 [in] *nIDCaption*  
 ID di risorsa che contiene la didascalia della finestra delle proprietà.  
  
 [in] *pParentWnd*  
 Puntatore alla finestra padre della finestra delle proprietà, o `NULL` se la finestra padre è la finestra principale dell'applicazione. Il valore predefinito è `NULL`.  
  
 [in] *iSelectPage*  
 Indice in base zero della pagina delle proprietà superiore. Il valore predefinito è 0.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere i parametri per il [CPropertySheet::CPropertySheet](../../mfc/reference/cpropertysheet-class.md#cpropertysheet) costruttore.  
  
##  <a name="enablepageheader"></a>  CMFCPropertySheet::EnablePageHeader  
 Riserva spazio nella parte superiore di ogni pagina per creare un'intestazione personalizzata.  
  
```  
void EnablePageHeader(int nHeaderHeight);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nHeaderHeight*  
 L'altezza dell'intestazione, in pixel.  
  
### <a name="remarks"></a>Note  
 Per utilizzare il valore del *nHeaderHeight* eseguire l'override di parametro per disegnare un'intestazione personalizzata, la [CMFCPropertySheet::OnDrawPageHeader](#ondrawpageheader) (metodo).  
  
##  <a name="getheaderheight"></a>  CMFCPropertySheet::GetHeaderHeight  
 Recupera l'altezza dell'intestazione corrente.  
  
```  
int GetHeaderHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza dell'intestazione, in pixel.  
  
### <a name="remarks"></a>Note  
 Chiamare il [CMFCPropertySheet::EnablePageHeader](#enablepageheader) metodo prima di chiamare questo metodo.  
  
##  <a name="getlook"></a>  CMFCPropertySheet::GetLook  
 Recupera il valore di enumerazione che specifica l'aspetto della finestra delle proprietà corrente.  
  
```  
PropSheetLook GetLook() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di enumerazione che specifica l'aspetto della finestra delle proprietà. Per un elenco di valori possibili, vedere la tabella di enumerazione nella sezione osservazioni della [CMFCPropertySheet:: Setlook](#setlook).  
  
##  <a name="getnavbarwidth"></a>  CMFCPropertySheet::GetNavBarWidth  
 Ottiene la larghezza della barra di spostamento.  
  
```  
int GetNavBarWidth() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Larghezza della barra di spostamento in pixel.  
  
##  <a name="gettab"></a>  CMFCPropertySheet::GetTab  
 Recupera l'oggetto del controllo Struttura a schede interno che supporta il controllo corrente della finestra delle proprietà.  
  
```  
CMFCTabCtrl& GetTab() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un oggetto di controllo struttura a schede interno.  
  
### <a name="remarks"></a>Note  
 È possibile impostare una finestra delle proprietà in modo che venga visualizzato in diversi stili, ad esempio un controllo struttura ad albero, un elenco di pulsanti di spostamento o un set di pagine a schede.  
  
 Prima di chiamare questo metodo, chiamare il [CMFCPropertySheet:: Setlook](#setlook) metodo per impostare l'aspetto del controllo finestra delle proprietà. Chiamare quindi il [CMFCPropertySheet::InitNavigationControl](#initnavigationcontrol) metodo per inizializzare l'oggetto controllo struttura a schede interno. Utilizzare questo metodo per recuperare l'oggetto controllo scheda e quindi utilizzare quell'oggetto per lavorare con le schede nella pagina delle proprietà.  
  
 Questo metodo effettua un'asserzione in modalità di debug, se il controllo della finestra delle proprietà non è impostato su vengono visualizzate nello stile di Microsoft OneNote.  
  
##  <a name="initnavigationcontrol"></a>  CMFCPropertySheet::InitNavigationControl  
 Inizializza l'aspetto del controllo corrente della finestra delle proprietà.  
  
```  
virtual CWnd* InitNavigationControl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla finestra del controllo finestra delle proprietà.  
  
### <a name="remarks"></a>Note  
 Un controllo della finestra delle proprietà può essere visualizzati in diversi formati diversi, ad esempio un set di pagine a schede, un controllo albero o un elenco di pulsanti di navigazione. Usare la [CMFCPropertySheet:: Setlook](#setlook) metodo per specificare l'aspetto del controllo finestra delle proprietà.  
  
##  <a name="onactivatepage"></a>  CMFCPropertySheet::OnActivatePage  
 Chiamato dal framework quando una pagina delle proprietà è abilitata.  
  
```  
virtual void OnActivatePage(CPropertyPage* pPage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *esercitazione*  
 Puntatore a un oggetto pagina delle proprietà che rappresenta la pagina proprietà enabled.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo garantisce che la pagina delle proprietà abilitato lo scorrimento nella visualizzazione. Se lo stile della finestra delle proprietà corrente contiene un riquadro di Microsoft Outlook, questo metodo imposta il pulsante di Outlook corrispondente per lo stato di selezione.  
  
##  <a name="ondrawpageheader"></a>  CMFCPropertySheet::OnDrawPageHeader  
 Chiamata eseguita dal framework per disegnare l'intestazione per una pagina delle proprietà personalizzate.  
  
```  
virtual void OnDrawPageHeader(
    CDC* pDC,  
    int nPage,  
    CRect rectHeader);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDC*  
 Puntatore a un contesto di dispositivo.  
  
 [in] *nPage*  
 Il numero di pagina di proprietà in base zero.  
  
 [in] *rectHeader*  
 Un rettangolo di delimitazione che specifica la posizione in cui disegnare l'intestazione.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo metodo non esegue alcuna operazione. Se si esegue l'override di questo metodo, chiamare il [CMFCPropertySheet::EnablePageHeader](#enablepageheader) metodo prima che il framework chiama questo metodo.  
  
##  <a name="onremovetreepage"></a>  CMFCPropertySheet::OnRemoveTreePage  
 Chiamato dal framework per rimuovere una pagina delle proprietà da un controllo albero.  
  
```  
virtual BOOL OnRemoveTreePage(CPropertyPage* pPage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *esercitazione*  
 Puntatore a un oggetto pagina delle proprietà che rappresenta la pagina delle proprietà da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se questo metodo dà esito positivo; in caso contrario, `FALSE`.  
  
##  <a name="removecategory"></a>  CMFCPropertySheet::RemoveCategory  
 Rimuove un nodo dal controllo albero.  
  
```  
void RemoveCategory(CMFCPropertySheetCategoryInfo* pCategory);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pCategory*  
 Puntatore a una categoria (nodo) da rimuovere.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per rimuovere un nodo, viene inoltre definito come una categoria, da un controllo albero. Usare la [CMFCPropertySheet::AddTreeCategory](#addtreecategory) metodo per aggiungere un nodo a un controllo struttura ad albero.  
  
##  <a name="removepage"></a>  CMFCPropertySheet::RemovePage  
 Rimuove una pagina delle proprietà dalla finestra delle proprietà.  
  
```  
void RemovePage(CPropertyPage* pPage);
void RemovePage(int nPage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *esercitazione*  
 Puntatore all'oggetto pagina delle proprietà che rappresenta la pagina delle proprietà da rimuovere. Non può essere `NULL`.  
  
 [in] *nPage*  
 Indice in base zero della pagina da rimuovere.  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuove la pagina delle proprietà specificato ed elimina la finestra associata. La pagina delle proprietà dell'oggetto che il *esercitazione* parametro specifica non viene eliminato finché il [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md) finestra è chiusa.  
  
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
 [in] *uiImageListResID*  
 L'ID di risorsa di un elenco di immagini.  
  
 [in] *cx*  
 La larghezza, in pixel, delle icone dell'elenco immagini.  
  
 [in] *clrTransparent*  
 Colore trasparente immagine. Le parti dell'immagine di questo oggetto color dovrà essere trasparente. Il valore predefinito è il colore magenta, RGB(255,0,255).  
  
 [in] *hIcons*  
 Handle per un elenco immagini esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Nel primo metodo sintassi, eseguire l'overload `TRUE` se questo metodo dà esito positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se la finestra delle proprietà nello stile di Microsoft Outlook, il framework visualizza un elenco di pulsanti di navigazione, chiamati il controllo riquadro di Outlook, a sinistra della finestra delle proprietà. Utilizzare questo metodo per impostare l'elenco di immagini da utilizzare per il controllo riquadro di Outlook.  
  
 Per ulteriori informazioni sui metodi che supportano questo metodo, vedere [CImageList:: Create](../../mfc/reference/cimagelist-class.md#create) e [CImageList::Add](../../mfc/reference/cimagelist-class.md#add). Per ulteriori informazioni su come impostare lo stile di una finestra delle proprietà, vedere [CMFCPropertySheet:: Setlook](#setlook).  
  
##  <a name="setlook"></a>  CMFCPropertySheet:: Setlook  
 Specifica l'aspetto della finestra delle proprietà.  
  
```  
void SetLook(
    PropSheetLook look,  
    int nNavControlWidth=100);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *Cerca*  
 Uno dei valori di enumerazione che specifica l'aspetto della finestra delle proprietà. Lo stile predefinito per una finestra delle proprietà è `CMFCPropertySheet::PropSheetLook_Tabs`. Per altre informazioni, vedere la tabella nella sezione Osservazioni di questo argomento.  
  
 [in] *nNavControlWidth*  
 Larghezza del controllo di navigazione, in pixel. Il valore predefinito è 100.  
  
### <a name="remarks"></a>Note  
 Per visualizzare una finestra delle proprietà in uno stile diverso da quello predefinito, chiamare questo metodo prima di creare la finestra delle proprietà.  
  
 Nella tabella seguente sono elencati i valori di enumerazione che possono essere specificati nel *Cerca* parametro.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|`CMFCPropertySheet::PropSheetLook_Tabs`|(Impostazione predefinita) Visualizza una scheda per ogni pagina delle proprietà. Le schede vengono visualizzate nella parte superiore della finestra delle proprietà e sono in pila se sono presenti altre schede di quelle presenti in una singola riga.|  
|`CMFCPropertySheet::PropSheetLook_OutlookBar`|Visualizza un elenco di pulsanti di navigazione nello stile della barra di Microsoft Outlook, sul lato sinistro della finestra delle proprietà. Ogni pulsante nell'elenco corrisponde a una pagina delle proprietà. Il framework Visualizza frecce di scorrimento, se sono presenti più pulsanti quelle presenti nell'area visibile dell'elenco.|  
|`CMFCPropertySheet::PropSheetLook_Tree`|Visualizza un controllo albero sul lato sinistro della finestra delle proprietà. Ogni nodo padre o figlio del controllo struttura ad albero corrisponde a una pagina delle proprietà. Se sono presenti altri nodi quelle presenti nell'area visibile del controllo struttura ad albero, il framework Visualizza frecce di scorrimento.|  
|`CMFCPropertySheet::PropSheetLook_OneNoteTabs`|Visualizza una scheda nello stile di Microsoft OneNote, per ogni pagina delle proprietà. Il framework vengono visualizzate le schede nella parte superiore della finestra delle proprietà e le frecce di scorrimento se sono presenti più schede di rientri in una singola riga.|  
|`CMFCPropertySheet::PropSheetLook_List`|Visualizza un elenco a sinistra della finestra delle proprietà. Ogni elemento di elenco corrisponde a una pagina delle proprietà. Il framework Visualizza frecce di scorrimento, se sono presenti più voci di elenco quelle presenti nell'area visibile dell'elenco.|  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md)   
 [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)

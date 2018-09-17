---
title: Classe CHeaderCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CHeaderCtrl
- AFXCMN/CHeaderCtrl
- AFXCMN/CHeaderCtrl::CHeaderCtrl
- AFXCMN/CHeaderCtrl::ClearAllFilters
- AFXCMN/CHeaderCtrl::ClearFilter
- AFXCMN/CHeaderCtrl::Create
- AFXCMN/CHeaderCtrl::CreateDragImage
- AFXCMN/CHeaderCtrl::CreateEx
- AFXCMN/CHeaderCtrl::DeleteItem
- AFXCMN/CHeaderCtrl::DrawItem
- AFXCMN/CHeaderCtrl::EditFilter
- AFXCMN/CHeaderCtrl::GetBitmapMargin
- AFXCMN/CHeaderCtrl::GetFocusedItem
- AFXCMN/CHeaderCtrl::GetImageList
- AFXCMN/CHeaderCtrl::GetItem
- AFXCMN/CHeaderCtrl::GetItemCount
- AFXCMN/CHeaderCtrl::GetItemDropDownRect
- AFXCMN/CHeaderCtrl::GetItemRect
- AFXCMN/CHeaderCtrl::GetOrderArray
- AFXCMN/CHeaderCtrl::GetOverflowRect
- AFXCMN/CHeaderCtrl::HitTest
- AFXCMN/CHeaderCtrl::InsertItem
- AFXCMN/CHeaderCtrl::Layout
- AFXCMN/CHeaderCtrl::OrderToIndex
- AFXCMN/CHeaderCtrl::SetBitmapMargin
- AFXCMN/CHeaderCtrl::SetFilterChangeTimeout
- AFXCMN/CHeaderCtrl::SetFocusedItem
- AFXCMN/CHeaderCtrl::SetHotDivider
- AFXCMN/CHeaderCtrl::SetImageList
- AFXCMN/CHeaderCtrl::SetItem
- AFXCMN/CHeaderCtrl::SetOrderArray
dev_langs:
- C++
helpviewer_keywords:
- CHeaderCtrl [MFC], CHeaderCtrl
- CHeaderCtrl [MFC], ClearAllFilters
- CHeaderCtrl [MFC], ClearFilter
- CHeaderCtrl [MFC], Create
- CHeaderCtrl [MFC], CreateDragImage
- CHeaderCtrl [MFC], CreateEx
- CHeaderCtrl [MFC], DeleteItem
- CHeaderCtrl [MFC], DrawItem
- CHeaderCtrl [MFC], EditFilter
- CHeaderCtrl [MFC], GetBitmapMargin
- CHeaderCtrl [MFC], GetFocusedItem
- CHeaderCtrl [MFC], GetImageList
- CHeaderCtrl [MFC], GetItem
- CHeaderCtrl [MFC], GetItemCount
- CHeaderCtrl [MFC], GetItemDropDownRect
- CHeaderCtrl [MFC], GetItemRect
- CHeaderCtrl [MFC], GetOrderArray
- CHeaderCtrl [MFC], GetOverflowRect
- CHeaderCtrl [MFC], HitTest
- CHeaderCtrl [MFC], InsertItem
- CHeaderCtrl [MFC], Layout
- CHeaderCtrl [MFC], OrderToIndex
- CHeaderCtrl [MFC], SetBitmapMargin
- CHeaderCtrl [MFC], SetFilterChangeTimeout
- CHeaderCtrl [MFC], SetFocusedItem
- CHeaderCtrl [MFC], SetHotDivider
- CHeaderCtrl [MFC], SetImageList
- CHeaderCtrl [MFC], SetItem
- CHeaderCtrl [MFC], SetOrderArray
ms.assetid: b847ac90-5fae-4a87-88e0-ca45f77b8b3b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 763849c2f13e88c11280ec7594385afd85552080
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45712738"
---
# <a name="cheaderctrl-class"></a>CHeaderCtrl (classe)
Fornisce la funzionalità del controllo intestazione comune di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CHeaderCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeaderCtrl::CHeaderCtrl](#cheaderctrl)|Costruisce un oggetto `CHeaderCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeaderCtrl::ClearAllFilters](#clearallfilters)|Cancella tutti i filtri per un controllo intestazione.|  
|[CHeaderCtrl::ClearFilter](#clearfilter)|Cancella il filtro per un controllo intestazione.|  
|[CHeaderCtrl:: Create](#create)|Crea un controllo di intestazione e lo collega a un `CHeaderCtrl` oggetto.|  
|[CHeaderCtrl::CreateDragImage](#createdragimage)|Crea una versione trasparente dell'immagine di un elemento all'interno di un controllo intestazione.|  
|[CHeaderCtrl::CreateEx](#createex)|Crea un controllo di intestazione con gli stili estesi di Windows specificati e lo collega a un `CListCtrl` oggetto.|  
|[CHeaderCtrl::DeleteItem](#deleteitem)|Elimina un elemento da un controllo intestazione.|  
|[CHeaderCtrl::DrawItem](#drawitem)|Consente di disegnare l'elemento specificato di un controllo intestazione.|  
|[CHeaderCtrl::EditFilter](#editfilter)|Inizia a modificare il filtro specificato di un controllo intestazione.|  
|[CHeaderCtrl::GetBitmapMargin](#getbitmapmargin)|Recupera la larghezza del margine di una bitmap in un controllo intestazione.|  
|[CHeaderCtrl::GetFocusedItem](#getfocuseditem)|Ottiene l'identificatore dell'elemento nel controllo header corrente con lo stato attivo.|  
|[CHeaderCtrl::GetImageList](#getimagelist)|Recupera l'handle di un elenco di immagini utilizzato per gli elementi di intestazione disegno in un controllo intestazione.|  
|[CHeaderCtrl](#getitem)|Recupera le informazioni relative a un elemento in un controllo intestazione.|  
|[CHeaderCtrl::GetItemCount](#getitemcount)|Recupera un conteggio degli elementi in un controllo intestazione.|  
|[CHeaderCtrl::GetItemDropDownRect](#getitemdropdownrect)|Ottiene le informazioni di rettangolo delimitatore per il pulsante di elenco a discesa specificato in un controllo intestazione.|  
|[CHeaderCtrl::GetItemRect](#getitemrect)|Recupera il rettangolo di delimitazione per un determinato elemento in un controllo intestazione.|  
|[CHeaderCtrl:: GetOrderArray](#getorderarray)|Recupera l'ordine da sinistra a destra degli elementi in un controllo intestazione.|  
|[CHeaderCtrl::GetOverflowRect](#getoverflowrect)|Ottiene il rettangolo di delimitazione del pulsante di overflow per il controllo intestazione corrente.|  
|[CHeaderCtrl::HitTest](#hittest)|Determina quale elemento di intestazione, se presente, si trova in un momento specificato.|  
|[CHeaderCtrl:: InsertItem](#insertitem)|Inserisce un nuovo elemento in un controllo intestazione.|  
|[CHeaderCtrl:: layout](#layout)|Recupera le dimensioni e posizione di un controllo di intestazione all'interno di un rettangolo specificato.|  
|[CHeaderCtrl::OrderToIndex](#ordertoindex)|Recupera il valore di indice per un elemento basato sul relativo ordine nel controllo header.|  
|[CHeaderCtrl::SetBitmapMargin](#setbitmapmargin)|Imposta la larghezza del margine di una bitmap in un controllo intestazione.|  
|[CHeaderCtrl::SetFilterChangeTimeout](#setfilterchangetimeout)|Imposta l'intervallo di timeout tra l'ora di una modifica viene eseguita negli attributi di filtro e la registrazione di un `HDN_FILTERCHANGE` notifica.|  
|[CHeaderCtrl::SetFocusedItem](#setfocuseditem)|Imposta lo stato attivo a un elemento intestazione specificati nel controllo intestazione corrente.|  
|[CHeaderCtrl::SetHotDivider](#sethotdivider)|Trascinare il divisore tra gli elementi di intestazione per indicare un manuale delle modifiche e selezione di un elemento di intestazione.|  
|[CHeaderCtrl:: SetImageList](#setimagelist)|Assegna un elenco di immagini a un controllo intestazione.|  
|[CHeaderCtrl::SetItem](#setitem)|Imposta gli attributi dell'elemento specificato in un controllo intestazione.|  
|[CHeaderCtrl::SetOrderArray](#setorderarray)|Imposta l'ordine da sinistra a destra degli elementi in un controllo intestazione.|  
  
## <a name="remarks"></a>Note  
 Un controllo intestazione è una finestra che viene in genere posizionata di sopra di un set di colonne di testo o numeri. Contiene un titolo per ogni colonna e può essere diviso in parti. L'utente può trascinare separatori che separano le parti per impostare la larghezza di ogni colonna. Per un'illustrazione di un controllo intestazione, vedere [controlli intestazione](/windows/desktop/Controls/header-controls).  
  
 Questo controllo (e pertanto il `CHeaderCtrl` classe) è disponibile solo per i programmi che vengono eseguiti in Windows 95 o 98 e Windows NT versione 3.51 e successive.  
  
 Funzionalità aggiunte per i controlli comuni di Windows 95/Internet Explorer 4.0 include quanto segue:  
  
-   Intestazione personalizzata ordinamento degli elementi.  
  
-   Elemento dell'intestazione trascinamento della selezione, per il riordinamento degli elementi di intestazione. Usare il HDS_DRAGDROP (stile) quando si crea il `CHeaderCtrl` oggetto.  
  
-   Testo dell'intestazione di colonna costantemente visualizzabile durante il ridimensionamento della colonna. Utilizzare lo stile HDS_FULLDRAG quando si crea un `CHeaderCtrl` oggetto.  
  
-   Intestazione l'intercettazione, evidenzia l'elemento dell'intestazione quando il puntatore è posizionato su di esso. Utilizzare lo stile HDS_HOTTRACK quando si crea il `CHeaderCtrl` oggetto.  
  
-   Supporto per l'elenco immagini. Gli elementi di intestazione possono contenere immagini archiviate in un `CImageList` oggetto o il testo.  
  
 Per altre informazioni sull'uso `CHeaderCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [usando CHeaderCtrl](../../mfc/using-cheaderctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CHeaderCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="cheaderctrl"></a>  CHeaderCtrl::CHeaderCtrl  
 Costruisce un oggetto `CHeaderCtrl`.  
  
```  
CHeaderCtrl();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#1](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_1.cpp)]  
  
##  <a name="clearallfilters"></a>  CHeaderCtrl::ClearAllFilters  
 Cancella tutti i filtri per un controllo intestazione.  
  
```  
BOOL ClearAllFilters();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento del messaggio Win32 [HDM_CLEARFILTER](/windows/desktop/Controls/hdm-clearfilter) con un valore di colonna pari a -1, come descritto nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#2](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_2.cpp)]  
  
##  <a name="clearfilter"></a>  CHeaderCtrl::ClearFilter  
 Cancella il filtro per un controllo intestazione.  
  
```  
BOOL ClearFilter(int nColumn);
```  
  
### <a name="parameters"></a>Parametri  
 *nColumn*  
 Valore della colonna che indica quali filtrare da cancellare.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento del messaggio Win32 [HDM_CLEARFILTER](/windows/desktop/Controls/hdm-clearfilter), come descritto nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#3](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_3.cpp)]  
  
##  <a name="create"></a>  CHeaderCtrl:: Create  
 Crea un controllo di intestazione e lo collega a un `CHeaderCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *dwStyle*  
 Specifica lo stile del controllo intestazione. Per una descrizione di stili del controllo intestazione, vedere [stili del controllo intestazione](/windows/desktop/Controls/header-control-styles) nel SDK di Windows.  
  
 *Rect*  
 Specifica le dimensioni e la posizione del controllo intestazione. Può essere un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura.  
  
 *pParentWnd*  
 Specifica finestra padre del controllo intestazione, in genere un `CDialog`. Non deve essere NULL.  
  
 *nID*  
 Specifica l'ID. del controllo intestazione  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione ha avuto esito positivo; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CHeaderCtrl` oggetto in due passaggi. In primo luogo, chiamare il costruttore e quindi chiamare `Create`, che crea il controllo di intestazione e lo collega al `CHeaderCtrl` oggetto.  
  
 Oltre gli stili del controllo intestazione, è possibile usare gli stili di controllo comuni seguenti per determinare le posizioni e si ridimensiona il controllo intestazione (vedere [stili dei controlli comuni](/windows/desktop/Controls/common-control-styles) per altre informazioni):  
  
- CCS_BOTTOM fa sì che il controllo per posizionarsi nella parte inferiore dell'area client della finestra padre e imposta la larghezza sia uguale all'oggetto padre larghezza della finestra.  
  
- Un confronto tra due pixel CCS_NODIVIDER impedisce evidenziare vengano disegnati nella parte superiore del controllo.  
  
- CCS_NOMOVEY determina il controllo ridimensionare e spostare stesso in senso orizzontale, ma non in verticale, in risposta a un messaggio WM_SIZE. Se viene utilizzato lo stile CCS_NORESIZE, questo stile non è applicabile. Per impostazione predefinita, i controlli intestazione hanno questo stile.  
  
- CCS_NOPARENTALIGN impedisce al controllo di spostamento automatico alla parte superiore o inferiore della finestra padre. Al contrario, il controllo mantiene la posizione all'interno della finestra padre nonostante le modifiche alle dimensioni della finestra padre. Se lo stile CCS_TOP o CCS_BOTTOM viene anche utilizzato, il valore predefinito è regolata l'altezza, ma la posizione e la larghezza rimangono invariati.  
  
- CCS_NORESIZE impedisce il controllo di usare la larghezza predefinita e l'altezza, quando si imposta la dimensione iniziale o una nuova dimensione. Il controllo Usa invece la larghezza e altezza specificati nella richiesta per la creazione o il ridimensionamento.  
  
- CCS_TOP fa sì che il controllo per posizionarsi nella parte superiore dell'area client della finestra padre e imposta la larghezza sia uguale all'oggetto padre larghezza della finestra.  
  
 È anche possibile applicare gli stili di finestra seguenti a un controllo header (vedere [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) per altre informazioni):  
  
- WS_CHILD crea una finestra figlio. Non può essere usato con lo stile WS_POPUP.  
  
- WS_VISIBLE crea una finestra che inizialmente è visibile.  
  
- WS_DISABLED crea una finestra che inizialmente è disabilitata.  
  
- WS_GROUP specifica il primo controllo di un gruppo di controlli in cui l'utente può spostarsi da un controllo alla successiva con i tasti di direzione. Tutti i controlli definiti con lo stile WS_GROUP dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con lo stile WS_GROUP termina il gruppo di stili e avvia il gruppo successivo (ovvero, un gruppo termina dove inizia il successivo).  
  
- WS_TABSTOP consente di specificare un numero qualsiasi di controlli tramite il quale l'utente può spostarsi utilizzando il tasto TAB. Il tasto TAB sposta l'utente al controllo successivo specificato dallo stile WS_TABSTOP.  
  
 Se si desidera utilizzare gli stili estesi di windows con il controllo, chiamare [CreateEx](#createex) invece di `Create`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_4.cpp)]  
  
##  <a name="createex"></a>  CHeaderCtrl::CreateEx  
 Crea un controllo (una finestra figlio) e associarlo con il `CHeaderCtrl` oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *dwExStyle*  
 Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere la *dwExStyle* parametro per [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) nel SDK di Windows.  
  
 *dwStyle*  
 Stile del controllo intestazione. Per una descrizione di stili del controllo intestazione, vedere [stili del controllo intestazione](/windows/desktop/Controls/header-control-styles) nel SDK di Windows. Visualizzare [Create](#create) per un elenco di stili aggiuntivi.  
  
 *Rect*  
 Un riferimento a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che descrive le dimensioni e posizione della finestra da creare, nelle coordinate del client *pParentWnd*.  
  
 *pParentWnd*  
 Puntatore alla finestra padre del controllo.  
  
 *nID*  
 ID di finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Uso `CreateEx` invece di `Create` per applicare stili estesi di Windows, specificati dal prefisso di stile esteso di Windows **WS_EX _**.  
  
##  <a name="createdragimage"></a>  CHeaderCtrl::CreateDragImage  
 Crea una versione trasparente dell'immagine di un elemento all'interno di un controllo intestazione.  
  
```  
CImageList* CreateDragImage(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice a base zero dell'elemento all'interno del controllo intestazione. L'immagine assegnata a questo elemento è la base per l'immagine trasparente.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto se riesce; in caso contrario, NULL. L'elenco restituito contiene solo un'immagine.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_CREATEDRAGIMAGE](/windows/desktop/Controls/hdm-createdragimage), come descritto nel SDK di Windows. Viene fornito per supportare l'intestazione elemento trascinamento della selezione.  
  
 Il `CImageList` oggetto a cui punta il puntatore restituito è un oggetto temporaneo e viene eliminata durante l'elaborazione di tempo di inattività successivo.  
  
##  <a name="deleteitem"></a>  CHeaderCtrl::DeleteItem  
 Elimina un elemento da un controllo intestazione.  
  
```  
BOOL DeleteItem(int nPos);
```  
  
### <a name="parameters"></a>Parametri  
 *nPos*  
 Specifica l'indice in base zero dell'elemento da eliminare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#5](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_5.cpp)]  
  
##  <a name="drawitem"></a>  CHeaderCtrl::DrawItem  
 Chiamato dal framework quando un aspetto visivo di un controllo cambia intestazione creato dal proprietario.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 *lpDrawItemStruct*  
 Un puntatore a un [DRAWITEMSTRUCT](/windows/desktop/api/winuser/ns-winuser-tagdrawitemstruct) struttura che descrive l'elemento da disegnare.  
  
### <a name="remarks"></a>Note  
 Il `itemAction` membro del `DRAWITEMSTRUCT` struttura definisce l'azione di disegno che deve essere eseguita.  
  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare disegno di un disegno `CHeaderCtrl` oggetto.  
  
 L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito *lpDrawItemStruct* prima di questo membro funzione termina.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_6.cpp)]  
  
##  <a name="editfilter"></a>  CHeaderCtrl::EditFilter  
 Inizia a modificare il filtro specificato di un controllo intestazione.  
  
```  
BOOL EditFilter(
    int nColumn,  
    BOOL bDiscardChanges);
```  
  
### <a name="parameters"></a>Parametri  
 *nColumn*  
 La colonna da modificare.  
  
 *bDiscardChanges*  
 Un valore che specifica come gestire l'utente di modifica delle modifiche se l'utente sta modificando il filtro quando il [HDM_EDITFILTER](/windows/desktop/Controls/hdm-editfilter) messaggio viene inviato.  
  
 Specificare TRUE per annullare le modifiche apportate dall'utente, o FALSO per accettare le modifiche apportate dall'utente.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento del messaggio Win32 [HDM_EDITFILTER](/windows/desktop/Controls/hdm-editfilter), come descritto nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#7](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_7.cpp)]  
  
##  <a name="getbitmapmargin"></a>  CHeaderCtrl::GetBitmapMargin  
 Recupera la larghezza del margine di una bitmap in un controllo intestazione.  
  
```  
int GetBitmapMargin() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza del margine di bitmap in pixel.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETBITMAPMARGIN](/windows/desktop/Controls/hdm-getbitmapmargin), come descritto nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#8](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_8.cpp)]  
  
##  <a name="getfocuseditem"></a>  CHeaderCtrl::GetFocusedItem  
 Ottiene l'indice dell'elemento che ha lo stato attivo al controllo intestazione corrente.  
  
```  
int GetFocusedItem() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice a base zero dell'elemento dell'intestazione con lo stato attivo.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [HDM_GETFOCUSEDITEM](/windows/desktop/Controls/hdm-getfocuseditem) messaggio, che è descritti nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_headerCtrl`, che viene usato per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente illustra il `SetFocusedItem` e `GetFocusedItem` metodi. In una sezione precedente del codice, viene creato un controllo di intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non è visibile. Nell'esempio seguente imposta e quindi viene confermato l'ultima intestazione di colonna come elemento di stato attivo.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_10.cpp)]  
  
##  <a name="getimagelist"></a>  CHeaderCtrl::GetImageList  
 Recupera l'handle di un elenco di immagini utilizzato per gli elementi di intestazione disegno in un controllo intestazione.  
  
```  
CImageList* GetImageList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETIMAGELIST](/windows/desktop/Controls/hdm-getimagelist), come descritto nel SDK di Windows. Il `CImageList` oggetto a cui punta il puntatore restituito è un oggetto temporaneo e viene eliminata durante l'elaborazione di tempo di inattività successivo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#9](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_11.cpp)]  
  
##  <a name="getitem"></a>  CHeaderCtrl  
 Recupera informazioni su un elemento del controllo intestazione.  
  
```  
BOOL GetItem(
    int nPos,  
    HDITEM* pHeaderItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nPos*  
 Specifica l'indice in base zero dell'elemento da recuperare.  
  
 *pHeaderItem*  
 Puntatore a un [HDITEM](/windows/desktop/api/commctrl/ns-commctrl-_hd_itema) struttura che riceve il nuovo elemento. Questa struttura viene usata con il `InsertItem` e `SetItem` funzioni membro. Tutti i flag impostati `mask` elemento assicurarsi che i valori negli elementi corrispondenti vengono compilati correttamente al momento della restituzione. Se il `mask` elemento è impostato su zero, i valori negli altri elementi di struttura sono prive di significato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#10](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_12.cpp)]  
  
##  <a name="getitemcount"></a>  CHeaderCtrl::GetItemCount  
 Recupera un conteggio degli elementi in un controllo intestazione.  
  
```  
int GetItemCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi del controllo intestazione se ha esito positivo. in caso contrario, - 1.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CHeaderCtrl::DeleteItem](#deleteitem).  
  
##  <a name="getitemdropdownrect"></a>  CHeaderCtrl::GetItemDropDownRect  
 Ottiene il rettangolo di delimitazione del pulsante elenco a discesa per un elemento di intestazione nel controllo intestazione corrente.  
  
```  
BOOL GetItemDropDownRect(
    int iItem,   
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|*iItem*|[in] Indice in base zero di un elemento di intestazione il cui tipo è ' ultimo. Per altre informazioni, vedere la `fmt` membro della [HDITEM](/windows/desktop/api/commctrl/ns-commctrl-_hd_itema) struttura.|  
|*lpRect*|[out] Puntatore a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura per ricevere le informazioni di rettangolo di delimitazione.|  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questa funzione ha esito positivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [HDM_GETITEMDROPDOWNRECT](/windows/desktop/Controls/hdm-getitemdropdownrect) messaggio, che è descritti nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_headerCtrl`, che viene usato per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente illustra il `GetItemDropDownRect` (metodo). In una sezione precedente del codice, viene creato un controllo di intestazione con cinque colonne. Nell'esempio seguente disegna un rettangolo 3D in prossimità della posizione sulla prima colonna in cui è riservata per il pulsante dell'intestazione di elenco a discesa.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#2](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_13.cpp)]  
  
##  <a name="getitemrect"></a>  CHeaderCtrl::GetItemRect  
 Recupera il rettangolo di delimitazione per un determinato elemento in un controllo intestazione.  
  
```  
BOOL GetItemRect(
    int nIndex,  
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice a base zero dell'elemento del controllo intestazione.  
  
 *lpRect*  
 Un puntatore all'indirizzo di un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceve le informazioni di rettangolo di delimitazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento del messaggio Win32 [HDM_GETITEMRECT](/windows/desktop/Controls/hdm-getitemrect), come descritto nel SDK di Windows.  
  
##  <a name="getorderarray"></a>  CHeaderCtrl:: GetOrderArray  
 Recupera l'ordine da sinistra a destra degli elementi in un controllo intestazione.  
  
```  
BOOL GetOrderArray(
    LPINT piArray,  
    int iCount);
```  
  
### <a name="parameters"></a>Parametri  
 *piArray*  
 Un puntatore all'indirizzo di un buffer che riceve i valori di indice degli elementi nel controllo intestazione, nell'ordine in cui appaiono da sinistra a destra.  
  
 *iCount*  
 Il numero di elementi del controllo intestazione. Deve essere non negativo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETORDERARRAY](/windows/desktop/Controls/hdm-getorderarray), come descritto nel SDK di Windows. Viene fornito per supportare l'ordinamento degli elementi di intestazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#11](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_14.cpp)]  
  
##  <a name="getoverflowrect"></a>  CHeaderCtrl::GetOverflowRect  
 Ottiene il rettangolo di delimitazione del pulsante di overflow del controllo intestazione corrente.  
  
```  
BOOL GetOverflowRect(LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|*lpRect*|[out] Puntatore a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceve le informazioni di rettangolo di delimitazione.|  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questa funzione ha esito positivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Se il controllo di intestazione contiene più elementi che possono essere visualizzate contemporaneamente, il controllo può visualizzare un pulsante di overflow che supporta lo scorrimento per elementi non visibili. Il controllo intestazione deve avere gli stili HDS_OVERFLOW e ' ultimo per visualizzare il pulsante di overflow. Il rettangolo di delimitazione racchiude il pulsante di overflow e si verifica solo quando viene visualizzato il pulsante di overflow. Per altre informazioni, vedere [stili del controllo intestazione](/windows/desktop/Controls/header-control-styles).  
  
 Questo metodo invia il [HDM_GETOVERFLOWRECT](/windows/desktop/Controls/hdm-getoverflowrect) messaggio, che è descritti nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_headerCtrl`, che viene usato per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente illustra il `GetOverflowRect` (metodo). In una sezione precedente del codice, viene creato un controllo di intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non è visibile. Se alcune colonne non sono visibili, controllo intestazione Disegna un pulsante di overflow. Nell'esempio seguente disegna un rettangolo 3D in prossimità della posizione del pulsante di overflow.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#3](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_15.cpp)]  
  
##  <a name="hittest"></a>  CHeaderCtrl::HitTest  
 Determina quale elemento di intestazione, se presente, si trova in un momento specificato.  
  
```  
int HitTest(LPHDHITTESTINFO* phdhti);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|*phdhti*|[in, out] Puntatore a un [HDHITTESTINFO](/windows/desktop/api/commctrl/ns-commctrl-_hd_hittestinfo) struttura che specifica il punto da testare e riceve i risultati del test.|  
  
### <a name="return-value"></a>Valore restituito  
 Indice a base zero dell'elemento dell'intestazione, se presente, in corrispondenza della posizione specificata; in caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [HDM_HITTEST](/windows/desktop/Controls/hdm-hittest) messaggio, che è descritti nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_headerCtrl`, che viene usato per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente illustra il `HitTest` (metodo). In una sezione precedente di questo esempio di codice, viene creato un controllo di intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non è visibile. In questo esempio restituisce l'indice della colonna se è visibile e -1 se la colonna non è visibile.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#1](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_16.cpp)]  
  
##  <a name="insertitem"></a>  CHeaderCtrl:: InsertItem  
 Inserisce un nuovo elemento in un controllo di intestazione in corrispondenza dell'indice specificato.  
  
```  
int InsertItem(
    int nPos,  
    HDITEM* phdi);
```  
  
### <a name="parameters"></a>Parametri  
 *nPos*  
 Indice in base zero dell'elemento da inserire. Se il valore è zero, l'elemento viene inserito all'inizio del controllo intestazione. Se il valore è maggiore del valore massimo, l'elemento viene inserito alla fine del controllo intestazione.  
  
 *phdi*  
 Puntatore a un [HDITEM](/windows/desktop/api/commctrl/ns-commctrl-_hd_itema) struttura che contiene informazioni sull'elemento da inserire.  
  
### <a name="return-value"></a>Valore restituito  
 Indice dell'elemento nuovo caso di esito positivo; in caso contrario, - 1.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#12](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_17.cpp)]  
  
##  <a name="layout"></a>  CHeaderCtrl:: layout  
 Recupera le dimensioni e posizione di un controllo di intestazione all'interno di un rettangolo specificato.  
  
```  
BOOL Layout(HDLAYOUT* pHeaderLayout);
```  
  
### <a name="parameters"></a>Parametri  
 *pHeaderLayout*  
 Puntatore a un [HDLAYOUT](/windows/desktop/api/commctrl/ns-commctrl-_hd_layout) struttura che contiene informazioni utilizzate per impostare le dimensioni e posizione di un controllo intestazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata per determinare le dimensioni appropriate per un nuovo controllo di intestazione che deve occupare del rettangolo specificato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#13](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_18.cpp)]  
  
##  <a name="ordertoindex"></a>  CHeaderCtrl::OrderToIndex  
 Recupera il valore di indice per un elemento basato sul relativo ordine nel controllo header.  
  
```  
int OrderToIndex(int nOrder) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nOrder*  
 L'ordine in base zero che l'elemento viene visualizzato nel controllo intestazione, da sinistra a destra.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento, basato sull'ordine nel controllo header. L'indice conta da sinistra a destra, a partire da 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32 [HDM_ORDERTOINDEX](https://msdn.microsoft.com/library/windows/desktop/bb775355), come descritto nel SDK di Windows. Viene fornito per supportare l'ordinamento degli elementi di intestazione.  
  
##  <a name="setbitmapmargin"></a>  CHeaderCtrl::SetBitmapMargin  
 Imposta la larghezza del margine di una bitmap in un controllo intestazione.  
  
```  
int SetBitmapMargin(int nWidth);
```  
  
### <a name="parameters"></a>Parametri  
 *nWidth*  
 Larghezza, espresse in pixel, del margine che circonda una bitmap all'interno di un controllo intestazione esistente.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza del margine di bitmap in pixel.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETBITMAPMARGIN](/windows/desktop/Controls/hdm-setbitmapmargin), come descritto nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#14](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_19.cpp)]  
  
##  <a name="setfilterchangetimeout"></a>  CHeaderCtrl::SetFilterChangeTimeout  
 Imposta l'intervallo di timeout tra l'ora di una modifica viene eseguita negli attributi di filtro e la registrazione di un' [HDN_FILTERCHANGE](/windows/desktop/Controls/hdn-filterchange) notifica.  
  
```  
int SetFilterChangeTimeout(DWORD dwTimeOut);
```  
  
### <a name="parameters"></a>Parametri  
 *dwTimeOut*  
 Valore di timeout, espresso in millisecondi.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del controllo filtro in fase di modifica.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETFILTERCHANGETIMEOUT](/windows/desktop/Controls/hdm-setfilterchangetimeout), come descritto nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#15](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_20.cpp)]  
  
##  <a name="setfocuseditem"></a>  CHeaderCtrl::SetFocusedItem  
 Imposta lo stato attivo a un elemento intestazione specificati nel controllo intestazione corrente.  
  
```  
BOOL SetFocusedItem(int iItem);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|*iItem*|[in] Indice in base zero di un elemento di intestazione.|  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [HDM_SETFOCUSEDITEM](/windows/desktop/Controls/hdm-setfocuseditem) messaggio, che è descritti nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_headerCtrl`, che viene usato per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente illustra il `SetFocusedItem` e `GetFocusedItem` metodi. In una sezione precedente del codice, viene creato un controllo di intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non è visibile. Nell'esempio seguente imposta e quindi viene confermato l'ultima intestazione di colonna come elemento di stato attivo.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_10.cpp)]  
  
##  <a name="sethotdivider"></a>  CHeaderCtrl::SetHotDivider  
 Trascinare il divisore tra gli elementi di intestazione per indicare un manuale delle modifiche e selezione di un elemento di intestazione.  
  
```  
int SetHotDivider(CPoint pt);  
int SetHotDivider(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 *pt*  
 La posizione del puntatore. Il controllo intestazione evidenzia il divisore appropriato in base alla posizione del puntatore.  
  
 *nIndex*  
 L'indice della barra di divisione evidenziato.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice della barra di divisione evidenziato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETHOTDIVIDER](/windows/desktop/Controls/hdm-sethotdivider), come descritto nel SDK di Windows. Viene fornito per supportare l'intestazione elemento trascinamento della selezione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#16](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_21.cpp)]  
  
##  <a name="setimagelist"></a>  CHeaderCtrl:: SetImageList  
 Assegna un elenco di immagini a un controllo intestazione.  
  
```  
CImageList* SetImageList(CImageList* pImageList);
```  
  
### <a name="parameters"></a>Parametri  
 *pImageList*  
 Un puntatore a un `CImageList` oggetto che contiene l'elenco di immagini da assegnare al controllo header.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CImageList](../../mfc/reference/cimagelist-class.md) oggetto precedentemente assegnato al controllo header.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETIMAGELIST](/windows/desktop/Controls/hdm-setimagelist), come descritto nel SDK di Windows. Il `CImageList` oggetto a cui punta il puntatore restituito è un oggetto temporaneo e viene eliminata durante l'elaborazione di tempo di inattività successivo.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CHeaderCtrl::GetImageList](#getimagelist).  
  
##  <a name="setitem"></a>  CHeaderCtrl::SetItem  
 Imposta gli attributi dell'elemento specificato in un controllo intestazione.  
  
```  
BOOL SetItem(
    int nPos,  
    HDITEM* pHeaderItem);
```  
  
### <a name="parameters"></a>Parametri  
 *nPos*  
 Indice a base zero dell'elemento da modificare.  
  
 *pHeaderItem*  
 Puntatore a un [HDITEM](/windows/desktop/api/commctrl/ns-commctrl-_hd_itema) struttura che contiene informazioni sul nuovo elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CHeaderCtrl](#getitem).  
  
##  <a name="setorderarray"></a>  CHeaderCtrl::SetOrderArray  
 Imposta l'ordine da sinistra a destra degli elementi in un controllo intestazione.  
  
```  
BOOL SetOrderArray(
    int iCount,  
    LPINT piArray);
```  
  
### <a name="parameters"></a>Parametri  
 *iCount*  
 Il numero di elementi del controllo intestazione.  
  
 *piArray*  
 Un puntatore all'indirizzo di un buffer che riceve i valori di indice degli elementi nel controllo intestazione, nell'ordine in cui appaiono da sinistra a destra.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32 [HDM_SETORDERARRAY](/windows/desktop/Controls/hdm-setorderarray), come descritto nel SDK di Windows. Viene fornito per supportare l'ordinamento degli elementi di intestazione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CHeaderCtrl:: GetOrderArray](#getorderarray).  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CTabCtrl](../../mfc/reference/ctabctrl-class.md)   
 [Classe CListCtrl](../../mfc/reference/clistctrl-class.md)   
 [Classe CImageList](../../mfc/reference/cimagelist-class.md)

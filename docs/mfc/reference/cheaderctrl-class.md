---
title: CHeaderCtrl (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
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
dev_langs: C++
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
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: b839096e87feee970491e393998eb4049df820af
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
|[CHeaderCtrl::ClearAllFilters](#clearallfilters)|Cancella tutti i filtri per un controllo di intestazione.|  
|[CHeaderCtrl::ClearFilter](#clearfilter)|Cancella il filtro per un controllo di intestazione.|  
|[CHeaderCtrl:: Create](#create)|Crea un controllo di intestazione e lo collega a un `CHeaderCtrl` oggetto.|  
|[CHeaderCtrl::CreateDragImage](#createdragimage)|Crea una versione trasparente dell'immagine di un elemento all'interno di un controllo di intestazione.|  
|[CHeaderCtrl::CreateEx](#createex)|Crea un controllo di intestazione con gli stili estesi di Windows specificati e lo collega a un `CListCtrl` oggetto.|  
|[CHeaderCtrl::DeleteItem](#deleteitem)|Elimina un elemento da un controllo di intestazione.|  
|[CHeaderCtrl::DrawItem](#drawitem)|Disegna l'elemento di un controllo di intestazione specificato.|  
|[CHeaderCtrl::EditFilter](#editfilter)|Inizia a modificare il filtro di un controllo di intestazione specificato.|  
|[CHeaderCtrl::GetBitmapMargin](#getbitmapmargin)|Recupera la larghezza del margine di una bitmap in un controllo header.|  
|[CHeaderCtrl::GetFocusedItem](#getfocuseditem)|Ottiene l'identificatore dell'elemento nel controllo header corrente con lo stato attivo.|  
|[CHeaderCtrl::GetImageList](#getimagelist)|Recupera l'handle di un elenco di immagini utilizzato per gli elementi di intestazione di disegno in un controllo header.|  
|[CHeaderCtrl](#getitem)|Recupera informazioni su un elemento in un controllo header.|  
|[CHeaderCtrl::GetItemCount](#getitemcount)|Recupera un numero di elementi in un controllo header.|  
|[CHeaderCtrl::GetItemDropDownRect](#getitemdropdownrect)|Ottiene le informazioni di rettangolo di delimitazione per il pulsante di menu a discesa specificato in un controllo header.|  
|[CHeaderCtrl::GetItemRect](#getitemrect)|Recupera il rettangolo di delimitazione per un determinato elemento in un controllo header.|  
|[CHeaderCtrl:: GetOrderArray](#getorderarray)|Recupera l'ordine da sinistra a destra degli elementi in un controllo header.|  
|[CHeaderCtrl::GetOverflowRect](#getoverflowrect)|Ottiene il rettangolo di delimitazione del pulsante di overflow per il controllo intestazione corrente.|  
|[CHeaderCtrl::HitTest](#hittest)|Determina quale elemento di intestazione, se presente, si trova in un punto specificato.|  
|[CHeaderCtrl:: InsertItem](#insertitem)|Inserisce un nuovo elemento in un controllo di intestazione.|  
|[CHeaderCtrl:: layout](#layout)|Recupera le dimensioni e la posizione di un controllo di intestazione all'interno di un rettangolo specificato.|  
|[CHeaderCtrl::OrderToIndex](#ordertoindex)|Recupera il valore di indice per un elemento basato sull'ordine nel controllo header.|  
|[CHeaderCtrl::SetBitmapMargin](#setbitmapmargin)|Imposta la larghezza del margine di una bitmap in un controllo header.|  
|[CHeaderCtrl::SetFilterChangeTimeout](#setfilterchangetimeout)|Imposta l'intervallo di timeout tra il tempo impiegato da una modifica sul posto negli attributi di filtro e la registrazione di un `HDN_FILTERCHANGE` notifica.|  
|[CHeaderCtrl::SetFocusedItem](#setfocuseditem)|Imposta lo stato attivo a un elemento di intestazione specificato nel controllo intestazione corrente.|  
|[CHeaderCtrl::SetHotDivider](#sethotdivider)|Trascinare il divisore tra gli elementi di intestazione per indicare un manuale di modifiche e rilascio di un elemento dell'intestazione.|  
|[CHeaderCtrl:: SetImageList](#setimagelist)|Assegna un elenco di immagini a un controllo di intestazione.|  
|[CHeaderCtrl::SetItem](#setitem)|Imposta gli attributi dell'elemento specificato in un controllo header.|  
|[CHeaderCtrl::SetOrderArray](#setorderarray)|Imposta l'ordine da sinistra a destra degli elementi in un controllo header.|  
  
## <a name="remarks"></a>Note  
 Un controllo di intestazione è una finestra che viene in genere posizionata di sopra di un set di colonne di testo o numeri. Contiene un titolo per ogni colonna, e può essere suddivisa in parti. L'utente può trascinare i separatori che separano le parti per impostare la larghezza di ogni colonna. Per un'illustrazione di un controllo di intestazione, vedere [controlli intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775238).  
  
 Questo controllo (e pertanto la `CHeaderCtrl` classe) è disponibile solo per i programmi che vengono eseguiti in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 Funzionalità aggiunta per i controlli comuni di Windows 95/Internet Explorer 4.0 include quanto segue:  
  
-   Intestazione personalizzata ordinamento degli elementi.  
  
-   Elemento dell'intestazione trascinamento della selezione, per il riordino degli elementi di intestazione. Utilizzare il `HDS_DRAGDROP` stile quando si crea il `CHeaderCtrl` oggetto.  
  
-   Testo dell'intestazione di colonna continua visibile durante il ridimensionamento di colonna. Utilizzare il `HDS_FULLDRAG` stile quando si crea un `CHeaderCtrl` oggetto.  
  
-   Intestazione l'intercettazione, evidenziando l'elemento di intestazione quando il puntatore è posizionato su di esso. Utilizzare il `HDS_HOTTRACK` stile quando si crea il `CHeaderCtrl` oggetto.  
  
-   Supporto di elenchi di immagini. Gli elementi di intestazione possono contenere le immagini archiviate un `CImageList` oggetto o il testo.  
  
 Per ulteriori informazioni sull'utilizzo `CHeaderCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CHeaderCtrl utilizzando](../../mfc/using-cheaderctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CHeaderCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="cheaderctrl"></a>CHeaderCtrl::CHeaderCtrl  
 Costruisce un oggetto `CHeaderCtrl`.  
  
```  
CHeaderCtrl();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#1](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_1.cpp)]  
  
##  <a name="clearallfilters"></a>CHeaderCtrl::ClearAllFilters  
 Cancella tutti i filtri per un controllo di intestazione.  
  
```  
BOOL ClearAllFilters();
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento del messaggio Win32 [HDM_CLEARFILTER](http://msdn.microsoft.com/library/windows/desktop/bb775306) con un valore di colonna pari a -1, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#2](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_2.cpp)]  
  
##  <a name="clearfilter"></a>CHeaderCtrl::ClearFilter  
 Cancella il filtro per un controllo di intestazione.  
  
```  
BOOL ClearFilter(int nColumn);
```  
  
### <a name="parameters"></a>Parametri  
 `nColumn`  
 Valore della colonna che indica il filtro da cancellare.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento del messaggio Win32 [HDM_CLEARFILTER](http://msdn.microsoft.com/library/windows/desktop/bb775306), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#3](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_3.cpp)]  
  
##  <a name="create"></a>CHeaderCtrl:: Create  
 Crea un controllo di intestazione e lo collega a un `CHeaderCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile del controllo intestazione. Per una descrizione di stili del controllo intestazione, vedere [stili del controllo intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775241) in Windows SDK.  
  
 `rect`  
 Specifica dimensioni e la posizione del controllo intestazione. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura.  
  
 `pParentWnd`  
 Specifica finestra padre del controllo intestazione, in genere un `CDialog`. Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID. del controllo intestazione  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione è stata completata. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CHeaderCtrl` oggetto in due passaggi. In primo luogo, chiamare il costruttore, quindi **crea**, che crea il controllo di intestazione e lo collega al `CHeaderCtrl` oggetto.  
  
 Oltre agli stili del controllo intestazione, è possibile utilizzare i seguenti stili comuni di controllo per determinare come il controllo intestazione posiziona e viene ridimensionato (vedere [stili del controllo comune](http://msdn.microsoft.com/library/windows/desktop/bb775498) per altre informazioni):  
  
- `CCS_BOTTOM`Determina il controllo di posizionarsi nella parte inferiore dell'area client della finestra padre e imposta la larghezza sia uguale all'oggetto padre larghezza della finestra.  
  
- `CCS_NODIVIDER`Impedisce l'evidenziazione due pixel da disegnare nella parte superiore del controllo.  
  
- `CCS_NOMOVEY`Il controllo ridimensionare e spostare stesso orizzontalmente, ma non in verticale, in risposta a un `WM_SIZE` messaggio. Se il `CCS_NORESIZE` viene utilizzato lo stile, non si applica questo stile. Per impostazione predefinita, i controlli intestazione hanno questo stile.  
  
- `CCS_NOPARENTALIGN`Impedisce il controllo di spostare automaticamente all'inizio o alla parte inferiore della finestra padre. Il controllo, invece, mantiene la posizione all'interno della finestra padre nonostante le modifiche alle dimensioni della finestra padre. Se il `CCS_TOP` o `CCS_BOTTOM` stile viene inoltre utilizzato, il valore predefinito è regolata l'altezza, ma la posizione e la larghezza rimangono invariati.  
  
- `CCS_NORESIZE`Impedisce il controllo di utilizzare la larghezza predefinita e l'altezza, quando si imposta la dimensione iniziale o una nuova dimensione. Al contrario, il controllo utilizza la larghezza e l'altezza specificata nella richiesta di creazione o di ridimensionamento.  
  
- `CCS_TOP`Determina il controllo di posizionarsi nella parte superiore dell'area client della finestra padre e imposta la larghezza sia uguale all'oggetto padre larghezza della finestra.  
  
 È inoltre possibile applicare gli stili di finestra seguenti a un controllo header (vedere [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) per altre informazioni):  
  
- **WS_CHILD** crea una finestra figlio. Non può essere utilizzato con il `WS_POPUP` stile.  
  
- **WS_VISIBLE** crea una finestra che inizialmente è visibile.  
  
- **WS_DISABLED** crea una finestra che inizialmente è disabilitata.  
  
- **WS_GROUP** specifica il primo controllo di un gruppo di controlli in cui l'utente può spostarsi da un controllo a quella successiva con i tasti di direzione. Tutti i controlli definiti con la **WS_GROUP** dopo il primo controllo appartengono allo stesso gruppo di stile. Il controllo successivo con la **WS_GROUP** stile termina il gruppo di stili e avvia il gruppo successivo (ovvero, un gruppo termina in cui inizia il successivo).  
  
- **WS_TABSTOP** specifica una di un numero qualsiasi di controlli tramite il quale l'utente può spostarsi con il tasto TAB. Il tasto TAB sposta l'utente al controllo successivo specificato per il **WS_TABSTOP** stile.  
  
 Se si desidera utilizzare gli stili estesi windows con il controllo, chiamare [CreateEx](#createex) anziché **crea**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_4.cpp)]  
  
##  <a name="createex"></a>CHeaderCtrl::CreateEx  
 Crea un controllo (una finestra figlio) che verrà associato il `CHeaderCtrl` oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwExStyle`  
 Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere il `dwExStyle` parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in Windows SDK.  
  
 `dwStyle`  
 Stile del controllo intestazione. Per una descrizione di stili del controllo intestazione, vedere [stili del controllo intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775241) in Windows SDK. Vedere [crea](#create) per un elenco di stili aggiuntivi.  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che descrive le dimensioni e la posizione della finestra deve essere creata, nelle coordinate del client di `pParentWnd`.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `nID`  
 ID di finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare `CreateEx` anziché **crea** per applicare stili estesi di Windows, specificati per il prefisso di stile esteso di Windows **WS_EX _**.  
  
##  <a name="createdragimage"></a>CHeaderCtrl::CreateDragImage  
 Crea una versione trasparente dell'immagine di un elemento all'interno di un controllo di intestazione.  
  
```  
CImageList* CreateDragImage(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero dell'elemento all'interno del controllo intestazione. L'immagine assegnata a questo elemento è la base per l'immagine trasparente.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto in caso di esito positivo; in caso contrario **NULL**. L'elenco restituito contiene solo un'immagine.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_CREATEDRAGIMAGE](http://msdn.microsoft.com/library/windows/desktop/bb775308), come descritto in Windows SDK. Viene fornito per supportare l'intestazione elemento trascinamento della selezione.  
  
 Il `CImageList` oggetto a cui punta il puntatore restituito è un oggetto temporaneo e viene eliminato alla successiva elaborazione di tempo di inattività.  
  
##  <a name="deleteitem"></a>CHeaderCtrl::DeleteItem  
 Elimina un elemento da un controllo di intestazione.  
  
```  
BOOL DeleteItem(int nPos);
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Specifica l'indice in base zero dell'elemento da eliminare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#5](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_5.cpp)]  
  
##  <a name="drawitem"></a>CHeaderCtrl::DrawItem  
 Chiamato dal framework quando un aspetto visivo di un controllo cambia intestazione proprietario.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDrawItemStruct`  
 Un puntatore a un [DRAWITEMSTRUCT](http://msdn.microsoft.com/library/windows/desktop/bb775802) struttura che descrive l'elemento da disegnare.  
  
### <a name="remarks"></a>Note  
 Il **itemAction** appartenente il `DRAWITEMSTRUCT` struttura definisce l'azione di disegno che deve essere eseguita.  
  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare disegno di un proprietario `CHeaderCtrl` oggetto.  
  
 L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito `lpDrawItemStruct` prima di questo membro funzione termina.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_6.cpp)]  
  
##  <a name="editfilter"></a>CHeaderCtrl::EditFilter  
 Inizia a modificare il filtro di un controllo di intestazione specificato.  
  
```  
BOOL EditFilter(
    int nColumn,  
    BOOL bDiscardChanges);
```  
  
### <a name="parameters"></a>Parametri  
 `nColumn`  
 Colonna da modificare.  
  
 `bDiscardChanges`  
 Un valore che specifica come gestire l'utente di modifica della modifiche se l'utente è in corso la modifica del filtro quando il [HDM_EDITFILTER](http://msdn.microsoft.com/library/windows/desktop/bb775312) messaggio viene inviato.  
  
 Specificare `true` per annullare le modifiche apportate dall'utente, o `false` per accettare le modifiche apportate dall'utente.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento del messaggio Win32 [HDM_EDITFILTER](http://msdn.microsoft.com/library/windows/desktop/bb775312), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#7](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_7.cpp)]  
  
##  <a name="getbitmapmargin"></a>CHeaderCtrl::GetBitmapMargin  
 Recupera la larghezza del margine di una bitmap in un controllo header.  
  
```  
int GetBitmapMargin() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza del margine di bitmap in pixel.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETBITMAPMARGIN](http://msdn.microsoft.com/library/windows/desktop/bb775314), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#8](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_8.cpp)]  
  
##  <a name="getfocuseditem"></a>CHeaderCtrl::GetFocusedItem  
 Ottiene l'indice dell'elemento che lo stato attivo al controllo di intestazione corrente.  
  
```  
int GetFocusedItem() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero dell'elemento dell'intestazione con lo stato attivo.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [HDM_GETFOCUSEDITEM](http://msdn.microsoft.com/library/windows/desktop/bb775330) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_headerCtrl`, che viene utilizzato per accedere al controllo di intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente illustra il `SetFocusedItem` e `GetFocusedItem` metodi. In una sezione precedente del codice, viene creato un controllo di intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non è visibile. Nell'esempio seguente imposta e verifica quindi l'intestazione dell'ultima colonna dell'elemento dello stato attivo.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_10.cpp)]  
  
##  <a name="getimagelist"></a>CHeaderCtrl::GetImageList  
 Recupera l'handle di un elenco di immagini utilizzato per gli elementi di intestazione di disegno in un controllo header.  
  
```  
CImageList* GetImageList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETIMAGELIST](http://msdn.microsoft.com/library/windows/desktop/bb775332), come descritto in Windows SDK. Il `CImageList` oggetto a cui punta il puntatore restituito è un oggetto temporaneo e viene eliminato alla successiva elaborazione di tempo di inattività.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#9](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_11.cpp)]  
  
##  <a name="getitem"></a>CHeaderCtrl  
 Recupera le informazioni relative a un elemento di controllo di intestazione.  
  
```  
BOOL GetItem(
    int nPos,  
    HDITEM* pHeaderItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Specifica l'indice in base zero dell'elemento da recuperare.  
  
 `pHeaderItem`  
 Puntatore a un [HDITEM](http://msdn.microsoft.com/library/windows/desktop/bb775247) struttura che riceve il nuovo elemento. Questa struttura viene usata con il `InsertItem` e `SetItem` funzioni membro. Nessun flag impostato **mask** elemento assicurarsi che i valori degli elementi corrispondenti vengono immessi correttamente al momento della restituzione. Se il **mask** viene impostato su zero, i valori degli altri elementi di struttura sono prive di significato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#10](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_12.cpp)]  
  
##  <a name="getitemcount"></a>CHeaderCtrl::GetItemCount  
 Recupera un numero di elementi in un controllo header.  
  
```  
int GetItemCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi del controllo intestazione se ha esito positivo. in caso contrario - 1.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CHeaderCtrl::DeleteItem](#deleteitem).  
  
##  <a name="getitemdropdownrect"></a>CHeaderCtrl::GetItemDropDownRect  
 Ottiene il rettangolo di delimitazione del pulsante di menu a discesa per un elemento dell'intestazione del controllo intestazione corrente.  
  
```  
BOOL GetItemDropDownRect(
    int iItem,   
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iItem`|Indice in base zero di un elemento di intestazione con lo stile `HDF_SPLITBUTTON`. Per ulteriori informazioni, vedere il `fmt` appartenente il [HDITEM](http://msdn.microsoft.com/library/windows/desktop/bb775247) struttura.|  
|[out] `lpRect`|Puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura per ricevere le informazioni sul rettangolo di delimitazione.|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se la funzione ha esito positivo. in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [HDM_GETITEMDROPDOWNRECT](http://msdn.microsoft.com/library/windows/desktop/bb775339) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_headerCtrl`, che viene utilizzato per accedere al controllo di intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente illustra il `GetItemDropDownRect` metodo. In una sezione precedente del codice, viene creato un controllo di intestazione con cinque colonne. Nell'esempio seguente disegna un rettangolo 3D in prossimità della posizione nella prima colonna in cui è riservata per il pulsante di menu a discesa dell'intestazione.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#2](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_13.cpp)]  
  
##  <a name="getitemrect"></a>CHeaderCtrl::GetItemRect  
 Recupera il rettangolo di delimitazione per un determinato elemento in un controllo header.  
  
```  
BOOL GetItemRect(
    int nIndex,  
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero dell'elemento di controllo dell'intestazione.  
  
 `lpRect`  
 Un puntatore all'indirizzo di un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceve le informazioni sul rettangolo di delimitazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento del messaggio Win32 [HDM_GETITEMRECT](http://msdn.microsoft.com/library/windows/desktop/bb775341), come descritto in Windows SDK.  
  
##  <a name="getorderarray"></a>CHeaderCtrl:: GetOrderArray  
 Recupera l'ordine da sinistra a destra degli elementi in un controllo header.  
  
```  
BOOL GetOrderArray(
    LPINT piArray,  
    int iCount);
```  
  
### <a name="parameters"></a>Parametri  
 `piArray`  
 Un puntatore all'indirizzo di un buffer che riceve i valori di indice degli elementi nel controllo header, nell'ordine in cui vengono visualizzati da sinistra a destra.  
  
 `iCount`  
 Il numero di elementi del controllo intestazione. Deve essere non negativo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETORDERARRAY](http://msdn.microsoft.com/library/windows/desktop/bb775343), come descritto in Windows SDK. Viene fornito per supportare l'ordinamento degli elementi dell'intestazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#11](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_14.cpp)]  
  
##  <a name="getoverflowrect"></a>CHeaderCtrl::GetOverflowRect  
 Ottiene il rettangolo di delimitazione del pulsante di overflow del controllo intestazione corrente.  
  
```  
BOOL GetOverflowRect(LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `lpRect`|Puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceve le informazioni sul rettangolo di delimitazione.|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se la funzione ha esito positivo. in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Se il controllo intestazione contiene più elementi possono essere visualizzati contemporaneamente, il controllo può visualizzare un pulsante di overflow scorre agli elementi che non sono visibili. Il controllo intestazione deve avere il `HDS_OVERFLOW` e `HDF_SPLITBUTTON` stili per visualizzare il pulsante di overflow. Nel rettangolo che racchiude il pulsante di overflow e si verifica solo quando viene visualizzato il pulsante di overflow. Per ulteriori informazioni, vedere [stili del controllo intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775241).  
  
 Questo metodo invia il [HDM_GETOVERFLOWRECT](http://msdn.microsoft.com/library/windows/desktop/bb775345) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_headerCtrl`, che viene utilizzato per accedere al controllo di intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente illustra il `GetOverflowRect` metodo. In una sezione precedente del codice, viene creato un controllo di intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non è visibile. Se alcune colonne non sono visibili, il controllo intestazione Disegna un pulsante di overflow. Nell'esempio seguente disegna un rettangolo 3D attorno al pulsante di overflow.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#3](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_15.cpp)]  
  
##  <a name="hittest"></a>CHeaderCtrl::HitTest  
 Determina quale elemento di intestazione, se presente, si trova in un punto specificato.  
  
```  
int HitTest(LPHDHITTESTINFO* phdhti);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in, out] `phdhti`|Puntatore a un [HDHITTESTINFO](http://msdn.microsoft.com/library/windows/desktop/bb775245) struttura che specifica il punto da verificare e riceve i risultati del test.|  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero dell'elemento dell'intestazione, se presente, in corrispondenza della posizione specificata; in caso contrario, -1.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [HDM_HITTEST](http://msdn.microsoft.com/library/windows/desktop/bb775349) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_headerCtrl`, che viene utilizzato per accedere al controllo di intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente illustra il `HitTest` metodo. In una sezione precedente di questo esempio di codice, viene creato un controllo di intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non è visibile. In questo esempio restituisce l'indice della colonna se è visibile e -1 se la colonna non è visibile.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#1](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_16.cpp)]  
  
##  <a name="insertitem"></a>CHeaderCtrl:: InsertItem  
 Inserisce un nuovo elemento in un controllo di intestazione in corrispondenza dell'indice specificato.  
  
```  
int InsertItem(
    int nPos,  
    HDITEM* phdi);
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Indice in base zero dell'elemento da inserire. Se il valore è zero, l'elemento viene inserito all'inizio del controllo intestazione. Se il valore è maggiore del valore massimo, l'elemento viene inserito alla fine del controllo intestazione.  
  
 *phdi*  
 Puntatore a un [HDITEM](http://msdn.microsoft.com/library/windows/desktop/bb775247) struttura che contiene informazioni sull'elemento da inserire.  
  
### <a name="return-value"></a>Valore restituito  
 Indice del nuovo elemento se ha esito positivo. in caso contrario - 1.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#12](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_17.cpp)]  
  
##  <a name="layout"></a>CHeaderCtrl:: layout  
 Recupera le dimensioni e la posizione di un controllo di intestazione all'interno di un rettangolo specificato.  
  
```  
BOOL Layout(HDLAYOUT* pHeaderLayout);
```  
  
### <a name="parameters"></a>Parametri  
 *pHeaderLayout*  
 Puntatore a un [HDLAYOUT](http://msdn.microsoft.com/library/windows/desktop/bb775249) struttura che contiene informazioni utilizzate per impostare le dimensioni e posizione di un controllo di intestazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata per determinare le dimensioni appropriate per un nuovo controllo di intestazione che deve occupare del rettangolo specificato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#13](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_18.cpp)]  
  
##  <a name="ordertoindex"></a>CHeaderCtrl::OrderToIndex  
 Recupera il valore di indice per un elemento basato sull'ordine nel controllo header.  
  
```  
int OrderToIndex(int nOrder) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nOrder*  
 L'ordine in base zero che verrà visualizzato l'elemento nel controllo header, da sinistra a destra.  
  
### <a name="return-value"></a>Valore restituito  
 Indice dell'elemento, basato sull'ordine nel controllo header. L'indice conta da sinistra a destra, a partire da 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32 [HDM_ORDERTOINDEX](http://msdn.microsoft.com/library/windows/desktop/bb775355), come descritto in Windows SDK. Viene fornito per supportare l'ordinamento degli elementi dell'intestazione.  
  
##  <a name="setbitmapmargin"></a>CHeaderCtrl::SetBitmapMargin  
 Imposta la larghezza del margine di una bitmap in un controllo header.  
  
```  
int SetBitmapMargin(int nWidth);
```  
  
### <a name="parameters"></a>Parametri  
 `nWidth`  
 Larghezza, espresse in pixel, del margine che circonda una bitmap all'interno di un controllo di intestazione esistente.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza del margine di bitmap in pixel.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETBITMAPMARGIN](http://msdn.microsoft.com/library/windows/desktop/bb775357), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#14](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_19.cpp)]  
  
##  <a name="setfilterchangetimeout"></a>CHeaderCtrl::SetFilterChangeTimeout  
 Imposta l'intervallo di timeout tra il tempo impiegato da una modifica sul posto negli attributi di filtro e la registrazione di un [HDN_FILTERCHANGE](http://msdn.microsoft.com/library/windows/desktop/bb775277) notifica.  
  
```  
int SetFilterChangeTimeout(DWORD dwTimeOut);
```  
  
### <a name="parameters"></a>Parametri  
 *dwTimeOut*  
 Valore di timeout in millisecondi.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del controllo filtro da modificare.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETFILTERCHANGETIMEOUT](http://msdn.microsoft.com/library/windows/desktop/bb775359), come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#15](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_20.cpp)]  
  
##  <a name="setfocuseditem"></a>CHeaderCtrl::SetFocusedItem  
 Imposta lo stato attivo a un elemento di intestazione specificato nel controllo intestazione corrente.  
  
```  
BOOL SetFocusedItem(int iItem);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iItem`|Indice in base zero di un elemento dell'intestazione.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [HDM_SETFOCUSEDITEM](http://msdn.microsoft.com/library/windows/desktop/bb775361) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_headerCtrl`, che viene utilizzato per accedere al controllo di intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente illustra il `SetFocusedItem` e `GetFocusedItem` metodi. In una sezione precedente del codice, viene creato un controllo di intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non è visibile. Nell'esempio seguente imposta e verifica quindi l'intestazione dell'ultima colonna dell'elemento dello stato attivo.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_10.cpp)]  
  
##  <a name="sethotdivider"></a>CHeaderCtrl::SetHotDivider  
 Trascinare il divisore tra gli elementi di intestazione per indicare un manuale di modifiche e rilascio di un elemento dell'intestazione.  
  
```  
int SetHotDivider(CPoint pt);  
int SetHotDivider(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `pt`  
 La posizione del puntatore. Il controllo intestazione evidenzia il divisore appropriato in base alla posizione dell'indicatore di misura.  
  
 `nIndex`  
 L'indice del divisore di evidenziato.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del divisore di evidenziato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETHOTDIVIDER](http://msdn.microsoft.com/library/windows/desktop/bb775363), come descritto in Windows SDK. Viene fornito per supportare l'intestazione elemento trascinamento della selezione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl#16](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_21.cpp)]  
  
##  <a name="setimagelist"></a>CHeaderCtrl:: SetImageList  
 Assegna un elenco di immagini a un controllo di intestazione.  
  
```  
CImageList* SetImageList(CImageList* pImageList);
```  
  
### <a name="parameters"></a>Parametri  
 `pImageList`  
 Un puntatore a un `CImageList` oggetto che contiene l'elenco di immagini da assegnare al controllo header.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al [CImageList](../../mfc/reference/cimagelist-class.md) oggetto precedentemente assegnato al controllo header.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETIMAGELIST](http://msdn.microsoft.com/library/windows/desktop/bb775365), come descritto in Windows SDK. Il `CImageList` oggetto a cui punta il puntatore restituito è un oggetto temporaneo e viene eliminato alla successiva elaborazione di tempo di inattività.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CHeaderCtrl::GetImageList](#getimagelist).  
  
##  <a name="setitem"></a>CHeaderCtrl::SetItem  
 Imposta gli attributi dell'elemento specificato in un controllo header.  
  
```  
BOOL SetItem(
    int nPos,  
    HDITEM* pHeaderItem);
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Indice in base zero dell'elemento da modificare.  
  
 `pHeaderItem`  
 Puntatore a un [HDITEM](http://msdn.microsoft.com/library/windows/desktop/bb775247) struttura contenente informazioni sul nuovo elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CHeaderCtrl](#getitem).  
  
##  <a name="setorderarray"></a>CHeaderCtrl::SetOrderArray  
 Imposta l'ordine da sinistra a destra degli elementi in un controllo header.  
  
```  
BOOL SetOrderArray(
    int iCount,  
    LPINT piArray);
```  
  
### <a name="parameters"></a>Parametri  
 `iCount`  
 Il numero di elementi del controllo intestazione.  
  
 `piArray`  
 Un puntatore all'indirizzo di un buffer che riceve i valori di indice degli elementi nel controllo header, nell'ordine in cui vengono visualizzati da sinistra a destra.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32 [HDM_SETORDERARRAY](http://msdn.microsoft.com/library/windows/desktop/bb775369), come descritto in Windows SDK. Viene fornito per supportare l'ordinamento degli elementi dell'intestazione.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CHeaderCtrl:: GetOrderArray](#getorderarray).  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CTabCtrl (classe)](../../mfc/reference/ctabctrl-class.md)   
 [CListCtrl (classe)](../../mfc/reference/clistctrl-class.md)   
 [Classe CImageList](../../mfc/reference/cimagelist-class.md)

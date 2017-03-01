---
title: CHeaderCtrl (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CHeaderCtrl
dev_langs:
- C++
helpviewer_keywords:
- CHeaderCtrl class
- Windows common controls [C++], CHeaderCtrl
- header controls, CHeaderCtrl class
ms.assetid: b847ac90-5fae-4a87-88e0-ca45f77b8b3b
caps.latest.revision: 24
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
ms.openlocfilehash: ab3cef5d72bad004832cb85ca4b1b3604eb3a18c
ms.lasthandoff: 02/24/2017

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
|[CHeaderCtrl:: Create](#create)|Crea un controllo intestazione e lo collega a un `CHeaderCtrl` oggetto.|  
|[CHeaderCtrl::CreateDragImage](#createdragimage)|Crea una versione trasparente dell'immagine di un elemento all'interno di un controllo intestazione.|  
|[CHeaderCtrl::CreateEx](#createex)|Crea un controllo header con gli stili estesi di Windows specificati e lo collega a un `CListCtrl` oggetto.|  
|[CHeaderCtrl::DeleteItem](#deleteitem)|Elimina un elemento da un controllo intestazione.|  
|[CHeaderCtrl::DrawItem](#drawitem)|Disegna l'elemento specificato di un controllo intestazione.|  
|[CHeaderCtrl::EditFilter](#editfilter)|Inizia a modificare il filtro specificato di un controllo intestazione.|  
|[CHeaderCtrl::GetBitmapMargin](#getbitmapmargin)|Recupera la larghezza del margine di una bitmap in un controllo intestazione.|  
|[CHeaderCtrl::GetFocusedItem](#getfocuseditem)|Ottiene l'identificatore dell'elemento nel controllo header corrente con lo stato attivo.|  
|[CHeaderCtrl::GetImageList](#getimagelist)|Recupera l'handle di un elenco di immagini utilizzato per gli elementi di intestazione disegno in un controllo intestazione.|  
|[CHeaderCtrl](#getitem)|Recupera le informazioni relative a un elemento in un controllo intestazione.|  
|[CHeaderCtrl::GetItemCount](#getitemcount)|Recupera un conteggio degli elementi in un controllo intestazione.|  
|[CHeaderCtrl::GetItemDropDownRect](#getitemdropdownrect)|Ottiene le informazioni di rettangolo di delimitazione per il pulsante di menu a discesa specificato in un controllo intestazione.|  
|[CHeaderCtrl::GetItemRect](#getitemrect)|Recupera il rettangolo di delimitazione per un determinato elemento in un controllo intestazione.|  
|[CHeaderCtrl:: GetOrderArray](#getorderarray)|Recupera l'ordine da sinistra a destra degli elementi in un controllo intestazione.|  
|[CHeaderCtrl::GetOverflowRect](#getoverflowrect)|Ottiene il rettangolo di delimitazione del pulsante di overflow per il controllo intestazione corrente.|  
|[CHeaderCtrl::HitTest](#hittest)|Determina quale elemento di intestazione, se presente, si trova in un punto specificato.|  
|[CHeaderCtrl:: InsertItem](#insertitem)|Inserisce un nuovo elemento in un controllo intestazione.|  
|[CHeaderCtrl:: layout](#layout)|Recupera le dimensioni e posizione di un controllo intestazione all'interno di un rettangolo specificato.|  
|[CHeaderCtrl::OrderToIndex](#ordertoindex)|Recupera il valore di indice per un elemento basato sull'ordine nel controllo intestazione.|  
|[CHeaderCtrl::SetBitmapMargin](#setbitmapmargin)|Imposta la larghezza del margine di una bitmap in un controllo intestazione.|  
|[CHeaderCtrl::SetFilterChangeTimeout](#setfilterchangetimeout)|Imposta l'intervallo di timeout tra il tempo impiegato da una modifica sul posto negli attributi di filtro e la registrazione di un `HDN_FILTERCHANGE` notifica.|  
|[CHeaderCtrl::SetFocusedItem](#setfocuseditem)|Imposta lo stato attivo a un elemento di intestazione specificato nel controllo intestazione corrente.|  
|[CHeaderCtrl::SetHotDivider](#sethotdivider)|Trascinare il divisore tra gli elementi di intestazione per indicare un manuale delle modifiche e rilascio di un elemento di intestazione.|  
|[CHeaderCtrl:: SetImageList](#setimagelist)|Assegna un elenco di immagini a un controllo intestazione.|  
|[CHeaderCtrl::SetItem](#setitem)|Imposta gli attributi dell'elemento specificato in un controllo intestazione.|  
|[CHeaderCtrl::SetOrderArray](#setorderarray)|Imposta l'ordine da sinistra a destra degli elementi in un controllo intestazione.|  
  
## <a name="remarks"></a>Note  
 Un controllo intestazione è una finestra che si trova in genere di sopra di un set di colonne di testo o numeri. Contiene un titolo per ogni colonna, e può essere diviso in parti. L'utente può trascinare i separatori che separano le parti per impostare la larghezza di ogni colonna. Per un'illustrazione di un controllo intestazione, vedere [controlli intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775238).  
  
 Questo controllo (e pertanto la `CHeaderCtrl` classe) è disponibile solo per i programmi che vengono eseguiti in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 Funzionalità aggiunta per i controlli comuni di Windows 95/Internet Explorer 4.0 include quanto segue:  
  
-   Intestazione personalizzata ordinamento degli elementi.  
  
-   Elemento dell'intestazione trascinamento della selezione, per il riordino di elementi di intestazione. Utilizzare il `HDS_DRAGDROP` stile quando si crea il `CHeaderCtrl` oggetto.  
  
-   Testo dell'intestazione di colonna costantemente visualizzabile durante il ridimensionamento di colonna. Utilizzare il `HDS_FULLDRAG` stile quando si crea un `CHeaderCtrl` oggetto.  
  
-   Intestazione intercettazione, evidenziando l'elemento di intestazione quando il puntatore è posizionato su di esso. Utilizzare il `HDS_HOTTRACK` stile quando si crea il `CHeaderCtrl` oggetto.  
  
-   Supporto di elenchi di immagini. Gli elementi di intestazione possono contenere immagini archiviate un `CImageList` oggetto o il testo.  
  
 Per ulteriori informazioni sull'utilizzo di `CHeaderCtrl`, vedere [controlli](../../mfc/controls-mfc.md) e [CHeaderCtrl utilizzando](../../mfc/using-cheaderctrl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CHeaderCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="a-namecheaderctrla--cheaderctrlcheaderctrl"></a><a name="cheaderctrl"></a>CHeaderCtrl::CHeaderCtrl  
 Costruisce un oggetto `CHeaderCtrl`.  
  
```  
CHeaderCtrl();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl n.&1;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_1.cpp)]  
  
##  <a name="a-nameclearallfiltersa--cheaderctrlclearallfilters"></a><a name="clearallfilters"></a>CHeaderCtrl::ClearAllFilters  
 Cancella tutti i filtri per un controllo intestazione.  
  
```  
BOOL ClearAllFilters();
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento del messaggio Win32 [HDM_CLEARFILTER](http://msdn.microsoft.com/library/windows/desktop/bb775306) con un valore di –&1;, come descritto nella colonna di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl n.&2;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_2.cpp)]  
  
##  <a name="a-nameclearfiltera--cheaderctrlclearfilter"></a><a name="clearfilter"></a>CHeaderCtrl::ClearFilter  
 Cancella il filtro per un controllo intestazione.  
  
```  
BOOL ClearFilter(int nColumn);
```  
  
### <a name="parameters"></a>Parametri  
 `nColumn`  
 Valore della colonna che indica il filtro da cancellare.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento del messaggio Win32 [HDM_CLEARFILTER](http://msdn.microsoft.com/library/windows/desktop/bb775306), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl n.&3;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_3.cpp)]  
  
##  <a name="a-namecreatea--cheaderctrlcreate"></a><a name="create"></a>CHeaderCtrl:: Create  
 Crea un controllo intestazione e lo collega a un `CHeaderCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile del controllo intestazione. Per una descrizione di stili del controllo intestazione, vedere [degli stili del controllo intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775241) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `rect`  
 Specifica le dimensioni e posizione del controllo intestazione. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura.  
  
 `pParentWnd`  
 Specifica finestra padre del controllo intestazione, in genere un `CDialog`. Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID. del controllo intestazione  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione è stata completata. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Costruire un `CHeaderCtrl` oggetto in due passaggi. In primo luogo, chiamare il costruttore, quindi **crea**, che crea il controllo di intestazione e lo collega a di `CHeaderCtrl` oggetto.  
  
 Oltre a stili del controllo intestazione, è possibile utilizzare i seguenti stili del controllo comune per determinare come il controllo intestazione posiziona e ridimensionato (vedere [comuni degli stili del controllo](http://msdn.microsoft.com/library/windows/desktop/bb775498) per ulteriori informazioni):  
  
- `CCS_BOTTOM`Determina il controllo di posizionarsi nella parte inferiore dell'area client della finestra padre e imposta la larghezza affinché corrisponda al padre larghezza della finestra.  
  
- `CCS_NODIVIDER`Impedisce che un'evidenziazione due pixel da disegnare nella parte superiore del controllo.  
  
- `CCS_NOMOVEY`Determina il controllo ridimensionare e spostare automaticamente in senso orizzontale, ma non in verticale, in risposta a un `WM_SIZE` messaggio. Se il `CCS_NORESIZE` viene utilizzato lo stile, questo stile non è applicabile. Per impostazione predefinita, i controlli intestazione hanno questo stile.  
  
- `CCS_NOPARENTALIGN`Impedisce il controllo di spostamento automatico per la parte superiore o inferiore della finestra padre. Invece, il controllo mantiene la posizione all'interno della finestra padre nonostante le modifiche alle dimensioni della finestra padre. Se il `CCS_TOP` o `CCS_BOTTOM` stile viene inoltre utilizzato, il valore predefinito è regolata l'altezza, ma la posizione e la larghezza rimangono invariati.  
  
- `CCS_NORESIZE`Impedisce che il controllo utilizzando la larghezza predefinita e l'altezza, quando si imposta la dimensione iniziale o una nuova dimensione. Al contrario, il controllo utilizza la larghezza e altezza specificato nella richiesta di creazione o il ridimensionamento.  
  
- `CCS_TOP`Determina il controllo di posizionarsi nella parte superiore dell'area client della finestra padre e imposta la larghezza affinché corrisponda al padre larghezza della finestra.  
  
 È inoltre possibile applicare gli stili di finestra seguenti a un controllo header (vedere [stili finestra](../../mfc/reference/window-styles.md) per ulteriori informazioni):  
  
- **WS_CHILD** crea una finestra figlio. Non può essere utilizzato con il `WS_POPUP` stile.  
  
- **WS_VISIBLE** crea una finestra che inizialmente è visibile.  
  
- **WS_DISABLED** crea una finestra che inizialmente è disabilitata.  
  
- **WS_GROUP** specifica il primo controllo di un gruppo di controlli in cui l'utente può spostarsi da un controllo alla successiva con i tasti di direzione. Tutti i controlli definiti con la **WS_GROUP** uno stile dopo il primo controllo appartengono allo stesso gruppo. Il controllo successivo con il **WS_GROUP** stile termina il gruppo di stile e avvia il gruppo successivo (ovvero, un gruppo termina in cui inizia il successivo).  
  
- **WS_TABSTOP** specifica un qualsiasi numero di controlli tramite il quale l'utente può spostarsi con il tasto TAB. Il tasto TAB sposta l'utente al controllo successivo specificato per il **WS_TABSTOP** stile.  
  
 Se si desidera utilizzare gli stili estesi con il controllo, chiamare [CreateEx](#createex) anziché **crea**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl n.&4;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_4.cpp)]  
  
##  <a name="a-namecreateexa--cheaderctrlcreateex"></a><a name="createex"></a>CHeaderCtrl::CreateEx  
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
 Specifica lo stile esteso di controllo da creare. Per un elenco degli stili estesi di Windows, vedere il `dwExStyle` parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwStyle`  
 Stile del controllo intestazione. Per una descrizione di stili del controllo intestazione, vedere [degli stili del controllo intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775241) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Vedere [crea](#create) per un elenco di stili aggiuntivi.  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) che descrive le dimensioni e posizione della finestra deve essere creata, in coordinate client della struttura `pParentWnd`.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `nID`  
 ID di finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare `CreateEx` anziché **crea** per applicare stili estesi di Windows, specificati da precedere Windows stile esteso **WS_EX _**.  
  
##  <a name="a-namecreatedragimagea--cheaderctrlcreatedragimage"></a><a name="createdragimage"></a>CHeaderCtrl::CreateDragImage  
 Crea una versione trasparente dell'immagine di un elemento all'interno di un controllo intestazione.  
  
```  
CImageList* CreateDragImage(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero dell'elemento all'interno del controllo intestazione. L'immagine assegnata a questo elemento è la base per l'immagine trasparente.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto in caso di esito positivo; in caso contrario **NULL**. L'elenco restituito contiene solo un'immagine.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_CREATEDRAGIMAGE](http://msdn.microsoft.com/library/windows/desktop/bb775308), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Viene fornito per supportare l'intestazione elemento trascinamento della selezione.  
  
 Il `CImageList` oggetto a cui punta il puntatore restituito è un oggetto temporaneo e viene eliminata in elaborazione successiva tempo di inattività.  
  
##  <a name="a-namedeleteitema--cheaderctrldeleteitem"></a><a name="deleteitem"></a>CHeaderCtrl::DeleteItem  
 Elimina un elemento da un controllo intestazione.  
  
```  
BOOL DeleteItem(int nPos);
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Specifica l'indice in base zero dell'elemento da eliminare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl n.&5;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_5.cpp)]  
  
##  <a name="a-namedrawitema--cheaderctrldrawitem"></a><a name="drawitem"></a>CHeaderCtrl::DrawItem  
 Chiamato dal framework quando un aspetto visivo di un proprietario intestazione controllo cambia.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDrawItemStruct`  
 Un puntatore a un [DRAWITEMSTRUCT](http://msdn.microsoft.com/library/windows/desktop/bb775802) struttura che descrive l'elemento da disegnare.  
  
### <a name="remarks"></a>Note  
 Il **itemAction** membro del `DRAWITEMSTRUCT` struttura definisce l'operazione di disegno che deve essere eseguita.  
  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare la creazione per un proprietario `CHeaderCtrl` oggetto.  
  
 L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito `lpDrawItemStruct` prima di questo membro funzione termina.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[6 NVC_MFC_CHeaderCtrl](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_6.cpp)]  
  
##  <a name="a-nameeditfiltera--cheaderctrleditfilter"></a><a name="editfilter"></a>CHeaderCtrl::EditFilter  
 Inizia a modificare il filtro specificato di un controllo intestazione.  
  
```  
BOOL EditFilter(
    int nColumn,  
    BOOL bDiscardChanges);
```  
  
### <a name="parameters"></a>Parametri  
 `nColumn`  
 La colonna da modificare.  
  
 `bDiscardChanges`  
 Un valore che specifica come gestire l'utente di modifica della modifiche se l'utente è in corso la modifica del filtro quando il [HDM_EDITFILTER](http://msdn.microsoft.com/library/windows/desktop/bb775312) messaggio viene inviato.  
  
 Specificare `true` per annullare le modifiche apportate dall'utente, o `false` per accettare le modifiche apportate dall'utente.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento del messaggio Win32 [HDM_EDITFILTER](http://msdn.microsoft.com/library/windows/desktop/bb775312), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl&#7;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_7.cpp)]  
  
##  <a name="a-namegetbitmapmargina--cheaderctrlgetbitmapmargin"></a><a name="getbitmapmargin"></a>CHeaderCtrl::GetBitmapMargin  
 Recupera la larghezza del margine di una bitmap in un controllo intestazione.  
  
```  
int GetBitmapMargin() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza del margine di bitmap in pixel.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETBITMAPMARGIN](http://msdn.microsoft.com/library/windows/desktop/bb775314), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl n.&8;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_8.cpp)]  
  
##  <a name="a-namegetfocuseditema--cheaderctrlgetfocuseditem"></a><a name="getfocuseditem"></a>CHeaderCtrl::GetFocusedItem  
 Ottiene l'indice dell'elemento che lo stato attivo al controllo intestazione corrente.  
  
```  
int GetFocusedItem() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero dell'elemento di intestazione con lo stato attivo.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [HDM_GETFOCUSEDITEM](http://msdn.microsoft.com/library/windows/desktop/bb775330) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile, `m_headerCtrl`, che viene utilizzato per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[6 NVC_MFC_CHeaderCtrl_s4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice riportato di seguito viene illustrato il `SetFocusedItem` e `GetFocusedItem` metodi. In una sezione precedente del codice, viene creato un controllo intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non è visibile. Nell'esempio seguente imposta e conferma l'ultima intestazione di colonna come elemento attivo.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4 n.&4;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_10.cpp)]  
  
##  <a name="a-namegetimagelista--cheaderctrlgetimagelist"></a><a name="getimagelist"></a>CHeaderCtrl::GetImageList  
 Recupera l'handle di un elenco di immagini utilizzato per gli elementi di intestazione disegno in un controllo intestazione.  
  
```  
CImageList* GetImageList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETIMAGELIST](http://msdn.microsoft.com/library/windows/desktop/bb775332), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Il `CImageList` oggetto a cui punta il puntatore restituito è un oggetto temporaneo e viene eliminata in elaborazione successiva tempo di inattività.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[9 NVC_MFC_CHeaderCtrl](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_11.cpp)]  
  
##  <a name="a-namegetitema--cheaderctrlgetitem"></a><a name="getitem"></a>CHeaderCtrl  
 Recupera informazioni su un elemento del controllo intestazione.  
  
```  
BOOL GetItem(
    int nPos,  
    HDITEM* pHeaderItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Specifica l'indice in base zero dell'elemento da recuperare.  
  
 `pHeaderItem`  
 Puntatore a un [HDITEM](http://msdn.microsoft.com/library/windows/desktop/bb775247) struttura che riceve il nuovo elemento. Questa struttura viene utilizzata con la `InsertItem` e `SetItem` funzioni membro. Nessun flag impostato **maschera** elemento assicurarsi che i valori degli elementi corrispondenti siano stati completati al momento della restituzione. Se il **mask** viene impostato su zero, i valori degli altri elementi di struttura non sono significativi.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl&#10;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_12.cpp)]  
  
##  <a name="a-namegetitemcounta--cheaderctrlgetitemcount"></a><a name="getitemcount"></a>CHeaderCtrl::GetItemCount  
 Recupera un conteggio degli elementi in un controllo intestazione.  
  
```  
int GetItemCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi del controllo intestazione se ha esito positivo. in caso contrario-1.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CHeaderCtrl::DeleteItem](#deleteitem).  
  
##  <a name="a-namegetitemdropdownrecta--cheaderctrlgetitemdropdownrect"></a><a name="getitemdropdownrect"></a>CHeaderCtrl::GetItemDropDownRect  
 Ottiene il rettangolo di delimitazione del pulsante di menu a discesa per un elemento dell'intestazione del controllo intestazione corrente.  
  
```  
BOOL GetItemDropDownRect(
    int iItem,   
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iItem`|Indice in base zero di un elemento di intestazione con lo stile `HDF_SPLITBUTTON`. Per ulteriori informazioni, vedere il `fmt` membro del [HDITEM](http://msdn.microsoft.com/library/windows/desktop/bb775247) struttura.|  
|[out] `lpRect`|Puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura per ricevere le informazioni di rettangolo di delimitazione.|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se questa funzione ha esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [HDM_GETITEMDROPDOWNRECT](http://msdn.microsoft.com/library/windows/desktop/bb775339) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile, `m_headerCtrl`, che viene utilizzato per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[6 NVC_MFC_CHeaderCtrl_s4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice riportato di seguito viene illustrato il `GetItemDropDownRect` metodo. In una sezione precedente del codice, viene creato un controllo intestazione con cinque colonne. Nell'esempio seguente disegna un rettangolo 3D in prossimità della posizione della prima colonna che è riservato per il pulsante di menu a discesa dell'intestazione.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4 n.&2;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_13.cpp)]  
  
##  <a name="a-namegetitemrecta--cheaderctrlgetitemrect"></a><a name="getitemrect"></a>CHeaderCtrl::GetItemRect  
 Recupera il rettangolo di delimitazione per un determinato elemento in un controllo intestazione.  
  
```  
BOOL GetItemRect(
    int nIndex,  
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero dell'elemento del controllo intestazione.  
  
 `lpRect`  
 Un puntatore all'indirizzo di un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceve le informazioni di rettangolo di delimitazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo implementa il comportamento del messaggio Win32 [HDM_GETITEMRECT](http://msdn.microsoft.com/library/windows/desktop/bb775341), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetorderarraya--cheaderctrlgetorderarray"></a><a name="getorderarray"></a>CHeaderCtrl:: GetOrderArray  
 Recupera l'ordine da sinistra a destra degli elementi in un controllo intestazione.  
  
```  
BOOL GetOrderArray(
    LPINT piArray,  
    int iCount);
```  
  
### <a name="parameters"></a>Parametri  
 `piArray`  
 Puntatore all'indirizzo di un buffer che riceve i valori di indice degli elementi nel controllo header, nell'ordine in cui vengono visualizzati da sinistra a destra.  
  
 `iCount`  
 Il numero di elementi del controllo intestazione. Deve essere non negativo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_GETORDERARRAY](http://msdn.microsoft.com/library/windows/desktop/bb775343), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Viene fornito per supportare l'ordinamento degli elementi di intestazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl&#11;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_14.cpp)]  
  
##  <a name="a-namegetoverflowrecta--cheaderctrlgetoverflowrect"></a><a name="getoverflowrect"></a>CHeaderCtrl::GetOverflowRect  
 Ottiene il rettangolo di delimitazione del pulsante di overflow del controllo intestazione corrente.  
  
```  
BOOL GetOverflowRect(LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `lpRect`|Puntatore a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che riceve le informazioni di rettangolo di delimitazione.|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se questa funzione ha esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Se il controllo di intestazione contiene più elementi possono essere visualizzati contemporaneamente, il controllo può visualizzare un pulsante di overflow scorre agli elementi che non sono visibili. Il controllo intestazione deve avere il `HDS_OVERFLOW` e `HDF_SPLITBUTTON` gli stili per visualizzare il pulsante di overflow. Il rettangolo di delimitazione racchiude il pulsante di overflow e si verifica solo quando viene visualizzato il pulsante di overflow. Per ulteriori informazioni, vedere [degli stili del controllo intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775241).  
  
 Questo metodo invia il [HDM_GETOVERFLOWRECT](http://msdn.microsoft.com/library/windows/desktop/bb775345) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile, `m_headerCtrl`, che viene utilizzato per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[6 NVC_MFC_CHeaderCtrl_s4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice riportato di seguito viene illustrato il `GetOverflowRect` metodo. In una sezione precedente del codice, viene creato un controllo intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non è visibile. Se alcune colonne non sono visibili, il controllo intestazione Disegna un pulsante di overflow. Nell'esempio seguente disegna un rettangolo 3D in prossimità della posizione del pulsante di overflow.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4 n.&3;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_15.cpp)]  
  
##  <a name="a-namehittesta--cheaderctrlhittest"></a><a name="hittest"></a>CHeaderCtrl::HitTest  
 Determina quale elemento di intestazione, se presente, si trova in un punto specificato.  
  
```  
int HitTest(LPHDHITTESTINFO* phdhti);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in, out] `phdhti`|Puntatore a un [HDHITTESTINFO](http://msdn.microsoft.com/library/windows/desktop/bb775245) struttura che specifica il punto di test e riceve i risultati del test.|  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero dell'elemento di intestazione, se presente, in corrispondenza della posizione specificata; in caso contrario, –&1;.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [HDM_HITTEST](http://msdn.microsoft.com/library/windows/desktop/bb775349) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile, `m_headerCtrl`, che viene utilizzato per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[6 NVC_MFC_CHeaderCtrl_s4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice riportato di seguito viene illustrato il `HitTest` metodo. In una sezione precedente di questo esempio di codice, viene creato un controllo intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non è visibile. In questo esempio restituisce l'indice della colonna se è visibile e -1 se la colonna non è visibile.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4 n.&1;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_16.cpp)]  
  
##  <a name="a-nameinsertitema--cheaderctrlinsertitem"></a><a name="insertitem"></a>CHeaderCtrl:: InsertItem  
 Inserisce un nuovo elemento in un controllo intestazione in corrispondenza dell'indice specificato.  
  
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
 Indice del nuovo elemento se ha esito positivo. in caso contrario-1.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl&#12;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_17.cpp)]  
  
##  <a name="a-namelayouta--cheaderctrllayout"></a><a name="layout"></a>CHeaderCtrl:: layout  
 Recupera le dimensioni e posizione di un controllo intestazione all'interno di un rettangolo specificato.  
  
```  
BOOL Layout(HDLAYOUT* pHeaderLayout);
```  
  
### <a name="parameters"></a>Parametri  
 *pHeaderLayout*  
 Puntatore a un [HDLAYOUT](http://msdn.microsoft.com/library/windows/desktop/bb775249) struttura che contiene informazioni utilizzate per impostare le dimensioni e posizione di un controllo intestazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata per determinare le dimensioni appropriate per un nuovo controllo di intestazione che deve occupare il rettangolo specificato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[13 NVC_MFC_CHeaderCtrl](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_18.cpp)]  
  
##  <a name="a-nameordertoindexa--cheaderctrlordertoindex"></a><a name="ordertoindex"></a>CHeaderCtrl::OrderToIndex  
 Recupera il valore di indice per un elemento basato sull'ordine nel controllo intestazione.  
  
```  
int OrderToIndex(int nOrder) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nOrder*  
 L'ordine in base zero che l'elemento viene visualizzato nel controllo header, da sinistra a destra.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento, basato sull'ordine nel controllo intestazione. L'indice conta da sinistra a destra, a partire da 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32 [HDM_ORDERTOINDEX](http://msdn.microsoft.com/library/windows/desktop/bb775355), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Viene fornito per supportare l'ordinamento degli elementi di intestazione.  
  
##  <a name="a-namesetbitmapmargina--cheaderctrlsetbitmapmargin"></a><a name="setbitmapmargin"></a>CHeaderCtrl::SetBitmapMargin  
 Imposta la larghezza del margine di una bitmap in un controllo intestazione.  
  
```  
int SetBitmapMargin(int nWidth);
```  
  
### <a name="parameters"></a>Parametri  
 `nWidth`  
 Larghezza, espresse in pixel, del margine che circonda una bitmap all'interno di un controllo intestazione esistente.  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza del margine di bitmap in pixel.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETBITMAPMARGIN](http://msdn.microsoft.com/library/windows/desktop/bb775357), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl&#14;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_19.cpp)]  
  
##  <a name="a-namesetfilterchangetimeouta--cheaderctrlsetfilterchangetimeout"></a><a name="setfilterchangetimeout"></a>CHeaderCtrl::SetFilterChangeTimeout  
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
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETFILTERCHANGETIMEOUT](http://msdn.microsoft.com/library/windows/desktop/bb775359), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl&#15;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_20.cpp)]  
  
##  <a name="a-namesetfocuseditema--cheaderctrlsetfocuseditem"></a><a name="setfocuseditem"></a>CHeaderCtrl::SetFocusedItem  
 Imposta lo stato attivo a un elemento di intestazione specificato nel controllo intestazione corrente.  
  
```  
BOOL SetFocusedItem(int iItem);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iItem`|Indice in base zero di un elemento di intestazione.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [HDM_SETFOCUSEDITEM](http://msdn.microsoft.com/library/windows/desktop/bb775361) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile, `m_headerCtrl`, che viene utilizzato per accedere al controllo intestazione corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[6 NVC_MFC_CHeaderCtrl_s4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice riportato di seguito viene illustrato il `SetFocusedItem` e `GetFocusedItem` metodi. In una sezione precedente del codice, viene creato un controllo intestazione con cinque colonne. Tuttavia, è possibile trascinare un separatore di colonna in modo che la colonna non è visibile. Nell'esempio seguente imposta e conferma l'ultima intestazione di colonna come elemento attivo.  
  
 [!code-cpp[NVC_MFC_CHeaderCtrl_s4 n.&4;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_10.cpp)]  
  
##  <a name="a-namesethotdividera--cheaderctrlsethotdivider"></a><a name="sethotdivider"></a>CHeaderCtrl::SetHotDivider  
 Trascinare il divisore tra gli elementi di intestazione per indicare un manuale delle modifiche e rilascio di un elemento di intestazione.  
  
```  
int SetHotDivider(CPoint pt);  
int SetHotDivider(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `pt`  
 La posizione del puntatore. Il controllo intestazione evidenzia il divisore appropriato in base alla posizione del puntatore.  
  
 `nIndex`  
 L'indice del divisore di evidenziato.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del divisore di evidenziato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETHOTDIVIDER](http://msdn.microsoft.com/library/windows/desktop/bb775363), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Viene fornito per supportare l'intestazione elemento trascinamento della selezione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CHeaderCtrl&#16;](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_21.cpp)]  
  
##  <a name="a-namesetimagelista--cheaderctrlsetimagelist"></a><a name="setimagelist"></a>CHeaderCtrl:: SetImageList  
 Assegna un elenco di immagini a un controllo intestazione.  
  
```  
CImageList* SetImageList(CImageList* pImageList);
```  
  
### <a name="parameters"></a>Parametri  
 `pImageList`  
 Un puntatore a un `CImageList` oggetto che contiene l'elenco di immagini da assegnare al controllo header.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CImageList](../../mfc/reference/cimagelist-class.md) oggetto precedentemente assegnato al controllo intestazione.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [HDM_SETIMAGELIST](http://msdn.microsoft.com/library/windows/desktop/bb775365), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Il `CImageList` oggetto a cui punta il puntatore restituito è un oggetto temporaneo e viene eliminata in elaborazione successiva tempo di inattività.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CHeaderCtrl::GetImageList](#getimagelist).  
  
##  <a name="a-namesetitema--cheaderctrlsetitem"></a><a name="setitem"></a>CHeaderCtrl::SetItem  
 Imposta gli attributi dell'elemento specificato in un controllo intestazione.  
  
```  
BOOL SetItem(
    int nPos,  
    HDITEM* pHeaderItem);
```  
  
### <a name="parameters"></a>Parametri  
 `nPos`  
 Indice in base zero dell'elemento da modificare.  
  
 `pHeaderItem`  
 Puntatore a un [HDITEM](http://msdn.microsoft.com/library/windows/desktop/bb775247) struttura che contiene informazioni sul nuovo elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CHeaderCtrl](#getitem).  
  
##  <a name="a-namesetorderarraya--cheaderctrlsetorderarray"></a><a name="setorderarray"></a>CHeaderCtrl::SetOrderArray  
 Imposta l'ordine da sinistra a destra degli elementi in un controllo intestazione.  
  
```  
BOOL SetOrderArray(
    int iCount,  
    LPINT piArray);
```  
  
### <a name="parameters"></a>Parametri  
 `iCount`  
 Il numero di elementi del controllo intestazione.  
  
 `piArray`  
 Puntatore all'indirizzo di un buffer che riceve i valori di indice degli elementi nel controllo header, nell'ordine in cui vengono visualizzati da sinistra a destra.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento della macro Win32 [HDM_SETORDERARRAY](http://msdn.microsoft.com/library/windows/desktop/bb775369), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Viene fornito per supportare l'ordinamento degli elementi di intestazione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CHeaderCtrl:: GetOrderArray](#getorderarray).  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CTabCtrl (classe)](../../mfc/reference/ctabctrl-class.md)   
 [CListCtrl (classe)](../../mfc/reference/clistctrl-class.md)   
 [CImageList (classe)](../../mfc/reference/cimagelist-class.md)


---
title: CListBox (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CListBox
dev_langs:
- C++
helpviewer_keywords:
- CListBox class
- list boxes
ms.assetid: 7ba3c699-c286-4cd9-9066-532c41ec05d1
caps.latest.revision: 26
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
ms.openlocfilehash: f4df970f2df35d399c0c700cf504a76482ad3f6d
ms.lasthandoff: 02/24/2017

---
# <a name="clistbox-class"></a>CListBox (classe)
Fornisce la funzionalità di una casella di riepilogo di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CListBox : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CListBox::CListBox](#clistbox)|Costruisce un oggetto `CListBox`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CListBox::AddString](#addstring)|Aggiunge una stringa di una casella di riepilogo.|  
|[CListBox::CharToItem](#chartoitem)|Eseguire l'override per fornire personalizzata `WM_CHAR` la gestione di caselle di riepilogo di disegno personalizzato che non dispone di stringhe.|  
|[CListBox::CompareItem](#compareitem)|Chiamato dal framework per determinare la posizione di un nuovo elemento in un elenco ordinato dal proprietario.|  
|[CListBox::Create](#create)|Crea la casella di riepilogo di Windows e lo collega a di `CListBox` oggetto.|  
|[CListBox::DeleteItem](#deleteitem)|Chiamato dal framework quando l'utente elimina un elemento dall'elenco a un proprietario.|  
|[CListBox::DeleteString](#deletestring)|Elimina una stringa da una casella di riepilogo.|  
|[CListBox::Dir](#dir)|Aggiunge i nomi di file, unità o entrambi dalla directory corrente a una casella di riepilogo.|  
|[CListBox::DrawItem](#drawitem)|Chiamato dal framework quando un aspetto visivo di viene modificato un elenco dal proprietario.|  
|[CListBox:: FindString](#findstring)|Cerca una stringa in una casella di riepilogo.|  
|[CListBox::FindStringExact](#findstringexact)|Trova la prima stringa di casella di riepilogo che corrisponde a una stringa specificata.|  
|[CListBox::GetAnchorIndex](#getanchorindex)|Recupera l'indice in base zero dell'elemento di ancoraggio corrente in una casella di riepilogo.|  
|[CListBox::GetCaretIndex](#getcaretindex)|Determina l'indice dell'elemento che ha il rettangolo di attivazione in una casella di riepilogo a selezione multipla.|  
|[CListBox::GetCount](#getcount)|Restituisce il numero di stringhe in una casella di riepilogo.|  
|[CListBox::GetCurSel](#getcursel)|Restituisce l'indice in base zero della stringa attualmente selezionata in una casella di riepilogo.|  
|[CListBox::GetHorizontalExtent](#gethorizontalextent)|Restituisce la larghezza in pixel che è possibile scorrere orizzontalmente una casella di riepilogo.|  
|[CListBox::GetItemData](#getitemdata)|Restituisce il valore a 32 bit associato all'elemento casella di riepilogo.|  
|[CListBox::GetItemDataPtr](#getitemdataptr)|Restituisce un puntatore a un elemento della casella di riepilogo.|  
|[CListBox::GetItemHeight](#getitemheight)|Determina l'altezza degli elementi in una casella di riepilogo.|  
|[CListBox::GetItemRect](#getitemrect)|Restituisce il rettangolo di delimitazione dell'elemento casella di riepilogo che è attualmente visualizzato.|  
|[CListBox::GetListBoxInfo](#getlistboxinfo)|Recupera il numero di elementi per ogni colonna.|  
|[CListBox::GetLocale](#getlocale)|Recupera l'identificatore delle impostazioni locali per una casella di riepilogo.|  
|[CListBox::GetSel](#getsel)|Restituisce lo stato di selezione di un elemento della casella di riepilogo.|  
|[CListBox::GetSelCount](#getselcount)|Restituisce il numero di stringhe attualmente selezionato in una casella di riepilogo a selezione multipla.|  
|[CListBox::GetSelItems](#getselitems)|Restituisce gli indici delle stringhe attualmente selezionate in una casella di riepilogo.|  
|[CListBox::GetText](#gettext)|Copia un elemento della casella di riepilogo in un buffer.|  
|[CListBox::GetTextLen](#gettextlen)|Restituisce la lunghezza in byte di un elemento della casella di riepilogo.|  
|[CListBox::GetTopIndex](#gettopindex)|Restituisce l'indice della prima stringa visibile in una casella di riepilogo.|  
|[CListBox::InitStorage](#initstorage)|Vengono preallocati i blocchi di memoria per gli elementi di casella di elenco e stringhe.|  
|[CListBox::InsertString](#insertstring)|Inserisce una stringa in una posizione specifica in una casella di riepilogo.|  
|[CListBox::ItemFromPoint](#itemfrompoint)|Restituisce l'indice dell'elemento più vicino al punto di un casella di riepilogo.|  
|[CListBox::MeasureItem](#measureitem)|Chiamato dal framework quando viene creata una casella di riepilogo di disegno personalizzato per determinare le dimensioni della casella di riepilogo.|  
|[CListBox::ResetContent](#resetcontent)|Cancella tutte le voci da una casella di riepilogo.|  
|[CListBox::SelectString](#selectstring)|Cerca e seleziona una stringa in una casella di riepilogo a selezione singola.|  
|[CListBox::SelItemRange](#selitemrange)|Seleziona o deseleziona un intervallo di stringhe in una casella di riepilogo a selezione multipla.|  
|[CListBox::SetAnchorIndex](#setanchorindex)|Imposta il punto di ancoraggio in una casella di riepilogo a selezione multipla per iniziare una selezione estesa.|  
|[CListBox::SetCaretIndex](#setcaretindex)|Imposta il rettangolo di attivazione per l'elemento in corrispondenza dell'indice specificato in una casella di riepilogo a selezione multipla.|  
|[CListBox::SetColumnWidth](#setcolumnwidth)|Imposta la larghezza della colonna di una casella di riepilogo a più colonne.|  
|[CListBox::SetCurSel](#setcursel)|Seleziona una stringa di casella di riepilogo.|  
|[CListBox:: SetHorizontalExtent](#sethorizontalextent)|Imposta la larghezza in pixel che è possibile scorrere orizzontalmente una casella di riepilogo.|  
|[CListBox::SetItemData](#setitemdata)|Imposta il valore a 32 bit associato all'elemento casella di riepilogo.|  
|[CListBox::SetItemDataPtr](#setitemdataptr)|Imposta un puntatore all'elemento casella di riepilogo.|  
|[CListBox::SetItemHeight](#setitemheight)|Imposta l'altezza degli elementi in una casella di riepilogo.|  
|[CListBox::SetLocale](#setlocale)|Imposta l'identificatore delle impostazioni locali per una casella di riepilogo.|  
|[CListBox::SetSel](#setsel)|Selezionare o deselezionare un elemento della casella di riepilogo in una casella di riepilogo a selezione multipla.|  
|[CListBox::SetTabStops](#settabstops)|Imposta le posizioni di tabulazione in una casella di riepilogo.|  
|[CListBox::SetTopIndex](#settopindex)|Imposta l'indice in base zero della prima stringa visibile in una casella di riepilogo.|  
|[CListBox::VKeyToItem](#vkeytoitem)|Eseguire l'override per fornire personalizzata `WM_KEYDOWN` gestione per le caselle di riepilogo con il **LBS_WANTKEYBOARDINPUT** set di stili.|  
  
## <a name="remarks"></a>Note  
 Una casella di riepilogo viene visualizzato un elenco di elementi, ad esempio i nomi file, che l'utente può visualizzare e selezionare.  
  
 In una casella di riepilogo a selezione singola, l'utente può selezionare un solo elemento. In una casella di riepilogo a selezione multipla, è possibile selezionare un intervallo di elementi. Quando l'utente seleziona un elemento, questo viene evidenziato e la casella di riepilogo Invia un messaggio di notifica alla finestra padre.  
  
 È possibile creare una casella di riepilogo da un modello di finestra di dialogo o direttamente nel codice. Per creare direttamente, costruire il `CListBox` dell'oggetto, quindi chiamare il [crea](#create) funzione membro per creare il controllo casella di riepilogo di Windows e associarlo a di `CListBox` oggetto. Per utilizzare una casella di riepilogo in un modello di finestra di dialogo, dichiarare una variabile di casella di riepilogo nella classe finestra di dialogo, quindi usare `DDX_Control` nella classe della finestra di dialogo `DoDataExchange` funzione per la connessione alla variabile membro per il controllo. (questo avviene automaticamente automaticamente quando si aggiunge una variabile di controllo per la classe della finestra di dialogo.)  
  
 Costruzione può essere un processo in un passaggio in una classe derivata da `CListBox`. Scrivere un costruttore per la classe derivata e chiamare **crea** all'interno del costruttore.  
  
 Se si desidera gestire i messaggi di notifica Windows inviati da una casella di riepilogo per il relativo elemento padre (in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)), aggiungere una funzione membro della mappa messaggi voce e gestore di messaggi alla classe padre per ogni messaggio.  
  
 Ogni voce nella mappa messaggi assume il formato seguente:  
  
 `ON_Notification( id, memberFxn )`  
  
 dove `id` specifica l'ID di finestra figlio del controllo casella di riepilogo l'invio della notifica e `memberFxn` è il nome della funzione membro padre scritta per gestire la notifica.  
  
 Prototipo di funzione dell'elemento padre è il seguente:  
  
 `afx_msg void memberFxn( );`  
  
 Seguito è riportato un elenco di voci della mappa messaggi potenziali e una descrizione dei casi in cui potrebbero essere inviate per l'elemento padre:  
  
- **ON_LBN_DBLCLK** l'utente fa doppio clic su una stringa in una casella di riepilogo. Solo una casella di riepilogo che dispone di [LBS_NOTIFY](../../mfc/reference/list-box-styles.md) stile invierà il messaggio di notifica.  
  
- **ON_LBN_ERRSPACE** la casella di riepilogo Impossibile allocare memoria sufficiente per soddisfare la richiesta.  
  
- **ON_LBN_KILLFOCUS** la casella di riepilogo perde lo stato attivo.  
  
- **ON_LBN_SELCANCEL** la selezione della casella di riepilogo corrente viene annullata. Questo messaggio viene inviato solo quando si dispone di una casella di riepilogo di **LBS_NOTIFY** stile.  
  
- **ON_LBN_SELCHANGE** la selezione nella casella di riepilogo è stato modificato. Questa notifica viene inviata non se la selezione di [CListBox::SetCurSel](#setcursel) funzione membro. Questa notifica si applica solo a una casella di riepilogo che dispone di **LBS_NOTIFY** stile. Il **LBN_SELCHANGE** messaggio di notifica viene inviato per una casella di riepilogo a selezione multipla ogni volta che l'utente preme un tasto di direzione, anche se la selezione viene modificata.  
  
- **ON_LBN_SETFOCUS** la casella di riepilogo riceve lo stato attivo.  
  
- **ON_WM_CHARTOITEM** una casella di riepilogo di disegno personalizzato con le stringhe di non riceve un `WM_CHAR` messaggio.  
  
- **ON_WM_VKEYTOITEM** una casella di riepilogo con il **LBS_WANTKEYBOARDINPUT** stile riceve un `WM_KEYDOWN` messaggio.  
  
 Se si crea un `CListBox` oggetto all'interno di una finestra di dialogo (tramite una risorsa finestra di dialogo), il `CListBox` oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un `CListBox` oggetto all'interno di una finestra, potrebbe essere necessario eliminare il `CListBox` oggetto. Se si crea il `CListBox` dell'oggetto nello stack, viene eliminato automaticamente. Se si crea il `CListBox` oggetto nell'heap mediante il **nuova** funzione, è necessario chiamare **eliminare** sull'oggetto per eliminarlo quando l'utente chiude la finestra padre.  
  
 Se si alloca alcuna memoria nel `CListBox` dell'oggetto, eseguire l'override di `CListBox` distruttore per l'eliminazione dell'allocazione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CListBox`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="a-nameaddstringa--clistboxaddstring"></a><a name="addstring"></a>CListBox::AddString  
 Aggiunge una stringa di una casella di riepilogo.  
  
```  
int AddString(LPCTSTR lpszItem);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszItem`  
 Punta alla stringa di terminazione null che deve essere aggiunto.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero per la stringa nella casella di riepilogo. Il valore restituito è **LB_ERR** se si verifica un errore; il valore restituito è **LB_ERRSPACE** se è disponibile spazio insufficiente per archiviare la nuova stringa.  
  
### <a name="remarks"></a>Note  
 Se la casella di riepilogo non è stata creata con il [LBS_SORT](../../mfc/reference/list-box-styles.md) stile, la stringa viene aggiunta alla fine dell'elenco. In caso contrario, la stringa viene inserita nell'elenco e l'elenco è ordinato. Se la casella di riepilogo è stata creata con il **LBS_SORT** stile ma non la [LBS_HASSTRINGS](../../mfc/reference/list-box-styles.md) stile, il framework Ordina l'elenco da una o più chiamate per il `CompareItem` funzione membro.  
  
 Utilizzare [InsertString](#insertstring) per inserire una stringa in una posizione specifica all'interno della casella di elenco.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox n.&3;](../../mfc/codesnippet/cpp/clistbox-class_1.cpp)]  
  
##  <a name="a-namechartoitema--clistboxchartoitem"></a><a name="chartoitem"></a>CListBox::CharToItem  
 Chiamato dal framework quando la proprietà elenco della finestra padre riceve un `WM_CHARTOITEM` messaggio nella casella di riepilogo.  
  
```  
virtual int CharToItem(
    UINT nKey,  
    UINT nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nKey`  
 Il codice ANSI del carattere l'utente ha digitato.  
  
 `nIndex`  
 La posizione corrente del punto di inserimento della casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce-1 o -2 per alcuna altra azione o un numero non negativo consente di specificare un indice di un elemento della casella di riepilogo in cui viene eseguita l'azione predefinita per la sequenza di tasti. L'implementazione predefinita restituisce-1.  
  
### <a name="remarks"></a>Note  
 Il `WM_CHARTOITEM` messaggio viene inviato dalla casella di riepilogo quando riceve un `WM_CHAR` messaggio, ma solo se la casella di riepilogo soddisfa tutti questi criteri:  
  
-   È una casella di riepilogo di disegno personalizzato.  
  
-   Non dispone di [LBS_HASSTRINGS](../../mfc/reference/list-box-styles.md) set di stili.  
  
-   Ha almeno un elemento.  
  
 Sarà non necessario mai chiamare questa funzione. Eseguire l'override di questa funzione per fornire la propria gestione personalizzata dei messaggi della tastiera.  
  
 Nell'override, è necessario restituire un valore per indicare l'azione di framework. Un valore restituito di-1 o -2 indica che è gestito tutti gli aspetti della selezione dell'elemento e non richiede alcuna ulteriore azione dalla casella di riepilogo. Prima di restituire-1 o -2, Impossibile impostare l'opzione o spostare il punto di inserimento o entrambi. Per impostare la selezione, utilizzare [SetCurSel](#setcursel) o [funzione membro SetSel](#setsel). Per spostare il punto di inserimento, utilizzare [SetCaretIndex](#setcaretindex).  
  
 Un valore restituito di o maggiore di 0 specifica l'indice di un elemento nella casella di riepilogo e indica che la casella di riepilogo deve eseguire l'azione predefinita per la sequenza di tasti per l'elemento specificato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox n.&4;](../../mfc/codesnippet/cpp/clistbox-class_2.cpp)]  
  
##  <a name="a-nameclistboxa--clistboxclistbox"></a><a name="clistbox"></a>CListBox::CListBox  
 Costruisce un oggetto `CListBox`.  
  
```  
CListBox();
```  
  
### <a name="remarks"></a>Note  
 Costruire un `CListBox` oggetto in due passaggi. In primo luogo, chiamare il costruttore **ClistBox** e quindi chiamare **crea**, che inizializza la casella di riepilogo di Windows e lo collega al `CListBox`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox n.&1;](../../mfc/codesnippet/cpp/clistbox-class_3.cpp)]  
  
##  <a name="a-namecompareitema--clistboxcompareitem"></a><a name="compareitem"></a>CListBox::CompareItem  
 Chiamato dal framework per determinare la posizione relativa di un nuovo elemento in un elenco ordinato dal proprietario.  
  
```  
virtual int CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpCompareItemStruct`  
 Un puntatore long a un `COMPAREITEMSTRUCT` struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Indica la posizione relativa di due elementi descritti nella [COMPAREITEMSTRUCT](../../mfc/reference/compareitemstruct-structure.md) struttura. Potrebbe essere uno dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|–1|Elemento 1 precede l'elemento 2.|  
|0|Elemento 1 e l'elemento 2 è lo stesso ordine.|  
|1|Elemento 1 ordinato alfabeticamente dopo l'elemento 2.|  
  
 Vedere [CWnd::OnCompareItem](../../mfc/reference/cwnd-class.md#oncompareitem) per una descrizione del `COMPAREITEMSTRUCT` struttura.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Se si crea una casella di riepilogo di disegno personalizzato con il **LBS_SORT** stile, è necessario eseguire l'override della funzione membro per assistere il framework per l'ordinamento dei nuovi elementi aggiunti alla casella di riepilogo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox n.&5;](../../mfc/codesnippet/cpp/clistbox-class_4.cpp)]  
  
##  <a name="a-namecreatea--clistboxcreate"></a><a name="create"></a>CListBox::Create  
 Crea la casella di riepilogo di Windows e lo collega a di `CListBox` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile della casella di riepilogo. Applicare qualsiasi combinazione di [stili casella di riepilogo](../../mfc/reference/list-box-styles.md) nella casella.  
  
 `rect`  
 Specifica le dimensioni della casella di riepilogo e la posizione. Può essere un `CRect` oggetto o una `RECT` struttura.  
  
 `pParentWnd`  
 Specifica la proprietà elenco della finestra padre (in genere un `CDialog` oggetto). Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID di controllo. della casella di riepilogo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Costruire un `CListBox` oggetto in due passaggi. In primo luogo, chiamare il costruttore, quindi **crea**, che inizializza la casella di riepilogo di Windows e lo collega a di `CListBox` oggetto.  
  
 Quando **crea** viene eseguita, Windows invia il [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize), e [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) messaggi per il controllo casella di riepilogo.  
  
 Questi messaggi vengono gestiti per impostazione predefinita il [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate), [OnCreate](../../mfc/reference/cwnd-class.md#oncreate), [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize), e [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) delle funzioni membro di `CWnd` classe di base. Per estendere la gestione dei messaggi predefinito, derivare una classe da `CListBox`, aggiungere una mappa messaggi per la nuova classe e sostituire le funzioni membro gestore messaggi precedenti. Eseguire l'override `OnCreate`, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.  
  
 Applicare la seguente istruzione [stili finestra](../../mfc/reference/window-styles.md) a un controllo casella di riepilogo.  
  
- **WS_CHILD** sempre  
  
- **WS_VISIBLE** in genere  
  
- **WS_DISABLED** raramente  
  
- **WS_VSCROLL** per aggiungere una barra di scorrimento verticale  
  
- **WS_HSCROLL** per aggiungere una barra di scorrimento orizzontale  
  
- **WS_GROUP** per raggruppare i controlli  
  
- **WS_TABSTOP** per consentire al controllo con il tasto TAB  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox n.&2;](../../mfc/codesnippet/cpp/clistbox-class_5.cpp)]  
  
##  <a name="a-namedeleteitema--clistboxdeleteitem"></a><a name="deleteitem"></a>CListBox::DeleteItem  
 Chiamato dal framework quando l'utente elimina un elemento da un proprietario `CListBox` dell'oggetto o elimina la casella di riepilogo.  
  
```  
virtual void DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDeleteItemStruct`  
 Un puntatore di tipo long a un Windows [DELETEITEMSTRUCT](../../mfc/reference/deleteitemstruct-structure.md) struttura che contiene informazioni sull'elemento eliminato.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per ridisegnare una casella di riepilogo di disegno personalizzato in base alle esigenze.  
  
 Vedere [CWnd::OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem) per una descrizione del `DELETEITEMSTRUCT` struttura.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[6 NVC_MFC_CListBox](../../mfc/codesnippet/cpp/clistbox-class_6.cpp)]  
  
##  <a name="a-namedeletestringa--clistboxdeletestring"></a><a name="deletestring"></a>CListBox::DeleteString  
 Elimina l'elemento nella posizione `nIndex` dalla casella di riepilogo.  
  
```  
int DeleteString(UINT nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero della stringa deve essere eliminato.  
  
### <a name="return-value"></a>Valore restituito  
 Conteggio delle stringhe rimanenti nell'elenco. Il valore restituito è **LB_ERR** se `nIndex` specifica un indice maggiore del numero di elementi nell'elenco.  
  
### <a name="remarks"></a>Note  
 Tutti gli elementi seguenti `nIndex` spostare verso il basso di una posizione. Ad esempio, se una casella di riepilogo contiene due elementi, se il primo elemento verrà eliminato l'elemento rimanente essere in prima posizione. `nIndex`=&0; per l'elemento nella prima posizione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#7;](../../mfc/codesnippet/cpp/clistbox-class_7.cpp)]  
  
##  <a name="a-namedira--clistboxdir"></a><a name="dir"></a>CListBox::Dir  
 Aggiunge un elenco di nomi di file, unità o entrambi a una casella di riepilogo.  
  
```  
int Dir(
    UINT attr,  
    LPCTSTR lpszWildCard);
```  
  
### <a name="parameters"></a>Parametri  
 `attr`  
 Può essere qualsiasi combinazione di `enum` i valori descritti nella **CFile::GetStatu**[s](../../mfc/reference/cfile-class.md#getstatus), o qualsiasi combinazione dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|0x0000|File può leggere e scrivere.|  
|0x0001|File può essere letto da ma non scritto.|  
|0x0002|File è nascosto e non viene visualizzato nell'elenco delle directory.|  
|0x0004|È un file di sistema.|  
|0x0010|Il nome specificato da `lpszWildCard` specifica una directory.|  
|0x0020|È stati archiviati i file.|  
|0x4000|Includere tutte le unità che corrispondono al nome specificato da `lpszWildCard`.|  
|0x8000|Flag Exclusive. Se è impostato il flag exclusive, vengono elencati solo i file del tipo specificato. In caso contrario, i file del tipo specificato vengono elencati oltre ai file "normali".|  
  
 `lpszWildCard`  
 Punta a una stringa specifica del file. La stringa può contenere i caratteri jolly (ad esempio, *.\*).  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero del nome file ultimo aggiunto all'elenco. Il valore restituito è **LB_ERR** se si verifica un errore; il valore restituito è **LB_ERRSPACE** se è disponibile per memorizzare le nuove stringhe di spazio insufficiente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox n.&8;](../../mfc/codesnippet/cpp/clistbox-class_8.cpp)]  
  
##  <a name="a-namedrawitema--clistboxdrawitem"></a><a name="drawitem"></a>CListBox::DrawItem  
 Chiamato dal framework quando un aspetto visivo di viene modificato un elenco dal proprietario.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDrawItemStruct`  
 Un puntatore long a un [DRAWITEMSTRUCT](../../mfc/reference/drawitemstruct-structure.md) struttura che contiene informazioni sul tipo di disegno necessari.  
  
### <a name="remarks"></a>Note  
 Il **itemAction** e **itemState** i membri del `DRAWITEMSTRUCT` struttura definire l'azione di disegno che deve essere eseguita.  
  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare la creazione per un proprietario `CListBox` oggetto. L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito `lpDrawItemStruct` prima di questo membro funzione termina.  
  
 Vedere [CWnd::OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) per una descrizione del `DRAWITEMSTRUCT` struttura.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[9 NVC_MFC_CListBox](../../mfc/codesnippet/cpp/clistbox-class_9.cpp)]  
  
##  <a name="a-namefindstringa--clistboxfindstring"></a><a name="findstring"></a>CListBox:: FindString  
 Trova la prima stringa in una casella di riepilogo che contiene il prefisso specificato senza modificare la selezione della casella di riepilogo.  
  
```  
int FindString(
    int nStartAfter,  
    LPCTSTR lpszItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nStartAfter`  
 Contiene l'indice in base zero dell'elemento precedente al primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua nella parte superiore della casella di riepilogo fino all'elemento specificato da `nStartAfter`. Se `nStartAfter` è -1, la casella di riepilogo intero viene eseguita la ricerca dall'inizio.  
  
 `lpszItem`  
 Punta alla stringa di terminazione null che contiene il prefisso per la ricerca. La ricerca avviene indipendente, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero dell'elemento corrispondente, o **LB_ERR** se la ricerca ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Utilizzare il [SelectString](#selectstring) funzione membro sia individuare e selezionare una stringa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#10;](../../mfc/codesnippet/cpp/clistbox-class_10.cpp)]  
  
##  <a name="a-namefindstringexacta--clistboxfindstringexact"></a><a name="findstringexact"></a>CListBox::FindStringExact  
 Trova la prima stringa di casella di riepilogo che corrisponde alla stringa specificata `lpszFind`.  
  
```  
int FindStringExact(
    int nIndexStart,  
    LPCTSTR lpszFind) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndexStart`  
 Specifica l'indice in base zero dell'elemento precedente al primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua nella parte superiore della casella di riepilogo fino all'elemento specificato da `nIndexStart`. Se `nIndexStart` è -1, la casella di riepilogo intero viene eseguita la ricerca dall'inizio.  
  
 `lpszFind`  
 Punta alla stringa di terminazione null per la ricerca. Questa stringa può contenere un nome file completo, inclusa l'estensione. Alla ricerca non viene fatta distinzione tra maiuscole e minuscole, pertanto la stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento corrispondente, o **LB_ERR** se la ricerca ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Se la casella di riepilogo è stata creata con uno stile di disegno personalizzato, ma senza il [LBS_HASSTRINGS](../../mfc/reference/list-box-styles.md) stile, la `FindStringExact` funzione membro si tenta di associare il valore di parola doppia rispetto al valore di `lpszFind`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#11;](../../mfc/codesnippet/cpp/clistbox-class_11.cpp)]  
  
##  <a name="a-namegetanchorindexa--clistboxgetanchorindex"></a><a name="getanchorindex"></a>CListBox::GetAnchorIndex  
 Recupera l'indice in base zero dell'elemento di ancoraggio corrente nella casella di riepilogo.  
  
```  
int GetAnchorIndex() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento di ancoraggio corrente, se ha esito positivo. in caso contrario **LB_ERR**.  
  
### <a name="remarks"></a>Note  
 In una casella di riepilogo a selezione multipla, l'elemento di ancoraggio è il primo o ultimo elemento in un blocco di elementi contigui.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListBox::SetAnchorIndex](#setanchorindex).  
  
##  <a name="a-namegetcaretindexa--clistboxgetcaretindex"></a><a name="getcaretindex"></a>CListBox::GetCaretIndex  
 Determina l'indice dell'elemento che ha il rettangolo di attivazione in una casella di riepilogo a selezione multipla.  
  
```  
int GetCaretIndex() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero dell'elemento che ha il rettangolo di attivazione in una casella di riepilogo. Se la casella di riepilogo è una casella di riepilogo a selezione singola, il valore restituito è l'indice dell'elemento selezionato, se presente.  
  
### <a name="remarks"></a>Note  
 L'elemento può o non può essere selezionato.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListBox::SetCaretIndex](#setcaretindex).  
  
##  <a name="a-namegetcounta--clistboxgetcount"></a><a name="getcount"></a>CListBox::GetCount  
 Recupera il numero di elementi in una casella di riepilogo.  
  
```  
int GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi nella casella di riepilogo, o **LB_ERR** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Il conteggio restituito è maggiore del valore di indice dell'ultimo elemento (l'indice è in base zero).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#12;](../../mfc/codesnippet/cpp/clistbox-class_12.cpp)]  
  
##  <a name="a-namegetcursela--clistboxgetcursel"></a><a name="getcursel"></a>CListBox::GetCurSel  
 Recupera l'indice in base zero dell'elemento attualmente selezionato, se presente, in una casella di riepilogo a selezione singola.  
  
```  
int GetCurSel() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero dell'elemento attualmente selezionato in caso di una casella di riepilogo a selezione singola. È `LB_ERR` se è attualmente selezionato alcun elemento.  
  
 In una casella di riepilogo a selezione multipla, l'indice dell'elemento con lo stato attivo.  
  
### <a name="remarks"></a>Note  
 Non chiamare `GetCurSel` per una casella di riepilogo a selezione multipla. Utilizzare [CListBox::GetSelItems](#getselitems) invece.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[13 NVC_MFC_CListBox](../../mfc/codesnippet/cpp/clistbox-class_13.cpp)]  
  
##  <a name="a-namegethorizontalextenta--clistboxgethorizontalextent"></a><a name="gethorizontalextent"></a>CListBox::GetHorizontalExtent  
 Recupera dalla casella di riepilogo la larghezza in pixel mediante il quale è possibile scorrere orizzontalmente.  
  
```  
int GetHorizontalExtent() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza di scorrimento della casella di riepilogo, in pixel.  
  
### <a name="remarks"></a>Note  
 Questa opzione è disponibile solo se la casella di riepilogo ha una barra di scorrimento orizzontale.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#14;](../../mfc/codesnippet/cpp/clistbox-class_14.cpp)]  
  
##  <a name="a-namegetitemdataa--clistboxgetitemdata"></a><a name="getitemdata"></a>CListBox::GetItemData  
 Recupera il valore di parola doppia fornita dall'applicazione associato all'elemento casella di riepilogo specificato.  
  
```  
DWORD_PTR GetItemData(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero dell'elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore a 32 bit associato all'elemento, o **LB_ERR** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Il valore di parola doppia era il `dwItemData` parametro di un [SetItemData](#setitemdata) chiamare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#15;](../../mfc/codesnippet/cpp/clistbox-class_15.cpp)]  
  
##  <a name="a-namegetitemdataptra--clistboxgetitemdataptr"></a><a name="getitemdataptr"></a>CListBox::GetItemDataPtr  
 Recupera il valore a 32 bit fornita dall'applicazione associato all'elemento casella di riepilogo specificato come un puntatore ( **void\***).  
  
```  
void* GetItemDataPtr(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero dell'elemento nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Recupera un puntatore o –&1; se si verifica un errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#16;](../../mfc/codesnippet/cpp/clistbox-class_16.cpp)]  
  
##  <a name="a-namegetitemheighta--clistboxgetitemheight"></a><a name="getitemheight"></a>CListBox::GetItemHeight  
 Determina l'altezza degli elementi in una casella di riepilogo.  
  
```  
int GetItemHeight(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero dell'elemento nella casella di riepilogo. Questo parametro viene utilizzato solo se la casella di riepilogo ha la **LBS_OWNERDRAWVARIABLE** stile; in caso contrario, dovrebbe essere impostato su 0.  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza, in pixel, degli elementi nella casella di riepilogo. Se la casella di riepilogo ha la [LBS_OWNERDRAWVARIABLE](../../mfc/reference/list-box-styles.md) stile, il valore restituito è l'altezza dell'elemento specificato da `nIndex`. Se si verifica un errore, il valore restituito è **LB_ERR**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox n.&17;](../../mfc/codesnippet/cpp/clistbox-class_17.cpp)]  
  
##  <a name="a-namegetitemrecta--clistboxgetitemrect"></a><a name="getitemrect"></a>CListBox::GetItemRect  
 Recupera le dimensioni del rettangolo di tale elemento di una casella di riepilogo limiti che è attualmente visualizzato nella finestra della casella di riepilogo.  
  
```  
int GetItemRect(
    int nIndex,  
    LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero dell'elemento.  
  
 `lpRect`  
 Specifica un puntatore long a un [struttura RECT](../../mfc/reference/rect-structure1.md) che riceve le coordinate del client di casella di riepilogo dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 **LB_ERR** se si verifica un errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#18;](../../mfc/codesnippet/cpp/clistbox-class_18.cpp)]  
  
##  <a name="a-namegetlistboxinfoa--clistboxgetlistboxinfo"></a><a name="getlistboxinfo"></a>CListBox::GetListBoxInfo  
 Recupera il numero di elementi per ogni colonna.  
  
```  
DWORD GetListBoxInfo() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi per ogni colonna del `CListBox` oggetto.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [LB_GETLISTBOXINFO](http://msdn.microsoft.com/library/windows/desktop/bb775208) dei messaggi, come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetlocalea--clistboxgetlocale"></a><a name="getlocale"></a>CListBox::GetLocale  
 Recupera le impostazioni locali utilizzate per la casella di riepilogo.  
  
```  
LCID GetLocale() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore dell'identificatore (LCID) delle impostazioni locali per le stringhe nella casella di riepilogo.  
  
### <a name="remarks"></a>Note  
 Le impostazioni locali viene utilizzata, ad esempio, per determinare l'ordinamento delle stringhe in un elenco ordinato.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListBox::SetLocale](#setlocale).  
  
##  <a name="a-namegetsela--clistboxgetsel"></a><a name="getsel"></a>CListBox::GetSel  
 Recupera lo stato di selezione di un elemento.  
  
```  
int GetSel(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Un numero positivo se l'elemento specificato è selezionato; in caso contrario, è uguale a 0. Il valore restituito è `LB_ERR` se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro funziona con entrambe le caselle di riepilogo a selezione multipla e singola.  
  
 Per recuperare l'indice dell'elemento della casella elenco attualmente selezionato, utilizzare [CListBox::GetCurSel](#getcursel).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#19; NVC_MFC_CListBox](../../mfc/codesnippet/cpp/clistbox-class_19.cpp)]  
  
##  <a name="a-namegetselcounta--clistboxgetselcount"></a><a name="getselcount"></a>CListBox::GetSelCount  
 Recupera il numero totale di elementi selezionati in una casella di riepilogo a selezione multipla.  
  
```  
int GetSelCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio degli elementi selezionati in una casella di riepilogo. Se la casella di riepilogo è una casella di riepilogo a selezione singola, il valore restituito è **LB_ERR**.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListBox::GetSelItems](#getselitems).  
  
##  <a name="a-namegetselitemsa--clistboxgetselitems"></a><a name="getselitems"></a>CListBox::GetSelItems  
 Inserisce un buffer con una matrice di valori integer che specifica i numeri degli elementi selezionati in una casella di riepilogo a selezione multipla.  
  
```  
int GetSelItems(
    int nMaxItems,  
    LPINT rgIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nMaxItems`  
 Specifica il numero massimo di elementi selezionati devono essere inseriti nel buffer i cui numeri di articolo.  
  
 `rgIndex`  
 Specifica un puntatore a un buffer sufficientemente grande per il numero di valori integer specificati da `nMaxItems`.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero effettivo di elementi inseriti nel buffer. Se la casella di riepilogo è una casella di riepilogo a selezione singola, il valore restituito è `LB_ERR`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#20;](../../mfc/codesnippet/cpp/clistbox-class_20.cpp)]  
  
##  <a name="a-namegettexta--clistboxgettext"></a><a name="gettext"></a>CListBox::GetText  
 Ottiene una stringa da una casella di riepilogo.  
  
```  
int GetText(
    int nIndex,  
    LPTSTR lpszBuffer) const;  
  
void GetText(
    int nIndex,  
    CString& rString) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero della stringa da recuperare.  
  
 `lpszBuffer`  
 Punta al buffer che riceve la stringa. Il buffer deve disporre di spazio sufficiente per la stringa e un carattere di terminazione null. Le dimensioni della stringa possono essere determinate anticipo chiamando il `GetTextLen` funzione membro.  
  
 `rString`  
 Riferimento a un oggetto `CString`.  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza (in byte) della stringa, escluso il carattere di terminazione null. Se `nIndex` non specifica un indice valido, il valore restituito è **LB_ERR**.  
  
### <a name="remarks"></a>Note  
 La seconda forma di questo membro funzione compila un `CString` oggetto con il testo della stringa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox numero&21;](../../mfc/codesnippet/cpp/clistbox-class_21.cpp)]  
  
##  <a name="a-namegettextlena--clistboxgettextlen"></a><a name="gettextlen"></a>CListBox::GetTextLen  
 Ottiene la lunghezza di una stringa in un elemento della casella di riepilogo.  
  
```  
int GetTextLen(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero della stringa.  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza della stringa in caratteri, escluso il carattere di terminazione null. Se `nIndex` non specifica un indice valido, il valore restituito è **LB_ERR**.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListBox::GetText](#gettext).  
  
##  <a name="a-namegettopindexa--clistboxgettopindex"></a><a name="gettopindex"></a>CListBox::GetTopIndex  
 Recupera l'indice in base zero del primo elemento visibile in una casella di riepilogo.  
  
```  
int GetTopIndex() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero del primo elemento visibile in una casella di riepilogo se ha esito positivo, **LB_ERR** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Inizialmente, l'elemento 0 è nella parte superiore della casella di riepilogo, ma se è necessario scorrere la casella di riepilogo, potrebbe essere un altro elemento nella parte superiore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#22;](../../mfc/codesnippet/cpp/clistbox-class_22.cpp)]  
  
##  <a name="a-nameinitstoragea--clistboxinitstorage"></a><a name="initstorage"></a>CListBox::InitStorage  
 Alloca memoria per archiviare gli elementi della casella di riepilogo.  
  
```  
int InitStorage(
    int nItems,  
    UINT nBytes);
```  
  
### <a name="parameters"></a>Parametri  
 `nItems`  
 Specifica il numero di elementi da aggiungere.  
  
 `nBytes`  
 Specifica la quantità di memoria, in byte, da allocare per le stringhe di elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, il numero massimo di elementi che la casella di riepilogo è possibile archiviare prima è necessaria una riallocazione di memoria, in caso contrario **LB_ERRSPACE**, vale a dire memoria insufficiente è disponibile.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione prima di aggiungere un numero elevato di elementi da un `CListBox`.  
  
 Questa funzione consente di velocizzare l'inizializzazione di caselle di riepilogo con un numero elevato di elementi (più di 100). Vengono preallocati i la quantità specificata di memoria in modo che le successive [AddString](#addstring), [InsertString](#insertstring), e [Dir](#dir) funzioni accettano il minor tempo possibile. È possibile utilizzare le stime per i parametri. Se sovrastima, alcuni memoria aggiuntiva allocata; Se sottovalutano, l'allocazione normale viene utilizzato per gli elementi che superano l'importo allocato precedentemente.  
  
 Solo Windows 95/98: il `nItems` parametro è limitato ai valori a 16 bit. Ciò significa che le caselle di riepilogo non possono contenere più di 32.767 elementi. Anche se il numero di elementi è limitato, le dimensioni totali degli elementi in una casella di riepilogo sono limitata solo dalla memoria disponibile.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#23;](../../mfc/codesnippet/cpp/clistbox-class_23.cpp)]  
  
##  <a name="a-nameinsertstringa--clistboxinsertstring"></a><a name="insertstring"></a>CListBox::InsertString  
 Inserisce una stringa nella casella di riepilogo.  
  
```  
int InsertString(
    int nIndex,  
    LPCTSTR lpszItem);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero della posizione per inserire la stringa. Se questo parametro è -1, la stringa viene aggiunta alla fine dell'elenco.  
  
 `lpszItem`  
 Punta a una stringa con terminazione null da inserire.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero della posizione in cui è stata inserita la stringa. Il valore restituito è **LB_ERR** se si verifica un errore; il valore restituito è **LB_ERRSPACE** se è disponibile spazio insufficiente per archiviare la nuova stringa.  
  
### <a name="remarks"></a>Note  
 A differenza di [AddString](#addstring) funzione membro, `InsertString` non causa un elenco con il [LBS_SORT](../../mfc/reference/list-box-styles.md) stile da ordinare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#24;](../../mfc/codesnippet/cpp/clistbox-class_24.cpp)]  
  
##  <a name="a-nameitemfrompointa--clistboxitemfrompoint"></a><a name="itemfrompoint"></a>CListBox::ItemFromPoint  
 Determina l'elemento della casella di riepilogo più vicino al punto specificato in `pt`.  
  
```  
UINT ItemFromPoint(
    CPoint pt,  
    BOOL& bOutside) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pt`  
 Punto per cui trovare l'elemento più vicino, specificato rispetto all'angolo superiore sinistro dell'area client della casella di riepilogo.  
  
 `bOutside`  
 Fare riferimento a un `BOOL` variabile che verrà impostato su `TRUE` se `pt` è all'esterno dell'area client dell'elemento di casella di riepilogo più vicino, `FALSE` se `pt` è all'interno dell'area client dell'elemento di casella di riepilogo più vicino.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento più vicino al punto specificato `pt`.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare questa funzione per determinare quale elemento casella di riepilogo il cursore del mouse viene spostato su.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CListBox::SetAnchorIndex](#setanchorindex).  
  
##  <a name="a-namemeasureitema--clistboxmeasureitem"></a><a name="measureitem"></a>CListBox::MeasureItem  
 Chiamato dal framework quando viene creata una casella di riepilogo con uno stile di disegno personalizzato.  
  
```  
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMeasureItemStruct`  
 Un puntatore long a un [MEASUREITEMSTRUCT](../../mfc/reference/measureitemstruct-structure.md) struttura.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro e compilare il `MEASUREITEMSTRUCT` struttura per informare Windows delle dimensioni delle caselle di riepilogo. Se la casella di riepilogo viene creata con il [LBS_OWNERDRAWVARIABLE](../../mfc/reference/list-box-styles.md) stile, il framework chiama questa funzione membro per ogni elemento nella casella di riepilogo. In caso contrario, questo membro viene chiamato una sola volta.  
  
 Per ulteriori informazioni sull'utilizzo di [LBS_OWNERDRAWFIXED](../../mfc/reference/list-box-styles.md) uno stile in una casella di riepilogo di disegno personalizzato creato con il `SubclassDlgItem` funzione membro di `CWnd`, vedere la discussione nella [14 Nota tecnica](../../mfc/tn014-custom-controls.md).  
  
 Vedere [CWnd::OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) per una descrizione di `MEASUREITEMSTRUCT` struttura **.**  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#25;](../../mfc/codesnippet/cpp/clistbox-class_25.cpp)]  
  
##  <a name="a-nameresetcontenta--clistboxresetcontent"></a><a name="resetcontent"></a>CListBox::ResetContent  
 Rimuove tutti gli elementi da una casella di riepilogo.  
  
```  
void ResetContent();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#26; NVC_MFC_CListBox](../../mfc/codesnippet/cpp/clistbox-class_26.cpp)]  
  
##  <a name="a-nameselectstringa--clistboxselectstring"></a><a name="selectstring"></a>CListBox::SelectString  
 Le ricerche per un elemento della casella di riepilogo che corrisponde alla stringa specificata e se viene trovato un elemento corrispondente, viene selezionato l'elemento.  
  
```  
int SelectString(
    int nStartAfter,  
    LPCTSTR lpszItem);
```  
  
### <a name="parameters"></a>Parametri  
 `nStartAfter`  
 Contiene l'indice in base zero dell'elemento precedente al primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua nella parte superiore della casella di riepilogo fino all'elemento specificato da `nStartAfter`. Se `nStartAfter` è -1, la casella di riepilogo intero viene eseguita la ricerca dall'inizio.  
  
 `lpszItem`  
 Punta alla stringa di terminazione null che contiene il prefisso per la ricerca. La ricerca avviene indipendente, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice dell'elemento selezionato se la ricerca ha esito positivo. Se la ricerca ha esito negativo, il valore restituito è **LB_ERR** e la selezione corrente non viene modificata.  
  
### <a name="remarks"></a>Note  
 È necessario scorrere la casella di riepilogo, se necessario, di visualizzare l'elemento selezionato.  
  
 Questa funzione membro non può essere utilizzata con una casella di riepilogo che dispone di [LBS_MULTIPLESEL](../../mfc/reference/list-box-styles.md) stile.  
  
 L'elemento viene selezionato solo se i relativi caratteri iniziali (dal punto di partenza) corrisponderanno ai caratteri nella stringa specificata da `lpszItem`.  
  
 Utilizzare il `FindString` funzione membro per trovare una stringa senza selezionare l'elemento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#27;](../../mfc/codesnippet/cpp/clistbox-class_27.cpp)]  
  
##  <a name="a-nameselitemrangea--clistboxselitemrange"></a><a name="selitemrange"></a>CListBox::SelItemRange  
 Consente di selezionare più elementi consecutivi in una casella di riepilogo a selezione multipla.  
  
```  
int SelItemRange(
    BOOL bSelect,  
    int nFirstItem,  
    int nLastItem);
```  
  
### <a name="parameters"></a>Parametri  
 `bSelect`  
 Specifica come impostare la selezione. Se `bSelect` è **TRUE**, la stringa è selezionata ed evidenziata; se **FALSE**, l'evidenziazione viene rimossa e la stringa non è più selezionata.  
  
 `nFirstItem`  
 Specifica l'indice in base zero del primo elemento da impostare.  
  
 `nLastItem`  
 Specifica l'indice in base zero dell'ultimo elemento da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 **LB_ERR** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro solo con le caselle di riepilogo a selezione multipla. Se è necessario selezionare un solo elemento in una casella di riepilogo a selezione multipla, vale a dire se `nFirstItem` è uguale a `nLastItem` , chiamare il [funzione membro SetSel](#setsel) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[28 NVC_MFC_CListBox](../../mfc/codesnippet/cpp/clistbox-class_28.cpp)]  
  
##  <a name="a-namesetanchorindexa--clistboxsetanchorindex"></a><a name="setanchorindex"></a>CListBox::SetAnchorIndex  
 Imposta il punto di ancoraggio in una casella di riepilogo a selezione multipla per iniziare una selezione estesa.  
  
```  
void SetAnchorIndex(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero dell'elemento casella di riepilogo che sarà l'ancoraggio.  
  
### <a name="remarks"></a>Note  
 In una casella di riepilogo a selezione multipla, l'elemento di ancoraggio è il primo o ultimo elemento in un blocco di elementi contigui.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#29;](../../mfc/codesnippet/cpp/clistbox-class_29.cpp)]  
  
##  <a name="a-namesetcaretindexa--clistboxsetcaretindex"></a><a name="setcaretindex"></a>CListBox::SetCaretIndex  
 Imposta il rettangolo di attivazione per l'elemento in corrispondenza dell'indice specificato in una casella di riepilogo a selezione multipla.  
  
```  
int SetCaretIndex(
    int nIndex,  
    BOOL bScroll = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero dell'elemento per ricevere il rettangolo di attivazione nella casella di riepilogo.  
  
 *bScroll*  
 Se questo valore è 0, l'elemento è necessario scorrere fino a quando non è completamente visibile. Se questo valore non è 0, l'elemento è necessario scorrere fino a quando non è presente almeno parzialmente visibile.  
  
### <a name="return-value"></a>Valore restituito  
 **LB_ERR** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Se l'elemento non è visibile, che viene scorso nella visualizzazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#30; NVC_MFC_CListBox](../../mfc/codesnippet/cpp/clistbox-class_30.cpp)]  
  
##  <a name="a-namesetcolumnwidtha--clistboxsetcolumnwidth"></a><a name="setcolumnwidth"></a>CListBox::SetColumnWidth  
 Imposta la larghezza in pixel di tutte le colonne in una casella di riepilogo a più colonne (creata con il [LBS_MULTICOLUMN](../../mfc/reference/list-box-styles.md) stile).  
  
```  
void SetColumnWidth(int cxWidth);
```  
  
### <a name="parameters"></a>Parametri  
 `cxWidth`  
 Specifica la larghezza in pixel di tutte le colonne.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#31;](../../mfc/codesnippet/cpp/clistbox-class_31.cpp)]  
  
##  <a name="a-namesetcursela--clistboxsetcursel"></a><a name="setcursel"></a>CListBox::SetCurSel  
 Seleziona una stringa e scorre nella visualizzazione, se necessario.  
  
```  
int SetCurSel(int nSelect);
```  
  
### <a name="parameters"></a>Parametri  
 `nSelect`  
 Specifica l'indice in base zero della stringa da selezionare. Se `nSelect` è -1, la casella di riepilogo è impostata su non dispone di alcuna selezione.  
  
### <a name="return-value"></a>Valore restituito  
 `LB_ERR`Se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Quando è selezionata la nuova stringa, la casella di riepilogo rimuove l'evidenziazione della stringa selezionata in precedenza.  
  
 Utilizzare questa funzione membro solo con le caselle di riepilogo a selezione singola.  
  
 Per impostare o rimuovere una selezione in una casella di riepilogo a selezione multipla, utilizzare [CListBox::SetSel](#setsel).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox n.&32;](../../mfc/codesnippet/cpp/clistbox-class_32.cpp)]  
  
##  <a name="a-namesethorizontalextenta--clistboxsethorizontalextent"></a><a name="sethorizontalextent"></a>CListBox:: SetHorizontalExtent  
 Imposta la larghezza, in pixel, che è possibile far scorrere orizzontalmente una casella di riepilogo.  
  
```  
void SetHorizontalExtent(int cxExtent);
```  
  
### <a name="parameters"></a>Parametri  
 *cxExtent*  
 Specifica il numero di pixel che è possibile far scorrere orizzontalmente la casella di riepilogo.  
  
### <a name="remarks"></a>Note  
 Se le dimensioni della casella di riepilogo sono minore di questo valore, la barra di scorrimento orizzontale scorre orizzontalmente gli elementi nella casella di riepilogo. Se la casella di riepilogo è di grandi dimensioni o maggiore di tale valore, viene nascosta la barra di scorrimento orizzontale.  
  
 Per rispondere a una chiamata a `SetHorizontalExtent`, la casella di riepilogo sono stata definita con la [WS_HSCROLL](../../mfc/reference/window-styles.md) stile.  
  
 Questa funzione membro non è utile per le caselle di riepilogo a più colonne. Per le caselle di riepilogo a più colonne, chiamare il `SetColumnWidth` funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox n.&33;](../../mfc/codesnippet/cpp/clistbox-class_33.cpp)]  
  
##  <a name="a-namesetitemdataa--clistboxsetitemdata"></a><a name="setitemdata"></a>CListBox::SetItemData  
 Imposta un valore a 32 bit associato all'elemento specificato in una casella di riepilogo.  
  
```  
int SetItemData(
    int nIndex,  
    DWORD_PTR dwItemData);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero dell'elemento.  
  
 `dwItemData`  
 Specifica il valore da associare all'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 **LB_ERR** se si verifica un errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#34;](../../mfc/codesnippet/cpp/clistbox-class_34.cpp)]  
  
##  <a name="a-namesetitemdataptra--clistboxsetitemdataptr"></a><a name="setitemdataptr"></a>CListBox::SetItemDataPtr  
 Imposta il valore a 32 bit associato all'elemento specificato in una casella di riepilogo sia il puntatore specificato ( **void\***).  
  
```  
int SetItemDataPtr(
    int nIndex,  
    void* pData);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero dell'elemento.  
  
 `pData`  
 Specifica il puntatore del mouse per essere associato all'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 **LB_ERR** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Questo puntatore rimane valido per tutta la durata della casella di riepilogo, anche se la relativa posizione all'interno della casella di elenco può variare in elementi vengono aggiunti o rimossi. Di conseguenza, l'indice dell'elemento all'interno della casella è possibile modificare, ma il puntatore rimane affidabile.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#35;](../../mfc/codesnippet/cpp/clistbox-class_35.cpp)]  
  
##  <a name="a-namesetitemheighta--clistboxsetitemheight"></a><a name="setitemheight"></a>CListBox::SetItemHeight  
 Imposta l'altezza degli elementi in una casella di riepilogo.  
  
```  
int SetItemHeight(
    int nIndex,  
    UINT cyItemHeight);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero dell'elemento nella casella di riepilogo. Questo parametro viene utilizzato solo se la casella di riepilogo ha la **LBS_OWNERDRAWVARIABLE** stile; in caso contrario, dovrebbe essere impostato su 0.  
  
 `cyItemHeight`  
 Specifica l'altezza, in pixel, dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 **LB_ERR** se l'indice o l'altezza non è valido.  
  
### <a name="remarks"></a>Note  
 Se la casella di riepilogo ha la [LBS_OWNERDRAWVARIABLE](../../mfc/reference/list-box-styles.md) stile, la funzione imposta l'altezza dell'elemento specificato da `nIndex`. In caso contrario, la funzione imposta l'altezza di tutti gli elementi nella casella di riepilogo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#36;](../../mfc/codesnippet/cpp/clistbox-class_36.cpp)]  
  
##  <a name="a-namesetlocalea--clistboxsetlocale"></a><a name="setlocale"></a>CListBox::SetLocale  
 Imposta l'identificatore delle impostazioni locali per questa casella di riepilogo.  
  
```  
LCID SetLocale(LCID nNewLocale);
```  
  
### <a name="parameters"></a>Parametri  
 `nNewLocale`  
 Il nuovo valore dell'identificatore (LCID) delle impostazioni locali da impostare per la casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore dell'identificatore (LCID) delle impostazioni locali precedenti per questa casella di riepilogo.  
  
### <a name="remarks"></a>Note  
 Se **SetLocale** non viene chiamato, il valore predefinito delle impostazioni locali vengano ottenuta dal sistema. Queste impostazioni locali predefinite del sistema possono essere modificata da Pannello di controllo applicazione internazionali (o internazionale).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#37;](../../mfc/codesnippet/cpp/clistbox-class_37.cpp)]  
  
##  <a name="a-namesetsela--clistboxsetsel"></a><a name="setsel"></a>CListBox::SetSel  
 Seleziona una stringa in una casella di riepilogo a selezione multipla.  
  
```  
int SetSel(
    int nIndex,  
    BOOL bSelect = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Contiene l'indice in base zero della stringa da impostare. Se -1, la selezione viene aggiunto o rimosso da tutte le stringhe, a seconda del valore di `bSelect`.  
  
 `bSelect`  
 Specifica come impostare la selezione. Se `bSelect` è `TRUE`, la stringa è selezionata ed evidenziata; se `FALSE`, l'evidenziazione viene rimossa e la stringa non è più selezionata. La stringa specificata è selezionata ed evidenziata per impostazione predefinita.  
  
### <a name="return-value"></a>Valore restituito  
 `LB_ERR`Se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro solo con le caselle di riepilogo a selezione multipla.  
  
 Per selezionare un elemento da una casella di riepilogo a selezione singola, utilizzare [CListBox::SetCurSel](#setcursel).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#38;](../../mfc/codesnippet/cpp/clistbox-class_38.cpp)]  
  
##  <a name="a-namesettabstopsa--clistboxsettabstops"></a><a name="settabstops"></a>CListBox::SetTabStops  
 Imposta le posizioni di tabulazione in una casella di riepilogo.  
  
```  
void SetTabStops();  
BOOL SetTabStops(const int& cxEachStop);

 
BOOL SetTabStops(
    int nTabStops,  
    LPINT rgTabStops);
```  
  
### <a name="parameters"></a>Parametri  
 `cxEachStop`  
 Punti di tabulazione vengono impostate a ogni `cxEachStop` DLU. Vedere *rgTabStops* per una descrizione di un'unità di finestra di dialogo.  
  
 `nTabStops`  
 Specifica il numero di punti di tabulazione che nella casella di riepilogo.  
  
 `rgTabStops`  
 Punta al primo membro di una matrice di interi che contiene le posizioni di tabulazione in DLU. Una DLU è una distanza orizzontale o verticale. Una DLU orizzontale è uguale a un quarto dell'unità di base larghezza della finestra corrente, e una DLU verticale è uguale a un ottavo dell'unità di base altezza della finestra corrente. Le unità di base di finestra di dialogo vengono calcolate in base l'altezza e la larghezza del tipo di carattere di sistema corrente. Il **GetDialogBaseUnits** funzione Windows restituisce la finestra di dialogo corrente unità di base in pixel. I punti di tabulazione devono essere ordinati in senso crescente; non sono consentite le tabulazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se tutte le schede sono state impostate; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per impostare le dimensioni predefinite di 2 unità di finestra di dialogo tabulazioni, chiamare la versione senza parametri di questa funzione membro. Per impostare punti di tabulazione a una dimensione diversa da 2, chiamare la versione con il `cxEachStop` argomento.  
  
 Per impostare punti di tabulazione in una matrice di dimensioni, utilizzare la versione con il `rgTabStops` e `nTabStops` argomenti. Verrà impostato un punto di tabulazione per ogni valore in `rgTabStops`, fino al numero specificato da `nTabStops`.  
  
 Per rispondere a una chiamata al `SetTabStops` funzione membro, la casella di riepilogo deve essere stata creata con il [LBS_USETABSTOPS](../../mfc/reference/list-box-styles.md) stile.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox&#39;](../../mfc/codesnippet/cpp/clistbox-class_39.cpp)]  
  
##  <a name="a-namesettopindexa--clistboxsettopindex"></a><a name="settopindex"></a>CListBox::SetTopIndex  
 Garantisce che un elemento specifico della casella di riepilogo è visibile.  
  
```  
int SetTopIndex(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero dell'elemento casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se ha esito positivo, o **LB_ERR** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Il sistema consente di scorrere la casella di riepilogo fino a quando l'elemento specificato da `nIndex` viene visualizzata nella parte superiore dell'elenco è stato raggiunto casella o l'intervallo massimo di scorrimento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#40; NVC_MFC_CListBox](../../mfc/codesnippet/cpp/clistbox-class_40.cpp)]  
  
##  <a name="a-namevkeytoitema--clistboxvkeytoitem"></a><a name="vkeytoitem"></a>CListBox::VKeyToItem  
 Chiamato dal framework quando la proprietà elenco della finestra padre riceve un `WM_VKEYTOITEM` messaggio nella casella di riepilogo.  
  
```  
virtual int VKeyToItem(
    UINT nKey,  
    UINT nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nKey`  
 Il codice tasto virtuale della chiave è stato premuto. Per un elenco di standard codici di tasti virtuali, vedere winuser. h  
  
 `nIndex`  
 La posizione corrente del punto di inserimento della casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce-2 per alcuna ulteriore azione, – 1 per l'azione predefinita o un numero non negativo consente di specificare un indice di un elemento della casella di riepilogo in cui viene eseguita l'azione predefinita per la sequenza di tasti.  
  
### <a name="remarks"></a>Note  
 Il `WM_VKEYTOITEM` messaggio viene inviato dalla casella di riepilogo quando riceve un `WM_KEYDOWN` messaggio, ma solo se la casella di riepilogo soddisfa entrambe le operazioni seguenti:  
  
-   È il [LBS_WANTKEYBOARDINPUT](../../mfc/reference/list-box-styles.md) set di stili.  
  
-   Ha almeno un elemento.  
  
 Sarà non necessario mai chiamare questa funzione. Eseguire l'override di questa funzione per fornire la propria gestione personalizzata dei messaggi della tastiera.  
  
 È necessario restituire un valore per indicare l'azione eseguita la sostituzione di framework. Un valore restituito di-2 indica che l'applicazione gestita tutti gli aspetti della selezione dell'elemento e non richiede alcuna ulteriore azione dalla casella di riepilogo. Prima di restituire – 2, è possibile impostare la selezione o Sposta il punto di inserimento o entrambi. Per impostare la selezione, utilizzare [SetCurSel](#setcursel) o [funzione membro SetSel](#setsel). Per spostare il punto di inserimento, utilizzare [SetCaretIndex](#setcaretindex).  
  
 Un valore restituito di – 1 indica che la casella di riepilogo deve eseguire l'azione predefinita in risposta alla sequenza di tasti. L'implementazione predefinita restituisce-1.  
  
 Un valore restituito di o maggiore di 0 specifica l'indice di un elemento nella casella di riepilogo e indica che la casella di riepilogo deve eseguire l'azione predefinita per la sequenza di tasti per l'elemento specificato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CListBox n.&41;](../../mfc/codesnippet/cpp/clistbox-class_41.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio CTRLTEST](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [CButton (classe)](../../mfc/reference/cbutton-class.md)   
 [CComboBox (classe)](../../mfc/reference/ccombobox-class.md)   
 [Classe CEdit](../../mfc/reference/cedit-class.md)   
 [Classe CScrollBar](../../mfc/reference/cscrollbar-class.md)   
 [Classe CStatic](../../mfc/reference/cstatic-class.md)


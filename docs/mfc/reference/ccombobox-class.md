---
title: CComboBox (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComboBox
- AFXWIN/CComboBox
- AFXWIN/CComboBox::CComboBox
- AFXWIN/CComboBox::AddString
- AFXWIN/CComboBox::Clear
- AFXWIN/CComboBox::CompareItem
- AFXWIN/CComboBox::Copy
- AFXWIN/CComboBox::Create
- AFXWIN/CComboBox::Cut
- AFXWIN/CComboBox::DeleteItem
- AFXWIN/CComboBox::DeleteString
- AFXWIN/CComboBox::Dir
- AFXWIN/CComboBox::DrawItem
- AFXWIN/CComboBox::FindString
- AFXWIN/CComboBox::FindStringExact
- AFXWIN/CComboBox::GetComboBoxInfo
- AFXWIN/CComboBox::GetCount
- AFXWIN/CComboBox::GetCueBanner
- AFXWIN/CComboBox::GetCurSel
- AFXWIN/CComboBox::GetDroppedControlRect
- AFXWIN/CComboBox::GetDroppedState
- AFXWIN/CComboBox::GetDroppedWidth
- AFXWIN/CComboBox::GetEditSel
- AFXWIN/CComboBox::GetExtendedUI
- AFXWIN/CComboBox::GetHorizontalExtent
- AFXWIN/CComboBox::GetItemData
- AFXWIN/CComboBox::GetItemDataPtr
- AFXWIN/CComboBox::GetItemHeight
- AFXWIN/CComboBox::GetLBText
- AFXWIN/CComboBox::GetLBTextLen
- AFXWIN/CComboBox::GetLocale
- AFXWIN/CComboBox::GetMinVisible
- AFXWIN/CComboBox::GetTopIndex
- AFXWIN/CComboBox::InitStorage
- AFXWIN/CComboBox::InsertString
- AFXWIN/CComboBox::LimitText
- AFXWIN/CComboBox::MeasureItem
- AFXWIN/CComboBox::Paste
- AFXWIN/CComboBox::ResetContent
- AFXWIN/CComboBox::SelectString
- AFXWIN/CComboBox::SetCueBanner
- AFXWIN/CComboBox::SetCurSel
- AFXWIN/CComboBox::SetDroppedWidth
- AFXWIN/CComboBox::SetEditSel
- AFXWIN/CComboBox::SetExtendedUI
- AFXWIN/CComboBox::SetHorizontalExtent
- AFXWIN/CComboBox::SetItemData
- AFXWIN/CComboBox::SetItemDataPtr
- AFXWIN/CComboBox::SetItemHeight
- AFXWIN/CComboBox::SetLocale
- AFXWIN/CComboBox::SetMinVisibleItems
- AFXWIN/CComboBox::SetTopIndex
- AFXWIN/CComboBox::ShowDropDown
dev_langs: C++
helpviewer_keywords:
- CComboBox [MFC], CComboBox
- CComboBox [MFC], AddString
- CComboBox [MFC], Clear
- CComboBox [MFC], CompareItem
- CComboBox [MFC], Copy
- CComboBox [MFC], Create
- CComboBox [MFC], Cut
- CComboBox [MFC], DeleteItem
- CComboBox [MFC], DeleteString
- CComboBox [MFC], Dir
- CComboBox [MFC], DrawItem
- CComboBox [MFC], FindString
- CComboBox [MFC], FindStringExact
- CComboBox [MFC], GetComboBoxInfo
- CComboBox [MFC], GetCount
- CComboBox [MFC], GetCueBanner
- CComboBox [MFC], GetCurSel
- CComboBox [MFC], GetDroppedControlRect
- CComboBox [MFC], GetDroppedState
- CComboBox [MFC], GetDroppedWidth
- CComboBox [MFC], GetEditSel
- CComboBox [MFC], GetExtendedUI
- CComboBox [MFC], GetHorizontalExtent
- CComboBox [MFC], GetItemData
- CComboBox [MFC], GetItemDataPtr
- CComboBox [MFC], GetItemHeight
- CComboBox [MFC], GetLBText
- CComboBox [MFC], GetLBTextLen
- CComboBox [MFC], GetLocale
- CComboBox [MFC], GetMinVisible
- CComboBox [MFC], GetTopIndex
- CComboBox [MFC], InitStorage
- CComboBox [MFC], InsertString
- CComboBox [MFC], LimitText
- CComboBox [MFC], MeasureItem
- CComboBox [MFC], Paste
- CComboBox [MFC], ResetContent
- CComboBox [MFC], SelectString
- CComboBox [MFC], SetCueBanner
- CComboBox [MFC], SetCurSel
- CComboBox [MFC], SetDroppedWidth
- CComboBox [MFC], SetEditSel
- CComboBox [MFC], SetExtendedUI
- CComboBox [MFC], SetHorizontalExtent
- CComboBox [MFC], SetItemData
- CComboBox [MFC], SetItemDataPtr
- CComboBox [MFC], SetItemHeight
- CComboBox [MFC], SetLocale
- CComboBox [MFC], SetMinVisibleItems
- CComboBox [MFC], SetTopIndex
- CComboBox [MFC], ShowDropDown
ms.assetid: 4e73b5df-0d2e-4658-9706-38133fb10513
caps.latest.revision: "25"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 6a8b9c9de69f9042f68cc04d435070ade9b24dd9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ccombobox-class"></a>CComboBox (classe)
Fornisce la funzionalità di una casella combinata di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CComboBox : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComboBox::CComboBox](#ccombobox)|Costruisce un oggetto `CComboBox`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComboBox:: AddString](#addstring)|Aggiunge una stringa alla fine dell'elenco nella casella di riepilogo di una casella combinata o in corrispondenza della posizione di ordinamento per le caselle di riepilogo con i **CBS_SORT** stile.|  
|[CComboBox::Clear](#clear)|Elimina (Elimina) la selezione corrente, se presente, nel controllo di modifica.|  
|[CComboBox::CompareItem](#compareitem)|Chiamato dal framework per determinare la posizione relativa di un nuovo elemento di elenco in una casella combinata ordinata disegnato dal proprietario.|  
|[CComboBox::Copy](#copy)|Copia la selezione corrente, se presente, negli Appunti in **CF_TEXT** formato.|  
|[CComboBox::Create](#create)|Crea la casella combinata e lo collega al `CComboBox` oggetto.|  
|[CComboBox::Cut](#cut)|Elimina (tagli) la selezione corrente, se presente, nella finestra di modifica di controllo e copia il testo negli Appunti in eliminato **CF_TEXT** formato.|  
|[CComboBox::DeleteItem](#deleteitem)|Chiamato dal framework quando un elemento di elenco viene eliminato da una casella combinata disegnato dal proprietario.|  
|[CComboBox::DeleteString](#deletestring)|Elimina una stringa nella casella di riepilogo di una casella combinata.|  
|[CComboBox::Dir](#dir)|Aggiunge un elenco di nomi di file nella casella di riepilogo di una casella combinata.|  
|[CComboBox::DrawItem](#drawitem)|Chiamato dal framework quando un aspetto visivo di una casella Cambia proprietario combinata.|  
|[CComboBox:: FindString](#findstring)|Trova la prima stringa che contiene il prefisso specificato nella casella di riepilogo di una casella combinata.|  
|[CComboBox::FindStringExact](#findstringexact)|Trova la prima stringa di casella di riepilogo, in una casella combinata, che corrisponde alla stringa specificata.|  
|[CComboBox::GetComboBoxInfo](#getcomboboxinfo)|Recupera le informazioni sul `CComboBox` oggetto.|  
|[CComboBox::GetCount](#getcount)|Recupera il numero di elementi nella casella di riepilogo di una casella combinata.|  
|[CComboBox::GetCueBanner](#getcuebanner)|Ottiene il testo della segnalazione che viene visualizzato per un controllo casella combinata.|  
|[CComboBox::GetCurSel](#getcursel)|Recupera l'indice dell'elemento attualmente selezionato, se presente, nella casella di riepilogo di una casella combinata.|  
|[CComboBox::GetDroppedControlRect](#getdroppedcontrolrect)|Recupera le coordinate dello schermo della casella di elenco (rimosso verso il basso) visibili di una casella combinata a discesa.|  
|[CComboBox::GetDroppedState](#getdroppedstate)|Determina se la casella di riepilogo di una casella combinata a discesa è visibile (eliminati verso il basso).|  
|[CComboBox::GetDroppedWidth](#getdroppedwidth)|Recupera la larghezza minima consentita per la parte della casella di riepilogo a discesa di una casella combinata.|  
|[CComboBox::GetEditSel](#geteditsel)|Ottiene le posizioni dei caratteri iniziale e finale della selezione corrente nel controllo di modifica di una casella combinata.|  
|[CComboBox::GetExtendedUI](#getextendedui)|Determina se una casella combinata è l'interfaccia utente predefinita o l'interfaccia utente estesa.|  
|[CComboBox::GetHorizontalExtent](#gethorizontalextent)|Restituisce la larghezza in pixel, che è possibile scorrere orizzontalmente la parte della casella di riepilogo della casella combinata.|  
|[CComboBox::GetItemData](#getitemdata)|Recupera il valore a 32 bit fornita dall'applicazione associato all'elemento casella combinata specificato.|  
|[CComboBox::GetItemDataPtr](#getitemdataptr)|Recupera il puntatore a 32 bit fornita dall'applicazione associata con l'elemento casella combinata specificato.|  
|[CComboBox::GetItemHeight](#getitemheight)|Recupera l'altezza degli elementi di elenco in una casella combinata.|  
|[CComboBox::GetLBText](#getlbtext)|Ottiene una stringa nella casella di riepilogo di una casella combinata.|  
|[CComboBox::GetLBTextLen](#getlbtextlen)|Ottiene la lunghezza di una stringa nella casella di riepilogo di una casella combinata.|  
|[CComboBox::GetLocale](#getlocale)|Recupera l'identificatore delle impostazioni locali per una casella combinata.|  
|[CComboBox::GetMinVisible](#getminvisible)|Ottiene il numero minimo di elementi visibili nell'elenco a discesa della casella combinata corrente.|  
|[CComboBox::GetTopIndex](#gettopindex)|Restituisce l'indice del primo elemento visibile nella parte della casella di riepilogo della casella combinata.|  
|[CComboBox::InitStorage](#initstorage)|Prealloca una quantità blocchi di memoria per gli elementi e le stringhe nella parte della casella di riepilogo della casella combinata.|  
|[CComboBox::InsertString](#insertstring)|Inserisce una stringa nella casella di riepilogo di una casella combinata.|  
|[CComboBox::LimitText](#limittext)|Limita la lunghezza del testo che l'utente può immettere nel controllo di modifica di una casella combinata.|  
|[CComboBox::MeasureItem](#measureitem)|Chiamato dal framework per determinare le dimensioni di casella combinata quando viene creata una casella combinata disegnato dal proprietario.|  
|[CComboBox::Paste](#paste)|Inserisce i dati dagli Appunti nel controllo di modifica nella posizione del cursore corrente. Vengono inseriti dati solo se gli Appunti contengono dati **CF_TEXT** formato.|  
|[CComboBox::ResetContent](#resetcontent)|Rimuove tutti gli elementi dall'elenco e modificare di controllo di una casella combinata.|  
|[CComboBox::SelectString](#selectstring)|Cerca una stringa nella casella di riepilogo di una casella combinata e, se la stringa viene trovata, seleziona la stringa nella casella di riepilogo e consente di copiare la stringa di controllo di modifica.|  
|[CComboBox::SetCueBanner](#setcuebanner)|Imposta il testo della segnalazione che viene visualizzato per un controllo casella combinata.|  
|[CComboBox::SetCurSel](#setcursel)|Seleziona una stringa nella casella di riepilogo di una casella combinata.|  
|[CComboBox::SetDroppedWidth](#setdroppedwidth)|Imposta la larghezza minima consentita per la parte della casella di riepilogo a discesa di una casella combinata.|  
|[CComboBox::SetEditSel](#seteditsel)|Seleziona i caratteri nel controllo di modifica di una casella combinata.|  
|[CComboBox::SetExtendedUI](#setextendedui)|Seleziona l'interfaccia utente predefinita o l'interfaccia utente estesa per una casella combinata con la **CBS_DROPDOWN** o **CBS_DROPDOWNLIST** stile.|  
|[CComboBox::SetHorizontalExtent](#sethorizontalextent)|Imposta la larghezza in pixel che la parte della casella di riepilogo della casella combinata può essere necessario scorrere orizzontalmente.|  
|[CComboBox::SetItemData](#setitemdata)|Imposta il valore a 32 bit associato all'elemento specificato in una casella combinata.|  
|[CComboBox::SetItemDataPtr](#setitemdataptr)|Imposta il puntatore a 32 bit associato all'elemento specificato in una casella combinata.|  
|[CComboBox::SetItemHeight](#setitemheight)|Imposta l'altezza degli elementi dell'elenco in una casella combinata o l'altezza della parte di una casella combinata controllo di modifica (o testo statico).|  
|[CComboBox::SetLocale](#setlocale)|Imposta l'identificatore delle impostazioni locali per una casella combinata.|  
|[CComboBox::SetMinVisibleItems](#setminvisibleitems)|Imposta il numero minimo di elementi visibili nell'elenco a discesa della casella combinata corrente.|  
|[CComboBox::SetTopIndex](#settopindex)|Indica la parte della casella di riepilogo della casella combinata per visualizzare l'elemento con l'indice specificato nella parte superiore.|  
|[CComboBox::ShowDropDown](#showdropdown)|Mostra o nasconde la casella di riepilogo di una casella combinata con la **CBS_DROPDOWN** o **CBS_DROPDOWNLIST** stile.|  
  
## <a name="remarks"></a>Note  
 Una casella combinata è costituito da una casella di riepilogo combinata con un controllo statico o il controllo di modifica. La parte della casella di riepilogo del controllo può essere visualizzata ogni volta o solo potrebbe elenco a discesa quando l'utente seleziona la freccia a discesa accanto al controllo.  
  
 L'elemento attualmente selezionato (se presente) nella casella di riepilogo viene visualizzato in statica o di controllo di modifica. Inoltre, se la casella combinata è lo stile di elenco a discesa, l'utente può digitare il carattere iniziale di uno degli elementi nell'elenco e la casella di riepilogo, se è visibile, verrà evidenziare l'elemento successivo con il carattere iniziale.  
  
 La tabella seguente confronta la casella combinata tre [stili](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles).  
  
|Stile|Quando la casella di elenco è visibile|Controllo statico o di modifica|  
|-----------|-------------------------------|-----------------------------|  
|Semplice|Sempre|Modifica|  
|Drop-down|Quando eliminato verso il basso|Modifica|  
|Elenco a discesa|Quando eliminato verso il basso|Statico|  
  
 È possibile creare un `CComboBox` oggetto da un modello di finestra di dialogo o direttamente nel codice. In entrambi i casi, chiamare prima il costruttore `CComboBox` per costruire il `CComboBox` dell'oggetto, quindi chiamare il [crea](#create) funzione membro per creare il controllo e associarlo al `CComboBox` oggetto.  
  
 Se si desidera gestire i messaggi di notifica Windows inviati da una casella combinata con l'elemento padre (in genere una classe derivata da `CDialog`), aggiungere una funzione membro della mappa messaggi voce e gestore di messaggi alla classe padre per ogni messaggio.  
  
 Ogni voce della mappa messaggi assume il formato seguente:  
  
 **On _**notifica **(**`id`**,**`memberFxn`**)**  
  
 dove `id` specifica l'ID di finestra figlio del controllo casella combinata che invia la notifica e `memberFxn` è il nome della funzione membro padre scritta per gestire la notifica.  
  
 Prototipo di funzione dell'elemento padre è il seguente:  
  
 **afx_msg** `void` `memberFxn` **();**  
  
 Non è possibile prevedere l'ordine in cui alcune notifiche verranno inviate. In particolare, un **CBN_SELCHANGE proveniente** notifica può verificarsi prima o dopo un **CBN_CLOSEUP** notifica.  
  
 Le voci della mappa messaggi possibili sono i seguenti:  
  
- **ON_CBN_CLOSEUP** (Windows 3.1 e versioni successive). La casella di riepilogo di una casella combinata è chiuso. Questo messaggio di notifica non verrà inviato per una casella combinata con la [CBS_SIMPLE](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile.  
  
- **ON_CBN_DBLCLK** l'utente fa doppio clic su una stringa nella casella di riepilogo di una casella combinata. Questo messaggio di notifica verrà inviato solo per una casella combinata con la **CBS_SIMPLE** stile. Per una casella combinata con la [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile, non è possibile eseguire un doppio clic in quanto un solo clic nasconde la casella di riepilogo.  
  
- **ON_CBN_DROPDOWN** la casella di riepilogo di una casella combinata è elenco a discesa (essere reso visibile). Questo messaggio di notifica può verificarsi solo per una casella combinata con la **CBS_DROPDOWN** o **CBS_DROPDOWNLIST** stile.  
  
- **ON_CBN_EDITCHANGE** l'utente esegue un'azione che potrebbe aver modificato il testo nella parte di controllo di modifica di una casella combinata. A differenza di **CBN_EDITUPDATE** messaggio, questo messaggio viene inviato dopo la schermata di aggiornamenti di Windows. Non è viene inviato se la casella combinata di **CBS_DROPDOWNLIST** stile.  
  
- **ON_CBN_EDITUPDATE** la parte di controllo di modifica di una casella combinata sta per visualizzare testo modificato. Dopo il controllo ha formattato il testo ma prima che venga visualizzato il testo, viene inviato il messaggio di notifica. Non è viene inviato se la casella combinata di **CBS_DROPDOWNLIST** stile.  
  
- **ON_CBN_ERRSPACE** casella combinata non è possibile allocare memoria sufficiente per soddisfare una richiesta specifica.  
  
- **ON_CBN_SELENDCANCEL** (Windows 3.1 e versioni successive). Indica che la selezione dell'utente deve essere annullata. L'utente fa clic su un elemento e quindi fa clic su un'altra finestra o un controllo per nascondere la casella di riepilogo di una casella combinata. Viene inviato il messaggio di notifica prima di **CBN_CLOSEUP** messaggio di notifica per indicare che la selezione dell'utente deve essere ignorata. Il **CBN_SELENDCANCEL** o **CBN_SELENDOK** messaggio di notifica viene inviata anche se il **CBN_CLOSEUP** non viene inviato il messaggio di notifica (come nel caso di una casella combinata con il **CBS_SIMPLE** stile).  
  
- **ON_CBN_SELENDOK** l'utente seleziona un elemento e quindi preme INVIO o fa clic sulla freccia giù per nascondere la casella di riepilogo di una casella combinata. Viene inviato il messaggio di notifica prima di **CBN_CLOSEUP** messaggio per indicare che la selezione dell'utente deve essere considerata valida. Il **CBN_SELENDCANCEL** o **CBN_SELENDOK** messaggio di notifica viene inviata anche se il **CBN_CLOSEUP** non viene inviato il messaggio di notifica (come nel caso di una casella combinata con il **CBS_SIMPLE** stile).  
  
- **ON_CBN_KILLFOCUS** perde lo stato attivo di input della casella combinata.  
  
- **ON_CBN_SELCHANGE** la selezione nella casella di riepilogo di una casella combinata sta per essere modificato in seguito l'utente modifica la selezione tramite i tasti di direzione o facendo clic nella casella di riepilogo. Durante l'elaborazione di questo messaggio, il testo nel controllo di modifica della casella combinata può essere recuperato solo tramite `GetLBText` o un'altra funzione simile. `GetWindowText`non può essere utilizzato.  
  
- **ON_CBN_SETFOCUS** casella combinata riceve lo stato attivo.  
  
 Se si crea un `CComboBox` oggetto all'interno di una finestra di dialogo (tramite una risorsa finestra di dialogo), il `CComboBox` oggetto viene automaticamente distrutta quando l'utente chiude la finestra di dialogo.  
  
 Se si incorpora un `CComboBox` oggetto all'interno di un'altra finestra dell'oggetto, non è necessario eliminarlo. Se si crea il `CComboBox` dell'oggetto nello stack, viene eliminato automaticamente. Se si crea il `CComboBox` oggetto sull'heap tramite il **nuova** funzione, è necessario chiamare **eliminare** per l'oggetto venga eliminata quando la casella combinata di Windows viene eliminata.  
  
 **Nota** se si desidera gestire `WM_KEYDOWN` e `WM_CHAR` messaggi, è necessario sottoclasse della casella combinata modifica e i controlli casella di elenco, derivare le classi da `CEdit` e `CListBox`, e aggiungere i gestori per questi messaggi derivata classi. Per ulteriori informazioni, vedere [http://support.microsoft.com/default.aspxscid=kb;en-us; Q174667](http://support.microsoft.com/default.aspxscid=kb;en-us;q174667) e [CWnd:: SubclassWindow](../../mfc/reference/cwnd-class.md#subclasswindow).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CComboBox`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="addstring"></a>CComboBox:: AddString  
 Aggiunge una stringa nella casella di riepilogo di una casella combinata.  
  
```  
int AddString(LPCTSTR lpszString);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszString`  
 Punta alla stringa con terminazione null che deve essere aggiunto.  
  
### <a name="return-value"></a>Valore restituito  
 Se il valore restituito è maggiore o uguale a 0, si tratta dell'indice in base zero per la stringa nella casella di riepilogo. Il valore restituito è **CB_ERR** se si verifica un errore; il valore restituito è **CB_ERRSPACE** se è disponibile spazio sufficiente archiviare la nuova stringa.  
  
### <a name="remarks"></a>Note  
 Se la casella di riepilogo non è stata creata con il [CBS_SORT](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile, la stringa viene aggiunta alla fine dell'elenco. In caso contrario, la stringa viene inserita nell'elenco e l'elenco è ordinato.  
  
> [!NOTE]
>  Questa funzione non è supportata dal controllo **ComboBoxEx** di Windows. Per ulteriori informazioni su questo controllo, vedere [controlli ComboBoxEx](http://msdn.microsoft.com/library/windows/desktop/bb775738) in Windows SDK.  
  
 Per inserire una stringa in una posizione specifica all'interno dell'elenco, utilizzare il [InsertString](#insertstring) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#3](../../mfc/reference/codesnippet/cpp/ccombobox-class_1.cpp)]  
  
##  <a name="ccombobox"></a>CComboBox::CComboBox  
 Costruisce un oggetto `CComboBox`.  
  
```  
CComboBox();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#1](../../mfc/reference/codesnippet/cpp/ccombobox-class_2.cpp)]  
  
##  <a name="clear"></a>CComboBox::Clear  
 Elimina (Elimina) la selezione corrente, se presente, nel controllo di modifica della casella combinata.  
  
```  
void Clear();
```  
  
### <a name="remarks"></a>Note  
 Per eliminare la selezione corrente e inserire il contenuto eliminato negli Appunti, utilizzare il [Taglia](#cut) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#4](../../mfc/reference/codesnippet/cpp/ccombobox-class_3.cpp)]  
  
##  <a name="compareitem"></a>CComboBox::CompareItem  
 Chiamato dal framework per determinare la posizione relativa di un nuovo elemento nella parte di una casella combinata ordinata proprietario della casella di riepilogo.  
  
```  
virtual int CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpCompareItemStruct`  
 Un puntatore di tipo long a un [COMPAREITEMSTRUCT](../../mfc/reference/compareitemstruct-structure.md) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Indica la posizione relativa dei due elementi descritti nel `COMPAREITEMSTRUCT` struttura. Può essere uno dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|- 1|Elemento 1 precede dall'elemento 2.|  
|0|Elemento 1 e 2 di elemento è lo stesso ordine.|  
|1|Elemento 1 ordinato alfabeticamente dopo l'elemento 2.|  
  
 Vedere [CWnd::OnCompareItem](../../mfc/reference/cwnd-class.md#oncompareitem) per una descrizione di `COMPAREITEMSTRUCT`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Se crei una casella combinata creata dal proprietario con il **LBS_SORT** stile, è necessario eseguire l'override della funzione membro per facilitare il framework per l'ordinamento dei nuovi elementi aggiunti alla casella di riepilogo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#5](../../mfc/reference/codesnippet/cpp/ccombobox-class_4.cpp)]  
  
##  <a name="copy"></a>CComboBox::Copy  
 Copia la selezione corrente, se presente, nel controllo di modifica della casella combinata negli Appunti in **CF_TEXT** formato.  
  
```  
void Copy();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#6](../../mfc/reference/codesnippet/cpp/ccombobox-class_5.cpp)]  
  
##  <a name="create"></a>CComboBox::Create  
 Crea la casella combinata e lo collega al `CComboBox` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile della casella combinata. Applicare qualsiasi combinazione di [stili casella combinata](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) nella casella.  
  
 `rect`  
 Punta alla posizione e dimensioni della casella combinata. Può essere un [struttura RECT](../../mfc/reference/rect-structure1.md) o `CRect` oggetto.  
  
 `pParentWnd`  
 Specifica una finestra padre della casella combinata (in genere un `CDialog`). Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID del controllo. della casella combinata  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CComboBox` oggetto in due passaggi. In primo luogo, chiamare il costruttore, quindi **crea**, che crea la casella combinata di Windows e lo collega al `CComboBox` oggetto.  
  
 Quando **crea** esegue, Windows invia il [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize), e [WM _ GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) messaggi alla casella combinata.  
  
 Questi messaggi vengono gestiti per impostazione predefinita il [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate), [OnCreate](../../mfc/reference/cwnd-class.md#oncreate), [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize), e [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) funzioni membro nel `CWnd` classe di base. Per estendere la gestione dei messaggi predefinito, derivare una classe da `CComboBox`, aggiungere una mappa messaggi per la nuova classe e sostituire le funzioni membro di gestore di messaggi precedenti. Eseguire l'override `OnCreate`, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.  
  
 Applicare la seguente istruzione [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) a un controllo casella combinata. :  
  
- **WS_CHILD** sempre  
  
- **WS_VISIBLE** in genere  
  
- **WS_DISABLED** raramente  
  
- **WS_VSCROLL** per aggiungere lo scorrimento verticale per la casella di riepilogo nella casella combinata  
  
- **WS_HSCROLL** per aggiungere lo scorrimento orizzontale per la casella di riepilogo nella casella combinata  
  
- **WS_GROUP** per raggruppare i controlli  
  
- **WS_TABSTOP** per includere la casella combinata nell'ordine di tabulazione  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#2](../../mfc/reference/codesnippet/cpp/ccombobox-class_6.cpp)]  
  
##  <a name="cut"></a>CComboBox::Cut  
 Eliminazioni (tagli) controllare la selezione corrente, se presente, nella casella combinata modifica e copia il testo eliminato negli Appunti in **CF_TEXT** formato.  
  
```  
void Cut();
```  
  
### <a name="remarks"></a>Note  
 Per eliminare la selezione corrente senza inserire il testo eliminato negli Appunti, chiamare il [deselezionare](#clear) funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#7](../../mfc/reference/codesnippet/cpp/ccombobox-class_7.cpp)]  
  
##  <a name="deleteitem"></a>CComboBox::DeleteItem  
 Chiamato dal framework quando l'utente elimina un elemento da un proprietario `CComboBox` dell'oggetto o Elimina definitivamente la casella combinata.  
  
```  
virtual void DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDeleteItemStruct`  
 Un puntatore di tipo long a un Windows [DELETEITEMSTRUCT](../../mfc/reference/deleteitemstruct-structure.md) struttura che contiene informazioni sull'elemento eliminato. Vedere [CWnd::OnDeleteItem](../../mfc/reference/cwnd-class.md#ondeleteitem) per una descrizione di questa struttura.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione non esegue alcuna operazione. Eseguire l'override di questa funzione per ridisegnare la casella combinata, in base alle esigenze.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#8](../../mfc/reference/codesnippet/cpp/ccombobox-class_8.cpp)]  
  
##  <a name="deletestring"></a>CComboBox::DeleteString  
 Elimina l'elemento nella posizione `nIndex` dalla casella combinata.  
  
```  
int DeleteString(UINT nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice a una stringa che deve essere eliminato.  
  
### <a name="return-value"></a>Valore restituito  
 Se il valore restituito è maggiore o uguale a 0, è un conteggio delle stringhe rimanenti nell'elenco. Il valore restituito è **CB_ERR** se `nIndex` specifica un indice maggiore del numero di elementi nell'elenco.  
  
### <a name="remarks"></a>Note  
 Tutti gli elementi seguenti `nIndex` spostare verso il basso di una posizione. Ad esempio, se una casella combinata contiene due elementi, se il primo elemento verrà eliminato rimanente elemento ora nella prima posizione. `nIndex`= 0 per l'elemento nella prima posizione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#9](../../mfc/reference/codesnippet/cpp/ccombobox-class_9.cpp)]  
  
##  <a name="dir"></a>CComboBox::Dir  
 Aggiunge un elenco di nomi di file o unità alla casella di riepilogo di una casella combinata.  
  
```  
int Dir(
    UINT attr,  
    LPCTSTR lpszWildCard);
```  
  
### <a name="parameters"></a>Parametri  
 `attr`  
 Può essere qualsiasi combinazione del `enum` valori descritti [CFile:: GetStatus](../../mfc/reference/cfile-class.md#getstatus) o qualsiasi combinazione dei valori seguenti:  
  
- **DDL_READWRITE** File può leggere e scrivere.  
  
- **DDL_READONLY** File può essere letto da ma non scritto.  
  
- **DDL_HIDDEN** File è nascosta e non viene visualizzato in una visualizzazione directory.  
  
- **DDL_SYSTEM** File è un file di sistema.  
  
- **DDL_DIRECTORY** il nome specificato da `lpszWildCard` specifica una directory.  
  
- **DDL_ARCHIVE** File è stato archiviato.  
  
- **DDL_DRIVES** includono tutte le unità che corrispondono al nome specificato da `lpszWildCard`.  
  
- **DDL_EXCLUSIVE** flag Exclusive. Se è impostato il flag exclusive, vengono elencati solo i file del tipo specificato. In caso contrario, sono elencati i file del tipo specificato oltre ai file "normali".  
  
 `lpszWildCard`  
 Punta a una stringa specifica del file. La stringa può contenere i caratteri jolly (ad esempio, *.\*).  
  
### <a name="return-value"></a>Valore restituito  
 Se il valore restituito è maggiore o uguale a 0, si tratta dell'indice in base zero del nome file ultimo aggiunto all'elenco. Il valore restituito è **CB_ERR** se si verifica un errore; il valore restituito è **CB_ERRSPACE** se è disponibile spazio sufficiente archiviare le nuove stringhe.  
  
### <a name="remarks"></a>Note  
 Questa funzione non è supportata dal controllo **ComboBoxEx** di Windows. Per ulteriori informazioni su questo controllo, vedere [controlli ComboBoxEx](http://msdn.microsoft.com/library/windows/desktop/bb775738) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#10](../../mfc/reference/codesnippet/cpp/ccombobox-class_10.cpp)]  
  
##  <a name="drawitem"></a>CComboBox::DrawItem  
 Chiamato dal framework quando un aspetto visivo di una casella combinata di proprietario cambia.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDrawItemStruct`  
 Un puntatore a un [DRAWITEMSTRUCT](../../mfc/reference/drawitemstruct-structure.md) struttura che contiene informazioni sul tipo di disegno necessaria.  
  
### <a name="remarks"></a>Note  
 Il **itemAction** appartenente il `DRAWITEMSTRUCT` struttura definisce l'azione di disegno che deve essere eseguita. Vedere [CWnd::OnDrawItem](../../mfc/reference/cwnd-class.md#ondrawitem) per una descrizione di questa struttura.  
  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro per implementare disegno di un proprietario `CComboBox` oggetto. Prima di questa funzione membro termina, l'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito `lpDrawItemStruct`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#11](../../mfc/reference/codesnippet/cpp/ccombobox-class_11.cpp)]  
  
##  <a name="findstring"></a>CComboBox:: FindString  
 Consente di trovare, ma non viene selezionato, la prima stringa che contiene il prefisso specificato nella casella di riepilogo di una casella combinata.  
  
```  
int FindString(
    int nStartAfter,  
    LPCTSTR lpszString) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nStartAfter`  
 Contiene l'indice in base zero dell'elemento prima del primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua dalla parte superiore della casella di riepilogo fino all'elemento specificato da `nStartAfter`. Se-1, la casella di riepilogo intero viene eseguita la ricerca dall'inizio.  
  
 `lpszString`  
 Punta alla stringa con terminazione null che contiene il prefisso per la ricerca. La ricerca è case indipendenti, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.  
  
### <a name="return-value"></a>Valore restituito  
 Se il valore restituito è maggiore o uguale a 0, è l'indice in base zero dell'elemento corrispondente. È **CB_ERR** se la ricerca ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Questa funzione non è supportata dal controllo **ComboBoxEx** di Windows. Per ulteriori informazioni su questo controllo, vedere [controlli ComboBoxEx](http://msdn.microsoft.com/library/windows/desktop/bb775738) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#12](../../mfc/reference/codesnippet/cpp/ccombobox-class_12.cpp)]  
  
##  <a name="findstringexact"></a>CComboBox::FindStringExact  
 Chiamare il `FindStringExact` trovare la prima stringa di casella di riepilogo, in una casella combinata, che corrisponde alla stringa specificata nella funzione membro `lpszFind`.  
  
```  
int FindStringExact(
    int nIndexStart,  
    LPCTSTR lpszFind) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndexStart`  
 Specifica l'indice in base zero dell'elemento prima del primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua dalla parte superiore della casella di riepilogo fino all'elemento specificato da `nIndexStart`. Se `nIndexStart` è -1, la casella di riepilogo intero viene eseguita la ricerca dall'inizio.  
  
 `lpszFind`  
 Punta alla stringa di terminazione null per la ricerca. Questa stringa può contenere un nome di file completo, inclusa l'estensione. La ricerca non è tra maiuscole e minuscole, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero dell'elemento corrispondente, o **CB_ERR** se la ricerca ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Se la casella combinata è stata creata con uno stile di disegno personalizzato, ma senza il [CBS_HASSTRINGS](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile, `FindStringExact` tenta di ottenere il valore della parola doppia rispetto al valore di `lpszFind`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#13](../../mfc/reference/codesnippet/cpp/ccombobox-class_13.cpp)]  
  
##  <a name="getcomboboxinfo"></a>CComboBox::GetComboBoxInfo  
 Recupera le informazioni per il `CComboBox` oggetto.  
  
```  
BOOL GetComboBoxInfo(PCOMBOBOXINFO pcbi) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *pcbi*  
 Un puntatore al [COMBOBOXINFO](http://msdn.microsoft.com/library/windows/desktop/bb775798) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità del [CB_GETCOMBOBOXINFO](http://msdn.microsoft.com/library/windows/desktop/bb775839) del messaggio, come descritto in Windows SDK.  
  
##  <a name="getcount"></a>CComboBox::GetCount  
 Chiamare questa funzione membro per recuperare il numero di elementi nella parte della casella di riepilogo di una casella combinata.  
  
```  
int GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi. Il conteggio restituito è maggiore del valore di indice dell'ultimo elemento (l'indice è in base zero). È **CB_ERR** se si verifica un errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#14](../../mfc/reference/codesnippet/cpp/ccombobox-class_14.cpp)]  
  
##  <a name="getcuebanner"></a>CComboBox::GetCueBanner  
 Ottiene il testo della segnalazione che viene visualizzato per un controllo casella combinata.  
  
```  
CString GetCueBanner() const;  
  
BOOL GetCueBanner(
    LPTSTR lpszText,   
    int cchText) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] `lpszText`|Puntatore a un buffer che riceve il testo dell'intestazione della segnalazione.|  
|[in] `cchText`|Dimensione del buffer che il `lpszText` punta al parametro.|  
  
### <a name="return-value"></a>Valore restituito  
 Nel primo overload, un [CString](../../atl-mfc-shared/using-cstring.md) oggetto che contiene il testo dell'intestazione della segnalazione, se presente; in caso contrario, un `CString` oggetto che ha lunghezza zero.  
  
 -oppure-  
  
 Nel secondo overload, `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Testo della segnalazione costituisce una richiesta che viene visualizzata nell'area di input del controllo casella combinata. Fino a quando l'utente fornisce input, viene visualizzato il testo della segnalazione.  
  
 Questo metodo invia il [CB_GETCUEBANNER](http://msdn.microsoft.com/library/windows/desktop/bb775843) messaggio, come descritto in Windows SDK.  
  
##  <a name="getcursel"></a>CComboBox::GetCurSel  
 Chiamare questa funzione membro per determinare quale elemento della casella combinata è selezionato.  
  
```  
int GetCurSel() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero dell'elemento attualmente selezionato nella casella di riepilogo di una casella combinata, o **CB_ERR** se è selezionato alcun elemento.  
  
### <a name="remarks"></a>Note  
 `GetCurSel`Restituisce un indice nell'elenco.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#15](../../mfc/reference/codesnippet/cpp/ccombobox-class_15.cpp)]  
  
##  <a name="getdroppedcontrolrect"></a>CComboBox::GetDroppedControlRect  
 Chiamare il `GetDroppedControlRect` funzione membro per recuperare le coordinate dello schermo della finestra visibile (eliminato) elenco a discesa di una casella combinata a discesa.  
  
```  
void GetDroppedControlRect(LPRECT lprect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *lprect*  
 Punta al [struttura RECT](../../mfc/reference/rect-structure1.md) che sta per ricevere le coordinate.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#16](../../mfc/reference/codesnippet/cpp/ccombobox-class_16.cpp)]  
  
##  <a name="getdroppedstate"></a>CComboBox::GetDroppedState  
 Chiamare il `GetDroppedState` funzione membro per determinare se la casella di riepilogo di una casella combinata a discesa è visibile (eliminati verso il basso).  
  
```  
BOOL GetDroppedState() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la casella di riepilogo è visibile; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#17](../../mfc/reference/codesnippet/cpp/ccombobox-class_17.cpp)]  
  
##  <a name="getdroppedwidth"></a>CComboBox::GetDroppedWidth  
 Chiamare questa funzione per recuperare la larghezza minima consentita, in pixel, della casella di riepilogo di una casella combinata.  
  
```  
int GetDroppedWidth() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, la larghezza minima consentita, in pixel. in caso contrario, **CB_ERR**.  
  
### <a name="remarks"></a>Note  
 Questa funzione si applica solo alle caselle combinate con il [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile.  
  
 Per impostazione predefinita, la larghezza minima consentita della casella di riepilogo a discesa è 0. Impostare la larghezza minima consentita chiamando [SetDroppedWidth](#setdroppedwidth). Quando viene visualizzata la parte della casella di riepilogo della casella combinata, la larghezza è maggiore di larghezza minima consentita o la larghezza della casella combinata.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [SetDroppedWidth](#setdroppedwidth).  
  
##  <a name="geteditsel"></a>CComboBox::GetEditSel  
 Ottiene le posizioni dei caratteri iniziale e finale della selezione corrente nel controllo di modifica di una casella combinata.  
  
```  
DWORD GetEditSel() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore a 32 bit che contiene la posizione iniziale della parola meno significativa e la posizione del primo carattere per dopo la fine della selezione della parola di ordine superiore. Se questa funzione viene utilizzata in una casella combinata senza un controllo di modifica, **CB_ERR** viene restituito.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#18](../../mfc/reference/codesnippet/cpp/ccombobox-class_18.cpp)]  
  
##  <a name="getextendedui"></a>CComboBox::GetExtendedUI  
 Chiamare il `GetExtendedUI` funzione membro per determinare se una casella combinata è l'interfaccia utente predefinita o l'interfaccia utente estesa.  
  
```  
BOOL GetExtendedUI() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la casella combinata è l'interfaccia utente estesa. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'interfaccia utente estesa può essere identificato nei modi seguenti:  
  
-   Fare clic sul controllo statico Visualizza una casella di riepilogo solo per le caselle combinate con il [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile.  
  
-   Premendo il tasto freccia giù consente di visualizzare la casella di riepilogo (F4 è disabilitato).  
  
 Lo scorrimento nel controllo statico è disabilitato quando l'elenco di elementi non è visibile (freccia chiavi sono disabilitate).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#19](../../mfc/reference/codesnippet/cpp/ccombobox-class_19.cpp)]  
  
##  <a name="gethorizontalextent"></a>CComboBox::GetHorizontalExtent  
 Recupera dalla casella combinata la larghezza in pixel di cui è possibile far scorrere orizzontalmente la parte della casella di riepilogo della casella combinata.  
  
```  
UINT GetHorizontalExtent() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza di scorrimento della casella di elenco della casella combinata, in pixel.  
  
### <a name="remarks"></a>Note  
 Questa opzione è disponibile solo se la parte della casella di riepilogo della casella combinata dispone di una barra di scorrimento orizzontale.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#20](../../mfc/reference/codesnippet/cpp/ccombobox-class_20.cpp)]  
  
##  <a name="getitemdata"></a>CComboBox::GetItemData  
 Recupera il valore a 32 bit fornita dall'applicazione associato all'elemento casella combinata specificato.  
  
```  
DWORD_PTR GetItemData(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Contiene l'indice in base zero di un elemento nella casella di riepilogo della casella combinata.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore a 32 bit associato all'elemento, o **CB_ERR** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Il valore a 32 bit può essere impostato con il `dwItemData` parametro di un [SetItemData](#setitemdata) chiamata di funzione membro. Utilizzare il `GetItemDataPtr` funzione membro se il valore a 32 bit da recuperare è un puntatore ( **void\***).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#21](../../mfc/reference/codesnippet/cpp/ccombobox-class_21.cpp)]  
  
##  <a name="getitemdataptr"></a>CComboBox::GetItemDataPtr  
 Recupera il valore a 32 bit fornita dall'applicazione associato all'elemento casella combinata specificato come un puntatore ( **void\***).  
  
```  
void* GetItemDataPtr(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Contiene l'indice in base zero di un elemento nella casella di riepilogo della casella combinata.  
  
### <a name="return-value"></a>Valore restituito  
 Recupera un puntatore o -1 se si verifica un errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#22](../../mfc/reference/codesnippet/cpp/ccombobox-class_22.cpp)]  
  
##  <a name="getitemheight"></a>CComboBox::GetItemHeight  
 Chiamare il `GetItemHeight` funzione membro per recuperare l'altezza degli elementi di elenco in una casella combinata.  
  
```  
int GetItemHeight(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica il componente della casella combinata è necessario recuperare la cui altezza. Se il `nIndex` parametro è -1, viene recuperato l'altezza della parte di controllo di modifica (o testo statico) della casella combinata. Se la casella combinata di [CBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile, `nIndex` specifica l'indice in base zero dell'elemento di elenco, è necessario recuperare la cui altezza. In caso contrario, `nIndex` deve essere impostato su 0.  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza, in pixel, dell'elemento specificato in una casella combinata. Se si verifica un errore, il valore restituito è **CB_ERR** .  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#23](../../mfc/reference/codesnippet/cpp/ccombobox-class_23.cpp)]  
  
##  <a name="getlbtext"></a>CComboBox::GetLBText  
 Ottiene una stringa nella casella di riepilogo di una casella combinata.  
  
```  
int GetLBText(
    int nIndex,  
    LPTSTR lpszText) const;  
  
void GetLBText(
    int nIndex,  
    CString& rString) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Contiene l'indice in base zero della stringa di casella di riepilogo da copiare.  
  
 `lpszText`  
 Punta a un buffer che riceverà la stringa. Il buffer è necessario spazio sufficiente per la stringa e un carattere di terminazione null.  
  
 `rString`  
 Un riferimento a un `CString`.  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza (in byte) della stringa, escluso il carattere di terminazione null. Se `nIndex` non specifica un indice valido, il valore restituito è **CB_ERR**.  
  
### <a name="remarks"></a>Note  
 La seconda forma di questo membro funzione compila un `CString` oggetto con il testo dell'elemento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#24](../../mfc/reference/codesnippet/cpp/ccombobox-class_24.cpp)]  
  
##  <a name="getlbtextlen"></a>CComboBox::GetLBTextLen  
 Ottiene la lunghezza di una stringa nella casella di riepilogo di una casella combinata.  
  
```  
int GetLBTextLen(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Contiene l'indice in base zero della stringa di casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza della stringa in byte, escluso il carattere di terminazione null. Se `nIndex` non specifica un indice valido, il valore restituito è **CB_ERR**.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CComboBox::GetLBText](#getlbtext).  
  
##  <a name="getlocale"></a>CComboBox::GetLocale  
 Recupera le impostazioni locali utilizzate per la casella combinata.  
  
```  
LCID GetLocale() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore dell'identificatore LCID delle impostazioni locali per le stringhe nella casella combinata.  
  
### <a name="remarks"></a>Note  
 Le impostazioni locali viene utilizzata, ad esempio, per determinare l'ordinamento delle stringhe in una casella combinata ordinata.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CComboBox::SetLocale](#setlocale).  
  
##  <a name="getminvisible"></a>CComboBox::GetMinVisible  
 Ottiene il numero minimo di elementi visibili nell'elenco a discesa della casella combinata.  
  
```  
int GetMinVisible() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero minimo di elementi visibili nell'elenco a discesa elenco corrente.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [CB_GETMINVISIBLE](http://msdn.microsoft.com/library/windows/desktop/bb775915) messaggio, come descritto in Windows SDK.  
  
##  <a name="gettopindex"></a>CComboBox::GetTopIndex  
 Recupera l'indice in base zero del primo elemento visibile nella parte della casella di riepilogo della casella combinata.  
  
```  
int GetTopIndex() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in base zero del primo elemento visibile nella parte della casella di riepilogo della casella combinata se ha esito positivo, **CB_ERR** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Inizialmente l'elemento 0 si trova nella parte superiore della casella di riepilogo, ma se è necessario scorrere la casella di riepilogo, un altro elemento potrebbe essere nella parte superiore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#25](../../mfc/reference/codesnippet/cpp/ccombobox-class_25.cpp)]  
  
##  <a name="initstorage"></a>CComboBox::InitStorage  
 Alloca memoria per archiviare elementi casella di riepilogo nella parte della casella di riepilogo della casella combinata.  
  
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
 Se ha esito positivo, il numero massimo di elementi che la parte della casella di riepilogo della casella combinata può archiviare prima è necessaria una riallocazione della memoria, in caso contrario **CB_ERRSPACE**, vale a dire memoria insufficiente è disponibile.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione prima di aggiungere un numero elevato di elementi nella parte della casella di riepilogo di `CComboBox`.  
  
 Solo Windows 95/98: il `wParam` parametro è limitato ai valori a 16 bit. Ciò significa che le caselle di riepilogo non possono contenere elementi oltre 32.767. Anche se il numero di elementi è limitato, le dimensioni totali degli elementi in una casella di riepilogo sono limitata solo dalla memoria disponibile.  
  
 Questa funzione consente di velocizzare l'inizializzazione delle caselle di riepilogo che hanno un numero elevato di elementi (più di 100). La quantità di memoria in modo che le successive specificata prealloca una quantità [AddString](#addstring), [InsertString](#insertstring), e [Dir](#dir) funzioni accettano minor tempo possibile. È possibile utilizzare le stime per i parametri. Se sovrastimare, alcuni memoria aggiuntiva allocata; Se sottovalutare, l'allocazione normale viene utilizzato per gli elementi che superano la quantità allocato precedentemente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#26](../../mfc/reference/codesnippet/cpp/ccombobox-class_26.cpp)]  
  
##  <a name="insertstring"></a>CComboBox::InsertString  
 Inserisce una stringa nella casella di riepilogo di una casella combinata.  
  
```  
int InsertString(
    int nIndex,  
    LPCTSTR lpszString);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Contiene l'indice in base zero della posizione nella casella di riepilogo che riceverà la stringa. Se questo parametro è -1, la stringa viene aggiunta alla fine dell'elenco.  
  
 `lpszString`  
 Punta a una stringa con terminazione null da inserire.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero della posizione in cui è stata inserita la stringa. Se si verifica un errore, il valore restituito è **CB_ERR** . Se non è disponibile spazio sufficiente per archiviare la nuova stringa, il valore restituito è **CB_ERRSPACE** .  
  
### <a name="remarks"></a>Note  
 A differenza di [AddString](#addstring) funzione membro, il `InsertString` funzione membro non genera un elenco con il [CBS_SORT](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile da ordinare.  
  
> [!NOTE]
>  Questa funzione non è supportata dal controllo **ComboBoxEx** di Windows. Per ulteriori informazioni su questo controllo, vedere [controlli ComboBoxEx](http://msdn.microsoft.com/library/windows/desktop/bb775738) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#27](../../mfc/reference/codesnippet/cpp/ccombobox-class_27.cpp)]  
  
##  <a name="limittext"></a>CComboBox::LimitText  
 Limita la lunghezza in byte del testo che l'utente può immettere nel controllo di modifica di una casella combinata.  
  
```  
BOOL LimitText(int nMaxChars);
```  
  
### <a name="parameters"></a>Parametri  
 `nMaxChars`  
 Specifica la lunghezza (in byte) del testo che l'utente può immettere. Se questo parametro è 0, la lunghezza di testo è impostata su 65.535 byte.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. Se viene chiamato per una casella combinata con lo stile [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o per una casella combinata senza un controllo di modifica, il valore restituito è **CB_ERR**.  
  
### <a name="remarks"></a>Note  
 Se la casella combinata non ha lo stile [CBS_AUTOHSCROLL](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles), l'impostazione del limite di testo per essere più grande della dimensione del controllo di modifica non avrà effetto.  
  
 `LimitText`Limita solo il testo in cui che l'utente può immettere. Non ha effetto su qualsiasi testo già nel controllo di modifica quando viene inviato il messaggio, né influisce la lunghezza del testo copiata nel controllo di modifica quando è selezionata una stringa nella casella di riepilogo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#28](../../mfc/reference/codesnippet/cpp/ccombobox-class_28.cpp)]  
  
##  <a name="measureitem"></a>CComboBox::MeasureItem  
 Chiamato dal framework quando viene creata una casella combinata con uno stile di disegno personalizzato.  
  
```  
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMeasureItemStruct`  
 Un puntatore di tipo long a un [MEASUREITEMSTRUCT](../../mfc/reference/measureitemstruct-structure.md) struttura.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro e compilare il `MEASUREITEMSTRUCT` struttura per informare casella Windows delle dimensioni dell'elenco nella casella combinata. Se la casella combinata viene creata con il [CBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile, il framework chiama questa funzione membro per ogni elemento nella casella di riepilogo. In caso contrario, questo membro viene chiamato una sola volta.  
  
 Utilizzando il **CBS_OWNERDRAWFIXED** stile in una casella combinata creata dal proprietario creato con il [SubclassDlgItem](../../mfc/reference/cwnd-class.md#subclassdlgitem) funzione membro di `CWnd` implica considerazioni di programmazione ulteriormente. Vedere la discussione nella [14 Nota tecnica](../../mfc/tn014-custom-controls.md).  
  
 Vedere [CWnd::OnMeasureItem](../../mfc/reference/cwnd-class.md#onmeasureitem) per una descrizione del `MEASUREITEMSTRUCT` struttura.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#29](../../mfc/reference/codesnippet/cpp/ccombobox-class_29.cpp)]  
  
##  <a name="paste"></a>CComboBox::Paste  
 Inserisce i dati dagli Appunti nel controllo di modifica della casella combinata nella posizione del cursore corrente.  
  
```  
void Paste();
```  
  
### <a name="remarks"></a>Note  
 Vengono inseriti dati solo se gli Appunti contengono dati **CF_TEXT** formato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#30](../../mfc/reference/codesnippet/cpp/ccombobox-class_30.cpp)]  
  
##  <a name="resetcontent"></a>CComboBox::ResetContent  
 Rimuove tutti gli elementi dall'elenco e modificare di controllo di una casella combinata.  
  
```  
void ResetContent();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#31](../../mfc/reference/codesnippet/cpp/ccombobox-class_31.cpp)]  
  
##  <a name="selectstring"></a>CComboBox::SelectString  
 Cerca una stringa nella casella di riepilogo di una casella combinata e se la stringa viene trovata, seleziona la stringa nella casella di riepilogo e lo copia in controllo di modifica.  
  
```  
int SelectString(
    int nStartAfter,  
    LPCTSTR lpszString);
```  
  
### <a name="parameters"></a>Parametri  
 `nStartAfter`  
 Contiene l'indice in base zero dell'elemento prima del primo elemento da cercare. Quando la ricerca raggiunge la fine della casella di riepilogo, continua dalla parte superiore della casella di riepilogo fino all'elemento specificato da `nStartAfter`. Se-1, la casella di riepilogo intero viene eseguita la ricerca dall'inizio.  
  
 `lpszString`  
 Punta alla stringa con terminazione null che contiene il prefisso per la ricerca. La ricerca è case indipendenti, pertanto questa stringa può contenere qualsiasi combinazione di lettere maiuscole e minuscole.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero dell'elemento selezionato, se la stringa viene trovata. Se la ricerca ha esito negativo, il valore restituito è **CB_ERR** e non viene modificata la selezione corrente.  
  
### <a name="remarks"></a>Note  
 Una stringa viene selezionata solo se i relativi caratteri iniziali (dal punto di partenza) corrisponderanno ai caratteri nella stringa di prefisso.  
  
 Si noti che il `SelectString` e `FindString` entrambe le funzioni membro trovare una stringa, ma la `SelectString` funzione membro viene selezionata anche la stringa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#32](../../mfc/reference/codesnippet/cpp/ccombobox-class_32.cpp)]  
  
##  <a name="setcuebanner"></a>CComboBox::SetCueBanner  
 Imposta il testo della segnalazione che viene visualizzato per un controllo casella combinata.  
  
```  
BOOL SetCueBanner(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *lpszText*|Puntatore a un buffer con terminazione null che contiene il testo della segnalazione.|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il metodo ha esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Testo della segnalazione costituisce una richiesta che viene visualizzata nell'area di input del controllo casella combinata. Fino a quando l'utente fornisce input, viene visualizzato il testo della segnalazione.  
  
 Questo metodo invia il [CB_SETCUEBANNER](http://msdn.microsoft.com/library/windows/desktop/bb775897) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_combobox`, che viene utilizzato per accedere a livello di codice il controllo casella combinata. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CComboBox_s1#1](../../mfc/reference/codesnippet/cpp/ccombobox-class_33.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente imposta l'intestazione della segnalazione per il controllo casella combinata.  
  
 [!code-cpp[NVC_MFC_CComboBox_s1#2](../../mfc/reference/codesnippet/cpp/ccombobox-class_34.cpp)]  
  
##  <a name="setcursel"></a>CComboBox::SetCurSel  
 Seleziona una stringa nella casella di riepilogo di una casella combinata.  
  
```  
int SetCurSel(int nSelect);
```  
  
### <a name="parameters"></a>Parametri  
 `nSelect`  
 Specifica l'indice in base zero della stringa da selezionare. Se-1, viene rimosso qualsiasi selezione corrente nella casella di riepilogo e il controllo è deselezionato.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero dell'elemento selezionato se il messaggio ha esito positivo. Il valore restituito è **CB_ERR** se `nSelect` è maggiore del numero di elementi nell'elenco o se `nSelect` è impostato su -1, che cancella la selezione.  
  
### <a name="remarks"></a>Note  
 Se necessario, la casella di riepilogo scorre la stringa all'interno della visualizzazione (se la casella di riepilogo è visibile). Il testo nel controllo di modifica della casella combinata viene modificato per riflettere la nuova selezione. Qualsiasi selezione precedente nella casella di riepilogo è stato rimosso.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#33](../../mfc/reference/codesnippet/cpp/ccombobox-class_35.cpp)]  
  
##  <a name="setdroppedwidth"></a>CComboBox::SetDroppedWidth  
 Chiamare questa funzione per impostare la larghezza minima consentita, in pixel, della casella di riepilogo di una casella combinata.  
  
```  
int SetDroppedWidth(UINT nWidth);
```  
  
### <a name="parameters"></a>Parametri  
 `nWidth`  
 La larghezza minima consentita della casella di elenco della casella combinata, in pixel.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, la nuova larghezza dell'elenco casella, in caso contrario **CB_ERR**.  
  
### <a name="remarks"></a>Note  
 Questa funzione si applica solo alle caselle combinate con il [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile.  
  
 Per impostazione predefinita, la larghezza minima consentita della casella di riepilogo a discesa è 0. Quando viene visualizzata la parte della casella di riepilogo della casella combinata, la larghezza è maggiore di larghezza minima consentita o la larghezza della casella combinata.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#34](../../mfc/reference/codesnippet/cpp/ccombobox-class_36.cpp)]  
  
##  <a name="seteditsel"></a>CComboBox::SetEditSel  
 Seleziona i caratteri nel controllo di modifica di una casella combinata.  
  
```  
BOOL SetEditSel(
    int nStartChar,  
    int nEndChar);
```  
  
### <a name="parameters"></a>Parametri  
 `nStartChar`  
 Specifica la posizione iniziale. Se la posizione iniziale è impostata su -1, qualsiasi altra selezione esistente viene rimosso.  
  
 `nEndChar`  
 Specifica la posizione finale. Se la posizione finale è impostata su -1, quindi tutto il testo dalla posizione iniziale e l'ultimo carattere nel controllo di modifica è selezionata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione membro ha esito positivo; in caso contrario 0. È **CB_ERR** se `CComboBox` ha il [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile o non dispone di una casella di riepilogo.  
  
### <a name="remarks"></a>Note  
 Le posizioni sono in base zero. Per selezionare il primo carattere del controllo di modifica, si specifica una posizione iniziale pari a 0. La posizione finale è per il carattere immediatamente dopo l'ultimo carattere da selezionare. Ad esempio, per selezionare i primi quattro caratteri del controllo di modifica, utilizzare una posizione iniziale pari a 0 e una posizione finale di 4.  
  
> [!NOTE]
>  Questa funzione non è supportata dal controllo **ComboBoxEx** di Windows. Per ulteriori informazioni su questo controllo, vedere [controlli ComboBoxEx](http://msdn.microsoft.com/library/windows/desktop/bb775738) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CComboBox::GetEditSel](#geteditsel).  
  
##  <a name="setextendedui"></a>CComboBox::SetExtendedUI  
 Chiamare il `SetExtendedUI` funzione membro per selezionare l'interfaccia utente predefinita o l'interfaccia utente estesa per una casella combinata con la [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile.  
  
```  
int SetExtendedUI(BOOL bExtended = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bIl*  
 Specifica se la casella combinata deve utilizzare l'interfaccia utente estesa o l'interfaccia utente predefinita. Il valore **TRUE** seleziona estesa dell'interfaccia utente, il valore **FALSE** seleziona l'interfaccia utente standard.  
  
### <a name="return-value"></a>Valore restituito  
 **CB_OKAY** se l'operazione ha esito positivo, o **CB_ERR** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 L'interfaccia utente estesa può essere identificato nei modi seguenti:  
  
-   Fare clic sul controllo statico Visualizza una casella di riepilogo solo per le caselle combinate con il **CBS_DROPDOWNLIST** stile.  
  
-   Premendo il tasto freccia giù consente di visualizzare la casella di riepilogo (F4 è disabilitato).  
  
 Lo scorrimento nel controllo statico è disabilitato quando l'elenco di elementi non è visibile (sono disabilitati i tasti di direzione).  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CComboBox::GetExtendedUI](#getextendedui).  
  
##  <a name="sethorizontalextent"></a>CComboBox::SetHorizontalExtent  
 Imposta la larghezza, in pixel, che è possibile far scorrere orizzontalmente la parte della casella di riepilogo della casella combinata.  
  
```  
void SetHorizontalExtent(UINT nExtent);
```  
  
### <a name="parameters"></a>Parametri  
 *nExtent*  
 Specifica il numero di pixel in base alla quale la parte della casella di riepilogo della casella combinata è possibile scorrere orizzontalmente.  
  
### <a name="remarks"></a>Note  
 Se la larghezza della casella di riepilogo è inferiore rispetto a questo valore, la barra di scorrimento orizzontale orizzontalmente scorre gli elementi nella casella di riepilogo. Se la larghezza della casella di riepilogo è uguale o maggiore di questo valore, la barra di scorrimento orizzontale è nascosta o, se la casella combinata di [CBS_DISABLENOSCROLL](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile, disabilitato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#35](../../mfc/reference/codesnippet/cpp/ccombobox-class_37.cpp)]  
  
##  <a name="setitemdata"></a>CComboBox::SetItemData  
 Imposta il valore a 32 bit associato all'elemento specificato in una casella combinata.  
  
```  
int SetItemData(
    int nIndex,  
    DWORD_PTR dwItemData);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Contiene un indice in base zero per l'elemento da impostare.  
  
 `dwItemData`  
 Contiene il nuovo valore da associare all'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 **CB_ERR** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Utilizzare il `SetItemDataPtr` funzione membro se l'elemento a 32 bit è un puntatore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#36](../../mfc/reference/codesnippet/cpp/ccombobox-class_38.cpp)]  
  
##  <a name="setitemdataptr"></a>CComboBox::SetItemDataPtr  
 Imposta il valore a 32 bit associato all'elemento specificato in una casella combinata sia il puntatore specificato ( **void\***).  
  
```  
int SetItemDataPtr(
    int nIndex,  
    void* pData);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Contiene un indice in base zero dell'elemento.  
  
 `pData`  
 Contiene il puntatore da associare all'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 **CB_ERR** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Questo puntatore rimane valido per tutta la durata della casella combinata, anche se la relativa posizione all'interno della casella combinata potrebbe cambiare quando gli elementi vengono aggiunti o rimossi. Di conseguenza, l'indice dell'elemento all'interno della casella è possibile modificare, ma il puntatore rimane affidabile.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#37](../../mfc/reference/codesnippet/cpp/ccombobox-class_39.cpp)]  
  
##  <a name="setitemheight"></a>CComboBox::SetItemHeight  
 Chiamare il `SetItemHeight` funzione membro per impostare l'altezza degli elementi dell'elenco in una casella combinata o l'altezza della parte di una casella combinata controllo di modifica (o testo statico).  
  
```  
int SetItemHeight(
    int nIndex,  
    UINT cyItemHeight);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica se l'altezza degli elementi dell'elenco o l'altezza della parte di controllo di modifica (o testo statico) della casella combinata è impostata.  
  
 Se la casella combinata di [CBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile, `nIndex` specifica l'indice in base zero dell'elemento di elenco il cui altezza è impostato; in caso contrario, `nIndex` deve essere 0 e l'altezza dell'elenco di tutti gli elementi verranno impostati.  
  
 Se `nIndex` è -1, l'altezza del controllo di modifica o parte di testo statico della casella combinata è necessario impostare.  
  
 `cyItemHeight`  
 Specifica l'altezza, in pixel, del componente casella combinata identificato da `nIndex`.  
  
### <a name="return-value"></a>Valore restituito  
 **CB_ERR** se l'indice o l'altezza non è valido; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'altezza della parte di controllo di modifica (o testo statico) della casella combinata è impostato in modo indipendente dall'altezza degli elementi dell'elenco. Un'applicazione deve garantire che l'altezza della parte di controllo di modifica (o testo statico) non è inferiore rispetto all'altezza di un elemento specifico della casella di riepilogo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#38](../../mfc/reference/codesnippet/cpp/ccombobox-class_40.cpp)]  
  
##  <a name="setlocale"></a>CComboBox::SetLocale  
 Imposta l'identificatore delle impostazioni locali per questa casella combinata.  
  
```  
LCID SetLocale(LCID nNewLocale);
```  
  
### <a name="parameters"></a>Parametri  
 `nNewLocale`  
 Nuovo valore delle impostazioni locali (LCID) di identificatore da impostare per la casella combinata.  
  
### <a name="return-value"></a>Valore restituito  
 Valore precedente delle impostazioni locali di un identificatore (LCID) per questa casella combinata.  
  
### <a name="remarks"></a>Note  
 Se **SetLocale** non viene chiamato, il valore predefinito delle impostazioni locali vengano ottenuta dal sistema. Impostazioni locali predefinite questo sistema possono essere modificata da Pannello di controllo applicazione internazionali (o internazionale).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#39](../../mfc/reference/codesnippet/cpp/ccombobox-class_41.cpp)]  
  
##  <a name="setminvisibleitems"></a>CComboBox::SetMinVisibleItems  
 Imposta il numero minimo di elementi visibili nell'elenco a discesa della casella combinata corrente casella di controllo.  
  
```  
BOOL SetMinVisibleItems(int iMinVisible);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `iMinVisible`|Specifica il numero minimo di elementi visibili.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [CB_SETMINVISIBLE](http://msdn.microsoft.com/library/windows/desktop/bb775915) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce la variabile `m_combobox`, che viene utilizzato per accedere a livello di codice il controllo casella combinata. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CComboBox_s1#1](../../mfc/reference/codesnippet/cpp/ccombobox-class_33.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente inserisce 20 elementi nell'elenco a discesa di un controllo casella combinata. Specifica quindi che un minimo di 10 elementi da visualizzare quando un utente fa clic sulla freccia a discesa.  
  
 [!code-cpp[NVC_MFC_CComboBox_s1#2](../../mfc/reference/codesnippet/cpp/ccombobox-class_34.cpp)]  
  
##  <a name="settopindex"></a>CComboBox::SetTopIndex  
 Garantisce che un particolare elemento è visibile nella casella di elenco della casella combinata.  
  
```  
int SetTopIndex(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica l'indice in base zero dell'elemento della casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se ha esito positivo, o **CB_ERR** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Il sistema consente di scorrere fino a quando l'elemento specificato dalla casella di riepilogo `nIndex` viene visualizzata nella parte superiore dell'elenco è stato raggiunto casella o l'intervallo di scorrimento massimo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CComboBox#40](../../mfc/reference/codesnippet/cpp/ccombobox-class_42.cpp)]  
  
##  <a name="showdropdown"></a>CComboBox::ShowDropDown  
 Mostra o nasconde la casella di riepilogo di una casella combinata con la [CBS_DROPDOWN](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) o [CBS_DROPDOWNLIST](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile.  
  
```  
void ShowDropDown(BOOL bShowIt = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bShowIt*  
 Specifica se la casella di riepilogo a discesa deve essere visualizzato o nascosto. Il valore **TRUE** Mostra la casella di riepilogo. Il valore **FALSE** nasconde la casella di riepilogo.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, una casella combinata di questo stile mostrerà la casella di riepilogo.  
  
 Questa funzione membro non ha alcun effetto su una casella combinata creata con la [CBS_SIMPLE](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) stile.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CComboBox::GetDroppedState](#getdroppedstate).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC viene](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Classe CButton](../../mfc/reference/cbutton-class.md)   
 [Classe CEdit](../../mfc/reference/cedit-class.md)   
 [CListBox (classe)](../../mfc/reference/clistbox-class.md)   
 [Classe CScrollBar](../../mfc/reference/cscrollbar-class.md)   
 [Classe CStatic](../../mfc/reference/cstatic-class.md)   
 [Classe CDialog](../../mfc/reference/cdialog-class.md)

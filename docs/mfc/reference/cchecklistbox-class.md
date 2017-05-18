---
title: Classe CCheckListBox | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCheckListBox
- AFXWIN/CCheckListBox
- AFXWIN/CCheckListBox::CCheckListBox
- AFXWIN/CCheckListBox::Create
- AFXWIN/CCheckListBox::DrawItem
- AFXWIN/CCheckListBox::Enable
- AFXWIN/CCheckListBox::GetCheck
- AFXWIN/CCheckListBox::GetCheckStyle
- AFXWIN/CCheckListBox::IsEnabled
- AFXWIN/CCheckListBox::MeasureItem
- AFXWIN/CCheckListBox::OnGetCheckPosition
- AFXWIN/CCheckListBox::SetCheck
- AFXWIN/CCheckListBox::SetCheckStyle
dev_langs:
- C++
helpviewer_keywords:
- CCheckListBox class
- checklist boxes
ms.assetid: 1dd78438-00e8-441c-b36f-9c4f9ac0d019
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 2cce91e3b6cb6cdf6ec2f4564fcf5090a54c917f
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cchecklistbox-class"></a>Classe CCheckListBox
Fornisce la funzionalità di una casella elenco di controllo di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CCheckListBox : public CListBox  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCheckListBox::CCheckListBox](#cchecklistbox)|Costruisce un oggetto `CCheckListBox`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCheckListBox::Create](#create)|Crea la casella di elenco di controllo di Windows e lo collega a di `CCheckListBox` oggetto.|  
|[CCheckListBox::DrawItem](#drawitem)|Chiamato dal framework quando un aspetto visivo di viene modificato un elenco dal proprietario.|  
|[CCheckListBox::Enable](#enable)|Abilita o disabilita un elemento della casella elenco di controllo.|  
|[CCheckListBox::GetCheck](#getcheck)|Ottiene lo stato della casella di controllo di un elemento.|  
|[CCheckListBox::GetCheckStyle](#getcheckstyle)|Ottiene lo stile delle caselle di controllo del controllo.|  
|[CCheckListBox::IsEnabled](#isenabled)|Determina se un elemento è abilitato.|  
|[CCheckListBox::MeasureItem](#measureitem)|Chiamato dal framework quando viene creata una casella di riepilogo con uno stile di disegno personalizzato.|  
|[CCheckListBox::OnGetCheckPosition](#ongetcheckposition)|Chiamato dal framework per ottenere la posizione della casella di controllo di un elemento.|  
|[CCheckListBox::SetCheck](#setcheck)|Imposta lo stato della casella di controllo di un elemento.|  
|[CCheckListBox::SetCheckStyle](#setcheckstyle)|Imposta lo stile delle caselle di controllo del controllo.|  
  
## <a name="remarks"></a>Note  
 Una casella"elenco di controllo" Visualizza un elenco di elementi, ad esempio i nomi di file. Ogni elemento nell'elenco include una casella di controllo accanto a tale che l'utente può selezionare o deselezionare.  
  
 `CCheckListBox`l'elenco contiene più di stringhe di testo è solo per i controlli creati dal proprietario. Nella forma più semplice, una casella di elenco di controllo contiene stringhe di testo e caselle di controllo, ma non è necessario essere del tutto il testo. Ad esempio, è un elenco di piccole dimensioni bitmap con una casella di controllo accanto a ogni elemento.  
  
 Per selezionare il proprio elenco di controllo, è necessario derivare la propria classe da `CCheckListBox`. Per derivare la propria classe, scrivere un costruttore della classe derivata, chiamare **crea**.  
  
 Se si desidera gestire i messaggi di notifica Windows inviati da una casella di riepilogo per il relativo elemento padre (in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)), aggiungere una funzione membro della mappa messaggi voce e gestore di messaggi alla classe padre per ogni messaggio.  
  
 Ogni voce nella mappa messaggi assume il formato seguente:  
  
 **ON_**Notification **(**`id`, `memberFxn`**)**  
  
 dove `id` specifica l'ID di finestra figlio del controllo che invia la notifica e `memberFxn` è il nome della funzione membro padre scritta per gestire la notifica.  
  
 Prototipo di funzione dell'elemento padre è il seguente:  
  
 **afx_msg** `void` `memberFxn` **( );**  
  
 È presente solo una voce della mappa messaggi che si riferisce in modo specifico a **CCheckListBox** (ma vedere anche le voci della mappa messaggi per [CListBox](../../mfc/reference/clistbox-class.md)):  
  
- **ON_CLBN_CHKCHANGE** l'utente ha modificato lo stato della casella di controllo di un elemento.  
  
 Se la casella di elenco di controllo è una casella di elenco di controllo predefinito (un elenco di stringhe con le dimensioni predefinite le caselle di controllo a sinistra di ogni), è possibile utilizzare il valore predefinito [CCheckListBox::DrawItem](#drawitem) per disegnare la casella di elenco di controllo. In caso contrario, è necessario eseguire l'override di [CListBox::CompareItem](../../mfc/reference/clistbox-class.md#compareitem) funzione e [CCheckListBox::DrawItem](#drawitem) e [CCheckListBox::MeasureItem](#measureitem) funzioni.  
  
 È possibile creare una casella di elenco di controllo da un modello di finestra di dialogo o direttamente nel codice.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CListBox](../../mfc/reference/clistbox-class.md)  
  
 `CCheckListBox`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cchecklistbox"></a>CCheckListBox::CCheckListBox  
 Costruisce un oggetto `CCheckListBox`.  
  
```  
CCheckListBox();
```  
  
### <a name="remarks"></a>Note  
 Costruire un `CCheckListBox` oggetto in due passaggi. Definire innanzitutto una classe derivata da `CCheckListBox`, quindi chiamare **crea**, che inizializza la casella di elenco di controllo di Windows e lo collega a di `CCheckListBox` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[60 NVC_MFCControlLadenDialog](../../mfc/codesnippet/cpp/cchecklistbox-class_1.cpp)]  
  
##  <a name="create"></a>CCheckListBox::Create  
 Crea la casella di elenco di controllo di Windows e lo collega a di `CCheckListBox` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica lo stile della casella di elenco di controllo. Lo stile deve essere **LBS_HASSTRINGS** e **LBS_OWNERDRAWFIXED** (tutti gli elementi nell'elenco hanno la stessa altezza) o **LBS_OWNERDRAWVARIABLE** (gli elementi dell'elenco sono di altezze). Questo stile può essere combinato con altri [stili casella di riepilogo](../../mfc/reference/list-box-styles.md) tranne **LBS_USETABSTOPS**.  
  
 `rect`  
 Specifica le dimensioni della casella di elenco di controllo e la posizione. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](../../mfc/reference/rect-structure1.md) struttura.  
  
 `pParentWnd`  
 Specifica la proprietà elenco di controllo della finestra padre (in genere un `CDialog` oggetto). Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID di controllo. della casella elenco di controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Costruire un `CCheckListBox` oggetto in due passaggi. In primo luogo, definire una classe derivata da **CcheckListBox** e quindi chiamare **crea**, che inizializza la casella di elenco di controllo di Windows e lo collega al `CCheckListBox`. Vedere [CCheckListBox::CCheckListBox](#cchecklistbox) per un esempio.  
  
 Quando **crea** viene eseguita, Windows invia il [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize), e [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) messaggi per il controllo casella di elenco di controllo.  
  
 Questi messaggi vengono gestiti per impostazione predefinita il [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate), [OnCreate](../../mfc/reference/cwnd-class.md#oncreate), [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize), e [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) delle funzioni membro di `CWnd` classe di base. Per estendere la gestione dei messaggi predefinito, aggiungere una mappa messaggi per la classe derivata le funzioni membro override il gestore di messaggi precedente. Eseguire l'override `OnCreate`, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.  
  
 Applicare la seguente istruzione [stili finestra](../../mfc/reference/window-styles.md) per un elenco di controllo casella di controllo:  
  
- **WS_CHILD** sempre  
  
- **WS_VISIBLE** in genere  
  
- **WS_DISABLED** raramente  
  
- **WS_VSCROLL** per aggiungere una barra di scorrimento verticale  
  
- **WS_HSCROLL** per aggiungere una barra di scorrimento orizzontale  
  
- **WS_GROUP** per raggruppare i controlli  
  
- **WS_TABSTOP** per consentire al controllo con il tasto TAB  
  
##  <a name="drawitem"></a>CCheckListBox::DrawItem  
 Chiamato dal framework quando un aspetto visivo di viene modificato un elenco di controllo proprietario.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpDrawItemStruct`  
 Un puntatore long a un [DRAWITEMSTRUCT](../../mfc/reference/drawitemstruct-structure.md) struttura che contiene informazioni sul tipo di disegno necessari.  
  
### <a name="remarks"></a>Note  
 Il **itemAction** e **itemState** i membri del `DRAWITEMSTRUCT` struttura definire l'azione di disegno che deve essere eseguita.  
  
 Per impostazione predefinita, questa funzione crea un elenco di casella di controllo predefinito, costituito da un elenco di stringhe con una casella di controllo dimensioni predefinite a sinistra. Dimensioni dell'elenco della casella di controllo sono quello specificato [crea](#create).  
  
 Eseguire l'override di questa funzione membro per implementare disegno delle finestre di elenco di controllo proprietario che non sono il valore predefinito, ad esempio caselle di elenco di controllo con gli elenchi che non sono stringhe, con elementi di altezza variabile o con caselle di controllo che non sono a sinistra. L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito `lpDrawItemStruct` prima del completamento di questa funzione membro.  
  
 Se gli elementi della casella elenco di controllo non sono tutti della stessa altezza, l'elenco di controllo casella stile (specificato in **crea**) deve essere **LBS_OWNERVARIABLE**, è necessario eseguire l'override di [MeasureItem](#measureitem) (funzione).  
  
##  <a name="enable"></a>CCheckListBox::Enable  
 Chiamare questa funzione per abilitare o disabilitare un elemento della casella elenco di controllo.  
  
```  
void Enable(
    int nIndex,  
    BOOL bEnabled = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice dell'elemento della casella di elenco di controllo deve essere abilitata.  
  
 `bEnabled`  
 Specifica se l'elemento è abilitato o disabilitato.  
  
##  <a name="getcheck"></a>CCheckListBox::GetCheck  
 Recupera lo stato della casella di controllo specificato.  
  
```  
int GetCheck(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero di una casella di controllo è contenuta nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato della casella di controllo specificato. Nella tabella seguente sono elencati i valori possibili.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|`BST_CHECKED`|La casella di controllo è selezionata.|  
|`BST_UNCHECKED`|Non è selezionata la casella di controllo.|  
|`BST_INDETERMINATE`|Lo stato della casella di controllo è indeterminato.|  
  
##  <a name="getcheckstyle"></a>CCheckListBox::GetCheckStyle  
 Chiamare questa funzione per ottenere lo stile della casella elenco di controllo.  
  
```  
UINT GetCheckStyle();
```  
  
### <a name="return-value"></a>Valore restituito  
 Lo stile delle caselle di controllo del controllo.  
  
### <a name="remarks"></a>Note  
 Per informazioni sugli stili possibili, vedere [SetCheckStyle](#setcheckstyle).  
  
##  <a name="isenabled"></a>CCheckListBox::IsEnabled  
 Chiamare questa funzione per determinare se un elemento è abilitato.  
  
```  
BOOL IsEnabled(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è abilitato; in caso contrario 0.  
  
##  <a name="measureitem"></a>CCheckListBox::MeasureItem  
 Chiamato dal framework quando viene creata una casella di elenco di controllo con uno stile non predefinito.  
  
```  
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 `lpMeasureItemStruct`  
 Un puntatore long a un [MEASUREITEMSTRUCT](../../mfc/reference/measureitemstruct-structure.md) struttura.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro e compilare il `MEASUREITEMSTRUCT` struttura per informare Windows delle dimensioni degli elementi della casella di elenco di controllo. Se la casella di elenco di controllo viene creata con il [LBS_OWNERDRAWVARIABLE](../../mfc/reference/list-box-styles.md) stile, il framework chiama questa funzione membro per ogni elemento nella casella di riepilogo. In caso contrario, questo membro viene chiamato una sola volta.  
  
##  <a name="ongetcheckposition"></a>CCheckListBox::OnGetCheckPosition  
 Il framework chiama questa funzione per ottenere la posizione e le dimensioni della casella di controllo in un elemento.  
  
```  
virtual CRect OnGetCheckPosition(
    CRect rectItem,  
    CRect rectCheckBox);
```  
  
### <a name="parameters"></a>Parametri  
 *rectItem*  
 La posizione e le dimensioni dell'elemento dell'elenco.  
  
 `rectCheckBox`  
 La posizione predefinita e le dimensioni di un elemento casella di controllo.  
  
### <a name="return-value"></a>Valore restituito  
 La posizione e dimensioni di un elemento casella di controllo.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita restituisce solo la posizione predefinita e le dimensioni della casella di controllo ( `rectCheckBox`). Per impostazione predefinita, una casella di controllo viene allineata nell'angolo superiore sinistro di un elemento e le dimensioni della casella di controllo standard. Potrebbero esserci casi in cui si desidera che le caselle di controllo a destra o si desidera che una casella di controllo maggiore o minore. In questi casi, eseguire l'override `OnGetCheckPosition` per modificare la posizione di casella di controllo e le dimensioni all'interno dell'elemento.  
  
##  <a name="setcheck"></a>CCheckListBox::SetCheck  
 Imposta lo stato della casella di controllo specificato.  
  
```  
void SetCheck(
    int nIndex,  
    int nCheck);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero di una casella di controllo è contenuta nella casella di riepilogo.  
  
 `nCheck`  
 Lo stato del pulsante per la casella di controllo specificato. Vedere la sezione Osservazioni per i valori possibili.  
  
### <a name="remarks"></a>Note  
 Nella tabella seguente sono elencati i valori possibili per il `nCheck` parametro.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|**BST_CHECKED**|Selezionare la casella di controllo specificata.|  
|**BST_UNCHECKED**|Deselezionare la casella di controllo specificata.|  
|**BST_INDETERMINATE**|Impostare lo stato di casella di controllo specificata al valore indeterminato.<br /><br /> Questo stato è disponibile solo se lo stile della casella di controllo è `BS_AUTO3STATE` o `BS_3STATE`. Per ulteriori informazioni, vedere [stili dei pulsanti](../../mfc/reference/button-styles.md).|  
  
##  <a name="setcheckstyle"></a>CCheckListBox::SetCheckStyle  
 Chiamare questa funzione per impostare lo stile delle caselle di controllo nella casella di elenco di controllo.  
  
```  
void SetCheckStyle(UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `nStyle`  
 Determina lo stile delle caselle di controllo nella casella di elenco di controllo.  
  
### <a name="remarks"></a>Note  
 Gli stili validi sono:  
  
- **BS_CHECKBOX**  
  
- **BS_AUTOCHECKBOX**  
  
- **BS_AUTO3STATE**  
  
- **BS_3STATE**  
  
 Per informazioni su questi stili, vedere [stili dei pulsanti](../../mfc/reference/button-styles.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio TSTCON](../../visual-cpp-samples.md)   
 [CListBox (classe)](../../mfc/reference/clistbox-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CListBox (classe)](../../mfc/reference/clistbox-class.md)


---
title: Classe CCheckListBox | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CCheckListBox [MFC], CCheckListBox
- CCheckListBox [MFC], Create
- CCheckListBox [MFC], DrawItem
- CCheckListBox [MFC], Enable
- CCheckListBox [MFC], GetCheck
- CCheckListBox [MFC], GetCheckStyle
- CCheckListBox [MFC], IsEnabled
- CCheckListBox [MFC], MeasureItem
- CCheckListBox [MFC], OnGetCheckPosition
- CCheckListBox [MFC], SetCheck
- CCheckListBox [MFC], SetCheckStyle
ms.assetid: 1dd78438-00e8-441c-b36f-9c4f9ac0d019
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 998a2124d80a03946df1cfeeb4a0223ccbf55b24
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956567"
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
|[CCheckListBox::Create](#create)|Crea la casella di elenco di controllo di Windows e lo collega al `CCheckListBox` oggetto.|  
|[CCheckListBox::DrawItem](#drawitem)|Chiamato dal framework quando un aspetto visivo di una casella cambi creato dal proprietario.|  
|[CCheckListBox::Enable](#enable)|Abilita o disabilita un elemento della casella elenco di controllo.|  
|[CCheckListBox::GetCheck](#getcheck)|Ottiene lo stato della casella di controllo dell'elemento.|  
|[CCheckListBox::GetCheckStyle](#getcheckstyle)|Ottiene lo stile delle caselle di controllo del controllo.|  
|[CCheckListBox::IsEnabled](#isenabled)|Determina se un elemento è abilitato.|  
|[CCheckListBox::MeasureItem](#measureitem)|Chiamato dal framework quando viene creata una casella di riepilogo con uno stile di disegno.|  
|[CCheckListBox::OnGetCheckPosition](#ongetcheckposition)|Chiamato dal framework per ottenere la posizione della casella di controllo dell'elemento.|  
|[CCheckListBox::SetCheck](#setcheck)|Imposta lo stato della casella di controllo dell'elemento.|  
|[CCheckListBox::SetCheckStyle](#setcheckstyle)|Imposta lo stile delle caselle di controllo del controllo.|  
  
## <a name="remarks"></a>Note  
 Una casella di elenco di controllo"" Visualizza un elenco di elementi, ad esempio nomi di file. Ogni elemento nell'elenco include una casella di controllo accanto a tale che l'utente può selezionare o deselezionare.  
  
 `CCheckListBox` è solo per i controlli creati dal proprietario perché l'elenco contiene più di stringhe di testo. Nella sua forma più semplice, una casella di elenco di controllo contiene stringhe di testo e caselle di controllo, ma non è necessario hanno affatto un testo. Ad esempio, si potrebbe contenere un elenco delle bitmap di piccole dimensioni con una casella di controllo accanto a ciascun elemento.  
  
 Per creare una propria finestra elenco di controllo, è necessario derivare la propria classe dal `CCheckListBox`. Per derivare la propria classe, scrivere un costruttore della classe derivata, quindi chiamare il metodo `Create`.  
  
 Se si desidera gestire i messaggi di notifica Windows inviati da una casella di riepilogo al relativo elemento padre (in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)), aggiungere una funzione membro della mappa messaggi voce e gestore di messaggi alla classe padre per ogni messaggio.  
  
 Ogni voce della mappa messaggi assume il formato seguente:  
  
 **On _** notifica **(**`id`, `memberFxn` **)**  
  
 in cui `id` specifica l'ID di finestra figlio del controllo che invia la notifica e `memberFxn` è il nome della funzione membro padre scritta per gestire la notifica.  
  
 Prototipo di funzione dell'elemento padre è il seguente:  
  
 **afx_msg** `void` `memberFxn` **();**  
  
 È presente solo una voce della mappa messaggi relativo in maniera specifica `CCheckListBox` (ma vedere anche le voci della mappa messaggi per [CListBox](../../mfc/reference/clistbox-class.md)):  
  
- **ON_CLBN_CHKCHANGE** l'utente ha modificato lo stato della casella di controllo dell'elemento.  
  
 Se la casella di elenco di controllo è una casella di elenco di controllo predefinito (un elenco di stringhe con le dimensioni predefinite le caselle di controllo a sinistra di ogni), è possibile utilizzare il valore predefinito [CCheckListBox::DrawItem](#drawitem) per disegnare la casella di elenco di controllo. In caso contrario, è necessario eseguire l'override di [CListBox::CompareItem](../../mfc/reference/clistbox-class.md#compareitem) funzione e il [CCheckListBox::DrawItem](#drawitem) e [CCheckListBox::MeasureItem](#measureitem) funzioni.  
  
 È possibile creare una casella di elenco di controllo da un modello di finestra di dialogo o direttamente nel codice.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CListBox](../../mfc/reference/clistbox-class.md)  
  
 `CCheckListBox`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cchecklistbox"></a>  CCheckListBox::CCheckListBox  
 Costruisce un oggetto `CCheckListBox`.  
  
```  
CCheckListBox();
```  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CCheckListBox` oggetto in due passaggi. Innanzitutto definire una classe derivata da `CCheckListBox`, quindi chiamare `Create`, che inizializza la finestra elenco di controllo di Windows e lo collega al `CCheckListBox` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCControlLadenDialog#60](../../mfc/codesnippet/cpp/cchecklistbox-class_1.cpp)]  
  
##  <a name="create"></a>  CCheckListBox::Create  
 Crea la casella di elenco di controllo di Windows e lo collega al `CCheckListBox` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *dwStyle*  
 Specifica lo stile della casella di elenco di controllo. Lo stile deve essere **LBS_HASSTRINGS** e il **LBS_OWNERDRAWFIXED** (tutti gli elementi nell'elenco sono della stessa altezza) o **LBS_OWNERDRAWVARIABLE** (gli elementi dell'elenco sono di altezze). Questo stile può essere combinato con altri [stili casella di riepilogo](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) tranne **LBS_USETABSTOPS**.  
  
 *Rect*  
 Specifica le dimensioni della casella di elenco di controllo e la posizione. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o una [RECT](../../mfc/reference/rect-structure1.md) struttura.  
  
 *pParentWnd*  
 Specifica finestra padre della casella elenco di controllo (in genere un `CDialog` oggetto). Non deve essere **NULL**.  
  
 *nID*  
 Specifica l'ID del controllo. della casella elenco di controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CCheckListBox` oggetto in due passaggi. In primo luogo, definire una classe derivata da `CcheckListBox` e quindi chiamare `Create`, che inizializza la finestra elenco di controllo di Windows e lo collega al `CCheckListBox`. Vedere [CCheckListBox::CCheckListBox](#cchecklistbox) per un esempio.  
  
 Quando si `Create` viene eseguita, Windows invia i [WM_NCCREATE](../../mfc/reference/cwnd-class.md#onnccreate), [WM_CREATE](../../mfc/reference/cwnd-class.md#oncreate), [WM_NCCALCSIZE](../../mfc/reference/cwnd-class.md#onnccalcsize), e [WM_GETMINMAXINFO](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) messaggi per il controllo casella di elenco di controllo.  
  
 Questi messaggi vengono gestiti per impostazione predefinita il [OnNcCreate](../../mfc/reference/cwnd-class.md#onnccreate), [OnCreate](../../mfc/reference/cwnd-class.md#oncreate), [OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize), e [OnGetMinMaxInfo](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) funzioni membro nel `CWnd` classe di base. Per estendere la gestione dei messaggi predefinito, aggiungere una mappa messaggi per il la classe derivata e le funzioni membro override gestore del messaggio precedente. Eseguire l'override `OnCreate`, ad esempio, per eseguire l'inizializzazione necessaria per una nuova classe.  
  
 Applicare la seguente istruzione [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) per un elenco di controllo casella di controllo:  
  
- **WS_CHILD** sempre  
  
- **WS_VISIBLE** in genere  
  
- **WS_DISABLED** raramente  
  
- **WS_VSCROLL** per aggiungere una barra di scorrimento verticale  
  
- **WS_HSCROLL** per aggiungere una barra di scorrimento orizzontale  
  
- **WS_GROUP** ai controlli di gruppo  
  
- **WS_TABSTOP** per consentire la tabulazione a questo controllo  
  
##  <a name="drawitem"></a>  CCheckListBox::DrawItem  
 Chiamato dal framework quando un aspetto visivo della finestra viene modificato elenco di controllo creato dal proprietario.  
  
```  
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 *lpDrawItemStruct*  
 Un puntatore di tipo long a un [DRAWITEMSTRUCT](../../mfc/reference/drawitemstruct-structure.md) struttura che contiene informazioni sul tipo di disegno necessaria.  
  
### <a name="remarks"></a>Note  
 Il **itemAction** e **itemState** i membri del `DRAWITEMSTRUCT` struttura definire l'azione di disegno che deve essere eseguita.  
  
 Per impostazione predefinita, questa funzione consente di disegnare un elenco di casella di controllo predefinito, costituito da un elenco di stringhe con una casella di controllo dimensioni predefinite a sinistra. Dimensioni dell'elenco casella di controllo sono quello specificato nel [crea](#create).  
  
 Eseguire l'override di questa funzione membro per implementare disegno delle finestre di elenco di controllo di disegno che non sono il valore predefinito, ad esempio caselle di elenco di controllo con gli elenchi che non sono stringhe, con gli elementi ad altezza variabile o con caselle di controllo che non sono a sinistra. L'applicazione deve ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito *lpDrawItemStruct* prima del completamento di questa funzione membro.  
  
 Se gli elementi casella di elenco di controllo non sono tutti della stessa altezza, l'elenco di controllo finestra stile (specificato in `Create`) deve essere **LBS_OWNERVARIABLE**, ed è necessario eseguire l'override di [MeasureItem](#measureitem) (funzione).  
  
##  <a name="enable"></a>  CCheckListBox::Enable  
 Chiamare questa funzione per abilitare o disabilitare un elemento della casella elenco di controllo.  
  
```  
void Enable(
    int nIndex,  
    BOOL bEnabled = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice dell'elemento della casella di elenco di controllo deve essere abilitata.  
  
 *bEnabled*  
 Specifica se l'elemento è abilitato o disabilitato.  
  
##  <a name="getcheck"></a>  CCheckListBox::GetCheck  
 Recupera lo stato della casella di controllo specificato.  
  
```  
int GetCheck(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice in base zero di una casella di controllo che è contenuta nella casella di riepilogo.  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato della casella di controllo specificato. Nella tabella seguente sono elencati i valori possibili.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|`BST_CHECKED`|La casella di controllo è selezionata.|  
|`BST_UNCHECKED`|La casella di controllo è deselezionata.|  
|`BST_INDETERMINATE`|Lo stato della casella di controllo è indeterminato.|  
  
##  <a name="getcheckstyle"></a>  CCheckListBox::GetCheckStyle  
 Chiamare questa funzione per ottenere lo stile della casella elenco di controllo.  
  
```  
UINT GetCheckStyle();
```  
  
### <a name="return-value"></a>Valore restituito  
 Lo stile delle caselle di controllo del controllo.  
  
### <a name="remarks"></a>Note  
 Per informazioni sugli stili possibili, vedere [SetCheckStyle](#setcheckstyle).  
  
##  <a name="isenabled"></a>  CCheckListBox::IsEnabled  
 Chiamare questa funzione per determinare se un elemento è abilitato.  
  
```  
BOOL IsEnabled(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è abilitato; in caso contrario 0.  
  
##  <a name="measureitem"></a>  CCheckListBox::MeasureItem  
 Chiamato dal framework quando viene creata una casella di elenco di controllo con uno stile non predefinito.  
  
```  
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```  
  
### <a name="parameters"></a>Parametri  
 *lpMeasureItemStruct*  
 Un puntatore di tipo long a un [MEASUREITEMSTRUCT](../../mfc/reference/measureitemstruct-structure.md) struttura.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questa funzione membro non esegue alcuna operazione. Eseguire l'override di questa funzione membro e compilare il `MEASUREITEMSTRUCT` struttura per informare Windows delle dimensioni degli elementi della casella di elenco di controllo. Se la casella di elenco di controllo viene creata con il [LBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) stile, il framework chiama questa funzione membro per ogni elemento nella casella di riepilogo. In caso contrario, questo membro viene chiamato una sola volta.  
  
##  <a name="ongetcheckposition"></a>  CCheckListBox::OnGetCheckPosition  
 Il framework chiama questa funzione per ottenere la posizione e le dimensioni della casella di controllo in un elemento.  
  
```  
virtual CRect OnGetCheckPosition(
    CRect rectItem,  
    CRect rectCheckBox);
```  
  
### <a name="parameters"></a>Parametri  
 *rectItem*  
 La posizione e le dimensioni dell'elemento di elenco.  
  
 *rectCheckBox*  
 La posizione predefinita e le dimensioni di un elemento casella di controllo.  
  
### <a name="return-value"></a>Valore restituito  
 La posizione e dimensioni di un elemento casella di controllo.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita restituisce solo la posizione predefinita e le dimensioni della casella di controllo ( `rectCheckBox`). Per impostazione predefinita, una casella di controllo è allineata nell'angolo superiore sinistro di un elemento e le dimensioni della casella di controllo standard. Potrebbe esserci casi in cui si desidera che le caselle di controllo a destra o si desidera che una casella di controllo o aumentandone le dimensioni. In questi casi, eseguire l'override `OnGetCheckPosition` per modificare la posizione della casella di controllo e le dimensioni all'interno dell'elemento.  
  
##  <a name="setcheck"></a>  CCheckListBox::SetCheck  
 Imposta lo stato della casella di controllo specificato.  
  
```  
void SetCheck(
    int nIndex,  
    int nCheck);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice in base zero di una casella di controllo che è contenuta nella casella di riepilogo.  
  
 *nControllare*  
 Lo stato del pulsante per la casella di controllo specificato. Vedere la sezione Osservazioni per i valori possibili.  
  
### <a name="remarks"></a>Note  
 Nella tabella seguente sono elencati i valori possibili per il *nControllare* parametro.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|**BST_CHECKED**|Selezionare la casella di controllo specificata.|  
|**BST_UNCHECKED**|Deselezionare la casella di controllo specificata.|  
|**BST_INDETERMINATE**|Impostare lo stato della casella di controllo specificato indeterminato.<br /><br /> Questo stato è disponibile solo se lo stile della casella di controllo è `BS_AUTO3STATE` o `BS_3STATE`. Per altre informazioni, vedere [stili dei pulsanti](../../mfc/reference/styles-used-by-mfc.md#button-styles).|  
  
##  <a name="setcheckstyle"></a>  CCheckListBox::SetCheckStyle  
 Chiamare questa funzione per impostare lo stile delle caselle di controllo nella finestra di elenco di controllo.  
  
```  
void SetCheckStyle(UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *nStyle*  
 Determina lo stile delle caselle di controllo nella casella di elenco di controllo.  
  
### <a name="remarks"></a>Note  
 Gli stili validi sono:  
  
- **BS_CHECKBOX**  
  
- **BS_AUTOCHECKBOX**  
  
- **BS_AUTO3STATE**  
  
- **BS_3STATE**  
  
 Per informazioni su questi stili, vedere [stili dei pulsanti](../../mfc/reference/styles-used-by-mfc.md#button-styles).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC TSTCON](../../visual-cpp-samples.md)   
 [CListBox (classe)](../../mfc/reference/clistbox-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CListBox](../../mfc/reference/clistbox-class.md)

---
title: Classe CEdit | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CEdit
- AFXWIN/CEdit
- AFXWIN/CEdit::CEdit
- AFXWIN/CEdit::CanUndo
- AFXWIN/CEdit::CharFromPos
- AFXWIN/CEdit::Clear
- AFXWIN/CEdit::Copy
- AFXWIN/CEdit::Create
- AFXWIN/CEdit::Cut
- AFXWIN/CEdit::EmptyUndoBuffer
- AFXWIN/CEdit::FmtLines
- AFXWIN/CEdit::GetCueBanner
- AFXWIN/CEdit::GetFirstVisibleLine
- AFXWIN/CEdit::GetHandle
- AFXWIN/CEdit::GetHighlight
- AFXWIN/CEdit::GetLimitText
- AFXWIN/CEdit::GetLine
- AFXWIN/CEdit::GetLineCount
- AFXWIN/CEdit::GetMargins
- AFXWIN/CEdit::GetModify
- AFXWIN/CEdit::GetPasswordChar
- AFXWIN/CEdit::GetRect
- AFXWIN/CEdit::GetSel
- AFXWIN/CEdit::HideBalloonTip
- AFXWIN/CEdit::LimitText
- AFXWIN/CEdit::LineFromChar
- AFXWIN/CEdit::LineIndex
- AFXWIN/CEdit::LineLength
- AFXWIN/CEdit::LineScroll
- AFXWIN/CEdit::Paste
- AFXWIN/CEdit::PosFromChar
- AFXWIN/CEdit::ReplaceSel
- AFXWIN/CEdit::SetCueBanner
- AFXWIN/CEdit::SetHandle
- AFXWIN/CEdit::SetHighlight
- AFXWIN/CEdit::SetLimitText
- AFXWIN/CEdit::SetMargins
- AFXWIN/CEdit::SetModify
- AFXWIN/CEdit::SetPasswordChar
- AFXWIN/CEdit::SetReadOnly
- AFXWIN/CEdit::SetRect
- AFXWIN/CEdit::SetRectNP
- AFXWIN/CEdit::SetSel
- AFXWIN/CEdit::SetTabStops
- AFXWIN/CEdit::ShowBalloonTip
- AFXWIN/CEdit::Undo
dev_langs:
- C++
helpviewer_keywords:
- CEdit [MFC], CEdit
- CEdit [MFC], CanUndo
- CEdit [MFC], CharFromPos
- CEdit [MFC], Clear
- CEdit [MFC], Copy
- CEdit [MFC], Create
- CEdit [MFC], Cut
- CEdit [MFC], EmptyUndoBuffer
- CEdit [MFC], FmtLines
- CEdit [MFC], GetCueBanner
- CEdit [MFC], GetFirstVisibleLine
- CEdit [MFC], GetHandle
- CEdit [MFC], GetHighlight
- CEdit [MFC], GetLimitText
- CEdit [MFC], GetLine
- CEdit [MFC], GetLineCount
- CEdit [MFC], GetMargins
- CEdit [MFC], GetModify
- CEdit [MFC], GetPasswordChar
- CEdit [MFC], GetRect
- CEdit [MFC], GetSel
- CEdit [MFC], HideBalloonTip
- CEdit [MFC], LimitText
- CEdit [MFC], LineFromChar
- CEdit [MFC], LineIndex
- CEdit [MFC], LineLength
- CEdit [MFC], LineScroll
- CEdit [MFC], Paste
- CEdit [MFC], PosFromChar
- CEdit [MFC], ReplaceSel
- CEdit [MFC], SetCueBanner
- CEdit [MFC], SetHandle
- CEdit [MFC], SetHighlight
- CEdit [MFC], SetLimitText
- CEdit [MFC], SetMargins
- CEdit [MFC], SetModify
- CEdit [MFC], SetPasswordChar
- CEdit [MFC], SetReadOnly
- CEdit [MFC], SetRect
- CEdit [MFC], SetRectNP
- CEdit [MFC], SetSel
- CEdit [MFC], SetTabStops
- CEdit [MFC], ShowBalloonTip
- CEdit [MFC], Undo
ms.assetid: b1533c30-7f10-4663-88d3-8b7f2c9f7024
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 98410fb8b62eb160e21803b60a14ce731ffc8c23
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36957455"
---
# <a name="cedit-class"></a>CEdit Class
Fornisce la funzionalità di un controllo di modifica di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CEdit : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CEdit::CEdit](#cedit)|Costruisce un `CEdit` oggetto controllo.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CEdit::CanUndo](#canundo)|Determina se un'operazione di controllo di modifica può essere annullata.|  
|[CEdit::CharFromPos](#charfrompos)|Recupera gli indici di riga e il carattere per il carattere più vicino alla posizione specificata.|  
|[CEdit::Clear](#clear)|Elimina (Elimina) controllare la selezione corrente (se presente) nella finestra di modifica.|  
|[CEdit::Copy](#copy)|Copia la selezione corrente (se presente) nel controllo di modifica negli Appunti **CF_TEXT** formato.|  
|[CEdit::Create](#create)|Crea il controllo di modifica di Windows e lo collega al `CEdit` oggetto.|  
|[CEdit::Cut](#cut)|Controllare la selezione corrente (se presente) nella finestra di modifica Elimina (tagli) e vi copia il testo eliminato negli Appunti **CF_TEXT** formato.|  
|[CEdit::EmptyUndoBuffer](#emptyundobuffer)|Reimposta controllo (Cancella) il flag di annullamento di una modifica.|  
|[CEdit::FmtLines](#fmtlines)|Imposta l'inclusione di caratteri di interruzione di riga soft o disattivare all'interno di un controllo di modifica più righe.|  
|[CEdit::GetCueBanner](#getcuebanner)|Recupera il testo che viene visualizzato come il segnale di testo, o suggerimento, in un controllo di modifica quando il controllo è vuoto e non è attivo.|  
|[CEdit::GetFirstVisibleLine](#getfirstvisibleline)|Determina la prima riga visibile in un controllo di modifica.|  
|[CEdit::GetHandle](#gethandle)|Recupera un handle per la memoria attualmente allocata per un controllo di modifica più righe.|  
|[CEdit::GetHighlight](#gethighlight)|Ottiene gli indici di iniziali e finali caratteri in un intervallo di testo evidenziato nel controllo di modifica corrente.|  
|[CEdit::GetLimitText](#getlimittext)|Ottiene la quantità massima di testo si `CEdit` può contenere.|  
|[CEdit::GetLine](#getline)|Recupera una riga di testo da un controllo di modifica.|  
|[CEdit::GetLineCount](#getlinecount)|Recupera il numero di righe in un controllo di modifica più righe.|  
|[CEdit::GetMargins](#getmargins)|Ottiene i margini sinistro e destro per `CEdit`.|  
|[CEdit::GetModify](#getmodify)|Determina se il contenuto di un controllo di modifica è stato modificato.|  
|[CEdit::GetPasswordChar](#getpasswordchar)|Recupera il carattere di password visualizzato in un controllo di modifica quando l'utente immette testo.|  
|[CEdit::GetRect](#getrect)|Ottiene il rettangolo di formattazione di un controllo di modifica.|  
|[CEdit::GetSel](#getsel)|Ottiene le posizioni dei caratteri e il cognome della selezione corrente in un controllo di modifica.|  
|[CEdit::HideBalloonTip](#hideballoontip)|Consente di nascondere qualsiasi fumetto suggerimento associato al controllo di modifica corrente.|  
|[CEdit::LimitText](#limittext)|Limita la lunghezza del testo che l'utente può immettere in un controllo di modifica.|  
|[CEdit::LineFromChar](#linefromchar)|Recupera il numero di riga che contiene l'indice del carattere specificato.|  
|[CEdit::LineIndex](#lineindex)|Recupera l'indice del carattere di una riga all'interno di un controllo di modifica più righe.|  
|[CEdit::LineLength](#linelength)|Recupera la lunghezza di una riga in un controllo di modifica.|  
|[CEdit::LineScroll](#linescroll)|Consente di scorrere il testo di un controllo di modifica più righe.|  
|[CEdit::Paste](#paste)|Inserisce i dati dagli Appunti nel controllo di modifica nella posizione corrente del cursore. I dati vengono inseriti solo se gli Appunti contengono dati in **CF_TEXT** formato.|  
|[CEdit::PosFromChar](#posfromchar)|Recupera le coordinate dell'angolo superiore sinistro di un indice del carattere specificato.|  
|[CEdit::ReplaceSel](#replacesel)|Sostituisce la selezione corrente in un controllo di modifica con il testo specificato.|  
|[CEdit::SetCueBanner](#setcuebanner)|Imposta il testo che viene visualizzato come il segnale di testo, o suggerimento, in un controllo di modifica quando il controllo è vuoto e non è attivo.|  
|[CEdit::SetHandle](#sethandle)|Imposta l'handle per la memoria locale che verrà utilizzata da un controllo di modifica più righe.|  
|[CEdit::SetHighlight](#sethighlight)|Controllo di modifica evidenzia un intervallo di testo che viene visualizzato nell'oggetto corrente.|  
|[CEdit::SetLimitText](#setlimittext)|Imposta la quantità massima di testo `CEdit` può contenere.|  
|[CEdit::SetMargins](#setmargins)|Imposta i margini sinistro e destro per questo `CEdit`.|  
|[CEdit::SetModify](#setmodify)|Imposta o Cancella il flag di modifica per un controllo di modifica.|  
|[CEdit::SetPasswordChar](#setpasswordchar)|Imposta o rimuove un carattere di password visualizzato in un controllo di modifica quando l'utente immette testo.|  
|[CEdit::SetReadOnly](#setreadonly)|Imposta lo stato di sola lettura di un controllo di modifica.|  
|[CEdit::SetRect](#setrect)|Imposta il rettangolo di formattazione di un controllo di modifica multiriga e aggiorna il controllo.|  
|[CEdit::SetRectNP](#setrectnp)|Imposta il rettangolo di formattazione di un controllo di modifica multiriga senza ridisegnare la finestra di controllo.|  
|[CEdit::SetSel](#setsel)|Seleziona un intervallo di caratteri in un controllo di modifica.|  
|[CEdit::SetTabStops](#settabstops)|Imposta le tabulazioni in più righe di controllo di modifica.|  
|[CEdit::ShowBalloonTip](#showballoontip)|Visualizza un fumetto suggerimento associato con il controllo di modifica corrente.|  
|[CEdit::Undo](#undo)|Inverte l'ultima operazione di controllo di modifica.|  
  
## <a name="remarks"></a>Note  
 Un controllo di modifica è una finestra figlio rettangolare in cui l'utente può immettere testo.  
  
 È possibile creare un controllo di modifica da un modello di finestra di dialogo o direttamente nel codice. In entrambi i casi, chiamare prima il costruttore `CEdit` per costruire il `CEdit` dell'oggetto, quindi chiamare il [Create](#create) funzione membro per creare le finestre di controllo di modifica e associarlo al `CEdit` oggetto.  
  
 Costruzione può essere un processo in un passaggio in una classe derivata da `CEdit`. Scrivere un costruttore della classe derivata e chiamata `Create` all'interno del costruttore.  
  
 `CEdit` eredita funzionalità significative da `CWnd`. Per impostare e recuperare il testo da un `CEdit` oggetto, usare il `CWnd` le funzioni membro [SetWindowText](cwnd-class.md#setwindowtext) e [GetWindowText](cwnd-class.md#getwindowtext), quali set o get controlla l'intero contenuto di una modifica, anche se è è un controllo su più righe. Le righe di testo in un controllo su più righe sono delimitate da sequenze di caratteri '\r\n'. Inoltre, se un controllo di modifica su più righe, ottenere e impostare fa parte del testo del controllo chiamando il `CEdit` funzioni membro [GetLine](#getline), [funzione membro SetSel](#setsel), [funzione membro GetSel](#getsel)e [ ReplaceSel](#replacesel).  
  
 Se si desidera gestire i messaggi di notifica Windows inviati da un controllo di modifica all'elemento padre (in genere una classe derivata da `CDialog`), aggiungere una funzione membro della mappa messaggi voce e gestore di messaggi alla classe padre per ogni messaggio.  
  
 Ogni voce della mappa messaggi assume il formato seguente:  
  
  **On _**_notifica_**(** _id_**,** _memberFxn_ **)**
  
 in cui `id` specifica l'ID di finestra figlio del controllo di modifica invia la notifica e `memberFxn` è il nome della funzione membro padre scritta per gestire la notifica.  
  
 Prototipo di funzione dell'elemento padre è il seguente:  
  
 **afx_msg** memberFxn void **();**  
  
 Ecco un elenco di voci della mappa messaggi potenziali e una descrizione dei casi in cui verrebbe inviati all'elemento padre:  
  
- **ON_EN_CHANGE** l'utente esegue un'azione che potrebbe aver modificato il testo in un controllo di modifica. A differenza di **EN_UPDATE** messaggio di notifica, viene inviato il messaggio di notifica dopo la visualizzazione degli aggiornamenti di Windows.  
  
- **ON_EN_ERRSPACE** il controllo di modifica non è possibile allocare memoria sufficiente per soddisfare una richiesta specifica.  
  
- **ON_EN_HSCROLL** l'utente fa clic sulla barra di scorrimento orizzontale del controllo di modifica. La finestra padre riceve una notifica prima che venga aggiornata la schermata.  
  
- **ON_EN_KILLFOCUS** il controllo di modifica perde lo stato attivo di input.  
  
- **ON_EN_MAXTEXT** dell'operazione di inserimento corrente ha superato il numero specificato di caratteri per il controllo di modifica ed è stato troncato. Inviato anche quando non dispone di un controllo di modifica il **ES_AUTOHSCROLL** uno stile e il numero di caratteri da inserire supererebbe la larghezza del controllo di modifica. Inviato anche quando non dispone di un controllo di modifica il **ES_AUTOVSCROLL** uno stile e il numero totale di righe risultante da un inserimento di testo supererebbe l'altezza del controllo di modifica.  
  
- **ON_EN_SETFOCUS** inviati quando un controllo di modifica riceve lo stato attivo di input.  
  
- **ON_EN_UPDATE** il controllo edit si trova per visualizzare testo modificato. Inviato dopo il controllo ha formattato il testo ma prima che lo screening il testo in modo che le dimensioni della finestra possono essere modificata, se necessario.  
  
- **ON_EN_VSCROLL** l'utente fa clic sulla barra di scorrimento verticale del controllo di modifica. La finestra padre riceve una notifica prima che venga aggiornata la schermata.  
  
 Se si crea un `CEdit` oggetto all'interno di una finestra di dialogo, il `CEdit` oggetto viene automaticamente distrutta quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un `CEdit` oggetto da una risorsa finestra di dialogo utilizzando la finestra di dialogo, il `CEdit` oggetto viene automaticamente distrutta quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un `CEdit` oggetto all'interno di una finestra, è necessario anche per eliminarlo. Se si crea il `CEdit` dell'oggetto nello stack, viene eliminato automaticamente. Se si crea il `CEdit` oggetto sull'heap tramite il **nuovi** funzione, è necessario chiamare **eliminare** per l'oggetto venga eliminata quando l'utente termina le finestre di controllo di modifica. Se si alloca alcuna memoria nel `CEdit` dell'oggetto, eseguire l'override di `CEdit` distruttore per l'eliminazione delle allocazioni.  
  
 Per modificare alcuni stili in un controllo di modifica (ad esempio **ES_READONLY**) è necessario inviare messaggi specifici per il controllo anziché [ModifyStyle](cwnd-class.md#modifystyle). Vedere [modifica degli stili del controllo](http://msdn.microsoft.com/library/windows/desktop/bb775464) in Windows SDK.  
  
 Per ulteriori informazioni su `CEdit`, vedere:  
  
- [Controlli](../../mfc/controls-mfc.md)  
  
-   Articolo della Knowledge Base Q259949: INFO: SetCaretPos() è non appropriato con CEdit o controlli CRichEditCtrl  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](cobject-class.md)  
  
 [CCmdTarget](ccmdtarget-class.md)  
  
 [CWnd](cwnd-class.md)  
  
 `CEdit`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="canundo"></a>  CEdit::CanUndo  
 Chiamare questa funzione per determinare se l'ultima operazione di modifica può essere annullata.  
  
```  
BOOL CanUndo() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'ultima operazione di modifica può essere annullata da una chiamata al `Undo` funzione membro; 0 se non può essere annullata.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [EM_CANUNDO](http://msdn.microsoft.com/library/windows/desktop/bb775468) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::Undo](#undo).  
  
##  <a name="cedit"></a>  CEdit::CEdit  
 Costruisce un oggetto `CEdit`.  
  
```  
CEdit();
```  
  
### <a name="remarks"></a>Note  
 Uso [crea](#create) per costruire le finestre di controllo di modifica.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#1](../../mfc/reference/codesnippet/cpp/cedit-class_1.cpp)]  
  
##  <a name="charfrompos"></a>  CEdit::CharFromPos  
 Chiamare questa funzione per recuperare la riga in base zero e gli indici di carattere del carattere più vicino al punto specificato in questo `CEdit` controllo  
  
```  
int CharFromPos(CPoint pt) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *pt*  
 Le coordinate di un punto dell'area client di questo `CEdit` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Indice dei caratteri nell'ordine low **WORD**e l'indice di riga nell'ordine elevata **WORD**.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4.0.  
  
 Per altre informazioni, vedere [EM_CHARFROMPOS](http://msdn.microsoft.com/library/windows/desktop/bb761566) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#3](../../mfc/reference/codesnippet/cpp/cedit-class_2.cpp)]  
  
##  <a name="clear"></a>  CEdit::Clear  
 Chiamare questa funzione per eliminare (deselezionare) la selezione corrente (se presente nel controllo di modifica).  
  
```  
void Clear();
```  
  
### <a name="remarks"></a>Note  
 L'eliminazione eseguita da `Clear` può essere annullata chiamando il [Annulla](#undo) funzione membro.  
  
 Per eliminare la selezione corrente e inserire il contenuto eliminato negli Appunti, chiamare il [Taglia](#cut) funzione membro.  
  
 Per altre informazioni, vedere [WM_CLEAR](http://msdn.microsoft.com/library/windows/desktop/ms649020) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#4](../../mfc/reference/codesnippet/cpp/cedit-class_3.cpp)]  
  
##  <a name="copy"></a>  CEdit::Copy  
 Chiamare questa funzione per copiare le la selezione corrente (se presente) nel controllo di modifica negli Appunti **CF_TEXT** formato.  
  
```  
void Copy();
```  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [WM_COPY](http://msdn.microsoft.com/library/windows/desktop/ms649022) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#5](../../mfc/reference/codesnippet/cpp/cedit-class_4.cpp)]  
  
##  <a name="create"></a>  CEdit::Create  
 Crea il controllo di modifica di Windows e lo collega al `CEdit` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 *dwStyle*  
 Specifica lo stile del controllo di modifica. Applicare qualsiasi combinazione di [modifica stili](styles-used-by-mfc.md#edit-styles) al controllo.  
  
 *Rect*  
 Specifica dimensioni e la posizione del controllo di modifica. Può essere un `CRect` oggetto o `RECT` struttura.  
  
 *pParentWnd*  
 Specifica finestra padre del controllo di modifica (in genere un `CDialog`). Non deve essere **NULL**.  
  
 *nID*  
 Specifica l'ID. del controllo di modifica  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CEdit` oggetto in due passaggi. In primo luogo, chiamare il `CEdit` costruttore e quindi chiamare `Create`, che crea il controllo di modifica di Windows e lo collega al `CEdit` oggetto.  
  
 Quando si `Create` viene eseguita, Windows invia i [WM_NCCREATE](http://msdn.microsoft.com/library/windows/desktop/ms632635), [WM_NCCALCSIZE](http://msdn.microsoft.com/library/windows/desktop/ms632634), [WM_CREATE](http://msdn.microsoft.com/library/windows/desktop/ms632619), e [WM_GETMINMAXINFO](http://msdn.microsoft.com/library/windows/desktop/ms632626) messaggi per il controllo di modifica.  
  
 Questi messaggi vengono gestiti per impostazione predefinita il [OnNcCreate](cwnd-class.md#onnccreate), [OnNcCalcSize](cwnd-class.md#onnccalcsize), [OnCreate](cwnd-class.md#oncreate), e [OnGetMinMaxInfo](cwnd-class.md#ongetminmaxinfo) funzioni membro nel `CWnd` classe di base. Per estendere la gestione dei messaggi predefinito, derivare una classe da `CEdit`, aggiungere una mappa messaggi per la nuova classe ed eseguire l'override di funzioni membro gestore messaggi sopra. Eseguire l'override `OnCreate`, ad esempio, per eseguire l'inizializzazione necessaria per la nuova classe.  
  
 Applicare la seguente istruzione [stili finestra](styles-used-by-mfc.md#window-styles) per un controllo di modifica.  
  
- **WS_CHILD** sempre  
  
- **WS_VISIBLE** in genere  
  
- **WS_DISABLED** raramente  
  
- **WS_GROUP** ai controlli di gruppo  
  
- **WS_TABSTOP** per includere il controllo di modifica nell'ordine di tabulazione  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#2](../../mfc/reference/codesnippet/cpp/cedit-class_5.cpp)]  
  
##  <a name="cut"></a>  CEdit::Cut  
 Chiamare questa funzione per eliminare (taglio) la selezione corrente (se presente) nel controllo di modifica e copiare il testo eliminato negli Appunti **CF_TEXT** formato.  
  
```  
void Cut();
```  
  
### <a name="remarks"></a>Note  
 L'eliminazione eseguita da `Cut` può essere annullata chiamando il [Annulla](#undo) funzione membro.  
  
 Per eliminare la selezione corrente senza inserire il testo eliminato negli Appunti, chiamare il [Cancella](#clear) funzione membro.  
  
 Per altre informazioni, vedere [WM_CUT](http://msdn.microsoft.com/library/windows/desktop/ms649023) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#6](../../mfc/reference/codesnippet/cpp/cedit-class_6.cpp)]  
  
##  <a name="emptyundobuffer"></a>  CEdit::EmptyUndoBuffer  
 Chiamare questa funzione per ripristinare (cancellare) il flag di annullamento di un controllo di modifica.  
  
```  
void EmptyUndoBuffer();
```  
  
### <a name="remarks"></a>Note  
 Il controllo di modifica a questo punto sarà possibile annullare l'ultima operazione. Il flag di annullamento viene impostato ogni volta che un'operazione all'interno del controllo di modifica può essere annullata.  
  
 Il flag di annullamento viene automaticamente cancellato ogni volta che il [SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext) oppure [SetHandle](#sethandle) `CWnd` vengono chiamate funzioni membro.  
  
 Per altre informazioni, vedere [EM_EMPTYUNDOBUFFER](http://msdn.microsoft.com/library/windows/desktop/bb761568) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#7](../../mfc/reference/codesnippet/cpp/cedit-class_7.cpp)]  
  
##  <a name="fmtlines"></a>  CEdit::FmtLines  
 Chiamare questa funzione per impostare l'inclusione di caratteri di interruzione di riga soft on oppure off all'interno di un controllo di modifica più righe.  
  
```  
BOOL FmtLines(BOOL bAddEOL);
```  
  
### <a name="parameters"></a>Parametri  
 *bAddEOL*  
 Specifica se devono essere inseriti caratteri di interruzione di riga soft. Il valore **TRUE** inserisce i caratteri; il valore **FALSE** li rimuove.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se qualsiasi formattazione viene eseguita; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un'interruzione di riga è costituita da due ritorni a capo e un ritorno a capo inserito alla fine di una riga che viene interrotta a causa di ritorno a capo automatico. Un'interruzione di riga è costituita da un ritorno a capo e un ritorno a capo. Le righe che terminano con un'interruzione di riga non sono interessate da `FmtLines`.  
  
 Windows risponderà solo se il `CEdit` oggetto è un controllo di modifica più righe.  
  
 `FmtLines` interessa solo il buffer restituito da [GetHandle](#gethandle) e il testo restituito da [WM_GETTEXT](http://msdn.microsoft.com/library/windows/desktop/ms632627). Non incide sulla visualizzazione del testo all'interno del controllo di modifica.  
  
 Per altre informazioni, vedere [EM_FMTLINES](http://msdn.microsoft.com/library/windows/desktop/bb761570) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#8](../../mfc/reference/codesnippet/cpp/cedit-class_8.cpp)]  
  
##  <a name="getcuebanner"></a>  CEdit::GetCueBanner  
 Recupera il testo che viene visualizzato come il segnale di testo, o suggerimento, in un controllo di modifica quando il controllo è vuoto.  
  
```  
BOOL GetCueBanner(
    LPWSTR lpszText,  
    int cchText) const;  
  
CString GetCueBanner() const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] *lpszText*  
 Un puntatore a una stringa che contiene il testo della segnalazione.  
  
 [in] *cchText*  
 Il numero di caratteri che possono essere ricevuti. Questo numero include la terminazione `NULL` carattere.  
  
### <a name="return-value"></a>Valore restituito  
 Per il primo overload `true` se il metodo ha esito positivo; in caso contrario `false`.  
  
 Per il secondo overload, un [CString](../../atl-mfc-shared/using-cstring.md) che contiene il testo della segnalazione se il metodo ha esito positivo; in caso contrario, una stringa vuota ("").  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [EM_GETCUEBANNER](http://msdn.microsoft.com/library/windows/desktop/bb761572) messaggio, come descritto in Windows SDK. Per altre informazioni, vedere la [Edit_GetCueBannerText](http://msdn.microsoft.com/library/windows/desktop/bb761695) macro.  
  
##  <a name="getfirstvisibleline"></a>  CEdit::GetFirstVisibleLine  
 Chiamare questa funzione per determinare la prima riga visibile in un controllo di modifica.  
  
```  
int GetFirstVisibleLine() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero della prima riga visibile. Per i controlli di modifica a riga singola, il valore restituito è 0.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [EM_GETFIRSTVISIBLELINE](http://msdn.microsoft.com/library/windows/desktop/bb761574) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#9](../../mfc/reference/codesnippet/cpp/cedit-class_9.cpp)]  
  
##  <a name="gethandle"></a>  CEdit::GetHandle  
 Chiamare questa funzione per recuperare un handle per la memoria attualmente allocata per un controllo di modifica più righe.  
  
```  
HLOCAL GetHandle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle di memoria locale che identifica il buffer che contiene il contenuto del controllo di modifica. Se si verifica un errore, ad esempio l'invio del messaggio a un controllo di modifica a riga singola, il valore restituito è 0.  
  
### <a name="remarks"></a>Note  
 L'handle è un handle di memoria locale e possono essere utilizzata da qualsiasi il **locale** funzioni di memoria di Windows che accettano una memoria locale di gestire come parametro.  
  
 **GetHandle** viene elaborato solo da controlli di modifica più righe.  
  
 Chiamare **GetHandle** per un controllo di modifica più righe in una finestra di dialogo solo se la finestra di dialogo è stata creata con il **DS_LOCALEDIT** impostato flag di stile. Se il **DS_LOCALEDIT** stile non è impostato, si riceveranno sempre un valore restituito diverso da zero, ma non sarà in grado di utilizzare il valore restituito.  
  
> [!NOTE]
> **GetHandle** non funziona con Windows 95/98. Se si chiama **GetHandle** in Windows 95/98, verrà restituito **NULL**. **GetHandle** funzionerà come documentato in Windows NT versione 3.51 e successive.  
  
 Per altre informazioni, vedere [EM_GETHANDLE](http://msdn.microsoft.com/library/windows/desktop/bb761576) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#10](../../mfc/reference/codesnippet/cpp/cedit-class_10.cpp)]  
  
##  <a name="gethighlight"></a>  CEdit::GetHighlight  
 Ottiene gli indici dei caratteri e il cognome in un intervallo di testo evidenziato nel controllo di modifica corrente.  
  
```  
BOOL GetHighlight(
    int* pichStart,   
    int* pichEnd) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] *pichStart*|Indice in base zero del primo carattere nell'intervallo di testo evidenziato.|  
|[out] *pichEnd*|Indice in base zero dell'ultimo carattere nell'intervallo di testo evidenziato.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [EM_GETHILITE](http://msdn.microsoft.com/library/windows/desktop/bb761578) messaggio, come descritto in Windows SDK.  
  
##  <a name="getlimittext"></a>  CEdit::GetLimitText  
 Chiamare questa funzione membro per ottenere il limite di testo per questo `CEdit` oggetto.  
  
```  
UINT GetLimitText() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il limite testo corrente, in byte, per questo `CEdit` oggetto.  
  
### <a name="remarks"></a>Note  
 Il limite di testo è la quantità massima di testo, in byte, che può accettare il controllo di modifica.  
  
> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4.0.  
  
 Per altre informazioni, vedere [EM_GETLIMITTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761582) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#11](../../mfc/reference/codesnippet/cpp/cedit-class_11.cpp)]  
  
##  <a name="getline"></a>  CEdit::GetLine  
 Chiamare questa funzione per recuperare una riga di testo da un controllo di modifica e lo inserisce in *lpszbuffer ' la*.  
  
```  
int GetLine(
    int nIndex,  
    LPTSTR lpszBuffer) const;  
  
int GetLine(
    int nIndex,  
    LPTSTR lpszBuffer,  
    int nMaxLength) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Specifica il numero di riga da recuperare da una riga di più controllo edit. Numeri di riga sono in base zero. un valore pari a 0 specifica la prima riga. Questo parametro viene ignorato da un controllo di modifica a riga singola.  
  
 *lpszbuffer ' la*  
 Punta al buffer che riceve una copia della riga. La prima parola del buffer è necessario specificare il numero massimo di caratteri che può essere copiato nel buffer.  
  
 *nMaxLength*  
 Specifica il numero massimo di byte che può essere copiato nel buffer. `GetLine` Questo valore viene inserito nella prima parola di *lpszbuffer ' la* prima di effettuare la chiamata a Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di byte effettivamente copiati. Il valore restituito è 0 se il numero di riga specificato da *nIndex* è maggiore del numero di righe nel controllo di modifica.  
  
### <a name="remarks"></a>Note  
 Riga copiata non contiene un carattere di terminazione null.  
  
 Per altre informazioni, vedere [EM_GETLINE](http://msdn.microsoft.com/library/windows/desktop/bb761584) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::GetLineCount](#getlinecount).  
  
##  <a name="getlinecount"></a>  CEdit::GetLineCount  
 Chiamare questa funzione per recuperare il numero di righe in un controllo di modifica più righe.  
  
```  
int GetLineCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Controllo di modifica un valore integer contenente il numero di righe in più righe. Se il testo non è stato inserito nel controllo di modifica, il valore restituito è 1.  
  
### <a name="remarks"></a>Note  
 `GetLineCount` viene elaborato solo da controlli di modifica più righe.  
  
 Per altre informazioni, vedere [EM_GETLINECOUNT](http://msdn.microsoft.com/library/windows/desktop/bb761586) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#12](../../mfc/reference/codesnippet/cpp/cedit-class_12.cpp)]  
  
##  <a name="getmargins"></a>  CEdit::GetMargins  
 Chiamare questa funzione membro per recuperare i margini sinistro e destro di questo controllo di modifica.  
  
```  
DWORD GetMargins() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza del margine sinistro nell'ordine low **WORD** e la larghezza del margine destro nell'ordine elevata **WORD**.  
  
### <a name="remarks"></a>Note  
 I margini vengono misurati in pixel.  
  
> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4.0.  
  
 Per altre informazioni, vedere [EM_GETMARGINS](http://msdn.microsoft.com/library/windows/desktop/bb761590) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEditView::GetEditCtrl](ceditview-class.md#geteditctrl).  
  
##  <a name="getmodify"></a>  CEdit::GetModify  
 Chiamare questa funzione per determinare se il contenuto di un controllo di modifica è stato modificato.  
  
```  
BOOL GetModify() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il contenuto del controllo di modifica è stato modificato; 0 se questi sono rimasti invariati.  
  
### <a name="remarks"></a>Note  
 Windows gestisce un flag interno che indica se il contenuto del controllo di modifica è stato modificato. Questo flag viene cancellato quando il controllo di modifica viene creato inizialmente e può anche essere cancellato chiamando il [SetModify](#setmodify) funzione membro.  
  
 Per altre informazioni, vedere [EM_GETMODIFY](http://msdn.microsoft.com/library/windows/desktop/bb761592) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#13](../../mfc/reference/codesnippet/cpp/cedit-class_13.cpp)]  
  
##  <a name="getpasswordchar"></a>  CEdit::GetPasswordChar  
 Chiamare questa funzione per recuperare il carattere di password che viene visualizzato in un controllo di modifica quando l'utente immette testo.  
  
```  
TCHAR GetPasswordChar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il carattere da visualizzare anziché il carattere specificato dall'utente. Il valore restituito è `NULL` se non esiste alcun carattere di password.  
  
### <a name="remarks"></a>Note  
 Se si crea il controllo di modifica con il **ES_PASSWORD** stile, la DLL che supporta il controllo determina il carattere predefinito della password. Il manifesto o la [InitCommonControlsEx](http://msdn.microsoft.com/library/windows/desktop/bb775697) metodo determina a quali DLL supporta il controllo di modifica. Se user32.dll supporta il controllo di modifica, il carattere predefinito della password è l'asterisco ('* ', U + 002A). Se comctl32.dll versione 6 supporta il controllo di modifica, il carattere predefinito è nero cerchio ('●', U + 25CF). Per ulteriori informazioni su quali DLL e versione supporta i controlli comuni, vedere [Shell e le versioni di controlli comuni](http://msdn.microsoft.com/library/windows/desktop/bb776779).  
  
 Questo metodo invia il [EM_GETPASSWORDCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761594) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#14](../../mfc/reference/codesnippet/cpp/cedit-class_14.cpp)]  
  
##  <a name="getrect"></a>  CEdit::GetRect  
 Chiamare questa funzione per ottenere il rettangolo di formattazione di un controllo di modifica.  
  
```  
void GetRect(LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *lpRect*  
 Punta al `RECT` struttura che riceve il rettangolo di formattazione.  
  
### <a name="remarks"></a>Note  
 Il rettangolo di formattazione è il rettangolo limitazione del testo, che è indipendente dalla dimensione della finestra di controllo di modifica.  
  
 Il rettangolo di formattazione di un controllo di modifica più righe può essere modificato dal [SetRect](#setrect) e [SetRectNP](#setrectnp) funzioni membro.  
  
 Per altre informazioni, vedere [EM_GETRECT](http://msdn.microsoft.com/library/windows/desktop/bb761596) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::LimitText](#limittext).  
  
##  <a name="getsel"></a>  CEdit::GetSel  
 Chiamare questa funzione per ottenere iniziali e finali posizioni dei caratteri della selezione corrente (se presente) in un controllo di modifica, utilizzando il valore restituito o i parametri.  
  
```  
DWORD GetSel() const;  
  
void GetSel(
    int& nStartChar,  
    int& nEndChar) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nStartChar*  
 Riferimento a un intero che riceverà la posizione del primo carattere nella selezione corrente.  
  
 *nEndChar*  
 Riferimento a un intero che riceverà la posizione del primo carattere per oltre la fine della selezione corrente.  
  
### <a name="return-value"></a>Valore restituito  
 La versione che restituisce un `DWORD` restituisce un valore che contiene la posizione iniziale della parola meno significativa e la posizione del primo carattere per dopo la fine della selezione nella parola significativo.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [EM_GETSEL](http://msdn.microsoft.com/library/windows/desktop/bb761598) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#15](../../mfc/reference/codesnippet/cpp/cedit-class_15.cpp)]  
  
##  <a name="hideballoontip"></a>  CEdit::HideBalloonTip  
 Consente di nascondere qualsiasi fumetto suggerimento associato al controllo di modifica corrente.  
  
```  
BOOL HideBalloonTip();
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questa funzione Invia il [EM_HIDEBALLOONTIP](http://msdn.microsoft.com/library/windows/desktop/bb761604) messaggio, come descritto in Windows SDK.  
  
##  <a name="limittext"></a>  CEdit::LimitText  
 Chiamare questa funzione per limitare la lunghezza del testo che l'utente può immettere in un controllo di modifica.  
  
```  
void LimitText(int nChars = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *nChars*  
 Specifica la lunghezza (in byte) del testo che l'utente può immettere. Se questo parametro è 0, la lunghezza del testo è impostata su **UINT_MAX** byte. Comportamento predefinito.  
  
### <a name="remarks"></a>Note  
 Modifica del limite di testo che limita l'utente può immettere solo testo. Non ha alcun effetto su qualsiasi testo già nel controllo di modifica, né interessa la lunghezza del testo copiato per il controllo di modifica per la [SetWindowText](cwnd-class.md#setwindowtext) funzione di membro in `CWnd`. Se un'applicazione utilizza il `SetWindowText` per inserire più testo in un controllo di modifica rispetto a quanto specificato nella chiamata alla funzione `LimitText`, l'utente può eliminare qualsiasi del testo all'interno del controllo di modifica. Tuttavia, il limite di testo impedirà all'utente di sostituire il testo esistente con testo nuovo, a meno che l'eliminazione della selezione corrente, il testo sotto il limite di testo.  
  
> [!NOTE]
>  In Win32 (Windows NT e Windows 95/98), [SetLimitText](#setlimittext) sostituisce questa funzione.  
  
 Per altre informazioni, vedere [EM_LIMITTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761607) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#17](../../mfc/reference/codesnippet/cpp/cedit-class_16.cpp)]  
  
##  <a name="linefromchar"></a>  CEdit::LineFromChar  
 Chiamare questa funzione per recuperare il numero di riga che contiene l'indice del carattere specificato.  
  
```  
int LineFromChar(int nIndex = -1) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Contiene il valore di indice in base zero del carattere desiderato nel testo del controllo di modifica, o contiene -1. Se *nIndex* è -1, specifica la riga corrente, vale a dire, la riga che contiene il punto di inserimento.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di riga in base zero della riga contenente l'indice del carattere specificato da *nIndex*. Se *nIndex* è -1, viene restituito il numero della riga che contiene il primo carattere della selezione. Se non è stata effettuata alcuna selezione, viene restituito il numero di riga corrente.  
  
### <a name="remarks"></a>Note  
 Un indice del carattere è il numero di caratteri dall'inizio del controllo di modifica.  
  
 Questa funzione membro viene utilizzata solo da controlli di modifica più righe.  
  
 Per altre informazioni, vedere [EM_LINEFROMCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761609) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#18](../../mfc/reference/codesnippet/cpp/cedit-class_17.cpp)]  
  
##  <a name="lineindex"></a>  CEdit::LineIndex  
 Chiamare questa funzione per recuperare l'indice del carattere di una riga all'interno di un controllo di modifica più righe.  
  
```  
int LineIndex(int nLine = -1) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nLine*  
 Contiene il valore di indice per la linea desiderato nel testo del controllo di modifica, o contiene -1. Se *nLine* è -1, specifica la riga corrente, vale a dire, la riga che contiene il punto di inserimento.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del carattere della riga specificata *nLine* oppure -1 se il numero di riga specificata è maggiore del numero di righe nel controllo di modifica.  
  
### <a name="remarks"></a>Note  
 L'indice del carattere è il numero di caratteri dall'inizio del controllo di modifica per la riga specificata.  
  
 Questa funzione membro viene elaborata solo da controlli di modifica più righe.  
  
 Per altre informazioni, vedere [EM_LINEINDEX](http://msdn.microsoft.com/library/windows/desktop/bb761611) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#19](../../mfc/reference/codesnippet/cpp/cedit-class_18.cpp)]  
  
##  <a name="linelength"></a>  CEdit::LineLength  
 Recupera la lunghezza di una riga in un controllo di modifica.  
  
```  
int LineLength(int nLine = -1) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nLine*  
 Indice in base zero di un carattere nella riga la cui lunghezza è da recuperare. Il valore predefinito è -1.  
  
### <a name="return-value"></a>Valore restituito  
 Per i controlli di modifica a riga singola, il valore restituito è la lunghezza, in `TCHAR`s, del testo nel controllo di modifica.  
  
 Per i controlli di modifica multilinea, il valore restituito è la lunghezza, in `TCHAR`s, della riga specificata per il *nLine* parametro. Per [!INCLUDE[vcpransi](../../atl-mfc-shared/reference/includes/vcpransi_md.md)] la lunghezza è il numero di byte nella riga di testo, per il testo Unicode, la lunghezza è il numero di caratteri nella riga. La lunghezza non include il carattere di ritorno a capo alla fine della riga.  
  
 Se il *nLine* parametro è maggiore del numero di caratteri nel controllo, il valore restituito è zero.  
  
 Se il *nLine* parametro è -1, il valore restituito è il numero di caratteri selezionati nelle righe che contengono caratteri selezionati. Ad esempio, se la selezione si estende dal quarto carattere della riga tramite l'ottavo carattere dalla fine della riga successiva, il valore restituito è 10. Ovvero i tre caratteri nella prima riga e sette al successivo.  
  
 Per ulteriori informazioni sul `TCHAR` del tipo, vedere il `TCHAR` riga nella tabella [tipi di dati Windows](http://msdn.microsoft.com/library/windows/desktop/aa383751).  
  
### <a name="remarks"></a>Note  
 Questo metodo è supportato per il [EM_LINELENGTH](http://msdn.microsoft.com/library/windows/desktop/bb761613) messaggio, come descritto in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::LineIndex](#lineindex).  
  
##  <a name="linescroll"></a>  CEdit::LineScroll  
 Chiamare questa funzione per scorrere il testo di un controllo di modifica più righe.  
  
```  
void LineScroll(
    int nLines,  
    int nChars = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *nLines*  
 Specifica il numero di righe da scorrere verticalmente.  
  
 *nChars*  
 Specifica il numero di posizioni dei caratteri per lo scorrimento orizzontale. Questo valore viene ignorato se il controllo di modifica è stata la **ES_RIGHT** oppure **ES_CENTER** stile.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene elaborata solo da controlli di modifica più righe.  
  
 Il controllo di modifica non scorre in senso verticale oltre l'ultima riga di testo nel controllo di modifica. Se di riga corrente più il numero di righe specificato da *nLines* supera il numero totale di righe nel controllo di modifica, il valore viene modificato in modo che l'ultima riga del controllo di modifica è necessario scorrere nella parte superiore della finestra di controllo di modifica.  
  
 `LineScroll` Consente di scorrere orizzontalmente oltre l'ultimo carattere di una riga.  
  
 Per altre informazioni, vedere [EM_LINESCROLL](http://msdn.microsoft.com/library/windows/desktop/bb761615) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::GetFirstVisibleLine](#getfirstvisibleline).  
  
##  <a name="paste"></a>  CEdit::Paste  
 Chiamare questa funzione per inserire i dati dagli Appunti nel `CEdit` nel punto di inserimento.  
  
```  
void Paste();
```  
  
### <a name="remarks"></a>Note  
 I dati vengono inseriti solo se gli Appunti contengono dati in **CF_TEXT** formato.  
  
 Per altre informazioni, vedere [WM_PASTE](http://msdn.microsoft.com/library/windows/desktop/ms649028) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#20](../../mfc/reference/codesnippet/cpp/cedit-class_19.cpp)]  
  
##  <a name="posfromchar"></a>  CEdit::PosFromChar  
 Chiamare questa funzione per ottenere la posizione (angolo superiore sinistro) di un carattere specifico all'interno di questo `CEdit` oggetto.  
  
```  
CPoint PosFromChar(UINT nChar) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nChar*  
 Indice in base zero del carattere specificato.  
  
### <a name="return-value"></a>Valore restituito  
 Le coordinate dell'angolo superiore sinistro del carattere specificato da *nChar*.  
  
### <a name="remarks"></a>Note  
 Viene specificato il carattere assegnando il relativo valore di indice in base zero. Se *nChar* è maggiore dell'indice dell'ultimo carattere in questa `CEdit` dell'oggetto, il valore restituito specifica le coordinate della posizione del carattere posizione immediatamente successiva all'ultimo carattere in questa `CEdit` oggetto.  
  
> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4.0.  
  
 Per altre informazioni, vedere [EM_POSFROMCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761631) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::LineFromChar](#linefromchar).  
  
##  <a name="replacesel"></a>  CEdit::ReplaceSel  
 Chiamare questa funzione per sostituire la selezione corrente in un controllo di modifica con il testo specificato dal *lpszNewText*.  
  
```  
void ReplaceSel(LPCTSTR lpszNewText, BOOL bCanUndo = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszNewText*  
 Punta a una stringa con terminazione null contenente il testo di sostituzione.  
  
 *bCanUndo*  
 Per specificare che questa funzione può essere annullata, impostare il valore di questo parametro su **TRUE** . Il valore predefinito è **FALSE**.  
  
### <a name="remarks"></a>Note  
 Sostituisce solo una parte del testo in un controllo di modifica. Se si desidera sostituire tutto il testo, usare il [CWnd::SetWindowText](cwnd-class.md#setwindowtext) funzione membro.  
  
 Se non è stata effettuata alcuna selezione corrente, il testo di sostituzione viene inserito nella posizione del cursore corrente.  
  
 Per altre informazioni, vedere [EM_REPLACESEL](http://msdn.microsoft.com/library/windows/desktop/bb761633) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::LineIndex](#lineindex).  
  
##  <a name="setcuebanner"></a>  CEdit::SetCueBanner  
 Imposta il testo che viene visualizzato come la pila di testo, o suggerimento, in modalità di modifica una controllo quando il controllo è vuoto.  
  
```  
BOOL SetCueBanner(LPCWSTR lpszText);

 
BOOL SetCueBanner(
    LPCWSTR lpszText,   
    BOOL fDrawWhenFocused = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszText*  
 Puntatore a una stringa che contiene la pila per visualizzare nel controllo di modifica.  
  
 [in] *fDrawWhenFocused*  
 Se `false`, l'intestazione della segnalazione non viene disegnato quando l'utente fa clic nel controllo di modifica e fornisce lo stato attivo al controllo.  
  
 Se `true`, l'intestazione della segnalazione viene disegnato anche quando il controllo ha lo stato attivo. L'intestazione della segnalazione scomparirà quando l'utente inizia a digitare nel controllo.  
  
 Il valore predefinito è `false`.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il metodo ha esito positivo; in caso contrario `false`.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [EM_SETCUEBANNER](http://msdn.microsoft.com/library/windows/desktop/bb761639) messaggio, come descritto in Windows SDK. Per altre informazioni, vedere la [Edit_SetCueBannerTextFocused](http://msdn.microsoft.com/library/windows/desktop/bb761703) macro.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato il [CEdit::SetCueBanner](#setcuebanner) metodo.  
  
 [!code-cpp[NVC_MFC_CEdit_s1#2](../../mfc/reference/codesnippet/cpp/cedit-class_20.cpp)]  
  
##  <a name="sethandle"></a>  CEdit::SetHandle  
 Chiamare questa funzione per impostare l'handle per la memoria locale che verrà utilizzata da un controllo di modifica più righe.  
  
```  
void SetHandle(HLOCAL hBuffer);
```  
  
### <a name="parameters"></a>Parametri  
 *hBuffer*  
 Contiene un handle per la memoria locale. Questo handle deve essere stato creato mediante una chiamata precedente ai [LocalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366723) funzione Windows tramite il **LMEM_MOVEABLE** flag. Si presuppone che la memoria contengono una stringa con terminazione null. Se non è questo il caso, il primo byte della memoria allocata deve essere impostato su 0.  
  
### <a name="remarks"></a>Note  
 Il controllo di modifica utilizzerà quindi questo buffer per archiviare il testo attualmente visualizzato invece di allocare il proprio buffer.  
  
 Questa funzione membro viene elaborata solo da controlli di modifica più righe.  
  
 Prima di un'applicazione imposta un nuovo handle di memoria, è necessario utilizzare il [GetHandle](#gethandle) funzione membro per ottenere l'handle del buffer di memoria corrente e liberare la memoria utilizzando il **LocalFree** funzione di Windows.  
  
 `SetHandle` Cancella il buffer di annullamento (il [CanUndo](#canundo) funzione membro restituisce quindi 0) e il flag di modifica interna (il [GetModify](#getmodify) funzione membro restituisce quindi 0). La finestra di controllo di modifica viene ridisegnata.  
  
 È possibile utilizzare questa funzione membro in un controllo di modifica più righe in una finestra di dialogo solo se è stata creata la finestra di dialogo con la **DS_LOCALEDIT** impostato flag di stile.  
  
> [!NOTE]
> **GetHandle** non funziona con Windows 95/98. Se si chiama **GetHandle** in Windows 95/98, verrà restituito **NULL**. **GetHandle** funzionerà come documentato in Windows NT versione 3.51 e successive.  
  
 Per altre informazioni, vedere [EM_SETHANDLE](http://msdn.microsoft.com/library/windows/desktop/bb761641), [LocalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366723), e [LocalFree](http://msdn.microsoft.com/library/windows/desktop/aa366730) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#22](../../mfc/reference/codesnippet/cpp/cedit-class_21.cpp)]  
  
##  <a name="sethighlight"></a>  CEdit::SetHighlight  
 Controllo di modifica evidenzia un intervallo di testo che viene visualizzato nell'oggetto corrente.  
  
```  
void SetHighlight(
    int ichStart,   
    int ichEnd);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *ichStart*|Indice in base zero del primo carattere nell'intervallo di testo in modo da evidenziare.|  
|[in] *ichEnd*|Indice in base zero dell'ultimo carattere nell'intervallo di testo in modo da evidenziare.|  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [EM_SETHILITE](http://msdn.microsoft.com/library/windows/desktop/bb761643) messaggio, come descritto in Windows SDK.  
  
##  <a name="setlimittext"></a>  CEdit::SetLimitText  
 Chiamare questa funzione membro per impostare il limite di testo per questo `CEdit` oggetto.  
  
```  
void SetLimitText(UINT nMax);
```  
  
### <a name="parameters"></a>Parametri  
 *nMax*  
 Il nuovo limite, il testo in caratteri.  
  
### <a name="remarks"></a>Note  
 Il limite di testo è la quantità massima di testo in caratteri, che può accettare il controllo di modifica.  
  
 Modifica del limite di testo che limita l'utente può immettere solo testo. Non ha alcun effetto su qualsiasi testo già nel controllo di modifica, né interessa la lunghezza del testo copiato per il controllo di modifica per la [SetWindowText](cwnd-class.md#setwindowtext) funzione di membro in `CWnd`. Se un'applicazione utilizza il `SetWindowText` per inserire più testo in un controllo di modifica rispetto a quanto specificato nella chiamata alla funzione `LimitText`, l'utente può eliminare qualsiasi del testo all'interno del controllo di modifica. Tuttavia, il limite di testo impedirà all'utente di sostituire il testo esistente con testo nuovo, a meno che l'eliminazione della selezione corrente, il testo sotto il limite di testo.  
  
 Questa funzione sostituisce [LimitText](#limittext) in Win32.  
  
 Per altre informazioni, vedere [EM_SETLIMITTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761647) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEditView::GetEditCtrl](ceditview-class.md#geteditctrl).  
  
##  <a name="setmargins"></a>  CEdit::SetMargins  
 Chiamare questo metodo per impostare i margini sinistro e destro di questo controllo di modifica.  
  
```  
void SetMargins(
    UINT nLeft,  
    UINT nRight);
```  
  
### <a name="parameters"></a>Parametri  
 *nLeft*  
 La larghezza del margine sinistro nuovi, in pixel.  
  
 *nRight*  
 La larghezza del margine destro nuovi, in pixel.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4.0.  
  
 Per altre informazioni, vedere [EM_SETMARGINS](http://msdn.microsoft.com/library/windows/desktop/bb761649) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEditView::GetEditCtrl](ceditview-class.md#geteditctrl).  
  
##  <a name="setmodify"></a>  CEdit::SetModify  
 Chiamare questa funzione per impostare o cancellare il flag modificato per un controllo di modifica.  
  
```  
void SetModify(BOOL bModified = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bModified*  
 Il valore **TRUE** indica che è stato modificato il testo e il valore **FALSE** indica è invariato. Per impostazione predefinita, viene impostato il flag modificato.  
  
### <a name="remarks"></a>Note  
 Il flag modificato indica se è stato modificato il testo all'interno del controllo di modifica. Viene impostato automaticamente ogni volta che l'utente modifica il testo. Il valore può essere recuperato con il [GetModify](#getmodify) funzione membro.  
  
 Per altre informazioni, vedere [EM_SETMODIFY](http://msdn.microsoft.com/library/windows/desktop/bb761651) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::GetModify](#getmodify).  
  
##  <a name="setpasswordchar"></a>  CEdit::SetPasswordChar  
 Chiamare questa funzione per impostare o rimuovere un carattere di password visualizzato in un controllo di modifica quando l'utente digita il testo.  
  
```  
void SetPasswordChar(TCHAR ch);
```  
  
### <a name="parameters"></a>Parametri  
 *ch*  
 Specifica il carattere deve essere visualizzato al posto del carattere digitato dall'utente. Se *ch* è 0, vengono visualizzati i caratteri effettivi digitati dall'utente.  
  
### <a name="remarks"></a>Note  
 Quando un carattere della password è impostato, tale carattere viene visualizzato per tutti i caratteri digitati dall'utente.  
  
 Questa funzione membro non ha effetto su più righe controllo edit.  
  
 Quando il `SetPasswordChar` viene chiamata la funzione membro `CEdit` verrà ridisegnato utilizzando il carattere specificato da tutti i caratteri visibili *ch*.  
  
 Se il controllo di modifica viene creato con la [ES_PASSWORD](styles-used-by-mfc.md#edit-styles) stile, carattere predefinito della password è impostato su un asterisco ( **\***). Questo stile viene rimossa qualora `SetPasswordChar` viene chiamato con *ch* impostato su 0.  
  
 Per altre informazioni, vedere [EM_SETPASSWORDCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761653) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#16](../../mfc/reference/codesnippet/cpp/cedit-class_22.cpp)]  
  
##  <a name="setreadonly"></a>  CEdit::SetReadOnly  
 Chiama questa funzione per impostare lo stato di sola lettura di un controllo di modifica.  
  
```  
BOOL SetReadOnly(BOOL bReadOnly = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bReadOnly*  
 Specifica se impostare o rimuovere lo stato di sola lettura del controllo di modifica. Il valore **TRUE** imposta lo stato di sola lettura, il valore **FALSE** imposta lo stato su lettura/scrittura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha esito positivo, oppure 0 se un errore generato.  
  
### <a name="remarks"></a>Note  
 L'impostazione corrente possa essere riscontrato dal test di [ES_READONLY](styles-used-by-mfc.md#edit-styles) flag nel valore restituito di [CWnd::GetStyle](cwnd-class.md#getstyle).  
  
 Per altre informazioni, vedere [EM_SETREADONLY](http://msdn.microsoft.com/library/windows/desktop/bb761655) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#23](../../mfc/reference/codesnippet/cpp/cedit-class_23.cpp)]  
  
##  <a name="setrect"></a>  CEdit::SetRect  
 Chiamare questa funzione per impostare le dimensioni di un rettangolo utilizzando delle coordinate specificate.  
  
```  
void SetRect(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 *lpRect*  
 Punta ai `RECT` struttura o `CRect` oggetto che specifica le nuove dimensioni del rettangolo di formattazione.  
  
### <a name="remarks"></a>Note  
 Questo membro viene elaborato solo da controlli di modifica più righe.  
  
 Utilizzare `SetRect` per impostare la formattazione di più righe rettangolo controllo edit. Il rettangolo di formattazione è il rettangolo limitazione del testo, che è indipendente dalla dimensione della finestra di controllo di modifica. Quando il controllo di modifica viene prima creato, il rettangolo di formattazione è lo stesso dell'area client della finestra di controllo di modifica. Tramite il `SetRect` funzione membro, un'applicazione può assegnare al rettangolo formattazione maggiore o minore rispetto alla finestra di controllo di modifica.  
  
 Se il controllo di modifica non dispone di alcuna barra di scorrimento, il testo verrà ritagliato, non è incluso, se il rettangolo di formattazione viene eseguito più grande rispetto alla finestra. Se il controllo di modifica contiene un bordo, il rettangolo di formattazione verrà ridotte tramite la dimensione del bordo. Se si modifica il rettangolo restituito dal `GetRect` funzione membro, è necessario rimuovere le dimensioni del bordo prima di passare il rettangolo da `SetRect`.  
  
 Quando `SetRect` viene chiamato, il controllo di modifica del testo è anche riformattato e visualizzata nuovamente.  
  
 Per altre informazioni, vedere [EM_SETRECT](http://msdn.microsoft.com/library/windows/desktop/bb761657) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#24](../../mfc/reference/codesnippet/cpp/cedit-class_24.cpp)]  
  
##  <a name="setrectnp"></a>  CEdit::SetRectNP  
 Chiamare questa funzione per impostare il rettangolo di formattazione di un controllo di modifica più righe.  
  
```  
void SetRectNP(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 *lpRect*  
 Punta a un `RECT` struttura o `CRect` oggetto che specifica le nuove dimensioni del rettangolo.  
  
### <a name="remarks"></a>Note  
 Il rettangolo di formattazione è il rettangolo limitazione del testo, che è indipendente dalla dimensione della finestra di controllo di modifica.  
  
 `SetRectNP` è identico al `SetRect` funzione membro con la differenza che la finestra di controllo di modifica non viene ridisegnata.  
  
 Quando il controllo di modifica viene prima creato, il rettangolo di formattazione è lo stesso dell'area client della finestra di controllo di modifica. Chiamando il `SetRectNP` funzione membro, un'applicazione può assegnare al rettangolo formattazione maggiore o minore rispetto alla finestra di controllo di modifica.  
  
 Se il controllo di modifica non dispone di alcuna barra di scorrimento, il testo verrà ritagliato, non è incluso, se il rettangolo di formattazione viene eseguito più grande rispetto alla finestra.  
  
 Questo membro viene elaborato solo da controlli di modifica più righe.  
  
 Per altre informazioni, vedere [EM_SETRECTNP](http://msdn.microsoft.com/library/windows/desktop/bb761659) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::SetRect](#setrect).  
  
##  <a name="setsel"></a>  CEdit::SetSel  
 Chiamare questa funzione per selezionare un intervallo di caratteri in un controllo di modifica.  
  
```  
void SetSel(
    DWORD dwSelection,  
    BOOL bNoScroll = FALSE);

 
void SetSel(
    int nStartChar,  
    int nEndChar,  
    BOOL bNoScroll = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *dwSelection*  
 Specifica la posizione iniziale della parola meno significativa e la posizione terminale nella parola più significativa. Se la parola meno significativa è 0 e la parola più significativa è -1, viene selezionato tutto il testo nel controllo di modifica. Se la parola meno significativa è -1, viene rimosso qualsiasi selezione corrente.  
  
 *bNoScroll*  
 Indica se il punto di inserimento deve essere spostato nella visualizzazione. Se **FALSE**, il punto di inserimento è lo scorrimento nella visualizzazione. Se **TRUE**, il punto di inserimento non lo scorrimento nella visualizzazione.  
  
 *nStartChar*  
 Specifica la posizione iniziale. Se *nStartChar* è 0 e *nEndChar* è -1, tutto il testo nel controllo di modifica sia selezionato. Se *nStartChar* è -1, qualsiasi selezione corrente viene rimosso.  
  
 *nEndChar*  
 Specifica la posizione finale.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [EM_SETSEL](http://msdn.microsoft.com/library/windows/desktop/bb761661) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::GetSel](#getsel).  
  
##  <a name="settabstops"></a>  CEdit::SetTabStops  
 Chiamare questa funzione per impostare i punti di tabulazione in un controllo di modifica più righe.  
  
```  
void SetTabStops();  
BOOL SetTabStops(const int& cxEachStop);

 
BOOL SetTabStops(
    int nTabStops,  
    LPINT rgTabStops);
```  
  
### <a name="parameters"></a>Parametri  
 *cxEachStop*  
 Specifica che devono essere impostate in tabulazioni ogni *cxEachStop* DLU.  
  
 *nTabStops*  
 Specifica il numero di punti di tabulazione contenuti in *rgTabStops*. Questo numero deve essere maggiore di 1.  
  
 *rgTabStops*  
 Punta a una matrice di interi senza segno che specifica la scheda viene arrestata in DLU. Una DLU è una distanza orizzontale o verticale. Una DLU orizzontale è uguale a un quarto di unità di larghezza della base di finestra di dialogo corrente e 1 DLU verticale è uguale a un ottavo dell'unità di base altezza della finestra corrente. Le unità di base di finestra di dialogo vengono calcolate in base al altezza e larghezza del carattere del sistema corrente. Il **GetDialogBaseUnits** Windows funzione restituisce la finestra di dialogo corrente unità di base in pixel.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le schede sono state impostate; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Quando il testo viene copiato in un controllo di modifica più righe, qualsiasi carattere di tabulazione nel testo verrà eseguito lo spazio deve essere generato fino al successivo punto di tabulazione.  
  
 Per impostare le dimensioni predefinite del 32 DLU tabulazioni, chiamare la versione di questa funzione membro senza parametri. Per impostare punti di tabulazione su una dimensione diversa da 32, chiamare la versione con la *cxEachStop* parametro. Per impostare punti di tabulazione in una matrice di dimensioni, utilizzare la versione con due parametri.  
  
 Questa funzione membro viene elaborata solo da controlli di modifica più righe.  
  
 `SetTabStops` non automaticamente ridisegnare la finestra di modifica. Se si modificano le tabulazioni per il testo già nel controllo di modifica, chiamare [CWnd::InvalidateRect](cwnd-class.md#invalidaterect) per ridisegnare la finestra di modifica.  
  
 Per altre informazioni, vedere [EM_SETTABSTOPS](http://msdn.microsoft.com/library/windows/desktop/bb761663) e [GetDialogBaseUnits](http://msdn.microsoft.com/library/windows/desktop/ms645475) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEditView::SetTabStops](ceditview-class.md#settabstops).  
  
##  <a name="showballoontip"></a>  CEdit::ShowBalloonTip  
 Visualizza un fumetto suggerimento associato con il controllo di modifica corrente.  
  
```  
BOOL ShowBalloonTip(PEDITBALLOONTIP pEditBalloonTip);

 
BOOL ShowBalloonTip(
    LPCWSTR lpszTitle,   
    LPCWSTR lpszText,   
    INT ttiIcon = TTI_NONE);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *pEditBalloonTip*|Puntatore a un [EDITBALLOONTIP](http://msdn.microsoft.com/library/windows/desktop/bb775466) struttura che descrive il fumetto suggerimento.|  
|[in] *lpszTitle*|Puntatore a una stringa Unicode che contiene il titolo del fumetto suggerimento.|  
|[in] *lpszText*|Puntatore a una stringa Unicode che contiene il testo del suggerimento.|  
|[in] *ttiIcon*|Un' **INT** che specifica il tipo di icona da associare il fumetto suggerimento. Il valore predefinito è `TTI_NONE`. Per altre informazioni, vedere la `ttiIcon` membro del [EDITBALLOONTIP](http://msdn.microsoft.com/library/windows/desktop/bb775466) struttura.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questa funzione Invia il [EM_SHOWBALLOONTIP](http://msdn.microsoft.com/library/windows/desktop/bb761668) messaggio, come descritto in Windows SDK. Per altre informazioni, vedere la [Edit_ShowBalloonTip](http://msdn.microsoft.com/library/windows/desktop/bb761707) macro.  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce una variabile, `m_cedit`, che viene utilizzato per accedere al controllo di modifica corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CEdit_s1#1](../../mfc/reference/codesnippet/cpp/cedit-class_25.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente visualizza un fumetto suggerimento per un controllo di modifica. Il [CEdit::ShowBalloonTip](#showballoontip) metodo consente di specificare un testo di titolo e il fumetto suggerimento.  
  
 [!code-cpp[NVC_MFC_CEdit_s1#3](../../mfc/reference/codesnippet/cpp/cedit-class_26.cpp)]  
  
##  <a name="undo"></a>  CEdit::Undo  
 Chiamare questa funzione per annullare l'ultima operazione di controllo di modifica.  
  
```  
BOOL Undo();
```  
  
### <a name="return-value"></a>Valore restituito  
 Per un controllo di modifica a riga singola, il valore restituito è sempre diverso da zero. Per un controllo di modifica più righe, il valore restituito è diverso da zero se l'operazione di annullamento ha esito positivo, oppure 0 se ha esito negativo dell'operazione di annullamento.  
  
### <a name="remarks"></a>Note  
 Un'operazione di annullamento può anche essere annullata. Ad esempio, è possibile ripristinare il testo eliminato con la prima chiamata a `Undo`. Purché non vi sia alcuna operazione di modifica sono frapposti, è possibile rimuovere il testo con una seconda chiamata a `Undo`.  
  
 Per altre informazioni, vedere [EM_UNDO](http://msdn.microsoft.com/library/windows/desktop/bb761670) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#25](../../mfc/reference/codesnippet/cpp/cedit-class_27.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC CALCDRIV](../../visual-cpp-samples.md)   
 [CMNCTRL2 esempio MFC](../../visual-cpp-samples.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd (classe)](cwnd-class.md)   
 [CButton (classe)](cbutton-class.md)   
 [CComboBox (classe)](ccombobox-class.md)   
 [CListBox (classe)](clistbox-class.md)   
 [Classe CScrollBar](cscrollbar-class.md)   
 [Classe CStatic](cstatic-class.md)   
 [Classe CDialog](cdialog-class.md)

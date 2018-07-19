---
title: Classe CEdit | Microsoft Docs
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
ms.openlocfilehash: 8e1521c73f92bbb941b1060cb5cf2051ead88ffb
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37339592"
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
|[CEdit::CharFromPos](#charfrompos)|Recupera gli indici di riga e il carattere del carattere più vicino in una posizione specificata.|  
|[CEdit::Clear](#clear)|Elimina (Cancella) controllano la selezione corrente (se presente) in modalità di modifica.|  
|[CEdit::Copy](#copy)|Negli Appunti in formato CF_TEXT, copia la selezione corrente (se presente) nel controllo di modifica.|  
|[CEdit::Create](#create)|Crea il controllo di modifica di Windows e lo collega al `CEdit` oggetto.|  
|[CEdit::Cut](#cut)|Controllare la selezione corrente (se presente) in modalità di modifica eliminazioni (tagli) e formattare il testo negli Appunti in CF_TEXT eliminato copie.|  
|[CEdit::EmptyUndoBuffer](#emptyundobuffer)|Ripristina (Cancella) il flag di operazione di annullamento di una modifica del controllo.|  
|[CEdit::FmtLines](#fmtlines)|Imposta l'inclusione di caratteri di interruzione temporanea attiva o disattiva all'interno di un controllo di modifica più righe.|  
|[CEdit::GetCueBanner](#getcuebanner)|Recupera il testo che viene visualizzato come il segnale testuale o un suggerimento, in un controllo di modifica quando il controllo è vuoto e non è attivo.|  
|[CEdit::GetFirstVisibleLine](#getfirstvisibleline)|Determina la riga visibile in primo piano in un controllo di modifica.|  
|[CEdit::GetHandle](#gethandle)|Recupera un handle per la memoria attualmente allocata per un controllo di modifica più righe.|  
|[CEdit::GetHighlight](#gethighlight)|Ottiene gli indici di iniziali e finali caratteri in un intervallo di testo che viene evidenziato nel controllo di modifica corrente.|  
|[CEdit::GetLimitText](#getlimittext)|Ottiene la quantità massima di testo si `CEdit` può contenere.|  
|[CEdit::GetLine](#getline)|Recupera una riga di testo da un controllo di modifica.|  
|[CEdit::GetLineCount](#getlinecount)|Recupera il numero di righe in un controllo di modifica più righe.|  
|[CEdit::GetMargins](#getmargins)|Ottiene i margini sinistro e destro per `CEdit`.|  
|[CEdit::GetModify](#getmodify)|Determina se il contenuto di un controllo di modifica è stato modificato.|  
|[CEdit::GetPasswordChar](#getpasswordchar)|Recupera il carattere della password visualizzato in un controllo di modifica quando l'utente immette testo.|  
|[CEdit::GetRect](#getrect)|Ottiene il rettangolo di formattazione di un controllo di modifica.|  
|[CEdit::GetSel](#getsel)|Ottiene le posizioni di primo e ultimo carattere della selezione corrente in un controllo di modifica.|  
|[CEdit::HideBalloonTip](#hideballoontip)|Consente di nascondere qualsiasi fumetto suggerimento associato al controllo di modifica corrente.|  
|[CEdit::LimitText](#limittext)|Limita la lunghezza del testo che l'utente può immettere in un controllo di modifica.|  
|[CEdit::LineFromChar](#linefromchar)|Recupera il numero di riga della riga che contiene l'indice del carattere specificato.|  
|[CEdit::LineIndex](#lineindex)|Recupera l'indice dei caratteri di una riga all'interno di un controllo di modifica più righe.|  
|[CEdit::LineLength](#linelength)|Recupera la lunghezza di una riga in un controllo di modifica.|  
|[CEdit::LineScroll](#linescroll)|Consente di far scorrere il testo di un controllo di modifica più righe.|  
|[CEdit::Paste](#paste)|Inserisce i dati dagli Appunti nel controllo di modifica nella posizione corrente del cursore. Dati vengono inseriti solo se gli Appunti contengono dati nel formato CF_TEXT.|  
|[CEdit::PosFromChar](#posfromchar)|Recupera le coordinate dell'angolo superiore sinistro di un indice del carattere specificato.|  
|[CEdit::ReplaceSel](#replacesel)|Sostituisce la selezione corrente in un controllo di modifica con il testo specificato.|  
|[CEdit::SetCueBanner](#setcuebanner)|Imposta il testo che viene visualizzato come il segnale testuale o un suggerimento, in un controllo di modifica quando il controllo è vuoto e non è attivo.|  
|[CEdit::SetHandle](#sethandle)|Imposta l'handle per la memoria locale che verrà utilizzata da un controllo di modifica più righe.|  
|[CEdit::SetHighlight](#sethighlight)|Evidenzia un intervallo di testo che viene visualizzato nell'attuale controllo di modifica.|  
|[CEdit::SetLimitText](#setlimittext)|Imposta la quantità massima di testo `CEdit` può contenere.|  
|[CEdit::SetMargins](#setmargins)|Imposta i margini sinistro e destro per questo `CEdit`.|  
|[CEdit::SetModify](#setmodify)|Imposta o Cancella il flag di modifica per un controllo di modifica.|  
|[CEdit::SetPasswordChar](#setpasswordchar)|Imposta o rimuove un carattere della password visualizzato in un controllo di modifica quando l'utente immette testo.|  
|[CEdit::SetReadOnly](#setreadonly)|Imposta lo stato di sola lettura di un controllo di modifica.|  
|[CEdit::SetRect](#setrect)|Imposta il rettangolo di formattazione di un controllo di modifica multiriga e aggiorna il controllo.|  
|[CEdit::SetRectNP](#setrectnp)|Imposta il rettangolo di formattazione di un controllo di modifica multiriga senza il ridisegno della finestra del controllo.|  
|[CEdit::SetSel](#setsel)|Seleziona un intervallo di caratteri in un controllo di modifica.|  
|[CEdit::SetTabStops](#settabstops)|Imposta le tabulazioni in un'istruzione di controllo di modifica.|  
|[CEdit::ShowBalloonTip](#showballoontip)|Visualizza un fumetto suggerimento associato al controllo di modifica corrente.|  
|[CEdit::Undo](#undo)|Inverte l'ultima operazione di controllo di modifica.|  
  
## <a name="remarks"></a>Note  
 Un controllo di modifica è una finestra figlio rettangolare in cui l'utente può immettere testo.  
  
 È possibile creare un controllo di modifica da un modello di finestra di dialogo o direttamente nel codice. In entrambi i casi, chiamare prima il costruttore `CEdit` per costruire il `CEdit` dell'oggetto, quindi chiamare il [Create](#create) funzione membro per creare la Windows controllo di modifica e associarlo al `CEdit` oggetto.  
  
 Costruzione può essere un processo in un passaggio in una classe derivata da `CEdit`. Scrivere un costruttore per la classe derivata e chiamare `Create` all'interno del costruttore.  
  
 `CEdit` eredita le funzionalità significative da `CWnd`. Per impostare e recuperare il testo da un `CEdit` oggetto, usare il `CWnd` le funzioni membro [SetWindowText](cwnd-class.md#setwindowtext) e [GetWindowText](cwnd-class.md#getwindowtext), quale set o get controlla l'intero contenuto di una modifica, anche se si è un controllo su più righe. Le righe di testo in un controllo su più righe sono separate da sequenze di caratteri "\r\n". Inoltre, se un controllo di modifica è su più righe, ottenere e impostare fa parte del testo del controllo chiamando il `CEdit` funzioni membro [GetLine](#getline), [funzione membro SetSel](#setsel), [funzione membro GetSel](#getsel)e [ ReplaceSel](#replacesel).  
  
 Se si desidera gestire i messaggi di notifica Windows inviati da un controllo di modifica all'elemento padre (in genere una classe derivata da `CDialog`), aggiungere una funzione membro della mappa messaggi voce e gestore di messaggi alla classe padre per ogni messaggio.  
  
 Ogni voce nella mappa messaggi assume il formato seguente:  
  
  **On _**_notifica_**(** _id_**,** _memberFxn_ **)**
  
 in cui `id` specifica l'ID della finestra figlio del controllo di modifica l'invio della notifica, e `memberFxn` è il nome della funzione membro padre scritta per gestire la notifica.  
  
 Prototipo di funzione dell'elemento padre è il seguente:  
  
 **afx_msg** memberFxn void **();**  
  
 Seguito è riportato un elenco di voci della mappa messaggi potenziali e una descrizione dei casi in cui verrà inviate all'elemento padre:  
  
- ON_EN_CHANGE l'utente ha eseguito un'azione che potrebbe aver modificato il testo in un controllo di modifica. A differenza dei messaggio di notifica EN_UPDATE, viene inviato questo messaggio di notifica dopo la visualizzazione degli aggiornamenti di Windows.  
  
- ON_EN_ERRSPACE il controllo di modifica non è possibile allocare memoria sufficiente per soddisfare una richiesta specifica.  
  
- ON_EN_HSCROLL l'utente fa clic su barra di scorrimento orizzontale di un controllo di modifica. La finestra padre riceve una notifica prima che venga aggiornata la schermata.  
  
- Il controllo di modifica ON_EN_KILLFOCUS perde lo stato attivo di input.  
  
- ON_EN_MAXTEXT inserimento corrente ha superato il numero specificato di caratteri per il controllo di modifica ed è stato troncato. Inviata anche quando un controllo di modifica non è lo stile ES_AUTOHSCROLL e il numero di caratteri da inserire supererebbe la larghezza del controllo di modifica. Inviata anche quando un controllo di modifica non è lo stile ES_AUTOVSCROLL e il numero totale di righe risultante da un inserimento di testo verrà superata l'altezza del controllo di modifica.  
  
- ON_EN_SETFOCUS inviati quando un controllo di modifica riceve lo stato attivo.  
  
- ON_EN_UPDATE il controllo di modifica sta per il testo di visualizzazione modificato. Inviato dopo che il controllo ha formattato il testo ma prima che le schermate del testo in modo che le dimensioni della finestra possono essere modificata, se necessario.  
  
- ON_EN_VSCROLL l'utente fa clic su barra di scorrimento verticale del controllo di modifica. La finestra padre riceve una notifica prima che venga aggiornata la schermata.  
  
 Se si crea una `CEdit` oggetto all'interno di una finestra di dialogo di `CEdit` oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.  
  
 Se si crea una `CEdit` oggetto da una risorsa finestra di dialogo utilizzando la finestra di dialogo, il `CEdit` oggetto viene eliminato automaticamente quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un `CEdit` dell'oggetto all'interno di una finestra, è necessario anche eliminarla definitivamente. Se si crea il `CEdit` dell'oggetto nello stack, viene eliminato automaticamente. Se si crea il `CEdit` oggetto sull'heap tramite il **nuovi** funzione, è necessario chiamare **eliminare** sull'oggetto per eliminarla definitivamente quando l'utente termina di Windows di controllo di modifica. Se si alloca alcuna memoria nel `CEdit` dell'oggetto, eseguire l'override di `CEdit` distruttore per l'eliminazione delle allocazioni.  
  
 Per modificare alcuni stili in un controllo di modifica (ad esempio ES_READONLY) è necessario inviare messaggi specifici per il controllo invece di usare [ModifyStyle](cwnd-class.md#modifystyle). Visualizzare [modifica degli stili del controllo](http://msdn.microsoft.com/library/windows/desktop/bb775464) in Windows SDK.  
  
 Per altre informazioni su `CEdit`, vedere:  
  
- [Controlli](../../mfc/controls-mfc.md)  
  
-   Articolo della Knowledge Base Q259949: INFO: SetCaretPos() è non appropriato con CEdit o controlli di CRichEditCtrl  
  
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
 Per altre informazioni, vedere [EM_CANUNDO](http://msdn.microsoft.com/library/windows/desktop/bb775468) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::Undo](#undo).  
  
##  <a name="cedit"></a>  CEdit::CEdit  
 Costruisce un oggetto `CEdit`.  
  
```  
CEdit();
```  
  
### <a name="remarks"></a>Note  
 Uso [Create](#create) per costruire il Windows controllo di modifica.  
  
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
 L'indice dei caratteri della parola meno significativa e l'indice della riga all'interno della parola più significativa.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4.0.  
  
 Per altre informazioni, vedere [EM_CHARFROMPOS](http://msdn.microsoft.com/library/windows/desktop/bb761566) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#3](../../mfc/reference/codesnippet/cpp/cedit-class_2.cpp)]  
  
##  <a name="clear"></a>  CEdit::Clear  
 Chiamare questa funzione per eliminare (clear) la selezione corrente (se presente nel controllo di modifica).  
  
```  
void Clear();
```  
  
### <a name="remarks"></a>Note  
 L'eliminazione eseguita dal `Clear` può essere annullata chiamando il [annullare](#undo) funzione membro.  
  
 Per eliminare la selezione corrente e inserire il contenuto eliminato negli Appunti, chiamare il [Taglia](#cut) funzione membro.  
  
 Per altre informazioni, vedere [WM_CLEAR](http://msdn.microsoft.com/library/windows/desktop/ms649020) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#4](../../mfc/reference/codesnippet/cpp/cedit-class_3.cpp)]  
  
##  <a name="copy"></a>  CEdit::Copy  
 Chiamare questa funzione per copiare le la selezione corrente (se presente) nel controllo di modifica negli Appunti in formato CF_TEXT.  
  
```  
void Copy();
```  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [WM_COPY](http://msdn.microsoft.com/library/windows/desktop/ms649022) nel SDK di Windows.  
  
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
 Specifica lo stile del controllo di modifica. Applicare qualsiasi combinazione di [stili di modifica](styles-used-by-mfc.md#edit-styles) al controllo.  
  
 *Rect*  
 Specifica le dimensioni e la posizione del controllo di modifica. Può essere un' `CRect` oggetto o `RECT` struttura.  
  
 *pParentWnd*  
 Specifica una finestra padre del controllo di modifica (in genere un `CDialog`). Non deve essere NULL.  
  
 *nID*  
 Specifica l'ID. del controllo di modifica  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CEdit` oggetto in due passaggi. In primo luogo, chiamare il `CEdit` costruttore e quindi chiamare `Create`, che crea il controllo di modifica di Windows e lo collega al `CEdit` oggetto.  
  
 Quando `Create` viene eseguito, invia Windows la [WM_NCCREATE](http://msdn.microsoft.com/library/windows/desktop/ms632635), [WM_NCCALCSIZE](http://msdn.microsoft.com/library/windows/desktop/ms632634), [WM_CREATE](http://msdn.microsoft.com/library/windows/desktop/ms632619), e [WM_GETMINMAXINFO](http://msdn.microsoft.com/library/windows/desktop/ms632626) messaggi per il controllo di modifica.  
  
 Questi messaggi vengono gestiti per impostazione predefinita il [OnNcCreate](cwnd-class.md#onnccreate), [OnNcCalcSize](cwnd-class.md#onnccalcsize), [OnCreate](cwnd-class.md#oncreate), e [OnGetMinMaxInfo](cwnd-class.md#ongetminmaxinfo) funzioni membro nel `CWnd` classe di base. Per estendere la gestione dei messaggi predefinito, derivare una classe da `CEdit`, aggiungere una mappa messaggi per la nuova classe e sostituire le funzioni membro di gestore di messaggi precedenti. Eseguire l'override `OnCreate`, ad esempio, per eseguire l'inizializzazione necessaria per la nuova classe.  
  
 Applicare la seguente istruzione [stili di finestra](styles-used-by-mfc.md#window-styles) a un controllo di modifica.  
  
- WS_CHILD sempre  
  
- In genere WS_VISIBLE  
  
- WS_DISABLED raramente  
  
- WS_GROUP ai controlli di gruppo  
  
- WS_TABSTOP includere controllo di modifica nell'ordine di tabulazione  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#2](../../mfc/reference/codesnippet/cpp/cedit-class_5.cpp)]  
  
##  <a name="cut"></a>  CEdit::Cut  
 Chiamare questa funzione per eliminare (Taglia) la selezione corrente (se presente) nel controllo di modifica e copiare il testo eliminato negli Appunti in formato CF_TEXT.  
  
```  
void Cut();
```  
  
### <a name="remarks"></a>Note  
 L'eliminazione eseguita dal `Cut` può essere annullata chiamando il [annullare](#undo) funzione membro.  
  
 Per eliminare la selezione corrente senza inserire testo eliminato negli Appunti, chiamare il [chiaro](#clear) funzione membro.  
  
 Per altre informazioni, vedere [WM_CUT](http://msdn.microsoft.com/library/windows/desktop/ms649023) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#6](../../mfc/reference/codesnippet/cpp/cedit-class_6.cpp)]  
  
##  <a name="emptyundobuffer"></a>  CEdit::EmptyUndoBuffer  
 Chiamare questa funzione per reimpostare (clear) il flag di operazione di annullamento di un controllo di modifica.  
  
```  
void EmptyUndoBuffer();
```  
  
### <a name="remarks"></a>Note  
 Il controllo di modifica a questo punto sarà possibile annullare l'ultima operazione. Il flag di operazione di annullamento viene impostato ogni volta che un'operazione all'interno del controllo di modifica può essere annullata.  
  
 Il flag di operazione di annullamento viene automaticamente cancellato ogni volta che il [SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext) oppure [SetHandle](#sethandle) `CWnd` vengono chiamate le funzioni membro.  
  
 Per altre informazioni, vedere [EM_EMPTYUNDOBUFFER](http://msdn.microsoft.com/library/windows/desktop/bb761568) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#7](../../mfc/reference/codesnippet/cpp/cedit-class_7.cpp)]  
  
##  <a name="fmtlines"></a>  CEdit::FmtLines  
 Chiamare questa funzione per impostare l'inclusione di caratteri di interruzione temporanea on oppure off all'interno di un controllo di modifica più righe.  
  
```  
BOOL FmtLines(BOOL bAddEOL);
```  
  
### <a name="parameters"></a>Parametri  
 *bAddEOL*  
 Specifica se devono essere inseriti caratteri di interruzione temporanea. Il valore TRUE inserisce i caratteri; il valore FALSE rimuoverli.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se qualsiasi formattazione viene eseguita; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un'interruzione di riga temporanea è costituito da due ritorni a capo e un avanzamento di riga inserito alla fine di una riga che viene interrotta a causa di ritorno a capo automatico. Un'interruzione di riga rigido è costituito da un ritorno a capo e un avanzamento riga. Le righe che terminano con un'interruzione di riga non sono interessate da `FmtLines`.  
  
 Windows risponderà solo se il `CEdit` oggetto è un controllo di modifica più righe.  
  
 `FmtLines` interessa solo il buffer restituito da [GetHandle](#gethandle) e il testo restituito dalla [WM_GETTEXT](http://msdn.microsoft.com/library/windows/desktop/ms632627). Ha alcun impatto sulla visualizzazione del testo all'interno del controllo di modifica.  
  
 Per altre informazioni, vedere [EM_FMTLINES](http://msdn.microsoft.com/library/windows/desktop/bb761570) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#8](../../mfc/reference/codesnippet/cpp/cedit-class_8.cpp)]  
  
##  <a name="getcuebanner"></a>  CEdit::GetCueBanner  
 Recupera il testo che viene visualizzato come il segnale testuale o un suggerimento, in un controllo di modifica quando il controllo è vuoto.  
  
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
 Il numero di caratteri che può essere ricevuto. Questo numero include il carattere di terminazione NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Per il primo overload, TRUE se il metodo ha esito positivo. in caso contrario, FALSE.  
  
 Per il secondo overload, una [CString](../../atl-mfc-shared/using-cstring.md) che contiene il testo della segnalazione se il metodo ha esito positivo; in caso contrario, una stringa vuota ("").  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [EM_GETCUEBANNER](http://msdn.microsoft.com/library/windows/desktop/bb761572) messaggio, che è descritti nel SDK di Windows. Per altre informazioni, vedere la [Edit_GetCueBannerText](http://msdn.microsoft.com/library/windows/desktop/bb761695) macro.  
  
##  <a name="getfirstvisibleline"></a>  CEdit::GetFirstVisibleLine  
 Chiamare questa funzione per determinare la prima riga visibile in un controllo di modifica.  
  
```  
int GetFirstVisibleLine() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice a base zero della prima riga visibile. Per i controlli di modifica a riga singola, il valore restituito è 0.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [EM_GETFIRSTVISIBLELINE](http://msdn.microsoft.com/library/windows/desktop/bb761574) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#9](../../mfc/reference/codesnippet/cpp/cedit-class_9.cpp)]  
  
##  <a name="gethandle"></a>  CEdit::GetHandle  
 Chiamare questa funzione per recuperare un handle per la memoria attualmente allocata per un controllo di modifica più righe.  
  
```  
HLOCAL GetHandle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle di memoria locale che identifica il buffer che contiene il contenuto del controllo di modifica. Se si verifica un errore, ad esempio l'invio del messaggio a un controllo di modifica a riga singola, il valore restituito è 0.  
  
### <a name="remarks"></a>Note  
 L'handle è un handle di memoria locale e può essere usato da uno qualsiasi dei **locale** gestiscono funzioni di memoria di Windows che accettano una memoria locale come parametro.  
  
 `GetHandle` viene elaborato solo da controlli di modifica più righe.  
  
 Chiamare `GetHandle` per un controllo di modifica più righe in una finestra di dialogo solo se la finestra di dialogo è stata creata con il flag di stile DS_LOCALEDIT impostato. Se lo stile DS_LOCALEDIT non è impostato, sia possibile ottenere il valore restituito diverso da zero, ma non sarà in grado di utilizzare il valore restituito.  
  
> [!NOTE]
> `GetHandle` non funzionerà con Windows 95 o 98. Se si chiama `GetHandle` in Windows 95 o 98, verrà restituito NULL. `GetHandle` funzionerà come documentato in Windows NT versione 3.51 e successive.  
  
 Per altre informazioni, vedere [EM_GETHANDLE](http://msdn.microsoft.com/library/windows/desktop/bb761576) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#10](../../mfc/reference/codesnippet/cpp/cedit-class_10.cpp)]  
  
##  <a name="gethighlight"></a>  CEdit::GetHighlight  
 Ottiene gli indici dei caratteri e il cognome in un intervallo di testo che viene evidenziato nel controllo di modifica corrente.  
  
```  
BOOL GetHighlight(
    int* pichStart,   
    int* pichEnd) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[out] *pichStart*|Indice in base zero del primo carattere dell'intervallo di testo evidenziato.|  
|[out] *pichEnd*|Indice in base zero dell'ultimo carattere dell'intervallo di testo evidenziato.|  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [EM_GETHILITE](http://msdn.microsoft.com/library/windows/desktop/bb761578) messaggio, che è descritti nel SDK di Windows.  
  
##  <a name="getlimittext"></a>  CEdit::GetLimitText  
 Chiamare questa funzione membro per ottenere il limite di testo per l'oggetto `CEdit` oggetto.  
  
```  
UINT GetLimitText() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il limite testo corrente, espressa in byte, per questo `CEdit` oggetto.  
  
### <a name="remarks"></a>Note  
 Il limite di testo è la quantità massima di testo, in byte, che può accettare il controllo di modifica.  
  
> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4.0.  
  
 Per altre informazioni, vedere [EM_GETLIMITTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761582) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#11](../../mfc/reference/codesnippet/cpp/cedit-class_11.cpp)]  
  
##  <a name="getline"></a>  CEdit::GetLine  
 Chiamare questa funzione per recuperare una riga di testo da un controllo di modifica e l'inserimento *lpszbuffer viene*.  
  
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
 Specifica il numero di riga da recuperare da un'istruzione di controllo di modifica. Numeri di riga sono in base zero. un valore pari a 0 specifica la prima riga. Questo parametro viene ignorato da un controllo di modifica a riga singola.  
  
 *lpszbuffer viene*  
 Punta al buffer che riceve una copia della riga. La prima parola del buffer deve specificare il numero massimo di caratteri che può essere copiato nel buffer.  
  
 *nMaxLength*  
 Specifica il numero massimo di byte che può essere copiato nel buffer. `GetLine` Questo valore viene inserito nella prima parola del *lpszbuffer viene* prima di effettuare la chiamata a Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di byte attualmente copiati. Il valore restituito è 0 se il numero di riga specificato da *nIndex* è maggiore del numero di righe nel controllo di modifica.  
  
### <a name="remarks"></a>Note  
 Riga copiata non contiene un carattere di terminazione null.  
  
 Per altre informazioni, vedere [EM_GETLINE](http://msdn.microsoft.com/library/windows/desktop/bb761584) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::GetLineCount](#getlinecount).  
  
##  <a name="getlinecount"></a>  CEdit::GetLineCount  
 Chiamare questa funzione per recuperare il numero di righe in un controllo di modifica più righe.  
  
```  
int GetLineCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Controllo di modifica di un valore integer contenente il numero di righe in più righe. Se il testo non è stato inserito nel controllo di modifica, il valore restituito è 1.  
  
### <a name="remarks"></a>Note  
 `GetLineCount` viene elaborato solo da controlli di modifica più righe.  
  
 Per altre informazioni, vedere [EM_GETLINECOUNT](http://msdn.microsoft.com/library/windows/desktop/bb761586) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#12](../../mfc/reference/codesnippet/cpp/cedit-class_12.cpp)]  
  
##  <a name="getmargins"></a>  CEdit::GetMargins  
 Chiamare questa funzione membro per recuperare i margini sinistro e destro di questo controllo di modifica.  
  
```  
DWORD GetMargins() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza del margine sinistro della parola di ordine inferiore e la larghezza del margine destro della parola più significativa.  
  
### <a name="remarks"></a>Note  
 I margini sono misurati in pixel.  
  
> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4.0.  
  
 Per altre informazioni, vedere [EM_GETMARGINS](http://msdn.microsoft.com/library/windows/desktop/bb761590) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEditView::GetEditCtrl](ceditview-class.md#geteditctrl).  
  
##  <a name="getmodify"></a>  CEdit::GetModify  
 Chiamare questa funzione per determinare se il contenuto di un controllo di modifica è stato modificato.  
  
```  
BOOL GetModify() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il contenuto di controllo di modifica è stato modificato; 0 se questi sono rimasti invariati.  
  
### <a name="remarks"></a>Note  
 Windows gestisce un flag interno che indica se il contenuto del controllo di modifica è stato modificato. Questo flag è cancellato quando il controllo di modifica viene creato inizialmente e può essere cancellato anche chiamando il [SetModify](#setmodify) funzione membro.  
  
 Per altre informazioni, vedere [EM_GETMODIFY](http://msdn.microsoft.com/library/windows/desktop/bb761592) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#13](../../mfc/reference/codesnippet/cpp/cedit-class_13.cpp)]  
  
##  <a name="getpasswordchar"></a>  CEdit::GetPasswordChar  
 Chiamare questa funzione per recuperare il carattere della password che viene visualizzato in un controllo di modifica quando l'utente immette testo.  
  
```  
TCHAR GetPasswordChar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il carattere da visualizzare anziché il carattere digitato dall'utente. Il valore restituito è NULL se è presente alcun carattere della password.  
  
### <a name="remarks"></a>Note  
 Se si crea il controllo di modifica con lo stile ES_PASSWORD, la DLL che supporta il controllo determina il carattere della password predefinito. Il manifesto o la [InitCommonControlsEx](http://msdn.microsoft.com/library/windows/desktop/bb775697) metodo determina a quali DLL supporta il controllo di modifica. Se user32.dll supporta il controllo di modifica, il carattere della password predefinita è l'asterisco ('* ', U + 002A). Se comctl32.dll versione 6 supporta il controllo di modifica, il carattere predefinito è cerchio nero ('●', 25CF U +). Per ulteriori informazioni su quali DLL e versione supporta i controlli comuni, vedere [Shell e le versioni di controlli comuni](http://msdn.microsoft.com/library/windows/desktop/bb776779).  
  
 Questo metodo invia il [EM_GETPASSWORDCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761594) messaggio, che è descritti nel SDK di Windows.  
  
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
 Rettangolo di formattazione è il rettangolo di limitazione del testo, che è indipendente dalla dimensione della finestra di controllo di modifica.  
  
 Rettangolo di formattazione di un controllo di modifica più righe può essere modificato dal [SetRect](#setrect) e [SetRectNP](#setrectnp) funzioni membro.  
  
 Per altre informazioni, vedere [EM_GETRECT](http://msdn.microsoft.com/library/windows/desktop/bb761596) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::LimitText](#limittext).  
  
##  <a name="getsel"></a>  CEdit::GetSel  
 Chiamare questa funzione per ottenere il valore iniziale e finale le posizioni dei caratteri della selezione corrente (se presente) in un controllo di modifica, utilizzando il valore restituito o i parametri.  
  
```  
DWORD GetSel() const;  
  
void GetSel(
    int& nStartChar,  
    int& nEndChar) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nStartChar*  
 Riferimento a un integer che riceve la posizione del primo carattere nella selezione corrente.  
  
 *nEndChar*  
 Riferimento a un integer che riceve la posizione del primo carattere per oltre la fine della selezione corrente.  
  
### <a name="return-value"></a>Valore restituito  
 La versione che restituisce un valore DWORD restituisce un valore che contiene la posizione iniziale della parola di ordine inferiore e la posizione del primo carattere per dopo la fine della selezione all'interno della parola più significativa.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [EM_GETSEL](http://msdn.microsoft.com/library/windows/desktop/bb761598) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#15](../../mfc/reference/codesnippet/cpp/cedit-class_15.cpp)]  
  
##  <a name="hideballoontip"></a>  CEdit::HideBalloonTip  
 Consente di nascondere qualsiasi fumetto suggerimento associato al controllo di modifica corrente.  
  
```  
BOOL HideBalloonTip();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questa funzione Invia il [EM_HIDEBALLOONTIP](http://msdn.microsoft.com/library/windows/desktop/bb761604) messaggio, che è descritti nel SDK di Windows.  
  
##  <a name="limittext"></a>  CEdit::LimitText  
 Chiamare questa funzione per limitare la lunghezza del testo che l'utente può immettere in un controllo di modifica.  
  
```  
void LimitText(int nChars = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *nChars*  
 Specifica la lunghezza, in byte, del testo che l'utente può immettere. Se questo parametro è 0, lunghezza del testo è impostata su UINT_MAX byte. Comportamento predefinito.  
  
### <a name="remarks"></a>Note  
 Modifica del limite di testo consente di limitare l'utente può immettere solo testo. Non ha alcun effetto su qualsiasi testo già nel controllo di modifica, né influisce la lunghezza del testo copiato il controllo di modifica per il [SetWindowText](cwnd-class.md#setwindowtext) funzione di membro in `CWnd`. Se un'applicazione usa la `SetWindowText` per inserire più testo in un controllo di modifica da quella specificata nella chiamata alla funzione `LimitText`, l'utente può eliminare qualsiasi del testo all'interno del controllo di modifica. Tuttavia, il limite di testo impedirà all'utente di sostituire il testo esistente con il nuovo testo, a meno che l'eliminazione della selezione corrente fa sì che il testo di sotto del limite di testo.  
  
> [!NOTE]
>  In Win32 (Windows NT e Windows 95 o 98), [SetLimitText](#setlimittext) sostituisce questa funzione.  
  
 Per altre informazioni, vedere [EM_LIMITTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761607) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#17](../../mfc/reference/codesnippet/cpp/cedit-class_16.cpp)]  
  
##  <a name="linefromchar"></a>  CEdit::LineFromChar  
 Chiamare questa funzione per recuperare il numero di riga della riga che contiene l'indice del carattere specificato.  
  
```  
int LineFromChar(int nIndex = -1) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Contiene il valore di indice in base zero del carattere desiderato nel testo del controllo di modifica, o contiene -1. Se *nIndex* è -1, specifica la riga corrente, vale a dire, la riga che contiene il punto di inserimento.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di riga in base zero della riga contenente l'indice dei caratteri specificato da *nIndex*. Se *nIndex* è -1, viene restituito il numero della riga che contiene il primo carattere della selezione. Se non è stata effettuata alcuna selezione, viene restituito il numero di riga corrente.  
  
### <a name="remarks"></a>Note  
 Indice dei caratteri è il numero di caratteri dall'inizio del controllo di modifica.  
  
 Questa funzione membro viene utilizzata solo da controlli di modifica più righe.  
  
 Per altre informazioni, vedere [EM_LINEFROMCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761609) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#18](../../mfc/reference/codesnippet/cpp/cedit-class_17.cpp)]  
  
##  <a name="lineindex"></a>  CEdit::LineIndex  
 Chiamare questa funzione per recuperare l'indice dei caratteri di una riga all'interno di un controllo di modifica più righe.  
  
```  
int LineIndex(int nLine = -1) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nRiga*  
 Contiene il valore di indice per la riga desiderata nel testo del controllo di modifica, o contiene -1. Se *nRiga* è -1, specifica la riga corrente, vale a dire, la riga che contiene il punto di inserimento.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice del carattere della riga specificata nel *nRiga* oppure -1 se il numero di riga specificata è maggiore del numero di righe nel controllo di modifica.  
  
### <a name="remarks"></a>Note  
 L'indice del carattere è il numero di caratteri dall'inizio del controllo di modifica per la riga specificata.  
  
 Questa funzione membro viene elaborata solo da controlli di modifica più righe.  
  
 Per altre informazioni, vedere [EM_LINEINDEX](http://msdn.microsoft.com/library/windows/desktop/bb761611) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#19](../../mfc/reference/codesnippet/cpp/cedit-class_18.cpp)]  
  
##  <a name="linelength"></a>  CEdit::LineLength  
 Recupera la lunghezza di una riga in un controllo di modifica.  
  
```  
int LineLength(int nLine = -1) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nRiga*  
 Indice a base zero di un carattere nella riga la cui lunghezza è da recuperare. Il valore predefinito è -1.  
  
### <a name="return-value"></a>Valore restituito  
 Per i controlli di modifica a riga singola, il valore restituito è la lunghezza, in TCHARs, del testo nel controllo di modifica.  
  
 Per i controlli di modifica multiriga, il valore restituito è di lunghezza, espressa in TCHARs, della riga specificata per il *nRiga* parametro. Per [!INCLUDE[vcpransi](../../atl-mfc-shared/reference/includes/vcpransi_md.md)] testo, la lunghezza è il numero di byte nella riga; per il testo Unicode, la lunghezza è il numero di caratteri nella riga. La lunghezza non include il carattere di ritorno a capo alla fine della riga.  
  
 Se il *nRiga* parametro è maggiore del numero di caratteri di controllo, il valore restituito è uguale a zero.  
  
 Se il *nRiga* parametro è -1, il valore restituito è il numero di caratteri deselezionati nelle righe che contengono caratteri selezionati. Ad esempio, se la selezione si estende dal quarto carattere di una riga e l'ottavo carattere dalla fine della riga successiva, il valore restituito è 10. Ovvero i tre caratteri nella prima riga e sette al successivo.  
  
 Per altre informazioni sul tipo TCHAR, vedere la riga TCHAR nella tabella [tipi di dati Windows](http://msdn.microsoft.com/library/windows/desktop/aa383751).  
  
### <a name="remarks"></a>Note  
 Questo metodo è supportato per il [EM_LINELENGTH](http://msdn.microsoft.com/library/windows/desktop/bb761613) messaggio, che è descritti nel SDK di Windows.  
  
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
 Specifica il numero di posizioni dei caratteri per scorrere orizzontalmente. Questo valore viene ignorato se il controllo di modifica stato ES_RIGHT o ES_CENTER stile.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene elaborata solo da controlli di modifica più righe.  
  
 Il controllo di modifica non scorre in senso verticale dopo l'ultima riga del testo nel controllo di modifica. Se l'oggetto corrente della riga oltre il numero di righe specificato da *nLines* supera il numero totale di righe nel controllo di modifica, il valore viene modificato in modo che l'ultima riga del controllo di modifica è necessario scorrere nella parte superiore della finestra di controllo di modifica.  
  
 `LineScroll` utilizzabile per scorrere orizzontalmente oltre l'ultimo carattere di tutte le righe.  
  
 Per altre informazioni, vedere [EM_LINESCROLL](http://msdn.microsoft.com/library/windows/desktop/bb761615) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::GetFirstVisibleLine](#getfirstvisibleline).  
  
##  <a name="paste"></a>  CEdit::Paste  
 Chiamare questa funzione per inserire i dati dagli Appunti nel `CEdit` nel punto di inserimento.  
  
```  
void Paste();
```  
  
### <a name="remarks"></a>Note  
 Dati vengono inseriti solo se gli Appunti contengono dati nel formato CF_TEXT.  
  
 Per altre informazioni, vedere [WM_PASTE](http://msdn.microsoft.com/library/windows/desktop/ms649028) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#20](../../mfc/reference/codesnippet/cpp/cedit-class_19.cpp)]  
  
##  <a name="posfromchar"></a>  CEdit::PosFromChar  
 Chiamare questa funzione per ottenere la posizione (angolo in alto a sinistra) di un carattere specifico all'interno di questo `CEdit` oggetto.  
  
```  
CPoint PosFromChar(UINT nChar) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *NChar*  
 Indice a base zero del carattere specificato.  
  
### <a name="return-value"></a>Valore restituito  
 Le coordinate dell'angolo superiore sinistro del carattere specificato da *nChar*.  
  
### <a name="remarks"></a>Note  
 Viene specificato il carattere, assegnando il valore di indice in base zero. Se *nChar* è maggiore dell'indice dell'ultimo carattere in questa `CEdit` dell'oggetto, il valore restituito specifica le coordinate della posizione del carattere immediatamente successiva all'ultimo carattere in questo `CEdit` oggetto.  
  
> [!NOTE]
>  Questa funzione membro è disponibile a partire da Windows 95 e Windows NT 4.0.  
  
 Per altre informazioni, vedere [EM_POSFROMCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761631) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::LineFromChar](#linefromchar).  
  
##  <a name="replacesel"></a>  CEdit::ReplaceSel  
 Chiamare questa funzione per sostituire la selezione corrente in un controllo di modifica con il testo specificato da *lpszNewText*.  
  
```  
void ReplaceSel(LPCTSTR lpszNewText, BOOL bCanUndo = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszNewText*  
 Punta a una stringa con terminazione null contenente il testo di sostituzione.  
  
 *bCanUndo*  
 Per specificare che questa funzione può essere annullata, impostare il valore di questo parametro su TRUE. Il valore predefinito è FALSE.  
  
### <a name="remarks"></a>Note  
 Sostituisce solo una parte del testo in un controllo di modifica. Se si desidera sostituire tutto il testo, usare il [CWnd::SetWindowText](cwnd-class.md#setwindowtext) funzione membro.  
  
 Se non è stata effettuata alcuna selezione corrente, la sostituzione del testo viene inserito nella posizione corrente del cursore.  
  
 Per altre informazioni, vedere [EM_REPLACESEL](http://msdn.microsoft.com/library/windows/desktop/bb761633) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::LineIndex](#lineindex).  
  
##  <a name="setcuebanner"></a>  CEdit::SetCueBanner  
 Imposta il testo che viene visualizzato come il segnale testuale, o suggerimento, in una modifica controllare quando il controllo è vuoto.  
  
```  
BOOL SetCueBanner(LPCWSTR lpszText);

 
BOOL SetCueBanner(
    LPCWSTR lpszText,   
    BOOL fDrawWhenFocused = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszText*  
 Puntatore a una stringa che contiene il segnale da visualizzare nel controllo di modifica.  
  
 [in] *fDrawWhenFocused*  
 Se FALSE, l'intestazione della segnalazione non viene disegnato quando l'utente fa clic nel controllo di modifica e assegna il controllo lo stato attivo.  
  
 Se TRUE, l'intestazione della segnalazione viene disegnato anche quando il controllo ha lo stato attivo. L'intestazione della segnalazione scomparirà quando l'utente inizia a digitare nel controllo.  
  
 Il valore predefinito è FALSE.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo ha esito positivo. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [EM_SETCUEBANNER](http://msdn.microsoft.com/library/windows/desktop/bb761639) messaggio, che è descritti nel SDK di Windows. Per altre informazioni, vedere la [Edit_SetCueBannerTextFocused](http://msdn.microsoft.com/library/windows/desktop/bb761703) macro.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato il [CEdit::SetCueBanner](#setcuebanner) (metodo).  
  
 [!code-cpp[NVC_MFC_CEdit_s1#2](../../mfc/reference/codesnippet/cpp/cedit-class_20.cpp)]  
  
##  <a name="sethandle"></a>  CEdit::SetHandle  
 Chiamare questa funzione per impostare l'handle per la memoria locale che verrà utilizzata da un controllo di modifica più righe.  
  
```  
void SetHandle(HLOCAL hBuffer);
```  
  
### <a name="parameters"></a>Parametri  
 *hBuffer*  
 Contiene un handle per la memoria locale. Deve avere questo handle sia stato creato da una precedente chiamata ai [LocalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366723) funzione Windows usando il flag LMEM_MOVEABLE. La memoria si presuppone che contenga una stringa con terminazione null. Se ciò non avviene, il primo byte della memoria allocata deve essere impostato su 0.  
  
### <a name="remarks"></a>Note  
 Il controllo di modifica userà quindi questo buffer per archiviare il testo attualmente visualizzato invece di allocare un proprio buffer.  
  
 Questa funzione membro viene elaborata solo da controlli di modifica più righe.  
  
 Prima di un'applicazione imposta un nuovo handle di memoria, è necessario utilizzare il [GetHandle](#gethandle) funzione di membro per ottenere l'handle per il buffer di memoria corrente e liberare tale memoria mediante il `LocalFree` funzione Windows.  
  
 `SetHandle` Cancella il buffer di annullamento (i [CanUndo](#canundo) la funzione membro restituisce quindi 0) e il flag di modifica interna (il [GetModify](#getmodify) funzione membro restituisce quindi 0). La finestra di controllo di modifica viene ridisegnata.  
  
 È possibile utilizzare questa funzione membro in un controllo di modifica più righe in una finestra di dialogo solo se è stata creata la finestra di dialogo con il flag di stile DS_LOCALEDIT impostato.  
  
> [!NOTE]
> `GetHandle` non funzionerà con Windows 95 o 98. Se si chiama `GetHandle` in Windows 95 o 98, verrà restituito NULL. `GetHandle` funzionerà come documentato in Windows NT versione 3.51 e successive.  
  
 Per altre informazioni, vedere [EM_SETHANDLE](http://msdn.microsoft.com/library/windows/desktop/bb761641), [LocalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366723), e [LocalFree](http://msdn.microsoft.com/library/windows/desktop/aa366730) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#22](../../mfc/reference/codesnippet/cpp/cedit-class_21.cpp)]  
  
##  <a name="sethighlight"></a>  CEdit::SetHighlight  
 Evidenzia un intervallo di testo che viene visualizzato nell'attuale controllo di modifica.  
  
```  
void SetHighlight(
    int ichStart,   
    int ichEnd);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] *ichStart*|Indice in base zero del primo carattere dell'intervallo di testo da evidenziare.|  
|[in] *ichEnd*|Indice in base zero dell'ultimo carattere dell'intervallo di testo da evidenziare.|  
  
### <a name="remarks"></a>Note  
 Questo metodo invia il [EM_SETHILITE](http://msdn.microsoft.com/library/windows/desktop/bb761643) messaggio, che è descritti nel SDK di Windows.  
  
##  <a name="setlimittext"></a>  CEdit::SetLimitText  
 Chiamare questa funzione membro per impostare il limite di testo per l'oggetto `CEdit` oggetto.  
  
```  
void SetLimitText(UINT nMax);
```  
  
### <a name="parameters"></a>Parametri  
 *nMax*  
 Il nuovo limite, il testo in caratteri.  
  
### <a name="remarks"></a>Note  
 Il limite di testo è la quantità massima di testo, in caratteri, che può accettare il controllo di modifica.  
  
 Modifica del limite di testo consente di limitare l'utente può immettere solo testo. Non ha alcun effetto su qualsiasi testo già nel controllo di modifica, né influisce la lunghezza del testo copiato il controllo di modifica per il [SetWindowText](cwnd-class.md#setwindowtext) funzione di membro in `CWnd`. Se un'applicazione usa la `SetWindowText` per inserire più testo in un controllo di modifica da quella specificata nella chiamata alla funzione `LimitText`, l'utente può eliminare qualsiasi del testo all'interno del controllo di modifica. Tuttavia, il limite di testo impedirà all'utente di sostituire il testo esistente con il nuovo testo, a meno che l'eliminazione della selezione corrente fa sì che il testo di sotto del limite di testo.  
  
 Questa funzione sostituisce [LimitText](#limittext) in Win32.  
  
 Per altre informazioni, vedere [EM_SETLIMITTEXT](http://msdn.microsoft.com/library/windows/desktop/bb761647) nel SDK di Windows.  
  
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
  
 Per altre informazioni, vedere [EM_SETMARGINS](http://msdn.microsoft.com/library/windows/desktop/bb761649) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEditView::GetEditCtrl](ceditview-class.md#geteditctrl).  
  
##  <a name="setmodify"></a>  CEdit::SetModify  
 Chiamare questa funzione per impostare o cancellare il flag modificato per un controllo di modifica.  
  
```  
void SetModify(BOOL bModified = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bModified*  
 Il valore TRUE indica che è stato modificato il testo e un valore FALSE indica che non verrà modificata. Per impostazione predefinita, viene impostato il flag modificato.  
  
### <a name="remarks"></a>Note  
 Il flag modificato indica se è stato modificato il testo all'interno del controllo di modifica. Ogni volta che l'utente modifica il testo viene impostato automaticamente. Il valore può essere recuperato con il [GetModify](#getmodify) funzione membro.  
  
 Per altre informazioni, vedere [EM_SETMODIFY](http://msdn.microsoft.com/library/windows/desktop/bb761651) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEdit::GetModify](#getmodify).  
  
##  <a name="setpasswordchar"></a>  CEdit::SetPasswordChar  
 Chiamare questa funzione per impostare o rimuovere un carattere della password visualizzato in un controllo di modifica quando l'utente digita del testo.  
  
```  
void SetPasswordChar(TCHAR ch);
```  
  
### <a name="parameters"></a>Parametri  
 *ch*  
 Specifica il carattere deve essere visualizzato al posto del carattere digitato dall'utente. Se *ch* è 0, vengono visualizzati i caratteri effettivi digitati dall'utente.  
  
### <a name="remarks"></a>Note  
 Quando un carattere della password è impostato, tale carattere viene visualizzato per tutti i caratteri digitati dall'utente.  
  
 Questa funzione membro ha alcun effetto su più righe di controllo di modifica.  
  
 Quando la `SetPasswordChar` viene chiamata la funzione membro, `CEdit` consentirà di ridisegnare tutti i caratteri visibili tramite il carattere specificato da *ch*.  
  
 Se il controllo di modifica viene creato con il [ES_PASSWORD](styles-used-by-mfc.md#edit-styles) stile di visualizzazione, il carattere della password predefinita è impostato su un asterisco ( **\***). Se questo stile viene rimosso `SetPasswordChar` viene chiamato con *ch* impostato su 0.  
  
 Per altre informazioni, vedere [EM_SETPASSWORDCHAR](http://msdn.microsoft.com/library/windows/desktop/bb761653) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#16](../../mfc/reference/codesnippet/cpp/cedit-class_22.cpp)]  
  
##  <a name="setreadonly"></a>  CEdit::SetReadOnly  
 Chiama questa funzione per impostare lo stato di sola lettura di un controllo di modifica.  
  
```  
BOOL SetReadOnly(BOOL bReadOnly = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bReadOnly*  
 Specifica se impostare o rimuovere lo stato di sola lettura del controllo di modifica. Un valore di TRUE imposta lo stato di sola lettura. un valore di FALSE imposta lo stato di lettura/scrittura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha esito positivo, oppure 0 se un errore generato.  
  
### <a name="remarks"></a>Note  
 L'impostazione corrente sono reperibili eseguendo il test di [ES_READONLY](styles-used-by-mfc.md#edit-styles) flag nel valore restituito del [CWnd::GetStyle](cwnd-class.md#getstyle).  
  
 Per altre informazioni, vedere [EM_SETREADONLY](http://msdn.microsoft.com/library/windows/desktop/bb761655) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#23](../../mfc/reference/codesnippet/cpp/cedit-class_23.cpp)]  
  
##  <a name="setrect"></a>  CEdit::SetRect  
 Chiamare questa funzione per impostare le dimensioni di un rettangolo utilizzando coordinate specificate.  
  
```  
void SetRect(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 *lpRect*  
 Punta al `RECT` struttura o `CRect` oggetto che specifica le nuove dimensioni del rettangolo di formattazione.  
  
### <a name="remarks"></a>Note  
 Questo membro viene elaborato solo da controlli di modifica più righe.  
  
 Usare `SetRect` per impostare la formattazione di un controllo di modifica rettangolo di più righe. Rettangolo di formattazione è il rettangolo di limitazione del testo, che è indipendente dalla dimensione della finestra di controllo di modifica. Quando viene creato il controllo di modifica, il rettangolo di formattazione è quello utilizzato per l'area client della finestra di controllo di modifica. Tramite il `SetRect` funzione membro, un'applicazione può rendere il rettangolo di formattazione superiori o inferiori al finestra di controllo di modifica.  
  
 Se il controllo di modifica non con nessuna barra di scorrimento, il testo verrà ritagliato, non è eseguito il wrapping, se il rettangolo di formattazione viene eseguito più grande della finestra. Se il controllo di modifica contiene un bordo, il rettangolo di formattazione viene ridotto le dimensioni del bordo. Se si modifica il rettangolo restituito dal `GetRect` funzione membro, è necessario rimuovere le dimensioni del bordo prima di passare il rettangolo da `SetRect`.  
  
 Quando si `SetRect` viene chiamato, il controllo di modifica del testo viene anche riformattato e nuovamente visualizzato.  
  
 Per altre informazioni, vedere [EM_SETRECT](http://msdn.microsoft.com/library/windows/desktop/bb761657) nel SDK di Windows.  
  
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
 Rettangolo di formattazione è il rettangolo di limitazione del testo, che è indipendente dalla dimensione della finestra di controllo di modifica.  
  
 `SetRectNP` è identico al `SetRect` funzione membro, ad eccezione del fatto che la finestra di controllo di modifica non viene ridisegnata.  
  
 Quando viene creato il controllo di modifica, il rettangolo di formattazione è quello utilizzato per l'area client della finestra di controllo di modifica. Chiamando il `SetRectNP` funzione membro, un'applicazione può rendere il rettangolo di formattazione superiori o inferiori al finestra di controllo di modifica.  
  
 Se il controllo di modifica non con nessuna barra di scorrimento, il testo verrà ritagliato, non è eseguito il wrapping, se il rettangolo di formattazione viene eseguito più grande della finestra.  
  
 Questo membro viene elaborato solo da controlli di modifica più righe.  
  
 Per altre informazioni, vedere [EM_SETRECTNP](http://msdn.microsoft.com/library/windows/desktop/bb761659) nel SDK di Windows.  
  
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
 Specifica la posizione iniziale della parola di ordine inferiore e la posizione finale della parola più significativa. Se la parola meno significativa è 0 e la parola più significativa è -1, viene selezionato tutto il testo nel controllo di modifica. Se la parola meno significativa è -1, viene rimosso qualsiasi selezione corrente.  
  
 *bNoScroll*  
 Indica se il punto di inserimento deve essere spostato nella visualizzazione. Se FALSE, il punto di inserimento viene eseguito lo scorrimento nella visualizzazione. Se TRUE, il punto di inserimento non viene scorso nella visualizzazione.  
  
 *nStartChar*  
 Specifica la posizione iniziale. Se *nStartChar* è 0 e *nEndChar* è -1, tutto il testo nel controllo di modifica sia selezionato. Se *nStartChar* è -1, viene rimosso qualsiasi selezione corrente.  
  
 *nEndChar*  
 Specifica la posizione finale.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [EM_SETSEL](http://msdn.microsoft.com/library/windows/desktop/bb761661) nel SDK di Windows.  
  
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
 Specifica il numero di punti di tabulazione contenuta nella *rgTabStops*. Questo numero deve essere maggiore di 1.  
  
 *rgTabStops*  
 Punta a una matrice di interi senza segno che specifica la scheda si arresta in unità di misura della finestra. Una DLU rappresenta la distanza orizzontale o verticale. Una DLU orizzontali è uguale a un quarto di unità di base larghezza della finestra corrente e 1 DLU verticale è uguale a un ottavo dell'unità di base altezza della finestra corrente. Le unità di base di finestra di dialogo vengano calcolate in base l'altezza e la larghezza del tipo di carattere del sistema corrente. Il `GetDialogBaseUnits` Windows funzione restituisce la finestra di dialogo corrente le unità di base in pixel.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le schede sono state impostate; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Quando il testo viene copiato in un controllo di modifica più righe, qualsiasi carattere di tabulazione nel testo comporterà lo spazio deve essere generato fino a tabulazione successiva.  
  
 Per impostare punti di tabulazione per le dimensioni predefinite del 32 DLU, chiamare la versione di questa funzione membro senza parametri. Per impostare punti di tabulazione su una dimensione diversa da quella a 32, chiamare la versione con il *cxEachStop* parametro. Per impostare punti di tabulazione in una matrice di dimensioni, usare la versione con due parametri.  
  
 Questa funzione membro viene elaborata solo da controlli di modifica più righe.  
  
 `SetTabStops` non vengono automaticamente aggiornate la finestra di modifica. Se si modificano i punti di tabulazione per il testo già nel controllo di modifica, chiamare [CWnd::InvalidateRect](cwnd-class.md#invalidaterect) per ridisegnare la finestra di modifica.  
  
 Per altre informazioni, vedere [EM_SETTABSTOPS](http://msdn.microsoft.com/library/windows/desktop/bb761663) e [GetDialogBaseUnits](http://msdn.microsoft.com/library/windows/desktop/ms645475) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CEditView::SetTabStops](ceditview-class.md#settabstops).  
  
##  <a name="showballoontip"></a>  CEdit::ShowBalloonTip  
 Visualizza un fumetto suggerimento associato al controllo di modifica corrente.  
  
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
|[in] *lpszText*|Puntatore a una stringa Unicode che contiene il testo del fumetto suggerimento.|  
|[in] *ttiIcon*|Un' **INT** che specifica il tipo di icona da associare il fumetto suggerimento. Il valore predefinito è TTI_NONE. Per altre informazioni, vedere la `ttiIcon` membro della [EDITBALLOONTIP](http://msdn.microsoft.com/library/windows/desktop/bb775466) struttura.|  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questa funzione Invia il [EM_SHOWBALLOONTIP](http://msdn.microsoft.com/library/windows/desktop/bb761668) messaggio, che è descritti nel SDK di Windows. Per altre informazioni, vedere la [Edit_ShowBalloonTip](http://msdn.microsoft.com/library/windows/desktop/bb761707) macro.  
  
### <a name="example"></a>Esempio  
 L'esempio di codice seguente definisce una variabile, `m_cedit`, che viene usato per accedere al controllo di modifica corrente. Questa variabile viene usata nell'esempio riportato di seguito.  
  
 [!code-cpp[NVC_MFC_CEdit_s1#1](../../mfc/reference/codesnippet/cpp/cedit-class_25.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente visualizza un fumetto suggerimento per un controllo di modifica. Il [CEdit::ShowBalloonTip](#showballoontip) metodo specifica un testo della descrizione comando del titolo e fumetto.  
  
 [!code-cpp[NVC_MFC_CEdit_s1#3](../../mfc/reference/codesnippet/cpp/cedit-class_26.cpp)]  
  
##  <a name="undo"></a>  CEdit::Undo  
 Chiamare questa funzione per annullare l'ultima operazione di controllo di modifica.  
  
```  
BOOL Undo();
```  
  
### <a name="return-value"></a>Valore restituito  
 Per un controllo di modifica a riga singola, il valore restituito è sempre diverso da zero. Per un controllo di modifica più righe, il valore restituito è diverso da zero se ha esito positivo, l'operazione di annullamento oppure 0 se ha esito negativo dell'operazione di annullamento.  
  
### <a name="remarks"></a>Note  
 Un'operazione di annullamento può anche essere annullata. Ad esempio, è possibile ripristinare il testo eliminato con la prima chiamata a `Undo`. Purché non vi sia alcuna operazione di modifica corrispondente, è possibile rimuovere il testo con una seconda chiamata a `Undo`.  
  
 Per altre informazioni, vedere [EM_UNDO](http://msdn.microsoft.com/library/windows/desktop/bb761670) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CEdit#25](../../mfc/reference/codesnippet/cpp/cedit-class_27.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC CALCDRIV](../../visual-cpp-samples.md)   
 [CMNCTRL2 esempio MFC](../../visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWnd](cwnd-class.md)   
 [Classe CButton](cbutton-class.md)   
 [CComboBox (classe)](ccombobox-class.md)   
 [CListBox (classe)](clistbox-class.md)   
 [Classe CScrollBar](cscrollbar-class.md)   
 [Classe CStatic](cstatic-class.md)   
 [Classe CDialog](cdialog-class.md)

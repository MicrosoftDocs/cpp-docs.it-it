---
title: "CEdit Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CEdit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CEdit class"
  - "controlli [MFC], edit"
  - "edit controls"
  - "edit controls, classi"
  - "line separators in multiline edit controls"
  - "multiline edit control"
  - "separatori, in multiline edit controls"
  - "text editors"
  - "text editors, CEdit class"
ms.assetid: b1533c30-7f10-4663-88d3-8b7f2c9f7024
caps.latest.revision: 22
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CEdit Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di un controllo di modifica di Windows.  
  
## Sintassi  
  
```  
class CEdit : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CEdit::CEdit](../Topic/CEdit::CEdit.md)|Costruisce un oggetto controllo `CEdit`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CEdit::CanUndo](../Topic/CEdit::CanUndo.md)|Determina se un'operazione di controllo di modifica può essere annullata.|  
|[CEdit::CharFromPos](../Topic/CEdit::CharFromPos.md)|Recupera la riga e indici di caratteri per il carattere più vicino a una posizione specificata.|  
|[CEdit::Clear](../Topic/CEdit::Clear.md)|Elimina \(definito\) la selezione corrente \(se presenti\) nel controllo di modifica.|  
|[CEdit::Copy](../Topic/CEdit::Copy.md)|Copiare la selezione corrente \(se presenti\) nel controllo di modifica agli Appunti nel formato **CF\_TEXT**.|  
|[CEdit::Create](../Topic/CEdit::Create.md)|Crea il controllo di modifica di Windows e lo aggiunge all'oggetto `CEdit`.|  
|[CEdit::Cut](../Topic/CEdit::Cut.md)|Elimina \(ridurre\) la selezione corrente \(se presenti\) nel controllo di modifica in e copia il testo estratto negli Appunti nel formato **CF\_TEXT**.|  
|[CEdit::EmptyUndoBuffer](../Topic/CEdit::EmptyUndoBuffer.md)|Reimposta \(definito\) il flag di annullamento di un controllo di modifica.|  
|[CEdit::FmtLines](../Topic/CEdit::FmtLines.md)|Imposta includere i caratteri di interruzione di riga softkey o all'interno di un controllo di modifica a più righe.|  
|[CEdit::GetCueBanner](../Topic/CEdit::GetCueBanner.md)|Recupera il testo visualizzato come un'indicazione testuale, o suggerimento, in un controllo di modifica quando il controllo è vuoto e non ha lo stato attivo.|  
|[CEdit::GetFirstVisibleLine](../Topic/CEdit::GetFirstVisibleLine.md)|Determina la riga visibile in primo piano in un controllo di modifica.|  
|[CEdit::GetHandle](../Topic/CEdit::GetHandle.md)|Recupera l'handle alla memoria di cui è allocata per un controllo di modifica a più righe.|  
|[CEdit::GetHighlight](../Topic/CEdit::GetHighlight.md)|Ottiene gli indici dei caratteri iniziale e finale di un intervallo di testo che sia evidenziato nel controllo di modifica corrente.|  
|[CEdit::GetLimitText](../Topic/CEdit::GetLimitText.md)|Ottiene la quantità massima di testo questo `CEdit` può contenere.|  
|[CEdit::GetLine](../Topic/CEdit::GetLine.md)|Recupera una riga di testo di un controllo di modifica.|  
|[CEdit::GetLineCount](../Topic/CEdit::GetLineCount.md)|Recupera il numero di righe in un controllo di modifica a più righe.|  
|[CEdit::GetMargins](../Topic/CEdit::GetMargins.md)|Ottiene i margini sinistro e destro per questo `CEdit`.|  
|[CEdit::GetModify](../Topic/CEdit::GetModify.md)|Determina se il contenuto di un controllo di modifica è stato modificato.|  
|[CEdit::GetPasswordChar](../Topic/CEdit::GetPasswordChar.md)|Recupera il carattere di password verranno visualizzati in un controllo di modifica quando l'utente immette il testo.|  
|[CEdit::GetRect](../Topic/CEdit::GetRect.md)|Ottiene il rettangolo di formattazione di un controllo di modifica.|  
|[CEdit::GetSel](../Topic/CEdit::GetSel.md)|Ottiene la prima e l'ultima posizioni dei caratteri della selezione corrente in un controllo di modifica.|  
|[CEdit::HideBalloonTip](../Topic/CEdit::HideBalloonTip.md)|Nasconde tutto il suggerimento associato al controllo di modifica corrente.|  
|[CEdit::LimitText](../Topic/CEdit::LimitText.md)|Limita la lunghezza del testo che l'utente può immettere in un controllo di modifica.|  
|[CEdit::LineFromChar](../Topic/CEdit::LineFromChar.md)|Recupera il numero di riga contenente l'indice di caratteri specificato.|  
|[CEdit::LineIndex](../Topic/CEdit::LineIndex.md)|Recupera l'indice di una riga in un controllo di modifica a più righe.|  
|[CEdit::LineLength](../Topic/CEdit::LineLength.md)|Recupera la lunghezza di una riga in un controllo di modifica.|  
|[CEdit::LineScroll](../Topic/CEdit::LineScroll.md)|Scorre il testo di un controllo di modifica a più righe.|  
|[CEdit::Paste](../Topic/CEdit::Paste.md)|Inserisce i dati dagli Appunti nel controllo di modifica nella posizione corrente del cursore.  I dati vengono immessi solo se gli Appunti contengono dati nel formato **CF\_TEXT**.|  
|[CEdit::PosFromChar](../Topic/CEdit::PosFromChar.md)|Recupera le coordinate dell'angolo superiore sinistro di un indice di caratteri specificato.|  
|[CEdit::ReplaceSel](../Topic/CEdit::ReplaceSel.md)|Sostituisce la selezione corrente in un controllo di modifica con il testo specificato.|  
|[CEdit::SetCueBanner](../Topic/CEdit::SetCueBanner.md)|Imposta il testo da visualizzare come un'indicazione testuale, o suggerimento, in un controllo di modifica quando il controllo è vuoto e non ha lo stato attivo.|  
|[CEdit::SetHandle](../Topic/CEdit::SetHandle.md)|Imposta un handle alla memoria locale che verrà utilizzata da un controllo di modifica a più righe.|  
|[CEdit::SetHighlight](../Topic/CEdit::SetHighlight.md)|Evidenzia un intervallo di testo visualizzato nel controllo di modifica corrente.|  
|[CEdit::SetLimitText](../Topic/CEdit::SetLimitText.md)|Imposta la quantità massima di testo questo `CEdit` può contenere.|  
|[CEdit::SetMargins](../Topic/CEdit::SetMargins.md)|Impostare i margini sinistro e destro per questo `CEdit`.|  
|[CEdit::SetModify](../Topic/CEdit::SetModify.md)|Imposta o cancella il flag di modifica per un controllo di modifica.|  
|[CEdit::SetPasswordChar](../Topic/CEdit::SetPasswordChar.md)|Imposta o rimuovere un carattere di password verranno visualizzati in un controllo di modifica quando l'utente immette il testo.|  
|[CEdit::SetReadOnly](../Topic/CEdit::SetReadOnly.md)|Imposta lo stato di sola lettura di un controllo di modifica.|  
|[CEdit::SetRect](../Topic/CEdit::SetRect.md)|Imposta il rettangolo di formattazione di un controllo di modifica a più righe e aggiorna il controllo.|  
|[CEdit::SetRectNP](../Topic/CEdit::SetRectNP.md)|Imposta il rettangolo di formattazione di un controllo di modifica a più righe senza ridisegnare la finestra di controllo.|  
|[CEdit::SetSel](../Topic/CEdit::SetSel.md)|Selezionare un intervallo di caratteri in un controllo di modifica.|  
|[CEdit::SetTabStops](../Topic/CEdit::SetTabStops.md)|Imposta le tabulazioni in un controllo di modifica a più righe.|  
|[CEdit::ShowBalloonTip](../Topic/CEdit::ShowBalloonTip.md)|Visualizza un suggerimento associato al controllo di modifica corrente.|  
|[CEdit::Undo](../Topic/CEdit::Undo.md)|Consente di annullare l'ultima operazione di controllo di modifica.|  
  
## Note  
 Un controllo di modifica è una finestra figlio rettangolare in cui l'utente può immettere il testo.  
  
 È possibile creare un controllo di modifica da un modello di finestra di dialogo o direttamente nel codice.  In entrambi i casi, chiamare prima il costruttore `CEdit` per costruire l'oggetto `CEdit`, quindi chiamare la funzione membro [Crea](../Topic/CEdit::Create.md) per creare il controllo di modifica di Windows e per associarlo all'oggetto `CEdit`.  
  
 La costruzione può essere un processo una fase in una classe derivata da `CEdit`.  Scrivere un costruttore per la classe derivata e chiamare **Crea** dal costruttore.  
  
 `CEdit` eredita la presenza `CWnd`.  Per impostare e recuperare il testo di un oggetto `CEdit`, utilizzare le funzioni membro [SetWindowText](../Topic/CWnd::SetWindowText.md) e [GetWindowText](../Topic/CWnd::GetWindowText.md)di `CWnd`, che imposta o ottiene tutto il contenuto di un controllo di modifica, anche se è un controllo multilinea.  Le righe di testo in un controllo multilinea sono separate sequenze di caratteri "\\ r \\ n".  Inoltre, se un controllo di modifica è su più righe, ottenere e impostare la parte del testo del controllo chiamando le funzioni membro [GetLine](../Topic/CEdit::GetLine.md), [SetSel](../Topic/CEdit::SetSel.md), [GetSel](../Topic/CEdit::GetSel.md)e [ReplaceSel](../Topic/CEdit::ReplaceSel.md)di `CEdit`.  
  
 Se si desidera gestire i messaggi di notifica di Windows inviati da un controllo di modifica al controllo padre \(in genere una classe derivata da `CDialog`\), aggiungere una voce della mappa messaggi e una funzione membro per la gestione dei messaggi nella classe padre per ogni messaggio.  
  
 Ogni voce della mappa messaggi accetta il formato seguente:  
  
 **ON\_**Notifica**\(***id, memberFxn***\)**  
  
 dove specifica `id` la finestra figlio ID del controllo di modifica che invia una notifica e `memberFxn` è il nome della funzione membro che padre è stato scritto per gestire la notifica.  
  
 Il prototipo del padre è la seguente:  
  
 memberFxn**\( \);**void di**afx\_msg**  
  
 Segue un elenco di voci della mappa messaggi potenziali e una descrizione dei casi in cui verrà inviata al padre:  
  
-   **ON\_EN\_CHANGE** l'utente ha intraprendere le azioni che possono modificare il testo in un controllo di modifica.  A differenza del messaggio di notifica **EN\_UPDATE**, il messaggio di notifica viene inviato agli aggiornamenti di Windows la visualizzazione.  
  
-   **ON\_EN\_ERRSPACE** il controllo di modifica impossibile allocare memoria sufficiente per soddisfare una richiesta specifica.  
  
-   **ON\_EN\_HSCROLL** l'utente fa clic sulla barra di scorrimento orizzontale di un controllo di modifica.  La finestra padre viene trasmessa prima che lo schermo venga aggiornato.  
  
-   **ON\_EN\_KILLFOCUS** il controllo di modifica perde lo stato attivo per l'input.  
  
-   **ON\_EN\_MAXTEXT** l'inserimento corrente superi il numero di caratteri specificato per il controllo di modifica ed è stato troncato.  Inoltre inviato a un controllo di modifica non presenta lo stile **ES\_AUTOHSCROLL** e il numero di caratteri da inserire in quello la larghezza del controllo di modifica.  Inoltre inviato a un controllo di modifica non presenta lo stile **ES\_AUTOVSCROLL** e il numero complessivo di righe derivare da un inserimento di testo in quello l'altezza del controllo di modifica.  
  
-   **ON\_EN\_SETFOCUS** inviati a un controllo di modifica riceve lo stato attivo per l'input.  
  
-   **ON\_EN\_UPDATE** il controllo di modifica sta il testo modificato visualizzazione.  Inviato dopo che il controllo ha il testo formattato ma prima di schermate il testo in modo che comporta la dimensione della finestra, se necessario.  
  
-   **ON\_EN\_VSCROLL** l'utente fa clic sulla barra di scorrimento verticale di un controllo di modifica.  La finestra padre viene trasmessa prima che lo schermo venga aggiornato.  
  
 Se si crea un oggetto `CEdit` di una finestra di dialogo, l'oggetto `CEdit` automaticamente eliminato quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un oggetto `CEdit` da una risorsa finestra di dialogo utilizzando l'editor finestre di dialogo, l'oggetto `CEdit` automaticamente eliminato quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un oggetto `CEdit` interno di una finestra, è inoltre necessario distruggerla.  Se si crea l'oggetto `CEdit` nello stack, verrà automaticamente eliminato.  Se si crea l'oggetto `CEdit` nell'heap mediante la funzione **new**, è necessario chiamare **delete** sull'oggetto per distruggerlo quando l'utente termina il controllo di modifica di Windows.  Se allocare memoria in qualsiasi oggetto `CEdit`, eseguire l'override del distruttore `CEdit` per disporre le allocazioni.  
  
 Per modificare determinati stili in un controllo di modifica \(come **ES\_READONLY**\) è necessario inviare messaggi specifici del controllo anziché [ModifyStyle](../Topic/CWnd::ModifyStyle.md).  Vedere [Stili del controllo di modifica](http://msdn.microsoft.com/library/windows/desktop/bb775464) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni su `CEdit`, vedere:  
  
-   [Controlli](../../mfc/controls-mfc.md)  
  
-   Articolo della Knowledge Base Q259949: INFORMAZIONI: SetCaretPos \(\) non è adatto con i controlli di CRichEditCtrl o di CEdit  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CEdit`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [L'esempio CALCDRIV MFC](../../top/visual-cpp-samples.md)   
 [Esempio CMNCTRL2 MFC](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [CButton Class](../../mfc/reference/cbutton-class.md)   
 [CComboBox Class](../../mfc/reference/ccombobox-class.md)   
 [CListBox Class](../../mfc/reference/clistbox-class.md)   
 [CScrollBar Class](../../mfc/reference/cscrollbar-class.md)   
 [CStatic Class](../../mfc/reference/cstatic-class.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)
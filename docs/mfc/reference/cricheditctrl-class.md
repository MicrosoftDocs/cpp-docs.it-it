---
title: "CRichEditCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CRichEditCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRichEditCtrl class"
  - "CRichEditCtrl class, controlli comuni"
  - "formatted text [C++]"
ms.assetid: 2be52788-822c-4c27-aafd-2471231e74eb
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 28
---
# CRichEditCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità del controllo Rich Edit.  
  
## Sintassi  
  
```  
class CRichEditCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditCtrl::CRichEditCtrl](../Topic/CRichEditCtrl::CRichEditCtrl.md)|Costruisce un oggetto `CRichEditCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditCtrl::CanPaste](../Topic/CRichEditCtrl::CanPaste.md)|Determina se il contenuto degli Appunti è possibile copiare nel controllo Rich Edit.|  
|[CRichEditCtrl::CanRedo](../Topic/CRichEditCtrl::CanRedo.md)|Determina se esistono delle azioni nella coda della ripetizione del controllo.|  
|[CRichEditCtrl::CanUndo](../Topic/CRichEditCtrl::CanUndo.md)|Determina se un'operazione di modifica può essere annullata.|  
|[CRichEditCtrl::CharFromPos](../Topic/CRichEditCtrl::CharFromPos.md)|Recupera le informazioni sul carattere più vicino al punto specificato nell'area client di un controllo di modifica.|  
|[CRichEditCtrl::Clear](../Topic/CRichEditCtrl::Clear.md)|Cancella la selezione corrente|  
|[CRichEditCtrl::Copy](../Topic/CRichEditCtrl::Copy.md)|Copiare la selezione corrente negli Appunti.|  
|[CRichEditCtrl::Create](../Topic/CRichEditCtrl::Create.md)|Crea il controllo Rich Edit di Windows e lo associa a questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::CreateEx](../Topic/CRichEditCtrl::CreateEx.md)|Crea il controllo Rich Edit di Windows con gli stili estesi di Windows specificati e lo associa a questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::Cut](../Topic/CRichEditCtrl::Cut.md)|Tagliare la selezione corrente negli Appunti.|  
|[CRichEditCtrl::DisplayBand](../Topic/CRichEditCtrl::DisplayBand.md)|Visualizzare una parte del contenuto di questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::EmptyUndoBuffer](../Topic/CRichEditCtrl::EmptyUndoBuffer.md)|Reimposta \(definito\) il flag di annullamento di questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::FindText](../Topic/CRichEditCtrl::FindText.md)|Individuare il testo all'interno di questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::FindWordBreak](../Topic/CRichEditCtrl::FindWordBreak.md)|Consente di interruzione successivo di parola prima o dopo la posizione del carattere specificato, o recuperare le informazioni sul carattere in quella posizione.|  
|[CRichEditCtrl::FormatRange](../Topic/CRichEditCtrl::FormatRange.md)|Formatta un intervallo di testo per il dispositivo di output di output di destinazione.|  
|[CRichEditCtrl::GetCharPos](../Topic/CRichEditCtrl::GetCharPos.md)|Determina la posizione di un carattere specifico all'interno di questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::GetDefaultCharFormat](../Topic/CRichEditCtrl::GetDefaultCharFormat.md)|Recupera gli attributi di formattazione carattere predefinite correnti in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::GetEventMask](../Topic/CRichEditCtrl::GetEventMask.md)|Recupera la maschera eventi per questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::GetFirstVisibleLine](../Topic/CRichEditCtrl::GetFirstVisibleLine.md)|Determina la riga visibile in primo piano di questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::GetIRichEditOle](../Topic/CRichEditCtrl::GetIRichEditOle.md)|Recupera un puntatore a interfaccia `IRichEditOle` per questo controllo Rich Edit.|  
|[CRichEditCtrl::GetLimitText](../Topic/CRichEditCtrl::GetLimitText.md)|Ottiene il limite della quantità di testo che un utente può fornire in questo `CRichEditCtrl` l'oggetto.|  
|[CRichEditCtrl::GetLine](../Topic/CRichEditCtrl::GetLine.md)|Recupera una riga di testo di questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::GetLineCount](../Topic/CRichEditCtrl::GetLineCount.md)|Recupera il numero di righe in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::GetModify](../Topic/CRichEditCtrl::GetModify.md)|Determina se il contenuto di questo oggetto `CRichEditCtrl` modificato rispetto all'ultimo salvataggio.|  
|[CRichEditCtrl::GetOptions](../Topic/CRichEditCtrl::GetOptions.md)|Recupera le opzioni del controllo Rich Edit.|  
|[CRichEditCtrl::GetParaFormat](../Topic/CRichEditCtrl::GetParaFormat.md)|Recupera gli attributi di formattazione dei paragrafi nella selezione corrente in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::GetPunctuation](../Topic/CRichEditCtrl::GetPunctuation.md)|Recupera i caratteri di punteggiatura correnti per il controllo Rich Edit.  Questo messaggio è disponibile solo in versioni di Asiatico\- lingua del sistema operativo.|  
|[CRichEditCtrl::GetRect](../Topic/CRichEditCtrl::GetRect.md)|Recupera il rettangolo di formattazione per questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::GetRedoName](../Topic/CRichEditCtrl::GetRedoName.md)|Recupera il tipo dell'azione successiva, se presente, nella coda della ripetizione del controllo.|  
|[CRichEditCtrl::GetSel](../Topic/CRichEditCtrl::GetSel.md)|Ottiene le posizioni iniziale e finale della selezione corrente in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::GetSelectionCharFormat](../Topic/CRichEditCtrl::GetSelectionCharFormat.md)|Recupera gli attributi di formattazione dei caratteri nella selezione corrente in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::GetSelectionType](../Topic/CRichEditCtrl::GetSelectionType.md)|Recupera il tipo di contenuto nella selezione corrente in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::GetSelText](../Topic/CRichEditCtrl::GetSelText.md)|Ottiene il testo della selezione corrente in questo oggetto `CRichEditCtrl`|  
|[CRichEditCtrl::GetTextLength](../Topic/CRichEditCtrl::GetTextLength.md)|Recupera la lunghezza del testo, i caratteri, in questo oggetto `CRichEditCtrl`.  Non include il carattere di terminazione null.|  
|[CRichEditCtrl::GetTextLengthEx](../Topic/CRichEditCtrl::GetTextLengthEx.md)|Recupera il numero di caratteri o di byte nella visualizzazione rich edit.  Accetta un elenco di flag per indicare il metodo di determinazione della lunghezza del testo in un controllo Rich Edit|  
|[CRichEditCtrl::GetTextMode](../Topic/CRichEditCtrl::GetTextMode.md)|Recupera la modalità di testo corrente e di annullamento a livello di un controllo Rich Edit.|  
|[CRichEditCtrl::GetTextRange](../Topic/CRichEditCtrl::GetTextRange.md)|Recupera l'intervallo di testo specificato.|  
|[CRichEditCtrl::GetUndoName](../Topic/CRichEditCtrl::GetUndoName.md)|Recupera il tipo di un'operazione di annullamento seguente, se disponibile.|  
|[CRichEditCtrl::GetWordWrapMode](../Topic/CRichEditCtrl::GetWordWrapMode.md)|Recupera le opzioni correnti del wrapping e word breaking di parola per il controllo Rich Edit.  Questo messaggio è disponibile solo in versioni di Asiatico\- lingua del sistema operativo.|  
|[CRichEditCtrl::HideSelection](../Topic/CRichEditCtrl::HideSelection.md)|Mostra o nasconde la selezione corrente.|  
|[CRichEditCtrl::LimitText](../Topic/CRichEditCtrl::LimitText.md)|Limitare la quantità di testo che un utente può immettere in `CRichEditCtrl` l'oggetto.|  
|[CRichEditCtrl::LineFromChar](../Topic/CRichEditCtrl::LineFromChar.md)|Determina la riga contenente il carattere specificato.|  
|[CRichEditCtrl::LineIndex](../Topic/CRichEditCtrl::LineIndex.md)|Recupera l'indice di una riga specificata in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::LineLength](../Topic/CRichEditCtrl::LineLength.md)|Recupera la lunghezza di una riga specificata in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::LineScroll](../Topic/CRichEditCtrl::LineScroll.md)|Scorre il testo nell'oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::Paste](../Topic/CRichEditCtrl::Paste.md)|Inserisce il contenuto degli Appunti nel controllo Rich Edit.|  
|[CRichEditCtrl::PasteSpecial](../Topic/CRichEditCtrl::PasteSpecial.md)|Inserisce il contenuto degli Appunti nel controllo Rich Edit nel formato dati specificato.|  
|[CRichEditCtrl::PosFromChar](../Topic/CRichEditCtrl::PosFromChar.md)|Recupera le coordinate dell'area client di un carattere specificato in un controllo di modifica.|  
|[CRichEditCtrl::Redo](../Topic/CRichEditCtrl::Redo.md)|Ripetere l'azione successivo nella coda della ripetizione del controllo.|  
|[CRichEditCtrl::ReplaceSel](../Topic/CRichEditCtrl::ReplaceSel.md)|Sostituisce la selezione corrente in questo oggetto `CRichEditCtrl` con testo specificato.|  
|[CRichEditCtrl::RequestResize](../Topic/CRichEditCtrl::RequestResize.md)|Forza l'oggetto `CRichEditCtrl` per inviare la richiesta ridimensionano le notifiche.|  
|[CRichEditCtrl::SetAutoURLDetect](../Topic/CRichEditCtrl::SetAutoURLDetect.md)|Indica se il rilevamento automatico dell'URL è attivo in un controllo Rich Edit.|  
|[CRichEditCtrl::SetBackgroundColor](../Topic/CRichEditCtrl::SetBackgroundColor.md)|Imposta il colore di sfondo di questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::SetDefaultCharFormat](../Topic/CRichEditCtrl::SetDefaultCharFormat.md)|Imposta gli attributi di formattazione carattere predefinite correnti in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::SetEventMask](../Topic/CRichEditCtrl::SetEventMask.md)|Imposta la maschera eventi per questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::SetModify](../Topic/CRichEditCtrl::SetModify.md)|Imposta o cancella il flag di modifica per l'oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::SetOLECallback](../Topic/CRichEditCtrl::SetOLECallback.md)|Imposta l'oggetto COM `IRichEditOleCallback` per questo controllo Rich Edit.|  
|[CRichEditCtrl::SetOptions](../Topic/CRichEditCtrl::SetOptions.md)|Imposta le opzioni per questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::SetParaFormat](../Topic/CRichEditCtrl::SetParaFormat.md)|Imposta gli attributi di formattazione dei paragrafi nella selezione corrente in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::SetPunctuation](../Topic/CRichEditCtrl::SetPunctuation.md)|Imposta i caratteri di punteggiatura per un controllo Rich Edit.  Questo messaggio è disponibile solo in versioni di Asiatico\- lingua del sistema operativo.|  
|[CRichEditCtrl::SetReadOnly](../Topic/CRichEditCtrl::SetReadOnly.md)|Imposta l'opzione di sola lettura per l'oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::SetRect](../Topic/CRichEditCtrl::SetRect.md)|Imposta il rettangolo di formattazione per questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::SetSel](../Topic/CRichEditCtrl::SetSel.md)|Imposta la selezione in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::SetSelectionCharFormat](../Topic/CRichEditCtrl::SetSelectionCharFormat.md)|Imposta gli attributi di formattazione dei caratteri nella selezione corrente in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::SetTargetDevice](../Topic/CRichEditCtrl::SetTargetDevice.md)|Imposta il dispositivo di output di output di destinazione per l'oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::SetTextMode](../Topic/CRichEditCtrl::SetTextMode.md)|Imposta la modalità testo o annullare a livello di un controllo Rich Edit.  Il messaggio non riesce se il controllo contiene il testo.|  
|[CRichEditCtrl::SetUndoLimit](../Topic/CRichEditCtrl::SetUndoLimit.md)|Imposta il numero massimo di azioni che è archiviato nella coda di annullamento.|  
|[CRichEditCtrl::SetWordCharFormat](../Topic/CRichEditCtrl::SetWordCharFormat.md)|Imposta gli attributi di formattazione dei caratteri della parola corrente in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::SetWordWrapMode](../Topic/CRichEditCtrl::SetWordWrapMode.md)|Imposta le opzioni di word breaking e viene riportata a capo automaticamente il wrapping del controllo Rich Edit.  Questo messaggio è disponibile solo in versioni di Asiatico\- lingua del sistema operativo.|  
|[CRichEditCtrl::StopGroupTyping](../Topic/CRichEditCtrl::StopGroupTyping.md)|Interrompe il controllo dalla raccolta delle azioni aggiuntive la digitazione nell'azione di annullamento correnti.  Il controllo archivia l'azione successiva la digitazione, se presente, in una nuova azione nella coda di annullamento.|  
|[CRichEditCtrl::StreamIn](../Topic/CRichEditCtrl::StreamIn.md)|Inserisce il testo viene visualizzato da un flusso di input in questo oggetto `CRichEditCtrl`.|  
|[CRichEditCtrl::StreamOut](../Topic/CRichEditCtrl::StreamOut.md)|Gli archivi di testi da questo oggetto `CRichEditCtrl` in un flusso di output.|  
|[CRichEditCtrl::Undo](../Topic/CRichEditCtrl::Undo.md)|Consente di annullare l'ultima operazione di modifica.|  
  
## Note  
 "Un controllo Rich Edit" è una finestra in cui l'utente può immettere e modificare testo.  Il testo può essere assegnato il carattere e la formattazione dei paragrafi e può includere oggetti OLE incorporati.  i controlli Rich Edit forniscono un'interfaccia di programmazione per formattare il testo.  Tuttavia, un'applicazione deve implementare tutti i componenti dell'interfaccia utente necessarie per rendere disponibili le operazioni di formattazione dell'utente.  
  
 Questo controllo comune di Windows \(e quindi la classe `CRichEditCtrl` \) è disponibile solo per i programmi in esecuzione in Windows 95\/98 e Windows NT versione 3,51 e successive.  La classe `CRichEditCtrl` supporta le versioni 2,0 e 3,0 del controllo Rich Edit [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
> [!CAUTION]
>  Se si utilizza un controllo Rich Edit in una finestra di dialogo \(indipendentemente dal fatto che l'applicazione è SDI, MDI, o a finestre\), è necessario chiamare una volta [AfxInitRichEdit](../Topic/AfxInitRichEdit.md) prima che la finestra di dialogo.  Un punto tipico per chiamare questa funzione è la funzione membro `InitInstance` del programma.  Non è necessario chiamarlo per ogni volta che viene visualizzata la finestra di dialogo, solo la prima volta.  Non è necessario chiamare `AfxInitRichEdit` se si utilizza `CRichEditView`.  
  
 Per ulteriori informazioni su l `CRichEditCtrl`, vedere:  
  
-   [Controlli](../../mfc/controls-mfc.md)  
  
-   [Utilizzando CRichEditCtrl](../../mfc/using-cricheditctrl.md)  
  
-   Articolo della Knowledge Base Q259949: INFORMAZIONI: SetCaretPos \(\) non è adatto con i controlli di CRichEditCtrl o di CEdit  
  
 Per un esempio di utilizzo di un controllo Rich Edit in un'applicazione MFC, vedere l'applicazione di esempio [WORDPAD](../../top/visual-cpp-samples.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CRichEditCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [MFC campione WORDPAD](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)   
 [CRichEditView Class](../../mfc/reference/cricheditview-class.md)
---
title: "CCheckListBox Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CCheckListBox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCheckListBox class"
  - "checklist boxes"
ms.assetid: 1dd78438-00e8-441c-b36f-9c4f9ac0d019
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# CCheckListBox Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di una casella di elenco di controllo di Windows.  
  
## Sintassi  
  
```  
  
class CCheckListBox : public CListBox  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCheckListBox::CCheckListBox](../Topic/CCheckListBox::CCheckListBox.md)|Costruisce un oggetto `CCheckListBox`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCheckListBox::Create](../Topic/CCheckListBox::Create.md)|Crea la casella di elenco di controllo di Windows e allegarlo all'oggetto `CCheckListBox`.|  
|[CCheckListBox::DrawItem](../Topic/CCheckListBox::DrawItem.md)|Chiamato dal framework quando un aspetto visivo di una casella di riepilogo del disegno personalizzato.|  
|[CCheckListBox::Enable](../Topic/CCheckListBox::Enable.md)|Abilita o disabilita un elemento della casella di elenco di controllo.|  
|[CCheckListBox::GetCheck](../Topic/CCheckListBox::GetCheck.md)|Ottiene lo stato della casella di controllo di un elemento.|  
|[CCheckListBox::GetCheckStyle](../Topic/CCheckListBox::GetCheckStyle.md)|Ottiene lo stile del controllo.|  
|[CCheckListBox::IsEnabled](../Topic/CCheckListBox::IsEnabled.md)|Determina se un elemento è abilitato.|  
|[CCheckListBox::MeasureItem](../Topic/CCheckListBox::MeasureItem.md)|Chiamato dal framework quando una casella di riepilogo con uno stile del disegno personalizzato viene creata.|  
|[CCheckListBox::OnGetCheckPosition](../Topic/CCheckListBox::OnGetCheckPosition.md)|Chiamato dal framework per ottenere la posizione della casella di controllo di un elemento.|  
|[CCheckListBox::SetCheck](../Topic/CCheckListBox::SetCheck.md)|Imposta lo stato della casella di controllo di un elemento.|  
|[CCheckListBox::SetCheckStyle](../Topic/CCheckListBox::SetCheckStyle.md)|Consente di impostare lo stile del controllo.|  
  
## Note  
 "Una casella di elenco di controllo" visualizzare un elenco di elementi, quali nomi file.  Ogni elemento nell'elenco include una casella di controllo accanto che l'utente può controllare o deselezionare.  
  
 `CCheckListBox` è solo per i controlli creati dal proprietario perché l'elenco contiene più stringhe di testo.  Nella sua forma più semplice, una casella di elenco di controllo contiene le stringhe di testo e caselle di controllo, ma non è necessario disporre di testo.  Ad esempio, un elenco delle bitmap con una casella di controllo accanto a ciascun elemento.  
  
 Per creare una casella di elenco di controllo, è necessario derivare la classe da `CCheckListBox`.  Per derivare la classe, creare un costruttore per la classe derivata, quindi chiamare **Crea**.  
  
 Se si desidera gestire i messaggi di notifica di Windows inviati da una casella di riepilogo al controllo padre \(in genere una classe derivata da [CDialog](../../mfc/reference/cdialog-class.md)\), aggiungere una voce della mappa messaggi e una funzione membro per la gestione dei messaggi nella classe padre per ogni messaggio.  
  
 Ogni voce della mappa messaggi accetta il formato seguente:  
  
 Notifica**\(**`id`, `memberFxn`**\)**di**ON\_**  
  
 dove specifica `id` la finestra figlio ID del controllo che invia una notifica e `memberFxn` è il nome della funzione membro che padre è stato scritto per gestire la notifica.  
  
 Il prototipo del padre è la seguente:  
  
 **afx\_msg** `void` `memberFxn` **\( \);**  
  
 Esiste una sola voce della mappa messaggi che riguarda specificatamente **CCheckListBox** \(ma vedere anche le voci della mappa messaggi per [CListBox](../../mfc/reference/clistbox-class.md)\):  
  
-   **ON\_CLBN\_CHKCHANGE** l'utente ha modificato lo stato della casella di controllo di un elemento.  
  
 Se la casella di elenco di controllo è una casella predefinita dell'elenco di controllo \(un elenco di stringhe con le caselle di controllo predefinito di ritaglio a sinistra di ogni\), è possibile utilizzare l'impostazione [CCheckListBox::DrawItem](../Topic/CCheckListBox::DrawItem.md) per disegnare la casella di elenco di controllo.  In caso contrario, è necessario eseguire l'override della funzione [CListBox::CompareItem](../Topic/CListBox::CompareItem.md) e le funzioni [CCheckListBox::MeasureItem](../Topic/CCheckListBox::MeasureItem.md) e [CCheckListBox::DrawItem](../Topic/CCheckListBox::DrawItem.md).  
  
 È possibile creare una casella di elenco di controllo da un modello di finestra di dialogo o direttamente nel codice.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CListBox](../../mfc/reference/clistbox-class.md)  
  
 `CCheckListBox`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Esempio TSTCON MFC](../../top/visual-cpp-samples.md)   
 [CListBox Class](../../mfc/reference/clistbox-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CListBox Class](../../mfc/reference/clistbox-class.md)
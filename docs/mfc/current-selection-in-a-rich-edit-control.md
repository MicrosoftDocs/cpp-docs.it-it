---
title: "Selezione corrente in un controllo Rich Edit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRichEditCtrl (classe), selezione corrente in"
  - "selezione corrente in CRichEditCtrls"
  - "Rich Edit (controlli), selezione corrente in"
  - "selezione, corrente in CRichEditCtrl"
ms.assetid: f6b2a2b6-5481-4ad3-9720-6dd772ea6fc8
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Selezione corrente in un controllo Rich Edit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'utente può selezionare il testo in un controllo Rich Edit \([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)\) utilizzando il mouse o la tastiera.  La selezione corrente è l'intervallo di caratteri selezionati, o la posizione del punto di inserimento se nessun carattere selezionato.  Un'applicazione può ottenere informazioni sulla selezione corrente, impostare la selezione corrente, determina quando cambia il selezione e mostra o nasconde l'evidenziazione di selezione.  
  
 Per determinare la selezione corrente in un controllo Rich Edit, utilizzare la funzione membro di [GetSel](../Topic/CRichEditCtrl::GetSel.md).  Per impostare la selezione corrente, utilizzare la funzione membro di [SetSel](../Topic/CRichEditCtrl::SetSel.md).  La struttura di [CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) viene utilizzata con queste funzioni per specificare un intervallo di caratteri.  Per recuperare le informazioni sul contenuto della selezione corrente, è possibile utilizzare la funzione membro di [GetSelectionType](../Topic/CRichEditCtrl::GetSelectionType.md).  
  
 Per impostazione predefinita, un controllo Rich Edit visualizzare e nascondere l'evidenziazione di selezione quando riceve e perde lo stato attivo.  È possibile visualizzare o nascondere l'evidenziazione di selezione in qualsiasi momento tramite la funzione membro di [HideSelection](../Topic/CRichEditCtrl::HideSelection.md).  Ad esempio, un'applicazione potrebbe fornire una finestra di dialogo ricerca per trovare testo in un controllo Rich Edit.  L'applicazione può selezionare il testo di corrispondenza senza chiudere la finestra di dialogo, nel qual caso deve utilizzare `HideSelection` per evidenziare la selezione.  
  
 Per ottenere il testo selezionato in un controllo Rich Edit, utilizzare la funzione membro di [GetSelText](../Topic/CRichEditCtrl::GetSelText.md).  Il testo viene copiato nella matrice di caratteri specificata.  È necessario assicurarsi che la matrice è sufficiente per contenere il testo selezionato più di un carattere di terminazione null.  
  
 È possibile cercare una stringa in un controllo Rich Edit utilizzando la funzione membro di [FindText](../Topic/CRichEditCtrl::FindText.md) la struttura di [FINDTEXTEX](http://msdn.microsoft.com/library/windows/desktop/bb787909) utilizzata con questa funzione specifica l'intervallo di testo per individuare e la stringa da cercare.  È inoltre possibile specificare tali opzioni come se la ricerca prevede la distinzione tra maiuscole e minuscole.  
  
## Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)
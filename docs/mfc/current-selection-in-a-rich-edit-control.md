---
title: La selezione corrente in un controllo Rich Edit | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- current selection in CRichEditCtrls
- CRichEditCtrl class [MFC], current selection in
- rich edit controls [MFC], current selection in
- selection, current in CRichEditCtrl
ms.assetid: f6b2a2b6-5481-4ad3-9720-6dd772ea6fc8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 782984bc53bc16f8dc89e4e705811fef24b8931e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="current-selection-in-a-rich-edit-control"></a>Selezione corrente in un controllo Rich Edit
L'utente può selezionare il testo in un controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) utilizzando il mouse o tastiera. La selezione corrente è l'intervallo di caratteri selezionati o la posizione del punto di inserimento, se i caratteri non vengono selezionate. Un'applicazione può ottenere informazioni relative alla selezione corrente, impostare la selezione corrente, determinare se evidenziare le modifiche di selezione corrente e Mostra o Nascondi la selezione.  
  
 Per determinare la selezione corrente in un controllo rich edit, utilizzare il [funzione membro GetSel](../mfc/reference/cricheditctrl-class.md#getsel) funzione membro. Per impostare la selezione corrente, utilizzare il [funzione membro SetSel](../mfc/reference/cricheditctrl-class.md#setsel) funzione membro. Il [struttura CHARRANGE](http://msdn.microsoft.com/library/windows/desktop/bb787885) struttura viene utilizzata con queste funzioni per specificare un intervallo di caratteri. Per recuperare informazioni sul contenuto della selezione corrente, è possibile utilizzare il [funzione membro GetSelectionType](../mfc/reference/cricheditctrl-class.md#getselectiontype) funzione membro.  
  
 Per impostazione predefinita, un controllo rich edit Mostra e nasconde la selezione evidenziata quando riceve e perde lo stato attivo. È possibile visualizzare o nascondere la selezione evidenziata in qualsiasi momento utilizzando il [HideSelection](../mfc/reference/cricheditctrl-class.md#hideselection) funzione membro. Ad esempio, un'applicazione potrebbe fornire una finestra di dialogo di ricerca per trovare testo in un controllo rich edit. L'applicazione potrebbe selezionare il testo corrispondente senza chiudere la finestra di dialogo, nel qual caso è necessario utilizzare `HideSelection` per evidenziare la selezione.  
  
 Per ottenere il testo selezionato in un controllo rich edit, utilizzare il [funzione membro GetSelText](../mfc/reference/cricheditctrl-class.md#getseltext) funzione membro. Il testo viene copiato nella matrice di caratteri specificata. È necessario assicurarsi che la matrice sia sufficientemente grande da contenere il testo selezionato più di un carattere di terminazione null.  
  
 È possibile cercare una stringa in un controllo rich edit utilizzando la [FindText](../mfc/reference/cricheditctrl-class.md#findtext) funzione membro di [FINDTEXTEX](http://msdn.microsoft.com/library/windows/desktop/bb787909) struttura utilizzata con questa funzione consente di specificare l'intervallo di testo di ricerca e la stringa da cercare. Inoltre, è possibile specificare tali opzioni come se la ricerca non fa distinzione maiuscole/minuscole.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)


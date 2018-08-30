---
title: Selezione corrente in un controllo Rich Edit | Microsoft Docs
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
ms.openlocfilehash: 6b115f576100ec89b2de4d3b2e63fe74b96337c7
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43209831"
---
# <a name="current-selection-in-a-rich-edit-control"></a>Selezione corrente in un controllo Rich Edit
L'utente può selezionare il testo in un controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) utilizzando il mouse o tastiera. La selezione corrente è l'intervallo di caratteri selezionati o la posizione del punto di inserimento se nessun carattere siano selezionate. Un'applicazione può ottenere informazioni relative alla selezione corrente, impostare la selezione corrente, determinare quando evidenziare le modifiche di selezione correnti, Visualizza o nasconde la selezione.  
  
 Per determinare la selezione corrente in un controllo rich edit, usare il [funzione membro GetSel](../mfc/reference/cricheditctrl-class.md#getsel) funzione membro. Per impostare la selezione corrente, usare il [funzione membro SetSel](../mfc/reference/cricheditctrl-class.md#setsel) funzione membro. Il [struttura CHARRANGE](/windows/desktop/api/richedit/ns-richedit-_charrange) struttura viene utilizzata con queste funzioni per specificare un intervallo di caratteri. Per recuperare informazioni sui contenuti della selezione corrente, è possibile usare la [funzione membro GetSelectionType](../mfc/reference/cricheditctrl-class.md#getselectiontype) funzione membro.  
  
 Per impostazione predefinita, un controllo rich edit Mostra e nasconde la selezione evidenziata quando si riceve e perde lo stato attivo. È possibile visualizzare o nascondere l'evidenziazione della selezione in qualsiasi momento tramite il [HideSelection](../mfc/reference/cricheditctrl-class.md#hideselection) funzione membro. Ad esempio, un'applicazione potrebbe fornire una finestra di dialogo di ricerca per trovare testo in un controllo rich edit. L'applicazione potrebbe selezionare il testo corrispondente senza chiudere la finestra di dialogo, nel qual caso è necessario usare `HideSelection` per evidenziare la selezione.  
  
 Per ottenere il testo selezionato in un controllo rich edit, usare il [funzione membro GetSelText](../mfc/reference/cricheditctrl-class.md#getseltext) funzione membro. Il testo viene copiato nella matrice di caratteri specificata. È necessario assicurarsi che la matrice sia sufficientemente grande da contenere il testo selezionato oltre a un carattere di terminazione null.  
  
 È possibile cercare una stringa in un controllo rich edit utilizzando la [FindText](../mfc/reference/cricheditctrl-class.md#findtext) funzione membro di [FINDTEXTEX](/windows/desktop/api/richedit/ns-richedit-_findtextexa) struttura utilizzata con questa funzione consente di specificare l'intervallo di testo di ricerca e la stringa da cercare. È anche possibile specificare tali opzioni come se la ricerca fa distinzione maiuscole/minuscole.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)


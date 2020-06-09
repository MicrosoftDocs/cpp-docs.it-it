---
title: Selezione corrente in un controllo Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- current selection in CRichEditCtrls
- CRichEditCtrl class [MFC], current selection in
- rich edit controls [MFC], current selection in
- selection, current in CRichEditCtrl
ms.assetid: f6b2a2b6-5481-4ad3-9720-6dd772ea6fc8
ms.openlocfilehash: 9591f1aeb4e159b9b4f70945d6248a3b8d1dc827
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84626501"
---
# <a name="current-selection-in-a-rich-edit-control"></a>Selezione corrente in un controllo Rich Edit

L'utente può selezionare il testo in un controllo Rich Edit ([CRichEditCtrl](reference/cricheditctrl-class.md)) utilizzando il mouse o la tastiera. La selezione corrente è l'intervallo di caratteri selezionati o la posizione del punto di inserimento se non è selezionato alcun carattere. Un'applicazione può ottenere informazioni sulla selezione corrente, impostare la selezione corrente, determinare quando cambia la selezione corrente e mostrare o nascondere l'evidenziazione della selezione.

Per determinare la selezione corrente in un controllo Rich Edit, utilizzare la funzione membro [GetSel](reference/cricheditctrl-class.md#getsel) . Per impostare la selezione corrente, utilizzare la funzione membro [SetSel](reference/cricheditctrl-class.md#setsel) . La struttura [CHARRANGE](/windows/win32/api/richedit/ns-richedit-charrange) viene utilizzata con queste funzioni per specificare un intervallo di caratteri. Per recuperare informazioni sul contenuto della selezione corrente, è possibile usare la funzione membro [GetSelectionType](reference/cricheditctrl-class.md#getselectiontype) .

Per impostazione predefinita, un controllo Rich Edit Mostra e nasconde l'evidenziazione della selezione quando ottiene lo stato attivo e lo perde. È possibile mostrare o nascondere l'evidenziazione della selezione in qualsiasi momento usando la funzione membro [HideSelection](reference/cricheditctrl-class.md#hideselection) . Ad esempio, un'applicazione potrebbe fornire una finestra di dialogo di ricerca per trovare il testo in un controllo Rich Edit. L'applicazione potrebbe selezionare il testo corrispondente senza chiudere la finestra di dialogo, nel qual caso deve usare `HideSelection` per evidenziare la selezione.

Per ottenere il testo selezionato in un controllo Rich Edit, utilizzare la funzione membro [GetSelText](reference/cricheditctrl-class.md#getseltext) . Il testo viene copiato nella matrice di caratteri specificata. È necessario assicurarsi che la matrice sia sufficientemente grande da conservare il testo selezionato più un carattere di terminazione null.

È possibile cercare una stringa in un controllo Rich Edit usando la funzione membro [FindText](reference/cricheditctrl-class.md#findtext) . la struttura [FINDTEXTEX](/windows/win32/api/richedit/ns-richedit-findtextexw) usata con questa funzione specifica l'intervallo di testo da cercare e la stringa da cercare. È anche possibile specificare tali opzioni, ad esempio se la ricerca fa distinzione tra maiuscole e minuscole.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controlli](controls-mfc.md)

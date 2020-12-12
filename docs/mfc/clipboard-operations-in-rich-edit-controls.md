---
description: 'Altre informazioni su: operazioni sugli appunti nei controlli Rich Edit'
title: Operazioni sugli Appunti nei controlli Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- pasting Clipboard data
- CRichEditCtrl class [MFC], paste operation
- cut operation in CRichEditCtrl class [MFC]
- CRichEditCtrl class [MFC], Clipboard operations
- copy operations in rich edit controls
- Clipboard, operations in CRichEditCtrl
- rich edit controls [MFC], Clipboard operations
ms.assetid: 15ce66bc-2636-4a35-a2ae-d52285dc1af6
ms.openlocfilehash: 9a9fda9aebe3a749359776c1bc0d41e75deaef76
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97251206"
---
# <a name="clipboard-operations-in-rich-edit-controls"></a>Operazioni sugli Appunti nei controlli Rich Edit

L'applicazione può incollare il contenuto degli Appunti in un controllo Rich Edit ([CRichEditCtrl](reference/cricheditctrl-class.md)) utilizzando il formato degli Appunti disponibile migliore o un formato degli Appunti specifico. È anche possibile determinare se un controllo Rich Edit è in grado di incollare un formato degli Appunti.

È possibile copiare o tagliare il contenuto della selezione corrente usando la funzione membro [Copy](reference/cricheditctrl-class.md#copy) o [Cut](reference/cricheditctrl-class.md#cut) . Analogamente, è possibile incollare il contenuto degli Appunti in un controllo Rich Edit usando la funzione membro [paste](reference/cricheditctrl-class.md#paste) . Il controllo incolla il primo formato disponibile che riconosce, che presumibilmente è il formato più descrittivo.

Per incollare un formato degli Appunti specifico, è possibile usare la funzione membro [PasteSpecial](reference/cricheditctrl-class.md#pastespecial) . Questa funzione è utile per le applicazioni con un comando Incolla speciale che consente all'utente di selezionare il formato degli Appunti. È possibile utilizzare la funzione membro [CanPaste](reference/cricheditctrl-class.md#canpaste) per determinare se un formato specificato è riconosciuto dal controllo.

È inoltre possibile utilizzare `CanPaste` per determinare se un formato degli Appunti disponibile viene riconosciuto da un controllo Rich Edit. Questa funzione è utile nel gestore di `OnInitMenuPopup`. In un'applicazione è possibile abilitare o rendere non disponibile il comando Incolla a che il controllo possa inserire o meno qualsiasi formato disponibile.

I controlli Rich Edit registrano due formati degli Appunti: il formato Rich Text Format e un formato denominato RichEdit testo e oggetti. Un'applicazione può registrare questi formati usando la funzione [RegisterClipboardFormat](/windows/win32/api/winuser/nf-winuser-registerclipboardformatw) , specificando i valori **CF_RTF** e **CF_RETEXTOBJ** .

## <a name="see-also"></a>Vedi anche

[Utilizzo di CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controlli](controls-mfc.md)

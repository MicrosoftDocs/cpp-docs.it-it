---
title: Appunti
ms.date: 11/04/2016
helpviewer_keywords:
- cutting and copying data
- copying data
- Clipboard
- Clipboard, programming
- transferring data
ms.assetid: a71b2824-1f14-4914-8816-54578d73ad4e
ms.openlocfilehash: 5814b2fdfc7fbcaca00037cc64dd71aa27d65cc3
ms.sourcegitcommit: ecf274bcfe3a977c48745aaa243e5e731f1fdc5f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2019
ms.locfileid: "66504619"
---
# <a name="clipboard"></a>Appunti

Questa serie di articoli viene illustrato come implementare il supporto per gli Appunti di Windows nelle applicazioni MFC. Gli Appunti di Windows viene usato in due modi:

- Implementazione di comandi del menu di modifica standard, ad esempio le operazioni Taglia, copia e Incolla.

- L'implementazione di uniform data transfer con trascinare e drop (OLE).

Gli Appunti sono il metodo di Windows standard di trasferimento dei dati tra un'origine e destinazione. Può anche essere molto utile per le operazioni di OLE. Con l'avvento di OLE, sono disponibili due meccanismi di Appunti di Windows. L'API degli Appunti di Windows standard è ancora disponibile, ma sono state arricchite con il meccanismo di trasferimento dei dati OLE. Trasferimento di dati uniforme OLE (UDT) supporta le operazioni Taglia, copia e Incolla con gli Appunti e trascinamento della selezione.

Gli Appunti sono un servizio di sistema condiviso dall'intera sessione di Windows, in modo che non è un handle o una classe propria. Per gestire gli Appunti tramite funzioni membro della classe [CWnd](../mfc/reference/cwnd-class.md).

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Quando usare ogni meccanismo di Appunti](../mfc/clipboard-when-to-use-each-clipboard-mechanism.md)

- [Usando le tradizionali API degli Appunti di Windows](../mfc/clipboard-using-the-windows-clipboard.md)

- [Uso del meccanismo degli Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)

- [Copiare e incollare dati](../mfc/clipboard-copying-and-pasting-data.md)

- [Aggiunta di altri formati](../mfc/clipboard-adding-other-formats.md)

- [Gli Appunti di Windows](/windows/desktop/dataxchg/clipboard)

- [Implementazione di trascinamento della selezione (OLE)](../mfc/drag-and-drop-ole.md)

## <a name="see-also"></a>Vedere anche

[Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)

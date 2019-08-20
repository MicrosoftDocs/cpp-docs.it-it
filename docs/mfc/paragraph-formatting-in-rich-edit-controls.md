---
title: Formattazione paragrafo nei controlli Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- rich edit controls [MFC], paragraph formatting in
- paragraph formatting in CRichEditCtrl [MFC]
- CRichEditCtrl class [MFC], paragraph formatting in
- formatting [MFC], paragraphs
ms.assetid: 0df2e4c9-2074-4e41-b913-87cb8c1b4d43
ms.openlocfilehash: 0988e7940c8d8947b86e97a35d71586f8f5c316a
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68916380"
---
# <a name="paragraph-formatting-in-rich-edit-controls"></a>Formattazione paragrafo nei controlli Rich Edit

È possibile utilizzare le funzioni membro del controllo Rich Edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) per formattare i paragrafi e recuperare le informazioni di formattazione. Gli attributi di formattazione dei paragrafi includono allineamento, tabulazioni, rientri e numerazione.

È possibile applicare la formattazione dei paragrafi usando la funzione membro [SetParaFormat](../mfc/reference/cricheditctrl-class.md#setparaformat) . Per determinare la formattazione del paragrafo corrente per il testo selezionato, utilizzare la funzione membro [GetParaFormat](../mfc/reference/cricheditctrl-class.md#getparaformat) . La struttura [PARAFORMAT](/windows/desktop/api/richedit/ns-richedit-paraformat) viene utilizzata con queste funzioni membro per specificare gli attributi di paragrafo. Uno dei membri importanti di **PARAFORMAT** è *dwMask*. In `SetParaFormat` *dwMask* specifica quali attributi di paragrafo verranno impostati da questa chiamata di funzione. `GetParaFormat`segnala gli attributi del primo paragrafo della selezione. *dwMask* specifica gli attributi coerenti per tutta la selezione.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

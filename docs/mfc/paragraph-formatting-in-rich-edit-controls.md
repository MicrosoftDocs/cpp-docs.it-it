---
title: Formattazione paragrafo nei controlli Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- rich edit controls [MFC], paragraph formatting in
- paragraph formatting in CRichEditCtrl [MFC]
- CRichEditCtrl class [MFC], paragraph formatting in
- formatting [MFC], paragraphs
ms.assetid: 0df2e4c9-2074-4e41-b913-87cb8c1b4d43
ms.openlocfilehash: baee4863bee9b96e7a850e70b8f13388f69b41cf
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62218832"
---
# <a name="paragraph-formatting-in-rich-edit-controls"></a>Formattazione paragrafo nei controlli Rich Edit

È possibile usare funzioni di membro del controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) per formattare i paragrafi e per recuperare le informazioni di formattazione. Gli attributi di formattazione dei paragrafi includono allineamento, tabulazioni, rientri e numerazione.

È possibile applicare paragrafo formattazione usando il [SetParaFormat](../mfc/reference/cricheditctrl-class.md#setparaformat) funzione membro. Per determinare il formattazione del testo selezionato del paragrafo corrente, usare il [GetParaFormat](../mfc/reference/cricheditctrl-class.md#getparaformat) funzione membro. Il [PARAFORMAT](/windows/desktop/api/richedit/ns-richedit-_paraformat) struttura viene utilizzata con queste funzioni membro per specificare gli attributi di paragrafo. Uno dei membri importanti della **PARAFORMAT** viene *dwMask*. Nelle `SetParaFormat`, *dwMask* specifica quali attributi di paragrafo verranno impostati dalla chiamata di funzione. `GetParaFormat` Restituisce gli attributi del primo paragrafo della selezione; *dwMask* specifica gli attributi coerenti nella selezione.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

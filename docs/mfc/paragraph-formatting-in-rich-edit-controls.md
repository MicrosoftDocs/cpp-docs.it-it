---
description: 'Altre informazioni su: formattazione paragrafo nei controlli Rich Edit'
title: Formattazione paragrafo nei controlli Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- rich edit controls [MFC], paragraph formatting in
- paragraph formatting in CRichEditCtrl [MFC]
- CRichEditCtrl class [MFC], paragraph formatting in
- formatting [MFC], paragraphs
ms.assetid: 0df2e4c9-2074-4e41-b913-87cb8c1b4d43
ms.openlocfilehash: 69c853c6b552b9950769fc9e3509bd4b5e55ea43
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97205915"
---
# <a name="paragraph-formatting-in-rich-edit-controls"></a>Formattazione paragrafo nei controlli Rich Edit

È possibile utilizzare le funzioni membro del controllo Rich Edit ([CRichEditCtrl](reference/cricheditctrl-class.md)) per formattare i paragrafi e recuperare le informazioni di formattazione. Gli attributi di formattazione dei paragrafi includono allineamento, tabulazioni, rientri e numerazione.

È possibile applicare la formattazione dei paragrafi usando la funzione membro [SetParaFormat](reference/cricheditctrl-class.md#setparaformat) . Per determinare la formattazione del paragrafo corrente per il testo selezionato, utilizzare la funzione membro [GetParaFormat](reference/cricheditctrl-class.md#getparaformat) . La struttura [PARAformat](/windows/win32/api/richedit/ns-richedit-paraformat) viene utilizzata con queste funzioni membro per specificare gli attributi di paragrafo. Uno dei membri importanti di **PARAFORMAT** è *dwMask*. In `SetParaFormat` *dwMask* specifica quali attributi di paragrafo verranno impostati da questa chiamata di funzione. `GetParaFormat` segnala gli attributi del primo paragrafo della selezione. *dwMask* specifica gli attributi coerenti per tutta la selezione.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controlli](controls-mfc.md)

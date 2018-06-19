---
title: Formattazione paragrafo nei controlli Rich Edit | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- rich edit controls [MFC], paragraph formatting in
- paragraph formatting in CRichEditCtrl [MFC]
- CRichEditCtrl class [MFC], paragraph formatting in
- formatting [MFC], paragraphs
ms.assetid: 0df2e4c9-2074-4e41-b913-87cb8c1b4d43
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 113d47a88f0de7ddd12f474678705688569ad50d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33348117"
---
# <a name="paragraph-formatting-in-rich-edit-controls"></a>Formattazione paragrafo nei controlli Rich Edit
È possibile utilizzare le funzioni membro del controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) per formattare i paragrafi e per recuperare le informazioni di formattazione. Gli attributi di formattazione dei paragrafi includono allineamento, tabulazioni, rientri e numerazione.  
  
 È possibile applicare la formattazione utilizzando paragrafo di [SetParaFormat](../mfc/reference/cricheditctrl-class.md#setparaformat) funzione membro. Per determinare il formattazione per il testo selezionato del paragrafo corrente, utilizzare il [GetParaFormat](../mfc/reference/cricheditctrl-class.md#getparaformat) funzione membro. Il [PARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787940) struttura viene utilizzata con queste funzioni membro per specificare gli attributi di paragrafo. Uno dei membri importanti di **PARAFORMAT** è **dwMask**. In `SetParaFormat`, **dwMask** specifica quali attributi di paragrafo verranno impostati dalla chiamata di funzione. `GetParaFormat` riporta gli attributi del primo paragrafo della selezione; **dwMask** specifica gli attributi coerenti nella selezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)


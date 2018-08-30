---
title: Formattazione paragrafo nei controlli Rich Edit | Microsoft Docs
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
ms.openlocfilehash: 8258ff95fc91f6f29d424e77be95ce1b44f621ac
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43215821"
---
# <a name="paragraph-formatting-in-rich-edit-controls"></a>Formattazione paragrafo nei controlli Rich Edit
È possibile usare funzioni di membro del controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) per formattare i paragrafi e per recuperare le informazioni di formattazione. Gli attributi di formattazione dei paragrafi includono allineamento, tabulazioni, rientri e numerazione.  
  
 È possibile applicare paragrafo formattazione usando il [SetParaFormat](../mfc/reference/cricheditctrl-class.md#setparaformat) funzione membro. Per determinare il formattazione del testo selezionato del paragrafo corrente, usare il [GetParaFormat](../mfc/reference/cricheditctrl-class.md#getparaformat) funzione membro. Il [PARAFORMAT](/windows/desktop/api/richedit/ns-richedit-_paraformat) struttura viene utilizzata con queste funzioni membro per specificare gli attributi di paragrafo. Uno dei membri importanti della **PARAFORMAT** viene *dwMask*. Nelle `SetParaFormat`, *dwMask* specifica quali attributi di paragrafo verranno impostati dalla chiamata di funzione. `GetParaFormat` Restituisce gli attributi del primo paragrafo della selezione; *dwMask* specifica gli attributi coerenti nella selezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)


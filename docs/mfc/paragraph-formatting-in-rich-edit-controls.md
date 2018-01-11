---
title: Formattazione paragrafo nei controlli Rich Edit | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- rich edit controls [MFC], paragraph formatting in
- paragraph formatting in CRichEditCtrl [MFC]
- CRichEditCtrl class [MFC], paragraph formatting in
- formatting [MFC], paragraphs
ms.assetid: 0df2e4c9-2074-4e41-b913-87cb8c1b4d43
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0f0dc12d923f6f424fe84768b0d934d8dd7ff20b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="paragraph-formatting-in-rich-edit-controls"></a>Formattazione paragrafo nei controlli Rich Edit
È possibile utilizzare le funzioni membro del controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) per formattare i paragrafi e per recuperare le informazioni di formattazione. Gli attributi di formattazione dei paragrafi includono allineamento, tabulazioni, rientri e numerazione.  
  
 È possibile applicare la formattazione utilizzando paragrafo di [SetParaFormat](../mfc/reference/cricheditctrl-class.md#setparaformat) funzione membro. Per determinare il formattazione per il testo selezionato del paragrafo corrente, utilizzare il [GetParaFormat](../mfc/reference/cricheditctrl-class.md#getparaformat) funzione membro. Il [PARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787940) struttura viene utilizzata con queste funzioni membro per specificare gli attributi di paragrafo. Uno dei membri importanti di **PARAFORMAT** è **dwMask**. In `SetParaFormat`, **dwMask** specifica quali attributi di paragrafo verranno impostati dalla chiamata di funzione. `GetParaFormat`Restituisce gli attributi del primo paragrafo della selezione; **dwMask** specifica gli attributi coerenti nella selezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)


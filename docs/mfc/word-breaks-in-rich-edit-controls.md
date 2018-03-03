---
title: Interruzioni di parola in controlli Rich Edit | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- CRichEditCtrl class [MFC], word breaks in
- word breaks
- breaking words in CRichEditCtrl
- rich edit controls [MFC], word breaks in
ms.assetid: 641dcf9e-7b40-4dc0-85f7-575a8c142f73
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 12ae5d682515a6f266b7e41a2ff89148ea98c0b1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="word-breaks-in-rich-edit-controls"></a>Interruzioni di parola in controlli Rich Edit
Un controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) chiama una funzione denominata una "routine" parole e stabilire dove è possibile interrompere le righe. Il controllo utilizza queste informazioni quando si eseguono operazioni di ritorno a capo automatico e durante l'elaborazione le combinazioni di tasti CTRL + freccia sinistra e CTRL + freccia destra. Un'applicazione può inviare messaggi a un controllo rich edit per sostituire la routine di interruzione di parola predefinita, per recuperare informazioni relative alle interruzioni di parola e per determinare in quale riga di un carattere specificato cade.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)


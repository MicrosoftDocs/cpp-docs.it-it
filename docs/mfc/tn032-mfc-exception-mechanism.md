---
title: 'TN032: Meccanismo di eccezioni MFC | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.exceptions
dev_langs:
- C++
helpviewer_keywords:
- TN032
- MFC, exceptions
- CException class [MFC], using
ms.assetid: 0271f0aa-82cb-47a2-b7ea-e88126fc7e43
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5256f787534ab408920f7154122ae0c5934019c1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="tn032-mfc-exception-mechanism"></a>TN032: meccanismo di eccezioni MFC
Le versioni precedenti di Visual C++ non supportavano il meccanismo di eccezioni standard di C++ e MFC forniva macro **TRY/CATCH/THROW** che sono stati utilizzati. Questa versione di Visual C++ supporta pienamente le eccezioni C++. In questa nota venivano trattati alcuni dettagli di implementazione avanzata delle precedenti macro, incluso come pulire automaticamente gli oggetti basati su stack. Dal momento che le eccezioni C++ supportano la rimozione dello stack per impostazione predefinita, questa nota tecnica non è più necessaria.  
  
 Fare riferimento a [eccezioni: utilizzo delle macro MFC ed eccezioni C++](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md) per ulteriori informazioni sulle differenze tra le macro MFC e le nuove parole chiave C++.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)


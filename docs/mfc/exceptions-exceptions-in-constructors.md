---
title: 'Eccezioni: Eccezioni nei costruttori | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- constructors [MFC], exceptions
- throwing exceptions [MFC], in constructors
- exceptions [MFC], in constructors
ms.assetid: a78eae5a-5821-4b27-9478-1436320ed1e1
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fc17821e2dd358a4b8f596492fa46c2b7412feed
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="exceptions-exceptions-in-constructors"></a>Eccezioni: eccezioni nei costruttori
Quando si genera un'eccezione in un costruttore, pulire tutti gli oggetti e le allocazioni di memoria sono state apportate prima di generare l'eccezione, come illustrato in [eccezioni: generazione di eccezioni da funzioni personalizzate](../mfc/exceptions-throwing-exceptions-from-your-own-functions.md).  
  
 Quando si genera un'eccezione in un costruttore, la memoria per l'oggetto stesso è già stata allocata nel momento in cui che viene chiamato il costruttore. In tal caso, il compilatore verrà automaticamente deallocare la memoria occupata dall'oggetto dopo la generazione dell'eccezione.  
  
 Per ulteriori informazioni, vedere [eccezioni: rilascio di oggetti nelle eccezioni](../mfc/exceptions-freeing-objects-in-exceptions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)


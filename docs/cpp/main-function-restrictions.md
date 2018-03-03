---
title: limitazioni sulla funzione Main | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- Main
dev_langs:
- C++
helpviewer_keywords:
- main function, restrictions on using
ms.assetid: 7b3df731-344b-44a8-850c-11cbcbfbfa83
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8a94844a0d5636c58a764114ed6f413923d69950
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="main-function-restrictions"></a>Limitazioni sulla funzione main
Applicano numerose restrizioni per il **principale** funzione che non si applicano alle altre funzioni C++. Il **principale** funzione:  
  
-   Impossibile eseguire l'overload (vedere [overload di funzioni](function-overloading.md)).  
  
-   Non può essere dichiarato come **inline**.  
  
-   Non può essere dichiarato come **statico**.  
  
-   Non è possibile accettarne l'indirizzo.  
  
-   Non può essere chiamato.  
  
## <a name="see-also"></a>Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)
---
title: limitazioni sulla funzione Main | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: Main
dev_langs: C++
helpviewer_keywords: main function, restrictions on using
ms.assetid: 7b3df731-344b-44a8-850c-11cbcbfbfa83
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c444fe53719aea5c78477aa9d9f35134c44d99a9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
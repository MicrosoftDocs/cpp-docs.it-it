---
title: limitazioni sulla funzione Main | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- Main
dev_langs:
- C++
helpviewer_keywords:
- main function, restrictions on using
ms.assetid: 7b3df731-344b-44a8-850c-11cbcbfbfa83
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 981d4c8c0ef30993811e5dbb6fd0a112a6447011
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39406494"
---
# <a name="main-function-restrictions"></a>Limitazioni sulla funzione main
Si applicano numerose restrizioni per il **principale** funzione che non si applicano a qualsiasi altra funzione di C++. Il **principale** funzione:  
  
-   Impossibile eseguire l'overload (vedere [overload di funzioni](function-overloading.md)).  
  
-   Non possono essere dichiarati come **inline**.  
  
-   Non possono essere dichiarati come **statici**.  
  
-   Non è possibile accettarne l'indirizzo.  
  
-   Non può essere chiamato.  
  
## <a name="see-also"></a>Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)
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
ms.openlocfilehash: 3114f1ef379495f36f4231dbad6fd41ac145bcfe
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37941746"
---
# <a name="main-function-restrictions"></a>Limitazioni sulla funzione main
Si applicano numerose restrizioni per il `main` funzione che non si applicano a qualsiasi altra funzione di C++. Il `main` funzione:  
  
-   Impossibile eseguire l'overload (vedere [overload di funzioni](function-overloading.md)).  
  
-   Non possono essere dichiarati come **inline**.  
  
-   Non possono essere dichiarati come **statici**.  
  
-   Non è possibile accettarne l'indirizzo.  
  
-   Non può essere chiamato.  
  
## <a name="see-also"></a>Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)
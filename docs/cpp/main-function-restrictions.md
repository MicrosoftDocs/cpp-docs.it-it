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
ms.openlocfilehash: 93f5cce15d4db9f7f6d4e3361d22028fccd676f2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46117361"
---
# <a name="main-function-restrictions"></a>Limitazioni sulla funzione main

Si applicano numerose restrizioni per il **principale** funzione che non si applicano a qualsiasi altra funzione di C++. Il **principale** funzione:

- Impossibile eseguire l'overload (vedere [overload di funzioni](function-overloading.md)).

- Non possono essere dichiarati come **inline**.

- Non possono essere dichiarati come **statici**.

- Non è possibile accettarne l'indirizzo.

- Non può essere chiamato.

## <a name="see-also"></a>Vedere anche

[main: avvio del programma](../cpp/main-program-startup.md)
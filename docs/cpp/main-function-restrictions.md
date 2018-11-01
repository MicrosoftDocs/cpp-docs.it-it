---
title: Limitazioni sulla funzione main
ms.date: 11/04/2016
f1_keywords:
- Main
helpviewer_keywords:
- main function, restrictions on using
ms.assetid: 7b3df731-344b-44a8-850c-11cbcbfbfa83
ms.openlocfilehash: 9ccea987b05c7854e78ba1621fd6c0a065d73d5a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50555736"
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
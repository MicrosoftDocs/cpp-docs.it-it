---
title: Errore del compilatore C3116
ms.date: 11/04/2016
f1_keywords:
- C3116
helpviewer_keywords:
- C3116
ms.assetid: 597463e1-a5cc-4ed3-a917-eae9a61d3312
ms.openlocfilehash: 3f587bc677d64bda0fb5eea0b7ebc8d5761a2e75
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50612020"
---
# <a name="compiler-error-c3116"></a>Errore del compilatore C3116

'identificatore di archiviazione': classe di archiviazione non è valido per il metodo di interfaccia

È stata usata `typedef`, `register`, o `static` come classe di archiviazione per un metodo di interfaccia. Queste classi di archiviazione non sono consentite nei membri di interfaccia.

L'esempio seguente genera l'errore C3116:

```
// C3116.cpp
__interface ImyInterface
{
   static void myFunc();   // C3116
};
```
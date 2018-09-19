---
title: Errore del compilatore C3116 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3116
dev_langs:
- C++
helpviewer_keywords:
- C3116
ms.assetid: 597463e1-a5cc-4ed3-a917-eae9a61d3312
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1104b731fa565991615eb88cc34fa946e2bfb505
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46077847"
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
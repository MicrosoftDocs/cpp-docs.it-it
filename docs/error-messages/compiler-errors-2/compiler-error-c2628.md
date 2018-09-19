---
title: Errore del compilatore C2628 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2628
dev_langs:
- C++
helpviewer_keywords:
- C2628
ms.assetid: 19a25e77-d5be-4107-88d5-0745b6281f98
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 43a7d0515013158932f627b883ab36a2793ab5bd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46051348"
---
# <a name="compiler-error-c2628"></a>Errore del compilatore C2628

'type1' seguito da 'type2' non è valido (si è omesso un';'?)

Potrebbe mancare un punto e virgola.

L'esempio seguente genera l'errore C2628:

```
// C2628.cpp
class CMyClass {}
int main(){}   // C2628 error
```

Possibile soluzione:

```
// C2628b.cpp
class CMyClass {};
int main(){}
```
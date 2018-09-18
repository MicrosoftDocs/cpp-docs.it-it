---
title: Errore del compilatore C2507 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2507
dev_langs:
- C++
helpviewer_keywords:
- C2507
ms.assetid: f102aff5-de7d-4c3f-9cac-2ddf9ce02b14
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 16cc9c5f21618f3b681fbefbfadfd66b0219d5ac
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46022721"
---
# <a name="compiler-error-c2507"></a>Errore del compilatore C2507

'identifier': troppi modificatori virtual nella classe di base

Una classe o struttura è dichiarato come `virtual` più volte. Un solo `virtual` modificatore può essere visualizzato per ogni classe in un elenco delle classi base.

L'esempio seguente genera l'errore C2507:

```
// C2507.cpp
// compile with: /c
class A {};
class B : virtual virtual public A {};   // C2507
class C : virtual public A {};   // OK
```
---
title: Errore del compilatore C2500 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2500
dev_langs:
- C++
helpviewer_keywords:
- C2500
ms.assetid: 6bff8161-dc9a-48ca-91f1-fd2eefdbbc93
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9b7e24ca520796b63171fe63c2bf841fe8776845
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46026673"
---
# <a name="compiler-error-c2500"></a>Errore del compilatore C2500

'identifier1': 'identifier2' è già una classe base diretta

Una classe o struttura viene visualizzata più volte in un elenco di classi di base.

Una classe base diretta è quello indicato nell'elenco di base. Base indiretta è una classe di base di una delle classi nell'elenco di base.

Una classe non può essere specificata più volte come una classe base diretta. Una classe utilizzabile come una classe base indiretta più volte.

L'esempio seguente genera l'errore C2500:

```
// C2500.cpp
// compile with: /c
class A {};
class B : public A, public A {};    // C2500

// OK
class C : public A {};
class D : public A {};
class E : public C, public D {};
```
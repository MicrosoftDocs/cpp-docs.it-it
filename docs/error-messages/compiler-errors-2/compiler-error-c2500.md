---
title: Errore del compilatore C2500
ms.date: 11/04/2016
f1_keywords:
- C2500
helpviewer_keywords:
- C2500
ms.assetid: 6bff8161-dc9a-48ca-91f1-fd2eefdbbc93
ms.openlocfilehash: 152546fce8f3ee63f8b95595bff052f18cd4ebda
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74746968"
---
# <a name="compiler-error-c2500"></a>Errore del compilatore C2500

' identificatore1':' identifier2' è già una classe di base diretta

Una classe o una struttura viene visualizzata più di una volta in un elenco di classi di base.

Una base diretta è indicata nell'elenco di base. Una base indiretta è una classe di base di una delle classi nell'elenco di base.

Non è possibile specificare una classe come classe di base diretta più di una volta. Una classe può essere utilizzata come classe base indiretta più volte.

L'esempio seguente genera l'C2500:

```cpp
// C2500.cpp
// compile with: /c
class A {};
class B : public A, public A {};    // C2500

// OK
class C : public A {};
class D : public A {};
class E : public C, public D {};
```

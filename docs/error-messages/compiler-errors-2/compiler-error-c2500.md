---
description: 'Altre informazioni su: errore del compilatore C2500'
title: Errore del compilatore C2500
ms.date: 11/04/2016
f1_keywords:
- C2500
helpviewer_keywords:
- C2500
ms.assetid: 6bff8161-dc9a-48ca-91f1-fd2eefdbbc93
ms.openlocfilehash: 39d1ab0876470b443d4444a3c583cc0993c98325
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275971"
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

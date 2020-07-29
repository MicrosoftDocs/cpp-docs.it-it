---
title: Errore del compilatore C2507
ms.date: 11/04/2016
f1_keywords:
- C2507
helpviewer_keywords:
- C2507
ms.assetid: f102aff5-de7d-4c3f-9cac-2ddf9ce02b14
ms.openlocfilehash: 944eaeadb038e6466d65859f72900db164cfe34d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221159"
---
# <a name="compiler-error-c2507"></a>Errore del compilatore C2507

' Identifier ': troppi modificatori virtuali nella classe di base

Una classe o una struttura viene dichiarata **`virtual`** più di una volta. È **`virtual`** possibile che venga visualizzato un solo modificatore per ogni classe in un elenco di classi di base.

L'esempio seguente genera l'C2507:

```cpp
// C2507.cpp
// compile with: /c
class A {};
class B : virtual virtual public A {};   // C2507
class C : virtual public A {};   // OK
```

---
description: 'Altre informazioni su: errore del compilatore C2507'
title: Errore del compilatore C2507
ms.date: 11/04/2016
f1_keywords:
- C2507
helpviewer_keywords:
- C2507
ms.assetid: f102aff5-de7d-4c3f-9cac-2ddf9ce02b14
ms.openlocfilehash: b2043f01cea9a64ace11fbdaa8d905fd892cc99c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97212974"
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

---
description: 'Altre informazioni su: errore del compilatore C2518'
title: Errore del compilatore C2518
ms.date: 11/04/2016
f1_keywords:
- C2518
helpviewer_keywords:
- C2518
ms.assetid: a7895b47-da90-4851-ac97-18e81479595a
ms.openlocfilehash: 1ebc270cd3544dc50d051677faeeec8e8e6bd979
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97212727"
---
# <a name="compiler-error-c2518"></a>Errore del compilatore C2518

parola chiave ' keyword ' non valida nell'elenco di classi base; ignorato

Le parole chiave **`class`** e **`struct`** non devono essere visualizzate in un elenco di classi di base.

L'esempio seguente genera l'C2518:

```cpp
// C2518.cpp
// compile with: /c
class B {};
class C : public class B {};   // C2518
class D: public B {};   // OK
```

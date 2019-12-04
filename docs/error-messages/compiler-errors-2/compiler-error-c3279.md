---
title: Errore del compilatore C3279
ms.date: 11/04/2016
f1_keywords:
- C3279
helpviewer_keywords:
- C3279
ms.assetid: 639afc20-984c-4a95-be35-8bf9409f02d5
ms.openlocfilehash: 3025dbf7c6bf4701218c2d9a956cae26d7180848
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757605"
---
# <a name="compiler-error-c3279"></a>Errore del compilatore C3279

le specializzazioni parziali ed esplicite e le creazioni di istanze esplicite di modelli di classe dichiarati nello spazio dei nomi cli non sono consentite

Lo spazio dei nomi `cli` è definito da Microsoft e contiene pseudo-modelli. Il compilatore C++ Microsoft non consente le specializzazioni parziali, definite dall'utente e esplicite e le creazioni di istanze esplicite di modelli di classe in questo spazio dei nomi.

L'esempio seguente genera l'errore C3279:

```cpp
// C3279.cpp
// compile with: /clr
namespace cli {
   template <> ref class array<int> {};   // C3279
   template <typename T> ref class array<T, 2> {};   // C3279
}
```

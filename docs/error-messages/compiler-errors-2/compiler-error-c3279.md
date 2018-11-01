---
title: Errore del compilatore C3279
ms.date: 11/04/2016
f1_keywords:
- C3279
helpviewer_keywords:
- C3279
ms.assetid: 639afc20-984c-4a95-be35-8bf9409f02d5
ms.openlocfilehash: 5f39510ee9ec0e717d675aa8b396405bc33b4ea1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50445006"
---
# <a name="compiler-error-c3279"></a>Errore del compilatore C3279

le specializzazioni parziali ed esplicite e le creazioni di istanze esplicite di modelli di classe dichiarati nello spazio dei nomi cli non sono consentite

Lo spazio dei nomi `cli` è definito da Microsoft e contiene pseudo-modelli. Il compilatore Visual C++ non consente specializzazioni parziali ed esplicite definite dall'utente e le creazioni di istanze esplicite di modelli di classe in questo spazio dei nomi.

L'esempio seguente genera l'errore C3279:

```
// C3279.cpp
// compile with: /clr
namespace cli {
   template <> ref class array<int> {};   // C3279
   template <typename T> ref class array<T, 2> {};   // C3279
}
```
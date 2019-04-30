---
title: Avviso del compilatore (livello 1) C4667
ms.date: 11/04/2016
f1_keywords:
- C4667
helpviewer_keywords:
- C4667
ms.assetid: 5d2b7fe0-4f0e-4cd6-b432-ca02c3d194ab
ms.openlocfilehash: 685cdc2577e1207360c793c82808919c39753f49
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64344477"
---
# <a name="compiler-warning-level-1-c4667"></a>Avviso del compilatore (livello 1) C4667

'function': Nessun modello di funzione definito corrisponde alla creazione di istanza forzata

È possibile creare istanze di un modello di funzione che non è stato dichiarato.

L'esempio seguente causa C4667:

```
// C4667a.cpp
// compile with: /LD /W1
template
void max(const int &, const int &); // C4667 expected
```

Per evitare questo avviso, dichiarare prima di tutto il modello di funzione:

```
// C4667b.cpp
// compile with: /LD
// Declare the function template
template<typename T>
const T &max(const T &a, const T &b) {
   return (a > b) ? a : b;
}
// Then forcibly instantiate it with a desired type ... i.e. 'int'
//
template
const int &max(const int &, const int &);
```
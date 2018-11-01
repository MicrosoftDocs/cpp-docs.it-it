---
title: Errore del compilatore C3857
ms.date: 11/04/2016
f1_keywords:
- C3857
helpviewer_keywords:
- C3857
ms.assetid: 9f746d1e-9708-4945-bc29-3150d5371d3c
ms.openlocfilehash: 1270d09c870bfdf9f390d6afb1625ad3e99e01a0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50456888"
---
# <a name="compiler-error-c3857"></a>Errore del compilatore C3857

'type': non sono consentiti più elenchi di parametri di tipo

Più di un modello o generico è stato specificato per lo stesso tipo, che non è consentito.

L'esempio seguente genera l'errore C3857:

```
// C3857.cpp
template <class T, class TT>
template <class T2>    // C3857
struct B {};
```

Possibile soluzione:

```
// C3857b.cpp
// compile with: /c
template <class T, class TT, class T2>
struct B {};
```

C3857 può verificarsi anche quando si usano i generics:

```
// C3857c.cpp
// compile with: /clr
generic <typename T>
generic <typename U>
ref class GC;   // C3857
```

Possibile soluzione:

```
// C3857d.cpp
// compile with: /clr /c
generic <typename U>
ref class GC;
```
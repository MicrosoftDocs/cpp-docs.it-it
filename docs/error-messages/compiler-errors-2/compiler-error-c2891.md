---
title: Errore del compilatore C2891
ms.date: 11/04/2016
f1_keywords:
- C2891
helpviewer_keywords:
- C2891
ms.assetid: e12cfb2d-df45-4b0d-b155-c51d17e812fa
ms.openlocfilehash: 2544cfc9e8cff283a7c3e0ace499408bb84cd046
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80201637"
---
# <a name="compiler-error-c2891"></a>Errore del compilatore C2891

' parameter ': impossibile prendere l'indirizzo di un parametro di modello

Non è possibile prendere l'indirizzo di un parametro di modello a meno che non si tratti di un lvalue. I parametri di tipo non sono lvalue perché non hanno un indirizzo. Anche i valori non di tipo negli elenchi di parametri di modello che non sono lvalue non dispongono di un indirizzo. Questo è un esempio di codice che provoca l'errore del compilatore C2891, perché il valore passato come parametro di modello è una copia generata dal compilatore dell'argomento di modello.

```
template <int i> int* f() { return &i; }
```

Per i parametri del modello lvalue, ad esempio i tipi di riferimento, è possibile prendere il proprio indirizzo.

```
template <int& r> int* f() { return &r; }
```

Per correggere l'errore, non usare l'indirizzo di un parametro di modello, a meno che non si tratti di un lvalue.

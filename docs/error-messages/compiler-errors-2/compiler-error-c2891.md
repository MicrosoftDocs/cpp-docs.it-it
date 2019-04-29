---
title: Errore del compilatore C2891
ms.date: 11/04/2016
f1_keywords:
- C2891
helpviewer_keywords:
- C2891
ms.assetid: e12cfb2d-df45-4b0d-b155-c51d17e812fa
ms.openlocfilehash: d9a1cdafdf7d3a2843aee4a20f71c7e6a4693150
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62366368"
---
# <a name="compiler-error-c2891"></a>Errore del compilatore C2891

'parameter': Impossibile accettare l'indirizzo di un parametro di modello

È possibile accettare l'indirizzo di un parametro di modello a meno che non è un lvalue. I parametri di tipo non sono lvalue poiché non dispongono di alcun indirizzo. I valori non di tipo nell'elenco di parametri di modello che non è lvalue inoltre non è un indirizzo. Questo è un esempio di codice che causa l'errore del compilatore C2891, perché il valore passato come parametro di modello è una copia dell'argomento del modello generato dal compilatore.

```
template <int i> int* f() { return &i; }
```

Parametri di modello che sono lvalue, ad esempio i tipi riferimento, può avere il proprio indirizzo eseguite.

```
template <int& r> int* f() { return &r; }
```

Per correggere questo errore, non accettare l'indirizzo di un parametro di modello solo se è un lvalue.
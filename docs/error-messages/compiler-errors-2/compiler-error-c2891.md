---
title: Errore del compilatore C2891 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2891
dev_langs:
- C++
helpviewer_keywords:
- C2891
ms.assetid: e12cfb2d-df45-4b0d-b155-c51d17e812fa
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 86d81662cb02fa3c8f6af75009daf4dab9b70196
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46016559"
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
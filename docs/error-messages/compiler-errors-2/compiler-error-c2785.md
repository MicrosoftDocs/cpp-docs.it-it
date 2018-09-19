---
title: Errore del compilatore C2785 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2785
dev_langs:
- C++
helpviewer_keywords:
- C2785
ms.assetid: d8d13360-0d00-4815-8475-b49c7f0dc0f3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cfae8a58d9c42c9ddc3ef7779fc86f7157ba41b0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46080857"
---
# <a name="compiler-error-c2785"></a>Errore del compilatore C2785

'dichiarazione1' e 'dichiarazione2' hanno tipi restituiti diversi

Il tipo restituito di specializzazione di modello di funzione differisce dal tipo restituito del modello di funzione primaria.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Controllare tutte le specializzazioni del modello di funzione per la coerenza.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2785:

```
// C2785.cpp
// compile with: /c
template<class T> void f(T);

template<> int f(int); // C2785
template<> void f(int); // OK
```
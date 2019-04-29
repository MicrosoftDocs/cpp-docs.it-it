---
title: Errore del compilatore C2785
ms.date: 11/04/2016
f1_keywords:
- C2785
helpviewer_keywords:
- C2785
ms.assetid: d8d13360-0d00-4815-8475-b49c7f0dc0f3
ms.openlocfilehash: fcf2bbb01f2aac668ff52884a6ccfb36c66aa89d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395378"
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
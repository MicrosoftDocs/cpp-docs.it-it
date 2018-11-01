---
title: Avviso del compilatore (livello 3) C4290
ms.date: 11/04/2016
f1_keywords:
- C4290
helpviewer_keywords:
- C4290
ms.assetid: d1c6d85b-28e0-4a1f-9d48-23593337a6fb
ms.openlocfilehash: c585294686298a1197d437d41a0d541f1268985f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50512736"
---
# <a name="compiler-warning-level-3-c4290"></a>Avviso del compilatore (livello 3) C4290

Specifica di eccezione C++ ignorata eccetto to indicare che una funzione non è __declspec(nothrow)

Una funzione viene dichiarata utilizzando la specifica di eccezione, che accetta Visual C++, ma non implementa. Scrivi codice con eccezioni specifiche che vengono ignorate durante la compilazione potrebbero dover essere ricompilato e collegato a essere riutilizzato nelle future versioni che supportano le specifiche di eccezione.

Per altre informazioni, vedere [specifiche di eccezioni (generazione)](../../cpp/exception-specifications-throw-cpp.md) .

È possibile evitare questo avviso usando la [avviso](../../preprocessor/warning.md) pragma:

```
#pragma warning( disable : 4290 )
```

Esempio di codice seguente genera l'errore C4290:

```
// C4290.cpp
// compile with: /EHs /W3 /c
void f1(void) throw(int) {}   // C4290

// OK
void f2(void) throw() {}
void f3(void) throw(...) {}
```
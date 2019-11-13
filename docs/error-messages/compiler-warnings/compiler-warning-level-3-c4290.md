---
title: Avviso del compilatore (livello 3) C4290
ms.date: 11/04/2016
f1_keywords:
- C4290
helpviewer_keywords:
- C4290
ms.assetid: d1c6d85b-28e0-4a1f-9d48-23593337a6fb
ms.openlocfilehash: 5ccacd7d5f4dfd2e9ad8de3958d7aa43571091fe
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74051655"
---
# <a name="compiler-warning-level-3-c4290"></a>Avviso del compilatore (livello 3) C4290

C++la specifica dell'eccezione è stata ignorata, tranne per indicare che una funzione non è __declspec (nothrow)

Una funzione viene dichiarata utilizzando la specifica di C++ eccezione, che l'oggetto visivo accetta ma non implementa. Il codice con specifiche di eccezione che viene ignorato durante la compilazione potrebbe dover essere ricompilato e collegato per essere riutilizzato nelle versioni future che supportano le specifiche di eccezione.

Per ulteriori informazioni, vedere [specifiche di eccezione (throw)](../../cpp/exception-specifications-throw-cpp.md) .

È possibile evitare questo avviso utilizzando il pragma [warning](../../preprocessor/warning.md) :

```cpp
#pragma warning( disable : 4290 )
```

L'esempio di codice seguente genera l'C4290:

```cpp
// C4290.cpp
// compile with: /EHs /W3 /c
void f1(void) throw(int) {}   // C4290

// OK
void f2(void) throw() {}
void f3(void) throw(...) {}
```
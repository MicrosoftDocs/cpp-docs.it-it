---
description: 'Altre informazioni su: errore del compilatore C3012'
title: Errore del compilatore C3012
ms.date: 11/04/2016
f1_keywords:
- C3012
helpviewer_keywords:
- C3012
ms.assetid: cc7040b1-b3fb-4da6-a474-877914d30332
ms.openlocfilehash: fff986a984acb62f770d02ff2b7b08c40e8511e3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97286007"
---
# <a name="compiler-error-c3012"></a>Errore del compilatore C3012

> '*intrinsic*': funzione intrinseca non consentita direttamente in un'area parallela

Una funzione [intrinseca del compilatore](../../intrinsics/compiler-intrinsics.md) non è consentita in un'area `omp parallel` . Per risolvere il problema, spostare gli oggetti intrinseci all'esterno dell'area o sostituirli con equivalenti non intrinseci.

## <a name="example"></a>Esempio

L'esempio seguente genera C3012 e Mostra un modo per risolverlo:

```cpp
// C3012.cpp
// compile with: /openmp
#ifdef __cplusplus
extern "C" {
#endif
void* _ReturnAddress();
#ifdef __cplusplus
}
#endif

int main()
{
   #pragma omp parallel
   {
      _ReturnAddress();   // C3012
   }
   _ReturnAddress();      // OK
}
```

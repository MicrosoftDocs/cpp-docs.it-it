---
title: Errore del compilatore C3039 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3039
dev_langs:
- C++
helpviewer_keywords:
- C3039
ms.assetid: 02776f16-f57a-4ffd-b7f7-9c696b633e08
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1b225103cf45331688a65d4528cadb39e730c75c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46098095"
---
# <a name="compiler-error-c3039"></a>Errore del compilatore C3039

'var': la variabile di indice nell'istruzione 'for' OpenMP non può essere una variabile di riduzione

Una variabile di indice è implicitamente privata, pertanto non può essere usata in una clausola [reduction](../../parallel/openmp/reference/reduction.md) nella direttiva [parallel](../../parallel/openmp/reference/parallel.md) di inclusione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3039:

```
// C3039.cpp
// compile with: /openmp /c
int g_i;

int main() {
   int i;

   #pragma omp parallel reduction(+: i)
   {
      #pragma omp for
      for (i = 0; i < 10; ++i)   // C3039
         g_i += i;
   }
}
```
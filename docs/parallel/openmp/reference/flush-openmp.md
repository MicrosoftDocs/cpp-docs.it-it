---
title: Flush (OpenMP) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- Flush
dev_langs:
- C++
helpviewer_keywords:
- flush OpenMP directive
ms.assetid: 150ca46e-d4f7-4423-b0a4-838df40aeb67
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5bc66539c1e037633c7ed9ce78f61bfe2bf75c66
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46439380"
---
# <a name="flush-openmp"></a>flush (OpenMP)

Specifica che tutti i thread hanno la stessa visualizzazione di memoria per tutti gli oggetti condivisi.

## <a name="syntax"></a>Sintassi

```
#pragma omp flush [(var)]
```

## <a name="arguments"></a>Argomenti

*var*<br/>
(Facoltativo) Elenco delimitato da virgole di variabili che rappresentano gli oggetti da sincronizzare. Se `var` non viene specificato, tutta la memoria viene scaricata.

## <a name="remarks"></a>Note

Il **flush** direttiva non supporta nessuna clausole OpenMP.

Per altre informazioni, vedere [2.6.5 direttiva flush](../../../parallel/openmp/2-6-5-flush-directive.md).

## <a name="example"></a>Esempio

```
// omp_flush.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

void read(int *data) {
   printf_s("read data\n");
   *data = 1;
}

void process(int *data) {
   printf_s("process data\n");
   (*data)++;
}

int main() {
   int data;
   int flag;

   flag = 0;

   #pragma omp parallel sections num_threads(2)
   {
      #pragma omp section
      {
         printf_s("Thread %d: ", omp_get_thread_num( ));
         read(&data);
         #pragma omp flush(data)
         flag = 1;
         #pragma omp flush(flag)
         // Do more work.
      }

      #pragma omp section
      {
         while (!flag) {
            #pragma omp flush(flag)
         }
         #pragma omp flush(data)

         printf_s("Thread %d: ", omp_get_thread_num( ));
         process(&data);
         printf_s("data = %d\n", data);
      }
   }
}
```

```Output
Thread 0: read data
Thread 1: process data
data = 2
```

## <a name="see-also"></a>Vedere anche

[Direttive](../../../parallel/openmp/reference/openmp-directives.md)
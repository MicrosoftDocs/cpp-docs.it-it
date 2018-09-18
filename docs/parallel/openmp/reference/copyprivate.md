---
title: copyprivate | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- copyprivate
dev_langs:
- C++
helpviewer_keywords:
- copyprivate OpenMP clause
ms.assetid: 02c0209d-abe8-4797-8365-a82b53c3f15d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1f698114fc1f2285cdcdb91ec1e8317ad1585a6b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46071133"
---
# <a name="copyprivate"></a>copyprivate
Specifica che una o più variabili devono essere condivise tra tutti i thread.  
  
## <a name="syntax"></a>Sintassi  
  
```  
copyprivate(var)  
```  
  
### <a name="parameters"></a>Parametri
  
*var*<br/>
Uno o più variabili da condividere. Se è specificata più di una variabile, separare i nomi delle variabili con una virgola.  
  
## <a name="remarks"></a>Note  
 `copyprivate` viene applicata il [singolo](../../../parallel/openmp/reference/single.md) direttiva.  
  
 Per altre informazioni, vedere [2.7.2.8 copyprivate](../../../parallel/openmp/2-7-2-8-copyprivate.md).  
  
## <a name="example"></a>Esempio  
  
```  
// omp_copyprivate.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
float x, y, fGlobal = 1.0;  
#pragma omp threadprivate(x, y)  
  
float get_float() {  
   fGlobal += 0.001;  
   return fGlobal;  
}  
  
void use_float(float f, int t) {  
   printf_s("Value = %f, thread = %d\n", f, t);  
}  
  
void CopyPrivate(float a, float b) {  
   #pragma omp single copyprivate(a, b, x, y)   
   {  
      a = get_float();  
      b = get_float();  
      x = get_float();  
      y = get_float();  
    }  
  
   use_float(a, omp_get_thread_num());     
   use_float(b, omp_get_thread_num());     
   use_float(x, omp_get_thread_num());  
   use_float(y, omp_get_thread_num());  
}  
  
int main() {  
   float a = 9.99, b = 123.456;  
  
   printf_s("call CopyPrivate from a single thread\n");  
   CopyPrivate(9.99, 123.456);  
  
   printf_s("call CopyPrivate from a parallel region\n");  
   #pragma omp parallel       
   {  
      CopyPrivate(a, b);  
   }  
}  
```  
  
```Output  
call CopyPrivate from a single thread  
Value = 1.001000, thread = 0  
Value = 1.002000, thread = 0  
Value = 1.003000, thread = 0  
Value = 1.004000, thread = 0  
call CopyPrivate from a parallel region  
Value = 1.005000, thread = 0  
Value = 1.005000, thread = 1  
Value = 1.006000, thread = 0  
Value = 1.006000, thread = 1  
Value = 1.007000, thread = 0  
Value = 1.007000, thread = 1  
Value = 1.008000, thread = 0  
Value = 1.008000, thread = 1  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)
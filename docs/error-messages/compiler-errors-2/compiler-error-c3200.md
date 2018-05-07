---
title: Errore del compilatore C3200 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3200
dev_langs:
- C++
helpviewer_keywords:
- C3200
ms.assetid: 44bb5e77-f0ec-421c-a732-b9ee7c0a3529
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6aa34ea006b06138290417387bd393589b630aa4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3200"></a>Errore del compilatore C3200
'template': argomento di modello non valido per il parametro di modello 'parameter', previsto un modello di classe  
  
 È stato passato un argomento non valido per un modello di classe. Il modello di classe previsto è un parametro di modello. Nell'esempio seguente, la chiamata `Y<int, int> aY` genera l'errore C3200. Il primo parametro deve essere un modello, ad esempio `Y<X, int> aY`.  
  
```  
// C3200.cpp  
template<typename T>  
class X  
{  
};  
  
template<template<typename U> class T1, typename T2>  
class Y  
{  
};  
  
int main()  
{  
   Y<int, int> y;   // C3200  
}  
```
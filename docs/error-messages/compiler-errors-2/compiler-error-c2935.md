---
title: Errore del compilatore C2935 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2935
dev_langs:
- C++
helpviewer_keywords:
- C2935
ms.assetid: e11ef90d-0756-4e43-8a09-4974c6aa72a3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b387e7cee3542dd41ab799b00ae28c834fe05903
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33244742"
---
# <a name="compiler-error-c2935"></a>Errore del compilatore C2935
'class': type-class-id ridefinita come funzione globale  
  
 Non è possibile usare una classe generica o modello come funzione globale.  
  
 Questo errore può verificarsi quando le parentesi graffe non corrispondono.  
  
 L'esempio seguente genera l'errore C2935:  
  
```  
// C2935.cpp  
// compile with: /c  
template<class T>  
struct TC {};   
void TC<int>() {}   // C2935  
  
// OK  
struct TC2 {};   
void TC2() {}  
```  
  
 C2935 può verificarsi anche quando si usano i generics:  
  
```  
// C2935b.cpp  
// compile with: /clr /c  
generic<class T>   
ref struct GC { };  
void GC<int>() {}   // C2935  
void GC() {}   // OK  
```
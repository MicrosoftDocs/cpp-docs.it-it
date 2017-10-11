---
title: Errore del compilatore C3231 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3231
dev_langs:
- C++
helpviewer_keywords:
- C3231
ms.assetid: fe5dc352-e634-45fa-9534-3da176294c98
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 5d3cf8747f25fdccda1467e894f95d8bcfb3525c
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3231"></a>Errore del compilatore C3231
'arg': argomento di tipo modello non è possibile utilizzare un parametro di tipo generico  
  
 Le istanze dei modelli vengono create in fase di compilazione, ma quelle dei generics vengono create in fase di esecuzione. Non è quindi possibile generare codice generico che può chiamare il modello perché non è possibile creare un'istanza del modello in fase di esecuzione quando il tipo generico è noto.  
  
 L'esempio seguente genera l'errore C3231:  
  
```  
// C3231.cpp  
// compile with: /clr /LD  
template <class T> class A;  
  
generic <class T>  
ref class C {  
   void f() {  
      A<T> a;   // C3231  
   }  
};  
```

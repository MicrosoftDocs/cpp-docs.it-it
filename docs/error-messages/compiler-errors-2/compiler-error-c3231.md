---
title: Errore del compilatore C3231 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3231
dev_langs: C++
helpviewer_keywords: C3231
ms.assetid: fe5dc352-e634-45fa-9534-3da176294c98
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 284f92378c52475e23f0ddf9f206d6a143f3091f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
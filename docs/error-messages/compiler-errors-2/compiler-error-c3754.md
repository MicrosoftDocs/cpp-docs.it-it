---
title: Errore del compilatore C3754 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3754
dev_langs: C++
helpviewer_keywords: C3754
ms.assetid: 14b877bc-9277-40ec-af1c-196a58b45f10
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 894cb23f08439db924297edf2dcecc055aee649b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3754"></a>Errore del compilatore C3754
costruttore di delegato: Impossibile chiamare la funzione membro 'function' in un'istanza di tipo 'type'  
  
 È stata eseguita una chiamata a una funzione tramite un puntatore a un tipo che non contiene la funzione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3754:  
  
```  
// C3754a.cpp  
// compile with: /clr  
using namespace System;  
  
delegate void MyDel();  
  
interface class MyInterface {};  
  
ref struct MyClass : MyInterface {  
   void f() {}  
};  
  
int main() {  
   MyInterface^ p = gcnew MyClass;  
   MyDel^ q = gcnew MyDel(p, &MyClass::f);   // C3754  
   // try the following line instead  
//   MyDel^ q = gcnew MyDel(safe_cast<MyClass^>(p), &MyClass::f);  
}  
```  

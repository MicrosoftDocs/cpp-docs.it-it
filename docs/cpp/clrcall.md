---
title: clrcall | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- __clrcall
- __clrcall_cpp
dev_langs:
- C++
helpviewer_keywords:
- __clrcall keyword [C++]
ms.assetid: 92096695-683a-40ed-bf65-0c8443572152
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 10e0835064298306c4fa53d4d15f59ecc6c73217
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="clrcall"></a>__clrcall
**Sezione specifica Microsoft**  
  
 Specifica che una funzione può essere chiamata solo dal codice gestito.  Utilizzare `__clrcall` per tutte le funzioni virtuali che vengono chiamate solo dal codice gestito. Questa convenzione di chiamata, però, non può essere utilizzata per le funzioni che vengono chiamate dal codice nativo.  
  
 Utilizzare `__clrcall` per migliorare le prestazioni quando si effettua una chiamata da una funzione gestita a una funzione gestita virtuale o da una funzione gestita a una funzione gestita tramite puntatore.  
  
 I punti di ingresso sono funzioni separate e generate dal compilatore. Se una funzione dispone di un punto d'ingresso nativo e uno gestito, uno di essi corrisponde all'effettiva funzione con l'implementazione della funzione. L'altra è una funzione separata (un thunk) che effettua una chiamata nella funzione effettiva e consente a Common Language Runtime di eseguire PInvoke. Nel contrassegnare una funzione come `__clrcall`, si indica che l'implementazione della funzione deve essere MSIL e che la funzione nativa del punto di ingresso non verrà generata.  
  
 Quando si acquisisce l'indirizzo di una funzione nativa, se `__clrcall` non viene specificato, il compilatore utilizza il punto di ingresso nativo. `__clrcall` indica che la funzione è gestita e che non è necessario eseguire la transizione da gestita a nativa. In questo caso, il compilatore utilizza il punto di ingresso gestito.  
  
 Quando **/clr** (non **/clr: pure** o **/CLR: safe**) viene utilizzato e `__clrcall` non è utilizzato, richiede sempre l'indirizzo di una funzione restituisce l'indirizzo di ingresso nativo funzione di punto. Quando `__clrcall` viene utilizzato, la funzione nativa del punto di ingresso non viene creata, in questo modo si ottiene l'indirizzo della funzione gestita e non una funzione thunk di punto di ingresso. Per ulteriori informazioni, vedere [doppio thunk](../dotnet/double-thunking-cpp.md). Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015.  
  
 [/CLR (compilazione common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) implica che tutte le funzioni e i puntatori a funzione sono `__clrcall` e il compilatore non consente una funzione all'interno del modulo da contrassegnare qualsiasi elemento diverso da `__clrcall`. Quando **/clr: pure** viene utilizzato, `__clrcall` può essere specificato solo sui puntatori di funzione e dichiarazioni esterne.  
  
 È possibile chiamare direttamente `__clrcall` funzioni da codice C++ esistente che è stato compilato utilizzando **/clr** fino a quando tale funzione è un'implementazione MSIL. `__clrcall`funzioni non possono essere chiamate direttamente da funzioni che hanno l'assembly inline e chiamano intrinseci specifici della CPU, ad esempio, anche se tali funzioni vengono compilate con **/clr**.  
  
 I puntatori a funzione`__clrcall` sono destinati ad essere utilizzati solo nel dominio dell'applicazione in cui sono stati creati.  Invece di passare i puntatori a funzione `__clrcall` tra i domini delle applicazioni, utilizzare <xref:System.CrossAppDomainDelegate>. Per ulteriori informazioni, vedere [domini applicazione e Visual C++](../dotnet/application-domains-and-visual-cpp.md).  
  
## <a name="example"></a>Esempio  
 Si noti che quando una funzione viene dichiarata con `__clrcall`, verrà generato del codice, quando necessario; ad esempio, quando la funzione viene chiamata.  
  
```  
// clrcall2.cpp  
// compile with: /clr  
using namespace System;  
int __clrcall Func1() {  
   Console::WriteLine("in Func1");  
   return 0;  
}  
  
// Func1 hasn't been used at this point (code has not been generated),   
// so runtime returns the adddress of a stub to the function  
int (__clrcall *pf)() = &Func1;  
  
// code calls the function, code generated at difference address  
int i = pf();   // comment this line and comparison will pass  
  
int main() {  
   if (&Func1 == pf)  
      Console::WriteLine("&Func1 == pf, comparison succeeds");  
   else   
      Console::WriteLine("&Func1 != pf, comparison fails");  
  
   // even though comparison fails, stub and function call are correct  
   pf();  
   Func1();  
}  
```  
  
```Output  
in Func1  
&Func1 != pf, comparison fails  
in Func1  
in Func1  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente dimostra che è possibile definire un puntatore a funzione in modo da dichiarare, ad esempio, che il puntatore a funzione verrà richiamato solo dal codice gestito. Ciò consente al compilatore di chiamare direttamente la funzione gestita ed evitare il punto di ingresso nativo (problema del doppio thunk).  
  
```  
// clrcall3.cpp  
// compile with: /clr  
void Test() {  
   System::Console::WriteLine("in Test");  
}  
  
int main() {  
   void (*pTest)() = &Test;  
   (*pTest)();  
  
   void (__clrcall *pTest2)() = &Test;  
   (*pTest2)();  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)   
 [Parole chiave](../cpp/keywords-cpp.md)

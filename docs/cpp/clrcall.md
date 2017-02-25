---
title: "__clrcall | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__clrcall"
  - "__clrcall_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__clrcall (parola chiave) [C++]"
ms.assetid: 92096695-683a-40ed-bf65-0c8443572152
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# __clrcall
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Specifica che una funzione può essere chiamata solo dal codice gestito.  Utilizzare `__clrcall` per tutte le funzioni virtuali che vengono chiamate solo dal codice gestito.  Questa convenzione di chiamata, però, non può essere utilizzata per le funzioni che vengono chiamate dal codice nativo.  
  
 Utilizzare `__clrcall` per migliorare le prestazioni quando si effettua una chiamata da una funzione gestita a una funzione gestita virtuale o da una funzione gestita a una funzione gestita tramite puntatore.  
  
 I punti di ingresso sono funzioni separate e generate dal compilatore.  Se una funzione dispone di un punto d'ingresso nativo e uno gestito, uno di essi corrisponde all'effettiva funzione con l'implementazione della funzione.  L'altra è una funzione separata \(un thunk\) che effettua una chiamata nella funzione effettiva e consente a Common Language Runtime di eseguire PInvoke.  Nel contrassegnare una funzione come `__clrcall`, si indica che l'implementazione della funzione deve essere MSIL e che la funzione nativa del punto di ingresso non verrà generata.  
  
 Quando si acquisisce l'indirizzo di una funzione nativa, se `__clrcall` non viene specificato, il compilatore utilizza il punto di ingresso nativo.  `__clrcall` indica che la funzione è gestita e che non è necessario eseguire la transizione da gestita a nativa.  In questo caso, il compilatore utilizza il punto di ingresso gestito.  
  
 Quando **\/clr** \(non **\/clr:pure** o **\/clr:safe**\) viene utilizzato e `__clrcall` non viene utilizzato, il risultato dell'acquisizione dell'indirizzo di una funzione è sempre l'indirizzo della funzione nativa del punto di ingresso.  Quando `__clrcall` viene utilizzato, la funzione nativa del punto di ingresso non viene creata, in questo modo si ottiene l'indirizzo della funzione gestita e non una funzione thunk di punto di ingresso.  Per ulteriori informazioni, vedere [Doppio thunk](../dotnet/double-thunking-cpp.md).  
  
 [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md) implica che tutte le funzioni e i puntatori a funzione sono `__clrcall` e che il compilatore non consente di contrassegnare una funzione che si trova all'interno del modulo diversamente da `__clrcall`.  Quando **\/clr:pure** viene utilizzato, `__clrcall` può essere specificato solo sui puntatori a funzione e sulle dichiarazioni esterne.  
  
 È possibile chiamare direttamente le funzioni `__clrcall` da codice C\+\+ esistente che è stato compilato utilizzando **\/clr**, se tali funzioni dispongono di un'implementazione MSIL.  Le funzioni`__clrcall` non possono essere chiamate direttamente da funzioni che hanno l'assembly inline e chiamano intrinseci specifici della CPU, ad esempio, anche se tali funzioni vengono compilate con **\/clr**.  
  
 I puntatori a funzione`__clrcall` sono destinati ad essere utilizzati solo nel dominio dell'applicazione in cui sono stati creati.  Invece di passare i puntatori a funzione `__clrcall` tra i domini delle applicazioni, utilizzare <xref:System.CrossAppDomainDelegate>.  Per ulteriori informazioni, vedere [Domini applicazione e Visual C\+\+](../dotnet/application-domains-and-visual-cpp.md).  
  
## Esempio  
  
```  
// clrcall.cpp  
// compile with: /clr:oldSyntax /LD  
void __clrcall Test1( ) {}  
void (__clrcall *fpTest1)( ) = &Test1;  
```  
  
## Esempio  
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
  
  **in Func1**  
**&Func1 \!\= pf, il confronto non riesce**  
**in Func1**  
**in Func1**   
## Esempio  
 L'esempio seguente dimostra che è possibile definire un puntatore a funzione in modo da dichiarare, ad esempio, che il puntatore a funzione verrà richiamato solo dal codice gestito.  Ciò consente al compilatore di chiamare direttamente la funzione gestita ed evitare il punto di ingresso nativo \(problema del doppio thunk\).  
  
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
  
## Vedere anche  
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)
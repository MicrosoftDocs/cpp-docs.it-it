---
title: "Specifiche di eccezioni (generazione) (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Gestione delle eccezioni C++, generazione di eccezioni"
  - "eccezioni, specifiche di eccezioni"
  - "throw (parola chiave) [C++], specifiche di eccezioni"
  - "throw (parola chiave) [C++], throw() e throw(...)"
  - "generazione di eccezioni, throw (parola chiave)"
ms.assetid: 4d3276df-6f31-4c7f-8cab-b9d2d003a629
caps.latest.revision: 20
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Specifiche di eccezioni (generazione) (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le specifiche di eccezione sono una funzionalità del linguaggio C\+\+ deprecata in C\+\+11.  Sono state progettate per fornire informazioni di riepilogo sulle eccezioni che possono essere generate da una funzione, ma in pratica sono risultate problematiche.  L'unica specifica di eccezione che è risultata piuttosto utile è stata la specifica throw\(\).  Ad esempio:  
  
```  
void MyFunction(int i) throw();  
```  
  
 indica al compilatore che la funzione non genera alcuna eccezione.  Equivale all'utilizzo di [\_\_declspec \(nothrow\)](../cpp/nothrow-cpp.md).  Tale specifica di eccezione viene considerata facoltativa.  
  
 **\(C\+\+11\)** Nello standard ISO C\+\+11 è stato introdotto l'operatore [noexcept](../cpp/noexcept-cpp.md), supportato in Visual Studio 2015 e versioni successive.  Se possibile, usare `noexcept` per specificare se una funzione può generare eccezioni.  
  
 Visual C\+\+ nell'implementazione delle specifiche di eccezione parte dallo standard ISO C\+\+.  Nella tabella riportata di seguito viene riepilogata l'implementazione di Visual C\+\+ delle specifiche di eccezione:  
  
|Specifica di eccezione|Significato|  
|----------------------------|-----------------|  
|throw\(\)|La funzione non genera eccezioni.  Tuttavia, se viene generata un'eccezione da una funzione contrassegnata come throw\(\), la chiamata del compilatore di Visual C\+\+ non sarà imprevista. Per altre informazioni, vedere [unexpected](../c-runtime-library/reference/unexpected-crt.md) e [unexpected](../Topic/unexpected%20\(%3Cexception%3E\).md).  Se una funzione è contrassegnata con throw\(\), il compilatore di Visual C\+\+ presupporrà che la funzione non generi eccezioni C\+\+ e genererà di conseguenza il codice.  A causa delle ottimizzazioni del codice che potrebbero essere eseguite dal compilatore di C\+\+ \(basandosi sull'ipotesi che la funzione non generi alcuna eccezione C\+\+\), se una funzione genera un'eccezione, il programma potrebbe non essere eseguito correttamente.|  
|throw\(...\)|La funzione può generare un'eccezione.|  
|throw\(`type`\)|La funzione può generare un'eccezione di tipo `type`.  Tuttavia, in Visual C\+\+ .NET, tale eccezione viene interpretata come throw\(...\).  Vedere la pagina relativa agli [identificatori di eccezioni di funzione](../misc/15-4-function-exception-specifiers.md).|  
  
 Se la gestione delle eccezioni viene usata in un'applicazione, è necessario che siano presenti una o più funzioni in grado di gestire le eccezioni generate.  Le funzioni chiamate tra quella che genera un'eccezione e quella che gestisce l'eccezione devono essere in grado di generare l'eccezione.  
  
 Il comportamento di generazione di una funzione dipende dai fattori seguenti:  
  
-   Se la funzione viene compilata in C o C\+\+.  
  
-   L'opzione del compilatore [\/EH](../build/reference/eh-exception-handling-model.md) usata.  
  
-   Se la specifica di eccezione viene specificata in modo esplicito.  
  
 Le specifiche di eccezioni esplicite nelle funzioni C non sono consentite.  
  
 Nella tabella riportata di seguito viene riepilogato il comportamento di generazione di una funzione.  
  
|Funzione|\/EHsc|\/EHs|\/EHa|\/EHac|  
|--------------|------------|-----------|-----------|------------|  
|funzione C|throw\(\)|throw\(...\)|throw\(...\)|throw\(...\)|  
|Funzione C\+\+ senza alcuna specifica di eccezione|throw\(...\)|throw\(...\)|throw\(...\)|throw\(...\)|  
|Funzione C\+\+ con la specifica di eccezione throw\(\)|throw\(\)|throw\(\)|throw\(...\)|throw\(...\)|  
|Funzione C\+\+ con la specifica di eccezione throw\(...\)|throw\(...\)|throw\(...\)|throw\(...\)|throw\(...\)|  
|Funzione C\+\+ con la specifica di eccezione throw \(`type`\)|throw\(...\)|throw\(...\)|throw\(...\)|throw\(...\)|  
  
## Esempio  
  
```cpp  
// exception_specification.cpp  
// compile with: /EHs  
#include <stdio.h>  
  
void handler() {  
   printf_s("in handler\n");  
}  
  
void f1(void) throw(int) {  
   printf_s("About to throw 1\n");  
   if (1)  
      throw 1;  
}  
  
void f5(void) throw() {  
   try {  
      f1();  
   }  
   catch(...) {  
      handler();  
    }  
}  
  
// invalid, doesn't handle the int exception thrown from f1()  
// void f3(void) throw() {  
//   f1();  
// }  
  
void __declspec(nothrow) f2(void) {  
   try {  
      f1();  
   }  
   catch(int) {  
      handler();  
    }  
}  
  
// only valid if compiled without /EHc   
// /EHc means assume extern "C" functions don't throw exceptions  
extern "C" void f4(void);  
void f4(void) {  
   f1();  
}  
  
int main() {  
   f2();  
  
   try {  
      f4();  
   }  
   catch(...) {  
      printf_s("Caught exception from f4\n");  
   }  
   f5();  
}  
```  
  
  **Verrà generato 1**  
**nel gestore**  
**Verrà generato 1**  
**Eccezione generata da f4**  
**Verrà generato 1**  
**nel gestore**   
## Vedere anche  
 [Istruzioni try, throw e catch \(C\+\+\)](../cpp/try-throw-and-catch-statements-cpp.md)   
 [Gestione delle eccezioni C\+\+](../cpp/cpp-exception-handling.md)
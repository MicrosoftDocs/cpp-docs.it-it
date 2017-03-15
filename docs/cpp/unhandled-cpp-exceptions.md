---
title: "Eccezioni C++ non gestite | Microsoft Docs"
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
  - "gestione delle eccezioni di C++, eccezioni non gestite"
  - "catch (parola chiave) [C++], gestore non trovato"
  - "gestori eventi, eccezioni non gestite"
  - "eccezioni, non gestite"
  - "eccezioni non gestite"
ms.assetid: 13f09c53-9254-4407-9db9-14e730e047cc
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Eccezioni C++ non gestite
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se un gestore corrispondente \(o gestore **catch** con i puntini di sospensione\) non è disponibile per l'eccezione corrente, viene chiamata la funzione di runtime predefinita `terminate`. È inoltre possibile chiamare in modo esplicito `terminate` in uno qualsiasi dei gestori. L'azione predefinita `terminate` consiste nel chiamare `abort`.  Se si desidera chiamare `terminate` un'altra funzione nel programma prima di uscire dall'applicazione, chiamare la funzione `set_terminate` con il nome della funzione da chiamare come unico argomento.  È possibile chiamare `set_terminate` in qualsiasi punto del programma.  La routine `terminate` chiama sempre l'ultima funzione fornita come argomento di `set_terminate`.  
  
## Esempio  
 Il codice di esempio seguente genere un'eccezione `char *`, ma non contiene un gestore definito per rilevare eccezioni di tipo `char *`.  La chiamata a `set_terminate` indica a `terminate` di chiamare `term_func`.  
  
```  
// exceptions_Unhandled_Exceptions.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
void term_func() {  
   cout << "term_func was called by terminate." << endl;  
   exit( -1 );  
}  
int main() {  
   try  
   {  
      set_terminate( term_func );  
      throw "Out of memory!"; // No catch handler for this exception  
   }  
   catch( int )  
   {  
      cout << "Integer exception raised." << endl;  
   }  
   return 0;  
}  
```  
  
## Output  
  
```  
term_func was called by terminate.  
```  
  
 La funzione `term_func` deve terminare il programma o il thread corrente, chiamando idealmente `exit`.  In caso contrario e se tornare al chiamante relativo, viene chiamata la funzione `abort`.  
  
## Vedere anche  
 [Gestione delle eccezioni C\+\+](../cpp/cpp-exception-handling.md)
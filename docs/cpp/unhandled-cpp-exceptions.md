---
title: Le eccezioni C++ non gestite | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- event handlers [C++], unhandled exceptions
- catch keyword [C++], handler not found
- exceptions [C++], unhandled
- C++ exception handling, unhandled exceptions
- unhandled exceptions [C++]
ms.assetid: 13f09c53-9254-4407-9db9-14e730e047cc
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6b7410d34b7b9f31c96cf7e991133770099735a4
ms.sourcegitcommit: 0523c88b24d963c33af0529e6ba85ad2c6ee5afb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/10/2018
---
# <a name="unhandled-c-exceptions"></a>Eccezioni C++ non gestite
Se un gestore corrispondente (o i puntini di sospensione **catch** gestore) non è disponibile per l'eccezione corrente, predefinito `terminate` viene chiamata la funzione di runtime. È inoltre possibile chiamare in modo esplicito `terminate` in uno qualsiasi dei gestori. L'azione predefinita `terminate` consiste nel chiamare `abort`. Se si desidera chiamare `terminate` un'altra funzione nel programma prima di uscire dall'applicazione, chiamare la funzione `set_terminate` con il nome della funzione da chiamare come unico argomento. È possibile chiamare `set_terminate` in qualsiasi punto del programma. Il `terminate` routine chiama sempre l'ultima funzione fornita come argomento di `set_terminate`.  
  
## <a name="example"></a>Esempio  
 Il codice di esempio seguente genere un'eccezione `char *`, ma non contiene un gestore definito per rilevare eccezioni di tipo `char *`. La chiamata a `set_terminate` indica a `terminate` di chiamare `term_func`.  
  
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
  
## <a name="output"></a>Output  
  
```  
term_func was called by terminate.  
```  
  
 La funzione `term_func` deve terminare il programma o il thread corrente, chiamando idealmente `exit`. In caso contrario e se tornare al chiamante relativo, viene chiamata la funzione `abort`.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)
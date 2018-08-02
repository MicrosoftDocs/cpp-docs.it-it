---
title: Le eccezioni C++ non gestite | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2e2162034b3e9ff93ebccca0f7eb53299b19c648
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39467979"
---
# <a name="unhandled-c-exceptions"></a>Eccezioni C++ non gestite
Se un gestore corrispondente (o i puntini di sospensione **intercettare** gestore) non è stata trovata per l'eccezione corrente, predefinita `terminate` viene chiamata la funzione di runtime. È inoltre possibile chiamare in modo esplicito `terminate` in uno qualsiasi dei gestori. L'azione predefinita `terminate` consiste nel chiamare `abort`. Se si desidera chiamare `terminate` un'altra funzione nel programma prima di uscire dall'applicazione, chiamare la funzione `set_terminate` con il nome della funzione da chiamare come unico argomento. È possibile chiamare `set_terminate` in qualsiasi punto del programma. Il `terminate` routine chiama sempre l'ultima funzione fornita come argomento a `set_terminate`.  
  
## <a name="example"></a>Esempio  
 Il codice di esempio seguente genere un'eccezione `char *`, ma non contiene un gestore definito per rilevare eccezioni di tipo `char *`. La chiamata a `set_terminate` indica a `terminate` di chiamare `term_func`.  
  
```cpp 
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
  
```Output  
term_func was called by terminate.  
```  
  
 La funzione `term_func` deve terminare il programma o il thread corrente, chiamando idealmente `exit`. In caso contrario e se tornare al chiamante relativo, viene chiamata la funzione `abort`.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)
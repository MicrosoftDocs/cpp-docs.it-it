---
title: Eccezioni C++ non gestite
ms.date: 11/04/2016
helpviewer_keywords:
- event handlers [C++], unhandled exceptions
- catch keyword [C++], handler not found
- exceptions [C++], unhandled
- C++ exception handling, unhandled exceptions
- unhandled exceptions [C++]
ms.assetid: 13f09c53-9254-4407-9db9-14e730e047cc
ms.openlocfilehash: 48b417c48a3cbb903f3fabaf31b1423e79a1a414
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233587"
---
# <a name="unhandled-c-exceptions"></a>Eccezioni C++ non gestite

Se non è possibile trovare un gestore o un gestore di puntini di sospensione corrispondente **`catch`** per l'eccezione corrente, `terminate` viene chiamata la funzione di runtime predefinita. È anche possibile chiamare in modo esplicito `terminate` in qualsiasi gestore. L'azione predefinita `terminate` consiste nel chiamare `abort` . Se si desidera chiamare `terminate` un'altra funzione nel programma prima di uscire dall'applicazione, chiamare la funzione `set_terminate` con il nome della funzione da chiamare come unico argomento. È possibile chiamare `set_terminate` in qualsiasi punto del programma. La `terminate` routine chiama sempre l'ultima funzione fornita come argomento a `set_terminate` .

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

[Procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori](../cpp/errors-and-exception-handling-modern-cpp.md)

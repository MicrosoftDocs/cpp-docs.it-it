---
description: 'Altre informazioni su: differenze nel comportamento di gestione delle eccezioni in/CLR'
title: Differenze nel comportamento di gestione delle eccezioni in-CLR
ms.date: 11/04/2016
helpviewer_keywords:
- EXCEPTION_CONTINUE_EXECUTION macro
- set_se_translator function
ms.assetid: 2e7e8daf-d019-44b0-a51c-62d7aaa89104
ms.openlocfilehash: e7e07778e894448fea3d29acb3a32d71884be57c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97252194"
---
# <a name="differences-in-exception-handling-behavior-under-clr"></a>Differenze nel comportamento di gestione delle eccezioni in /CLR

[Concetti di base sull'utilizzo di eccezioni gestite](../dotnet/basic-concepts-in-using-managed-exceptions.md) illustra la gestione delle eccezioni nelle applicazioni gestite. In questo argomento sono descritte in dettaglio le differenze dal comportamento standard della gestione delle eccezioni e alcune restrizioni. Per ulteriori informazioni, vedere [la funzione _set_se_translator](../c-runtime-library/reference/set-se-translator.md).

## <a name="jumping-out-of-a-finally-block"></a><a name="vcconjumpingoutofafinallyblock"></a> Salto da un blocco finally

Nel codice C/C++ nativo, il salto da un blocco _ _ **finally** con la gestione delle eccezioni strutturata (SEH) è consentito anche se genera un avviso.  In [/CLR](../build/reference/clr-common-language-runtime-compilation.md), il passaggio da un blocco **finally** genera un errore:

```cpp
// clr_exception_handling_4.cpp
// compile with: /clr
int main() {
   try {}
   finally {
      return 0;   // also fails with goto, break, continue
    }
}   // C3276
```

## <a name="raising-exceptions-within-an-exception-filter"></a><a name="vcconraisingexceptionswithinanexceptionfilter"></a> Generazione di eccezioni all'interno di un filtro eccezioni

Quando viene generata un'eccezione durante l'elaborazione di un [filtro eccezioni](../cpp/writing-an-exception-filter.md) all'interno di codice gestito, l'eccezione viene rilevata e considerata come se il filtro restituisce 0.

Diversamente dal comportamento del codice nativo in cui viene generata un'eccezione annidata, il campo **ExceptionRecord** nella struttura **EXCEPTION_RECORD** (come restituito da [GetExceptionInformation](/windows/win32/Debug/getexceptioninformation)) viene impostato e il campo **ExceptionFlags** imposta il bit 0x10. Nell'esempio riportato di seguito viene illustrata questa differenza di comportamento.

```cpp
// clr_exception_handling_5.cpp
#include <windows.h>
#include <stdio.h>
#include <assert.h>

#ifndef false
#define false 0
#endif

int *p;

int filter(PEXCEPTION_POINTERS ExceptionPointers) {
   PEXCEPTION_RECORD ExceptionRecord =
                     ExceptionPointers->ExceptionRecord;

   if ((ExceptionRecord->ExceptionFlags & 0x10) == 0) {
      // not a nested exception, throw one
      *p = 0; // throw another AV
   }
   else {
      printf("Caught a nested exception\n");
      return 1;
    }

   assert(false);

   return 0;
}

void f(void) {
   __try {
      *p = 0;   // throw an AV
   }
   __except(filter(GetExceptionInformation())) {
      printf_s("We should execute this handler if "
                 "compiled to native\n");
    }
}

int main() {
   __try {
      f();
   }
   __except(1) {
      printf_s("The handler in main caught the "
               "exception\n");
    }
}
```

### <a name="output"></a>Output

```Output
Caught a nested exception
We should execute this handler if compiled to native
```

## <a name="disassociated-rethrows"></a><a name="vccondisassociatedrethrows"></a> Rilanci non associati

**/CLR** non supporta la rigenerazione di un'eccezione all'esterno di un gestore catch (nota come rigenerazione dissociata). Le eccezioni di questo tipo vengono trattate come una rigenerazione C++ standard. Se viene riscontrata una rigenerazione con associazione rimossa in presenza di un'eccezione gestita attiva, l'eccezione viene sottoposta a wrapping come un'eccezione C++, quindi viene rigenerata. Le eccezioni di questo tipo possono essere rilevate solo come un'eccezione di tipo <xref:System.Runtime.InteropServices.SEHException> .

Nell'esempio seguente viene illustrata un'eccezione gestita rigenerata come un'eccezione C++:

```cpp
// clr_exception_handling_6.cpp
// compile with: /clr
using namespace System;
#include <assert.h>
#include <stdio.h>

void rethrow( void ) {
   // This rethrow is a dissasociated rethrow.
   // The exception would be masked as SEHException.
   throw;
}

int main() {
   try {
      try {
         throw gcnew ApplicationException;
      }
      catch ( ApplicationException^ ) {
         rethrow();
         // If the call to rethrow() is replaced with
         // a throw statement within the catch handler,
         // the rethrow would be a managed rethrow and
         // the exception type would remain
         // System::ApplicationException
      }
   }

    catch ( ApplicationException^ ) {
      assert( false );

      // This will not be executed since the exception
      // will be masked as SEHException.
    }
   catch ( Runtime::InteropServices::SEHException^ ) {
      printf_s("caught an SEH Exception\n" );
    }
}
```

### <a name="output"></a>Output

```Output
caught an SEH Exception
```

## <a name="exception-filters-and-exception_continue_execution"></a><a name="vcconexceptionfiltersandexception_continue_execution"></a> Filtri eccezioni e EXCEPTION_CONTINUE_EXECUTION

Se un filtro restituisce `EXCEPTION_CONTINUE_EXECUTION` in un'applicazione gestita, viene trattato come se il filtro restituisse `EXCEPTION_CONTINUE_SEARCH`. Per ulteriori informazioni su queste costanti, vedere [istruzione try-except](../cpp/try-except-statement.md).

Nell'esempio seguente viene illustrata questa differenza:

```cpp
// clr_exception_handling_7.cpp
#include <windows.h>
#include <stdio.h>
#include <assert.h>

int main() {
   int Counter = 0;
   __try {
      __try  {
         Counter -= 1;
         RaiseException (0xe0000000|'seh',
                         0, 0, 0);
         Counter -= 2;
      }
      __except (Counter) {
         // Counter is negative,
         // indicating "CONTINUE EXECUTE"
         Counter -= 1;
      }
    }
    __except(1) {
      Counter -= 100;
   }

   printf_s("Counter=%d\n", Counter);
}
```

### <a name="output"></a>Output

```Output
Counter=-3
```

## <a name="the-_set_se_translator-function"></a><a name="vcconthe_set_se_translatorfunction"></a> Funzione _set_se_translator

La funzione di conversione, impostata da una chiamata a `_set_se_translator`, ha effetto solo sui catch nel codice non gestito. Nell'esempio che segue viene dimostrata questa limitazione:

```cpp
// clr_exception_handling_8.cpp
// compile with: /clr /EHa
#include <iostream>
#include <windows.h>
#include <eh.h>
#pragma warning (disable: 4101)
using namespace std;
using namespace System;

#define MYEXCEPTION_CODE 0xe0000101

class CMyException {
public:
   unsigned int m_ErrorCode;
   EXCEPTION_POINTERS * m_pExp;

   CMyException() : m_ErrorCode( 0 ), m_pExp( NULL ) {}

   CMyException( unsigned int i, EXCEPTION_POINTERS * pExp )
         : m_ErrorCode( i ), m_pExp( pExp ) {}

   CMyException( CMyException& c ) : m_ErrorCode( c.m_ErrorCode ),
                                      m_pExp( c.m_pExp ) {}

   friend ostream& operator <<
                 ( ostream& out, const CMyException& inst ) {
      return out <<  "CMyException[\n" <<
             "Error Code: " << inst.m_ErrorCode <<  "]";
    }
};

#pragma unmanaged
void my_trans_func( unsigned int u, PEXCEPTION_POINTERS pExp ) {
   cout <<  "In my_trans_func.\n";
   throw CMyException( u, pExp );
}

#pragma managed
void managed_func() {
   try  {
      RaiseException( MYEXCEPTION_CODE, 0, 0, 0 );
   }
   catch ( CMyException x ) {}
   catch ( ... ) {
      printf_s("This is invoked since "
               "_set_se_translator is not "
               "supported when /clr is used\n" );
    }
}

#pragma unmanaged
void unmanaged_func() {
   try  {
      RaiseException( MYEXCEPTION_CODE,
                      0, 0, 0 );
   }
   catch ( CMyException x ) {
      printf("Caught an SEH exception with "
             "exception code: %x\n", x.m_ErrorCode );
    }
    catch ( ... ) {}
}

// #pragma managed
int main( int argc, char ** argv ) {
   _set_se_translator( my_trans_func );

   // It does not matter whether the translator function
   // is registered in managed or unmanaged code
   managed_func();
   unmanaged_func();
}
```

### <a name="output"></a>Output

```Output
This is invoked since _set_se_translator is not supported when /clr is used
In my_trans_func.
Caught an SEH exception with exception code: e0000101
```

## <a name="see-also"></a>Vedi anche

[Gestione delle eccezioni](../extensions/exception-handling-cpp-component-extensions.md)<br/>
[safe_cast](../extensions/safe-cast-cpp-component-extensions.md)<br/>
[Gestione delle eccezioni in MSVC](../cpp/exception-handling-in-visual-cpp.md)

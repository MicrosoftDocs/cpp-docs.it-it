---
title: Differenze nel comportamento sotto - CLR di gestione delle eccezioni
ms.date: 11/04/2016
helpviewer_keywords:
- EXCEPTION_CONTINUE_EXECUTION macro
- set_se_translator function
ms.assetid: 2e7e8daf-d019-44b0-a51c-62d7aaa89104
ms.openlocfilehash: fea928fc293ef916d560e51ecb27aee452b6a4c3
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57414629"
---
# <a name="differences-in-exception-handling-behavior-under-clr"></a>Differenze nel comportamento di gestione delle eccezioni in /CLR

[Concetti di base delle eccezioni gestite utilizzando](../dotnet/basic-concepts-in-using-managed-exceptions.md) illustra gestione delle eccezioni nelle applicazioni gestite. In questo argomento sono descritte in dettaglio le differenze dal comportamento standard della gestione delle eccezioni e alcune restrizioni. Per altre informazioni, vedere [la funzione set_se_translator](../c-runtime-library/reference/set-se-translator.md).

##  <a name="vcconjumpingoutofafinallyblock"></a> Uscita da un blocco Finally

Nel codice C/C++ nativo, uscita da un _**infine** impedisce l'uso di gestione delle eccezioni strutturata (SEH) è consentito anche se genera un avviso.  Sotto [/clr](../build/reference/clr-common-language-runtime-compilation.md)uscita da un **infine** blocco causa un errore:

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

##  <a name="vcconraisingexceptionswithinanexceptionfilter"></a> Generazione di eccezioni all'interno di un filtro eccezioni

Quando viene generata un'eccezione durante l'elaborazione di un [filtro eccezioni](../cpp/writing-an-exception-filter.md) all'interno di codice gestito, l'eccezione viene rilevata e considerata come se il filtro restituisse 0.

Ciò si differenzia dal comportamento nel codice nativo, in cui viene generata un'eccezione annidata, il **ExceptionRecord** campo le **EXCEPTION_RECORD** struttura (come restituito da [ GetExceptionInformation](/windows/desktop/Debug/getexceptioninformation)) è impostato e il **ExceptionFlags** campo consente di impostare il bit 0x10. Nell'esempio riportato di seguito viene illustrata questa differenza di comportamento.

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

##  <a name="vccondisassociatedrethrows"></a> Rigenerazione con associazione

**/CLR** non supporta la rigenerazione delle eccezioni all'esterno di un gestore catch (nota come rigenerazione). Le eccezioni di questo tipo vengono trattate come una rigenerazione C++ standard. Se viene riscontrata una rigenerazione con associazione rimossa in presenza di un'eccezione gestita attiva, l'eccezione viene sottoposta a wrapping come un'eccezione C++, quindi viene rigenerata. Le eccezioni di questo tipo possono essere rilevate solo come un'eccezione di tipo <xref:System.Runtime.InteropServices.SEHException>.

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

##  <a name="vcconexceptionfiltersandexception_continue_execution"></a> I filtri eccezioni ed EXCEPTION_CONTINUE_EXECUTION

Se un filtro restituisce `EXCEPTION_CONTINUE_EXECUTION` in un'applicazione gestita, viene trattato come se il filtro restituisse `EXCEPTION_CONTINUE_SEARCH`. Per altre informazioni su queste costanti, vedere [try-except Statement](../cpp/try-except-statement.md).

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

##  <a name="vcconthe_set_se_translatorfunction"></a> La funzione set_se_translator

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

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../windows/exception-handling-cpp-component-extensions.md)<br/>
[safe_cast](../windows/safe-cast-cpp-component-extensions.md)<br/>
[Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)
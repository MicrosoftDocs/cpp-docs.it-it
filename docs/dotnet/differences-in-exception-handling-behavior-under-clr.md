---
title: "Differenze nel comportamento di gestione delle eccezioni in /CLR | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EXCEPTION_CONTINUE_EXECUTION (macro)"
  - "set_se_translator (funzione)"
ms.assetid: 2e7e8daf-d019-44b0-a51c-62d7aaa89104
caps.latest.revision: 20
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Differenze nel comportamento di gestione delle eccezioni in /CLR
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[Concetti di base per l'utilizzo delle eccezioni gestite](../dotnet/basic-concepts-in-using-managed-exceptions.md) illustra la gestione delle eccezioni nelle applicazioni gestite.  In questo argomento, sono descritte in dettaglio le differenze nel comportamento standard della gestione delle eccezioni e alcune restrizioni.  Per ulteriori informazioni, vedere [La funzione \_set\_se\_translator](../c-runtime-library/reference/set-se-translator.md).  
  
##  <a name="vcconjumpingoutofafinallyblock"></a> Saltare un blocco Finally  
 Nel codice nativo C\/C\+\+, l'uscita da un blocco \_\_**finally** mediante la gestione delle eccezioni strutturata \(SEH\) è consentito anche se genera un avviso.  In [\/clr](../build/reference/clr-common-language-runtime-compilation.md), l'uscita da un blocco **finally** causa un errore:  
  
```  
// clr_exception_handling_4.cpp  
// compile with: /clr  
int main() {  
   try {}  
   finally {  
      return 0;   // also fails with goto, break, continue  
    }  
}   // C3276  
```  
  
##  <a name="vcconraisingexceptionswithinanexceptionfilter"></a> Generare eccezioni all'interno di un filtro eccezione  
 Quando viene generata un'eccezione durante l'elaborazione di un [filtro eccezione](../cpp/writing-an-exception-filter.md) nel codice gestito, l'eccezione viene catturata e considerata come se il filtro restituisse 0.  
  
 Ciò si differenzia dal comportamento nel codice nativo in cui l'eccezione annidata viene generata, il campo **ExceptionRecord** nella struttura **EXCEPTION\_RECORD** \(come restituito da [GetExceptionInformation](http://msdn.microsoft.com/library/windows/desktop/ms679357)\) viene impostato e il campo **ExceptionFlags** imposta il bit 0x10.  Nell'esempio riportato di seguito viene illustrata questa differenza nel comportamento:  
  
```  
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
  
### Output  
  
```  
Caught a nested exception  
We should execute this handler if compiled to native  
```  
  
##  <a name="vccondisassociatedrethrows"></a> Genera nuovamente l'associazione rimossa  
 **\/clr** non supporta il rigenerare delle eccezioni al di fuori di un gestore catch \(noto come rigenerare l'associazione rimossa\).  Le eccezioni di questo tipo sono considerate come rigenerate nello standard C\+\+.  Se viene riscontrata quando si verifica un'eccezione gestita attiva, viene eseguito il wrapping dell'eccezione come un'eccezione C\+\+ e quindi viene rigenerata.  Le eccezioni di questo tipo possono essere rilevate solo come eccezione di tipo [System::SEHException](https://msdn.microsoft.com/en-us/library/system.runtime.interopservices.sehexception.aspx).  
  
 Nell'esempio seguente viene illustrata un'eccezione gestita rigenerata come un'eccezione C\+\+:  
  
```  
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
  
### Output  
  
```  
caught an SEH Exception  
```  
  
##  <a name="vcconexceptionfiltersandexception_continue_execution"></a> Filtri di eccezione e EXCEPTION\_CONTINUE\_EXECUTION  
 Se un filtro restituisce `EXCEPTION_CONTINUE_EXECUTION` in un'applicazione gestita, viene considerato come se il filtro abbia restituito `EXCEPTION_CONTINUE_SEARCH`.  Per ulteriori informazioni su queste costanti, vedere [Istruzione try\-except](../cpp/try-except-statement.md).  
  
 Nell'esempio seguente viene illustrata questa differenza:  
  
```  
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
  
### Output  
  
```  
Counter=-3  
```  
  
##  <a name="vcconthe_set_se_translatorfunction"></a> La funzione \_set\_se\_translator  
 La funzione di conversione, impostata da una chiamata a `_set_se_translator`, ha effetto solo nel codice non gestito.  Nell'esempio che segue viene illustrato questa limitazione:  
  
```  
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
  
### Output  
  
```  
This is invoked since _set_se_translator is not supported when /clr is used  
In my_trans_func.  
Caught an SEH exception with exception code: e0000101  
```  
  
## Vedere anche  
 [Exception Handling](../windows/exception-handling-cpp-component-extensions.md)   
 [safe\_cast](../windows/safe-cast-cpp-component-extensions.md)   
 [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)
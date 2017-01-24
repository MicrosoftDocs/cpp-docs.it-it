---
title: "_resetstkoflw | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_resetstkoflw"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "resetstkoflw"
  - "_resetstkoflw"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_resetstkoflw (funzione)"
  - "resetstkoflw (funzione)"
  - "overflow dello stack"
  - "stack, recupero"
ms.assetid: 319529cd-4306-4d22-810b-2063f3ad9e14
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _resetstkoflw
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera dall'overflow dello stack.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
  
int _resetstkoflw ( void );  
  
```  
  
## Valore restituito  
 Diverso da zero se la funzione ha esito positivo, zero se non riesce.  
  
## Note  
 La funzione `_resetstkoflw` consente di recuperare da una condizione di overflow dello stack, consentendo a un programma di continuare invece di restituire un errore di eccezione irreversibile.  Se la funzione `_resetstkoflw` non viene chiamata, dopo l'eccezione precedente non è presente alcun guard page.  Al successivo overflow dello stack non ci sarà alcuna eccezione e il processo terminerà senza alcun avviso.  
  
 Se un thread in un'applicazione genera un'eccezione **EXCEPTION\_STACK\_OVERFLOW**, il thread ha lasciato il relativo stack in uno stato danneggiato.  Ciò si differenzia da altre eccezioni come **EXCEPTION\_ACCESS\_VIOLATION** o **EXCEPTION\_INT\_DIVIDE\_BY\_ZERO**, in cui lo stack non è danneggiato.  Lo stack è impostato su un valore arbitrario piccolo quando il programma viene caricato per la prima volta.  Lo stack poi cresce su richiesta per soddisfare le esigenze del thread.  Ciò viene implementato inserendo una pagina con accesso di PAGE\_GUARD alla fine dello stack corrente.  Per ulteriori informazioni, vedere [Creazione di Guard Pages](http://msdn.microsoft.com/library/windows/desktop/aa366549).  
  
 Quando il codice porta il puntatore dello stack a puntare a un indirizzo di questa pagina, si verifica un'eccezione e il sistema esegue le tre seguenti cose:  
  
-   Rimuove la protezione di PAGE\_GUARD nella pagina di protezione in modo che la thread possa leggere e scrivere dati in memoria.  
  
-   Alloca una nuova pagina guard che è localizzata una pagina sotto all'ultima.  
  
-   Riesegue l'istruzione che ha generato l'eccezione.  
  
 In questo modo, il sistema può aumentare la dimensione dello stack per il thread automaticamente.  Ogni thread in un processo ha una dimensione dello stack massima.  La dimensione dello stack viene impostata in fase di compilazione da [\/STACK \(Allocazioni stack\)](../../build/reference/stack-stack-allocations.md), o dall'istruzione [STACKSIZE](../../build/reference/stacksize.md) nel file .def per il progetto.  
  
 Quando la dimensione dello stack massima viene superata, il sistema esegue le tre cose seguenti:  
  
-   Rimuove la protezione di PAGE\_GUARD nella pagina di protezione, come descritto in precedenza.  
  
-   Tenta di allocare una nuova pagina guard sotto all'ultima.  Tuttavia, questo fallisce perché la dimensione dello stack massima è stata superata.  
  
-   Genera un'eccezione in modo che il thread possa gestirla nel blocco di eccezioni.  
  
 Si noti che, a questo punto, lo stack non ha più una pagina guard.  La volta successiva che il programma aumenta lo stack fino all'estremità, in cui deve esserci una pagina guard, il programma scrive oltre la fine dello stack e provoca una violazione di accesso.  
  
 Chiamare `_resetstkoflw` per ripristinare la pagina di protezione ogni volta che il ripristino viene eseguito dopo un'eccezione di overflow dello stack.  Questa funzione può essere chiamata dalla parte principale di un blocco `__except` o all'esterno di un blocco **\_\_except** .  Tuttavia, esistono alcune limitazioni sui casi in cui devono essere utilizzati.  `_resetstkoflw` non deve mai essere chiamato da:  
  
-   Un'espressione di filtro.  
  
-   Una funzione filtro.  
  
-   Una funzione chiamata da una funzione di filtro.  
  
-   Un blocco **catch**.  
  
-   Un blocco `__finally`.  
  
 A questi punti, lo stack non è ancora sufficientemente rilassato.  
  
 Le eccezioni di overflow dello stack vengono generate come eccezioni strutturate, non eccezioni C\+\+, pertanto `_resetstkoflw` non è utile in un ordinario blocco **catch** in quanto non afferra un'eccezione di overflow dello stack.  Tuttavia, se [\_set\_se\_translator](../../c-runtime-library/reference/set-se-translator.md) viene utilizzato per implementare un convertitore di eccezioni strutturate che genera eccezioni C\+\+ \(come nel secondo esempio\), verrà generata un'eccezione di overflow dello stack in un'eccezione C\+\+ che può essere gestita dal blocco catch C\+\+.  
  
 Non è sicuro chiamare **\_resetstkoflw** nel blocco catch C\+\+ che viene raggiunto da un'eccezione generata dalla funzione di conversione delle eccezioni strutturate.  In questo caso, lo spazio dello stack non viene liberato e il puntatore dello stack non viene reimpostato fino all'esterno del blocco catch, anche se i distruttori sono stati chiamati per tutti gli oggetti distruttibili prima del blocco catch.  Questa funzione non deve essere chiamata finché lo spazio dello stack non è libero e il puntatore dello stack non è stato reimpostato.  Pertanto, deve essere chiamata solo dopo l'uscita dal blocco catch.  Nel blocco catch bisognerebbe utilizzare uno spazio di stack il più piccolo possibile, poiché un overflow dello stack che si verifica nel blocco catch il quale sta cercando di recuperare da un overflow dello stack precedente non reversibile e può determinare che un programma non risponda più come overflow nel blocco catch, genera un'eccezione che a sua volta è gestita dallo stesso blocco catch.  
  
 Esistono situazioni in cui **\_resetstkoflw** può avere esito negativo anche se utilizzato in una posizione corretta, ad esempio in un blocco **\_\_except** .  Se, anche dopo lo svolgimento dello stack, non esiste ancora sufficientemente spazio disponibile per eseguire **\_resetstkoflw** senza scrivere nell'ultima pagina dello stack, **\_resetstkoflw** non riesce a reimpostare l'ultima pagina dello stack come pagina di protezione e ritorna 0, che indica fallimento.  Di conseguenza, l'utilizzo sicuro di questa funzione deve includere il controllo del valore restituito anziché presupporre che lo stack sia sicuro da utilizzare.  
  
 La gestione delle eccezioni strutturate non rileva un'eccezione `STATUS_STACK_OVERFLOW` quando l'applicazione viene compilata con `/clr` o `/clr:pure` \(vedere [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md)\).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_resetstkoflw`|\<malloc.h\>|  
  
 Per ulteriori informazioni di compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
 **Librerie:** Tutte le versioni di [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 L'esempio riportato di seguito mostra il modo d'uso raccomandato della funzione `_resetstkoflw`.  
  
```  
// crt_resetstkoflw.c  
// Launch program with and without arguments to observe  
// the difference made by calling _resetstkoflw.  
  
#include <malloc.h>  
#include <stdio.h>  
#include <windows.h>  
  
void recursive(int recurse)  
{  
   _alloca(2000);  
   if (recurse)  
      recursive(recurse);  
}  
  
// Filter for the stack overflow exception.  
// This function traps the stack overflow exception, but passes  
// all other exceptions through.   
int stack_overflow_exception_filter(int exception_code)  
{  
   if (exception_code == EXCEPTION_STACK_OVERFLOW)  
   {  
       // Do not call _resetstkoflw here, because  
       // at this point, the stack is not yet unwound.  
       // Instead, signal that the handler (the __except block)  
       // is to be executed.  
       return EXCEPTION_EXECUTE_HANDLER;  
   }  
   else  
       return EXCEPTION_CONTINUE_SEARCH;  
}  
  
int main(int ac)  
{  
   int i = 0;  
   int recurse = 1, result = 0;  
  
   for (i = 0 ; i < 10 ; i++)  
   {  
      printf("loop #%d\n", i + 1);  
      __try  
      {  
         recursive(recurse);  
  
      }  
  
      __except(stack_overflow_exception_filter(GetExceptionCode()))  
      {  
         // Here, it is safe to reset the stack.  
  
         if (ac >= 2)  
         {  
            puts("resetting stack overflow");  
            result = _resetstkoflw();  
         }  
      }  
  
      // Terminate if _resetstkoflw failed (returned 0)  
      if (!result)  
         return 3;  
   }  
  
   return 0;  
}  
```  
  
## Esempio di output  
 Senza argomenti del programma:  
  
```  
loop #1  
```  
  
 Il programma non risponde senza eseguire ulteriori iterazioni.  
  
 Con argomenti del programma:  
  
```  
loop #1  
resetting stack overflow  
loop #2  
resetting stack overflow  
loop #3  
resetting stack overflow  
loop #4  
resetting stack overflow  
loop #5  
resetting stack overflow  
loop #6  
resetting stack overflow  
loop #7  
resetting stack overflow  
loop #8  
resetting stack overflow  
loop #9  
resetting stack overflow  
loop #10  
resetting stack overflow  
```  
  
### Descrizione  
 Nell'esempio seguente viene illustrato l'utilizzo raccomandato di `_resetstkoflw` in un programma in cui le eccezioni strutturate vengono convertite in eccezioni C\+\+.  
  
### Codice  
  
```  
// crt_resetstkoflw2.cpp  
// compile with: /EHa  
// _set_se_translator requires the use of /EHa  
#include <malloc.h>  
#include <stdio.h>  
#include <windows.h>  
#include <eh.h>  
  
class Exception { };  
  
class StackOverflowException : Exception { };  
  
// Because the overflow is deliberate, disable the warning that  
// this function will cause a stack overflow.  
#pragma warning (disable: 4717)  
void CauseStackOverflow (int i)  
{  
        // Overflow the stack by allocating a large stack-based array  
        // in a recursive function.  
        int a[10000];  
        printf("%d ", i);  
        CauseStackOverflow (i + 1);  
}  
  
void __cdecl SEHTranslator (unsigned int code, _EXCEPTION_POINTERS*)  
{  
   // For stack overflow exceptions, throw our own C++   
   // exception object.  
   // For all other exceptions, throw a generic exception object.  
   // Use minimal stack space in this function.  
   // Do not call _resetstkoflw in this function.  
  
   if (code == EXCEPTION_STACK_OVERFLOW)  
      throw StackOverflowException ( );  
   else  
      throw Exception( );  
}  
  
int main ( )  
{  
        bool stack_reset = false;  
        bool result = false;  
  
        // Set up a function to handle all structured exceptions,  
        // including stack overflow exceptions.  
        _set_se_translator (SEHTranslator);  
  
        try  
        {  
            CauseStackOverflow (0);  
        }  
        catch (StackOverflowException except)  
        {  
                // Use minimal stack space here.  
                // Do not call _resetstkoflw here.  
                printf("\nStack overflow!\n");  
                stack_reset = true;  
        }  
        catch (Exception except)  
        {  
                // Do not call _resetstkoflw here.  
                printf("\nUnknown Exception!\n");  
        }  
        if (stack_reset)  
        {  
          result = _resetstkoflw();  
          // If stack reset failed, terminate the application.  
          if (result == 0)  
             exit(1);  
        }  
  
        void* pv = _alloca(100000);  
        printf("Recovered from stack overflow and allocated 100,000 bytes"  
               " using _alloca.");  
  
   return 0;  
}  
```  
  
## Esempio di output  
  
```  
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24  
Stack overflow!  
Recovered from stack overflow and allocated 100,000 bytes using _alloca.  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [\_alloca](../../c-runtime-library/reference/alloca.md)
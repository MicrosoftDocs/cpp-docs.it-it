---
title: "_set_se_translator | Microsoft Docs"
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
  - "_set_se_translator"
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
  - "_set_se_translator"
  - "set_se_translator"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_set_se_translator (funzione)"
  - "gestione eccezioni, modifica"
  - "set_se_translator (funzione)"
ms.assetid: 280842bc-d72a-468b-a565-2d3db893ae0f
caps.latest.revision: 21
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _set_se_translator
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le eccezioni Win32 \(eccezioni strutturate C\) come le eccezioni scritte in C\+\+.  
  
## Sintassi  
  
```  
_se_translator_function _set_se_translator(  
   _se_translator_function seTransFunction  
);  
```  
  
#### Parametri  
 `seTransFunction`  
 Puntatore a una funzione di conversione di eccezioni strutturate C scritta dall'utente.  
  
## Valore restituito  
 Restituisce un puntatore alla funzione precedente di conversione registrata da `_set_se_translator`, in modo che la funzione precedente possa essere ripristinata in un secondo momento.  Se nessuna funzione precedente è stata impostata, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito, questo valore può essere NULL..  
  
## Note  
 La funzione `_set_se_translator` consente di gestire le eccezioni Win32 \(eccezioni strutturate C\) come eccezioni tipizzate C\+\+.  Per permettere ad ogni eccezione C di essere gestita tramite il gestore C\+\+ `catch`, è necessario definire precedentemente la classe wrapper delle eccezioni C, che può essere utilizzata o derivata per associare un tipo specifico di classe a un'eccezione C.  Per utilizzare questa classe, installare una funzione di conversione di eccezione C personalizzata definita dal meccanismo interno di gestione delle eccezioni ogni volta che viene sollevata un'eccezione.  All'interno della funzione di conversione, è possibile generare qualsiasi eccezione tipizzata che può essere generata da un corrispondente gestore `catch` C\+\+.  
  
 È necessario utilizzare [\/EHa](../../build/reference/eh-exception-handling-model.md) quando si utilizza `_set_se_translator`.  
  
 Per specificare una funzione di conversione personalizzata, chiamare `_set_se_translator` con il nome della funzione di conversione come argomento.  La funzione di conversione che si scrive viene chiamata una volta per ogni chiamata di funzione nello stack con blocchi `try` .  Non esiste una funzione di conversione predefinita.  
  
 La funzione di conversione non dovrebbe fare altro che generare un'eccezione tipizzata C\+\+.  Se effettua altre operazioni oltre alla generazione \(ad esempio la scrittura in un file di log\), il programma potrebbe non comportarsi in modo appropriato, poiché il numero di volte in cui la funzione di conversione viene richiamata è dipendente dalla piattaforma.  
  
 In un ambiente multithreading, le funzioni di conversione sono gestite separatamente per ogni thread.  Ogni nuova thread necessita dell'installazione della propria funzione di conversione.  Quindi, ogni thread è responsabile della gestione della propria conversione.  `_set_se_translator` è specifico di un thread; un'altro DLL può installare una funzione di conversione differente.  
  
 La funzione `seTransFunction` scritta dall'utente deve essere una funzione compilata nativamente \(non compilata tramite \/clr\).  Deve accettare come argomenti un intero senza segno e un puntatore a una struttura `_EXCEPTION_POINTERS` di Win32.  Gli argomenti sono i valori di ritorno delle chiamate alle funzioni dell'API Win32 `GetExceptionCode` e `GetExceptionInformation`, rispettivamente.  
  
```  
typedef void (*_se_translator_function)(unsigned int, struct _EXCEPTION_POINTERS* );  
```  
  
 Per `_set_se_translator` vi sono implicazioni quando viene collegato dinamicamente a CRT; durante il processo un'altra DLL potrebbe chiamare `_set_se_translator` e sostituire il gestore con i propri.  
  
 Quando si utilizza `_set_se_translator` da codice gestito \(codice compilato con \/clr\) o codice misto nativo e gestito, ricordare che il convertitore influisce sulle eccezioni generate soltanto nel codice nativo.  Alcune eccezioni gestite generate nel codice gestito \(ad esempio quando viene generata `System::Exception`\) non vengono indirizzate tramite la funzione di conversione.  Le eccezioni generate nel codice gestito utilizzando la funzione Win32 `RaiseException`, o causate da un'eccezione di sistema come un'eccezione per una divisione per zero vengono inviate al traduttore.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_set_se_translator`|\<eh.h\>|  
  
 La funzionalità fornita da `_set_se_translator` non è disponibile nel codice compilato con l'opzione compilatore di [\/clr:pure](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_settrans.cpp  
// compile with: /EHa  
#include <stdio.h>  
#include <windows.h>  
#include <eh.h>  
  
void SEFunc();  
void trans_func( unsigned int, EXCEPTION_POINTERS* );  
  
class SE_Exception  
{  
private:  
    unsigned int nSE;  
public:  
    SE_Exception() {}  
    SE_Exception( unsigned int n ) : nSE( n ) {}  
    ~SE_Exception() {}  
    unsigned int getSeNumber() { return nSE; }  
};  
int main( void )  
{  
    try  
    {  
        _set_se_translator( trans_func );  
        SEFunc();  
    }  
    catch( SE_Exception e )  
    {  
        printf( "Caught a __try exception with SE_Exception.\n" );  
    }  
}  
void SEFunc()  
{  
    __try  
    {  
        int x, y=0;  
        x = 5 / y;  
    }  
    __finally  
    {  
        printf( "In finally\n" );  
    }  
}  
void trans_func( unsigned int u, EXCEPTION_POINTERS* pExp )  
{  
    printf( "In trans_func.\n" );  
    throw SE_Exception();  
}  
```  
  
  **In trans\_func.**  
**In finally**  
**Rilevata un'eccezione \_\_try con SE\_Exception.**   
## Esempio  
 Sebbene la funzionalità fornita da `_set_se_translator` non è disponibile nel codice gestito, è possibile utilizzare questo mapping nel codice nativo, anche se il codice nativo si trova in una compilazione con l'opzione `/clr`, purché il codice nativo venga indicato utilizzando `#pragma unmanaged`.  Se un'eccezione strutturata è generata nel codice gestito che deve essere mappato, il codice che genera e gestisce l'eccezione deve essere contrassegnato con `pragma`.  Il codice seguente illustra un possibile utilizzo.  Per ulteriori informazioni, vedere [Direttive pragma e parola chiave \_\_Pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md).  
  
```  
// crt_set_se_translator_clr.cpp  
// compile with: /clr  
#include <windows.h>  
#include <eh.h>  
#include <assert.h>  
#include <stdio.h>  
  
int thrower_func(int i) {  
   int j = i/0;  
  return 0;  
}  
  
class CMyException{  
};  
  
#pragma unmanaged  
void my_trans_func(unsigned int u, PEXCEPTION_POINTERS pExp )  
{  
printf("Translating the structured exception to a C++"  
             " exception.\n");  
throw CMyException();  
}  
  
void DoTest()  
{  
    try  
    {  
      thrower_func(10);  
    }   
  
    catch(CMyException e)  
    {  
printf("Caught CMyException.\n");  
    }  
    catch(...)  
    {  
      printf("Caught unexpected SEH exception.\n");  
    }  
}  
#pragma managed  
  
int main(int argc, char** argv) {  
    _set_se_translator(my_trans_func);  
    DoTest();  
    return 0;  
}  
```  
  
  **Conversione dell'eccezione strutturata in un'eccezione C\+\+.**  
**Caught CMyException.**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)   
 [set\_terminate](../../c-runtime-library/reference/set-terminate-crt.md)   
 [set\_unexpected](../../c-runtime-library/reference/set-unexpected-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)   
 [unexpected](../../c-runtime-library/reference/unexpected-crt.md)
---
title: _set_se_translator | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _set_se_translator
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- _set_se_translator
- set_se_translator
dev_langs: C++
helpviewer_keywords:
- set_se_translator function
- exception handling, changing
- _set_se_translator function
ms.assetid: 280842bc-d72a-468b-a565-2d3db893ae0f
caps.latest.revision: "21"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f7ce46b8db587337b7a9c98279efd4b89ffa8f9f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="setsetranslator"></a>_set_se_translator
Gestisce le eccezioni Win32 (eccezioni strutturate C) come eccezioni tipizzate C++.  
  
## <a name="syntax"></a>Sintassi  
  
```  
_se_translator_function _set_se_translator(  
   _se_translator_function seTransFunction  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `seTransFunction`  
 Puntatore a una funzione di conversione di eccezioni strutturate C scritta dall'utente.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore alla funzione di conversione precedente registrata da `_set_se_translator`, in modo che la funzione precedente possa essere ripristinata in un secondo momento. Se nessuna funzione precedente è stata impostata, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; questo valore può essere NULL.  
  
## <a name="remarks"></a>Note  
 La funzione `_set_se_translator` consente di gestire le eccezioni Win32 (eccezioni strutturate C) come eccezioni tipizzate C++. Per consentire a ogni eccezione C di essere gestita da un gestore `catch` C++, è necessario definire precedentemente una classe wrapper di eccezioni C che può essere utilizzata o derivata per associare un tipo di classe specifico a un'eccezione C. Per utilizzare questa classe, installare una funzione di conversione delle eccezioni C personalizzata che viene chiamata dal meccanismo interno di gestione delle eccezioni ogni volta che viene generata un'eccezione C. All'interno della funzione di conversione, è possibile generare qualsiasi eccezione tipizzata che può essere rilevata da un gestore `catch` C++ corrispondente.  
  
 È necessario usare [/EHa](../../build/reference/eh-exception-handling-model.md) quando si usa `_set_se_translator`.  
  
 Per specificare una funzione di conversione personalizzata, chiamare `_set_se_translator` con il nome della funzione di conversione come argomento. La funzione di conversione scritta viene chiamata una volta per ogni chiamata di funzione nello stack con blocchi `try`. Non esiste una funzione di conversione predefinita.  
  
 La funzione di conversione non dovrebbe fare altro che generare un'eccezione tipizzata C++. Se effettua altre operazioni oltre alla generazione (ad esempio, la scrittura in un file di log), il programma potrebbe non comportarsi come previsto, poiché il numero di volte in cui la funzione di conversione viene richiamata è dipendente dalla piattaforma.  
  
 In un ambiente con multithreading, le funzioni di conversione vengono mantenute separatamente per ogni thread. Ogni nuovo thread richiede l'installazione della propria funzione di conversione. Quindi, ogni thread è responsabile della propria gestione di conversione. La funzione `_set_se_translator` è specifica per un thread. Un'altra DLL può installare una funzione di conversione diversa.  
  
 La funzione `seTransFunction` scritta dall'utente deve essere una funzione compilata nativamente (non compilata tramite /clr). Deve accettare come argomenti un unsigned integer e un puntatore a una struttura `_EXCEPTION_POINTERS` di Win32. Gli argomenti sono i valori restituiti delle chiamate alle funzioni API Win32 `GetExceptionCode` e `GetExceptionInformation`, rispettivamente.  
  
```  
typedef void (*_se_translator_function)(unsigned int, struct _EXCEPTION_POINTERS* );  
```  
  
 Per `_set_se_translator` vi sono implicazioni quando viene collegato dinamicamente a CRT; durante il processo un'altra DLL potrebbe chiamare `_set_se_translator` e sostituire il gestore con il proprio.  
  
 Quando si utilizza `_set_se_translator` da codice gestito (codice compilato con /clr) o codice misto nativo e gestito, tenere presente che la conversione interessa le eccezioni generate soltanto nel codice nativo. Le eccezioni gestite generate nel codice gestito (ad esempio, quando viene generata `System::Exception`) non vengono indirizzate attraverso la funzione di conversione. Le eccezioni generate nel codice gestito che utilizzano la funzione `RaiseException` Win32 o causate da un'eccezione di sistema come un'eccezione di divisione per zero vengono indirizzate attraverso il convertitore.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_set_se_translator`|\<eh.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
In trans_func.  
In finally  
Caught a __try exception with SE_Exception.  
```  
  
## <a name="example"></a>Esempio  
 Sebbene la funzionalità fornita da `_set_se_translator` non è disponibile nel codice gestito, è possibile utilizzare questo mapping nel codice nativo, anche se il codice nativo si trova in una compilazione sotto l'opzione `/clr`, purché il codice nativo sia indicato utilizzando `#pragma unmanaged`. Se un'eccezione strutturata è generata nel codice gestito di cui è necessario eseguire il mapping, il codice che genera e gestisce l'eccezione deve essere contrassegnato con `pragma`. Il codice seguente illustra un possibile utilizzo. Per altre informazioni, vedere [Direttive pragma e parola chiave __Pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md).  
  
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
  
```Output  
Translating the structured exception to a C++ exception.  
Caught CMyException.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)   
 [set_terminate](../../c-runtime-library/reference/set-terminate-crt.md)   
 [set_unexpected](../../c-runtime-library/reference/set-unexpected-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)   
 [unexpected](../../c-runtime-library/reference/unexpected-crt.md)
---
title: _set_se_translator | Microsoft Docs
ms.custom: 
ms.date: 02/21/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _set_se_translator
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
dev_langs:
- C++
helpviewer_keywords:
- set_se_translator function
- exception handling, changing
- _set_se_translator function
ms.assetid: 280842bc-d72a-468b-a565-2d3db893ae0f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5b5eec59acfe65189368a9b0555c3065b7159aae
ms.sourcegitcommit: a5a69d2dc3513261e9e28320e4e067aaf40d2ef2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/21/2018
---
# <a name="setsetranslator"></a>_set_se_translator

Impostare una funzione di callback per ogni thread per convertire le eccezioni Win32 (eccezioni strutturate C) in C++ eccezioni tipizzate.

## <a name="syntax"></a>Sintassi

```cpp
_se_translator_function _set_se_translator(
    _se_translator_function seTransFunction
);
```

### <a name="parameters"></a>Parametri

*seTransFunction*  
Puntatore a una funzione di conversione di eccezioni strutturate C scritta dall'utente.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla funzione di conversione precedente registrata da `_set_se_translator`, in modo che la funzione precedente possa essere ripristinata in un secondo momento. Se nessuna funzione precedente è stata impostata, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; Questo valore può essere **nullptr**.

## <a name="remarks"></a>Note

La funzione `_set_se_translator` consente di gestire le eccezioni Win32 (eccezioni strutturate C) come eccezioni tipizzate C++. Per consentire a ogni eccezione C di essere gestita da un gestore `catch` C++, è necessario definire precedentemente una classe wrapper di eccezioni C che può essere utilizzata o derivata per associare un tipo di classe specifico a un'eccezione C. Per utilizzare questa classe, installare una funzione di conversione delle eccezioni C personalizzata che viene chiamata dal meccanismo interno di gestione delle eccezioni ogni volta che viene generata un'eccezione C. All'interno della funzione di conversione, è possibile generare qualsiasi eccezione tipizzata che può essere rilevata da un gestore `catch` C++ corrispondente.

È necessario usare [/EHa](../../build/reference/eh-exception-handling-model.md) quando si usa `_set_se_translator`.

Per specificare una funzione di conversione personalizzata, chiamare `_set_se_translator` utilizzando il nome della funzione di conversione come argomento. La funzione di conversione scritta viene chiamata una volta per ogni chiamata di funzione nello stack con blocchi `try`. Non esiste una funzione di conversione predefinita.

La funzione di conversione non dovrebbe fare altro che generare un'eccezione tipizzata C++. Se effettua altre operazioni oltre alla generazione (ad esempio, la scrittura in un file di log), il programma potrebbe non comportarsi come previsto, poiché il numero di volte in cui la funzione di conversione viene richiamata è dipendente dalla piattaforma.

In un ambiente con multithreading, le funzioni di conversione vengono mantenute separatamente per ogni thread. Ogni nuovo thread richiede l'installazione della propria funzione di conversione. Quindi, ogni thread è responsabile della propria gestione di conversione. La funzione `_set_se_translator` è specifica per un thread. Un'altra DLL può installare una funzione di conversione diversa.

Il *seTransFunction* funzione che si scrive deve essere una funzione compilata nativamente (non compilata con /clr). Deve accettare come argomenti un unsigned integer e un puntatore a una struttura `_EXCEPTION_POINTERS` di Win32. Gli argomenti sono i valori restituiti delle chiamate alle funzioni API Win32 `GetExceptionCode` e `GetExceptionInformation`, rispettivamente.

```cpp
typedef void (__cdecl *_se_translator_function)(unsigned int, struct _EXCEPTION_POINTERS* );
```

Per `_set_se_translator` vi sono implicazioni quando viene collegato dinamicamente a CRT; durante il processo un'altra DLL potrebbe chiamare `_set_se_translator` e sostituire il gestore con il proprio.

Quando si utilizza `_set_se_translator` da codice gestito (codice compilato con /clr) o codice misto nativo e gestito, tenere presente che la conversione interessa le eccezioni generate soltanto nel codice nativo. Le eccezioni gestite generate nel codice gestito (ad esempio, quando viene generata `System::Exception`) non vengono indirizzate attraverso la funzione di conversione. Le eccezioni generate nel codice gestito che utilizzano la funzione `RaiseException` Win32 o causate da un'eccezione di sistema come un'eccezione di divisione per zero vengono indirizzate attraverso il convertitore.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`_set_se_translator`|\<eh.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```cpp
// crt_settrans.cpp
// compile with: cl /W4 /EHa crt_settrans.cpp
#include <stdio.h>
#include <windows.h>
#include <eh.h>

class SE_Exception
{
private:
    unsigned int nSE;
public:
    SE_Exception() : nSE{ 0 } {}
    SE_Exception( unsigned int n ) : nSE{ n } {}
    unsigned int getSeNumber() { return nSE; }
};

void SEFunc()
{
    __try
    {
        printf( "In __try, about to force exception\n" );
        int x = 5;
        int y = 0;
        int *p = &y;
        *p = x / *p;
    }
    __finally
    {
        printf( "In __finally\n" );
    }
}

void trans_func(unsigned int u, EXCEPTION_POINTERS*)
{
    throw SE_Exception(u);
}

int main()
{
    auto original = _set_se_translator(trans_func); 
    try
    {
        SEFunc();
    }
    catch(SE_Exception& e)
    {
        printf("Caught a __try exception, error %8.8x.\n", e.getSeNumber());
    }
    _set_se_translator(original);
}
```

```Output
In __try, about to force exception
In __finally
Caught a __try exception, error c0000094.
```

## <a name="example"></a>Esempio

Sebbene la funzionalità fornita da `_set_se_translator` non è disponibile nel codice gestito, è possibile utilizzare questo mapping nel codice nativo, anche se il codice nativo si trova in una compilazione sotto l'opzione `/clr`, purché il codice nativo sia indicato utilizzando `#pragma unmanaged`. Se viene generata un'eccezione strutturata in codice gestito che è necessario eseguire il mapping, il codice che genera e gestisce l'eccezione deve essere contrassegnato `#pragma unmanaged`. Il codice seguente illustra un possibile utilizzo. Per altre informazioni, vedere [Direttive pragma e parola chiave __Pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md).

```cpp
// crt_set_se_translator_clr.cpp
// compile with: cl /W4 /clr crt_set_se_translator_clr.cpp
#include <windows.h>
#include <eh.h>
#include <assert.h>
#include <stdio.h>

int thrower_func(int i) {
   int y = 0;
   int *p = &y;
   *p = i / *p;
   return 0;
}

class CMyException{
private:
    unsigned int nSE;
public:
    CMyException() : nSE{ 0 } {}
    CMyException(unsigned int n) : nSE{ n } {}
    unsigned int getSeNumber() { return nSE; }
};

#pragma unmanaged
void my_trans_func(unsigned int u, PEXCEPTION_POINTERS)
{
    throw CMyException(u);
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

int main() {
    auto original = _set_se_translator(my_trans_func);
    DoTest();
    _set_se_translator(original);
}
```

```Output
Caught CMyException, error c0000094
```

## <a name="see-also"></a>Vedere anche

[Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)  
[set_terminate](../../c-runtime-library/reference/set-terminate-crt.md)  
[set_unexpected](../../c-runtime-library/reference/set-unexpected-crt.md)  
[terminate](../../c-runtime-library/reference/terminate-crt.md)  
[Imprevisto](../../c-runtime-library/reference/unexpected-crt.md)  

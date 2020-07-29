---
title: _set_se_translator
ms.date: 02/21/2018
api_name:
- _set_se_translator
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _set_se_translator
- set_se_translator
helpviewer_keywords:
- set_se_translator function
- exception handling, changing
- _set_se_translator function
ms.assetid: 280842bc-d72a-468b-a565-2d3db893ae0f
ms.openlocfilehash: f1c9446f9c3f0d637ea53d54584258959677b339
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232417"
---
# <a name="_set_se_translator"></a>_set_se_translator

Impostare una funzione di callback per thread per tradurre le eccezioni Win32 (eccezioni strutturate C) in eccezioni tipizzate C++.

## <a name="syntax"></a>Sintassi

```cpp
_se_translator_function _set_se_translator(
    _se_translator_function seTransFunction
);
```

### <a name="parameters"></a>Parametri

*seTransFunction*<br/>
Puntatore a una funzione di conversione di eccezioni strutturate C scritta dall'utente.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore alla funzione di conversione precedente registrata da **_set_se_translator**, in modo che la funzione precedente possa essere ripristinata in un secondo momento. Se non è stata impostata alcuna funzione precedente, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito. Questo valore può essere **`nullptr`** .

## <a name="remarks"></a>Osservazioni

La funzione **_set_se_translator** fornisce un modo per gestire le eccezioni Win32 (eccezioni strutturate C) come eccezioni tipizzate C++. Per consentire a ogni eccezione C di essere gestita da un **`catch`** gestore C++, definire innanzitutto una classe wrapper di eccezione c che può essere utilizzata o derivata da per attribuire un tipo di classe specifico a un'eccezione c. Per utilizzare questa classe, installare una funzione di conversione delle eccezioni C personalizzata che viene chiamata dal meccanismo interno di gestione delle eccezioni ogni volta che viene generata un'eccezione C. All'interno della funzione di conversione è possibile generare qualsiasi eccezione tipizzata che può essere rilevata da un gestore C++ corrispondente **`catch`** .

È necessario usare [/EHA](../../build/reference/eh-exception-handling-model.md) quando si usa **_set_se_translator**.

Per specificare una funzione di conversione personalizzata, chiamare **_set_se_translator** usando il nome della funzione di conversione come argomento. La funzione di conversione che si scrive viene chiamata una volta per ogni chiamata di funzione nello stack con **`try`** blocchi. Non esiste una funzione di conversione predefinita.

La funzione di conversione non dovrebbe fare altro che generare un'eccezione tipizzata C++. Se effettua altre operazioni oltre alla generazione (ad esempio, la scrittura in un file di log), il programma potrebbe non comportarsi come previsto, poiché il numero di volte in cui la funzione di conversione viene richiamata è dipendente dalla piattaforma.

In un ambiente con multithreading, le funzioni di conversione vengono mantenute separatamente per ogni thread. Ogni nuovo thread richiede l'installazione della propria funzione di conversione. Quindi, ogni thread è responsabile della propria gestione di conversione. **_set_se_translator** è specifico di un thread. un'altra DLL può installare una funzione di conversione diversa.

La funzione *seTransFunction* scritta deve essere una funzione compilata nativamente (non compilata con/CLR). Deve prendere un Unsigned Integer e un puntatore a una struttura di **_EXCEPTION_POINTERS** Win32 come argomenti. Gli argomenti sono i valori restituiti delle chiamate alle funzioni API Win32 **GetExceptionCode** e **GetExceptionInformation** , rispettivamente.

```cpp
typedef void (__cdecl *_se_translator_function)(unsigned int, struct _EXCEPTION_POINTERS* );
```

Per **_set_se_translator**, esistono implicazioni quando si esegue il collegamento dinamico a CRT; un'altra DLL nel processo potrebbe chiamare **_set_se_translator** e sostituire il gestore con il proprio.

Quando si utilizzano **_set_se_translator** da codice gestito (codice compilato con/CLR) o codice misto nativo e gestito, tenere presente che il traduttore influiscono sulle eccezioni generate solo nel codice nativo. Le eccezioni gestite generate nel codice gestito (ad esempio, quando viene generata `System::Exception`) non vengono indirizzate attraverso la funzione di conversione. Le eccezioni generate nel codice gestito utilizzando la funzione Win32 **RaiseException** o causate da un'eccezione di sistema come un'eccezione di divisione per zero vengono indirizzate attraverso il convertitore.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_set_se_translator**|\<eh.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo esempio esegue il wrapping delle chiamate per impostare un convertitore di eccezioni strutturate e per ripristinare quello precedente in una classe RAII `Scoped_SE_Translator` . Questa classe consente di introdurre un convertitore specifico dell'ambito come singola dichiarazione. Il distruttore della classe ripristina il convertitore originale quando il controllo lascia l'ambito.

```cpp
// crt_settrans.cpp
// compile with: cl /W4 /EHa crt_settrans.cpp
#include <stdio.h>
#include <windows.h>
#include <eh.h>
#include <exception>

class SE_Exception : public std::exception
{
private:
    const unsigned int nSE;
public:
    SE_Exception() noexcept : SE_Exception{ 0 } {}
    SE_Exception( unsigned int n ) noexcept : nSE{ n } {}
    unsigned int getSeNumber() const noexcept { return nSE; }
};

class Scoped_SE_Translator
{
private:
    const _se_translator_function old_SE_translator;
public:
    Scoped_SE_Translator( _se_translator_function new_SE_translator ) noexcept
        : old_SE_translator{ _set_se_translator( new_SE_translator ) } {}
    ~Scoped_SE_Translator() noexcept { _set_se_translator( old_SE_translator ); }
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

void trans_func( unsigned int u, EXCEPTION_POINTERS* )
{
    throw SE_Exception( u );
}

int main()
{
    Scoped_SE_Translator scoped_se_translator{ trans_func };
    try
    {
        SEFunc();
    }
    catch( const SE_Exception& e )
    {
        printf( "Caught a __try exception, error %8.8x.\n", e.getSeNumber() );
    }
}
```

```Output
In __try, about to force exception
In __finally
Caught a __try exception, error c0000094.
```

## <a name="example"></a>Esempio

Sebbene la funzionalità fornita da **_set_se_translator** non sia disponibile nel codice gestito, è possibile utilizzare questo mapping nel codice nativo, anche se il codice nativo si trova in una compilazione sotto l'opzione **/CLR** , purché il codice nativo venga indicato utilizzando `#pragma unmanaged` . Se viene generata un'eccezione strutturata nel codice gestito di cui è necessario eseguire il mapping, il codice che genera e gestisce l'eccezione deve essere contrassegnato `#pragma unmanaged` . Il codice seguente illustra un possibile utilizzo. Per altre informazioni, vedere [Direttive pragma e parola chiave __Pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md).

```cpp
// crt_set_se_translator_clr.cpp
// compile with: cl /W4 /clr crt_set_se_translator_clr.cpp
#include <windows.h>
#include <eh.h>
#include <stdio.h>
#include <exception>

int thrower_func( int i ) {
   int y = 0;
   int *p = &y;
   *p = i / *p;
   return 0;
}

class SE_Exception : public std::exception
{
private:
    const unsigned int nSE;
public:
    SE_Exception() noexcept : SE_Exception{ 0 } {}
    SE_Exception( unsigned int n ) noexcept : nSE{ n } {}
    unsigned int getSeNumber() const noexcept { return nSE; }
};

class Scoped_SE_Translator
{
private:
    const _se_translator_function old_SE_translator;
public:
    Scoped_SE_Translator( _se_translator_function new_SE_translator ) noexcept
        : old_SE_translator{ _set_se_translator( new_SE_translator ) } {}
    ~Scoped_SE_Translator() noexcept { _set_se_translator( old_SE_translator ); }
};

#pragma unmanaged
void my_trans_func( unsigned int u, PEXCEPTION_POINTERS )
{
    throw SE_Exception( u );
}

void DoTest()
{
    try
    {
        thrower_func( 10 );
    }
    catch( const SE_Exception& e )
    {
        printf( "Caught SE_Exception, error %8.8x\n", e.getSeNumber() );
    }
    catch(...)
    {
        printf( "Caught unexpected SEH exception.\n" );
    }
}
#pragma managed

int main() {
    Scoped_SE_Translator scoped_se_translator{ my_trans_func };

    DoTest();
}
```

```Output
Caught SE_Exception, error c0000094
```

## <a name="see-also"></a>Vedere anche

[Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)<br/>
[set_terminate](set-terminate-crt.md)<br/>
[set_unexpected](set-unexpected-crt.md)<br/>
[terminare](terminate-crt.md)<br/>
[inaspettato](unexpected-crt.md)<br/>

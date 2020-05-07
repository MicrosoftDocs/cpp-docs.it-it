---
title: _invalid_parameter, _invalid_parameter_noinfo, _invalid_parameter_noinfo_noreturn, _invoke_watson
ms.date: 4/2/2020
api_name:
- _invalid_parameter
- _invalid_parameter_noinfo
- _invalid_parameter_noinfo_noreturn
- _invoke_watson
- _o__invalid_parameter_noinfo
- _o__invalid_parameter_noinfo_noreturn
api_location:
- api-ms-win-crt-runtime-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- CORECRT/_invalid_parameter
- _invalid_parameter
- CORECRT/_invalid_parameter_noinfo
- _invalid_parameter_noinfo
- CORECRT/_invalid_parameter_noinfo_noreturn
- _invalid_parameter_noinfo_noreturn
- CORECRT/_invoke_watson
- _invoke_watson
ms.assetid: a4d6f1fd-ce56-4783-8719-927151a7a814
ms.openlocfilehash: 7138e9cb7381e4d40911054e1473536b6e639e2d
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82919829"
---
# <a name="_invalid_parameter-_invalid_parameter_noinfo-_invalid_parameter_noinfo_noreturn-_invoke_watson"></a>_invalid_parameter, _invalid_parameter_noinfo, _invalid_parameter_noinfo_noreturn, _invoke_watson

Queste funzioni vengono usate dalla libreria di runtime C per gestire i parametri non validi passati alle funzioni della libreria CRT. Il codice può anche usare queste funzioni per supportare la gestione predefinita o personalizzabile dei parametri non validi.

## <a name="syntax"></a>Sintassi

```C
extern "C" void __cdecl
_invalid_parameter(
    wchar_t const* const expression,
    wchar_t const* const function_name,
    wchar_t const* const file_name,
    unsigned int   const line_number,
    uintptr_t      const reserved);

extern "C" void __cdecl
_invalid_parameter_noinfo(void);

extern "C" __declspec(noreturn) void __cdecl
_invalid_parameter_noinfo_noreturn(void);

extern "C" __declspec(noreturn) void __cdecl
_invoke_watson(
    wchar_t const* const expression,
    wchar_t const* const function_name,
    wchar_t const* const file_name,
    unsigned int   const line_number,
    uintptr_t      const reserved);
```

## <a name="parameters"></a>Parametri

*expression*<br/>
Stringa che rappresenta l'espressione del parametro del codice sorgente che non è valido.

*function_name*<br/>
Nome della funzione che ha chiamato il gestore.

*file_name*<br/>
File di codice sorgente in cui è stato chiamato il gestore.

*line_number*<br/>
Numero di riga nel codice sorgente in cui è stato chiamato il gestore.

*riservati*<br/>
Non utilizzato.

## <a name="return-value"></a>Valore restituito

Queste funzioni non restituiscono un valore. Le funzioni **_invalid_parameter_noinfo_noreturn** e **_invoke_watson** non restituiscono al chiamante e, in alcuni casi, **_invalid_parameter** e **_invalid_parameter_noinfo** non possono tornare al chiamante.

## <a name="remarks"></a>Osservazioni

Quando alle funzioni della libreria di runtime C vengono passati parametri non validi, la libreria di funzioni chiama un *gestore di parametri non validi*, ovvero una funzione che può essere specificata dal programmatore per eseguire varie operazioni. Ad esempio, segnalare il problema all'utente, scrivere in un log, attivare un debugger, terminare il programma o niente. Se il programmatore non specifica alcuna funzione, viene chiamato un gestore predefinito **_invoke_watson**.

Per impostazione predefinita, quando un parametro non valido viene identificato nel codice di debug, le funzioni della libreria CRT chiamano la funzione **_invalid_parameter** usando parametri dettagliati. Nel codice non di debug viene chiamata la funzione **_invalid_parameter_noinfo** , che chiama la funzione **_invalid_parameter** utilizzando parametri vuoti. Se la funzione della libreria CRT non di debug richiede la terminazione del programma, viene chiamata la funzione **_invalid_parameter_noinfo_noreturn** , che chiama la funzione **_invalid_parameter** utilizzando parametri vuoti, seguito da una chiamata alla funzione **_invoke_watson** per forzare la terminazione del programma.

La funzione **_invalid_parameter** controlla se è stato impostato un gestore di parametri non validi definito dall'utente e, in caso affermativo, lo chiama. Ad esempio, se è stato impostato un gestore thread-local definito dall'utente da una chiamata a [set_thread_local_invalid_parameter_handler](set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md) nel thread corrente, viene chiamato tale gestore e quindi la funzione restituisce il controllo. Altrimenti, se è stato impostato un gestore di parametri non validi globale definito dall'utente da una chiamata a [set_invalid_parameter_handler](set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md), viene chiamato tale gestore e quindi la funzione restituisce il controllo. In caso contrario, viene chiamato il gestore predefinito **_invoke_watson** . Il comportamento predefinito di **_invoke_watson** consiste nel terminare il programma. I gestori definiti dall'utente possono terminare o restituire il controllo. È consigliabile che i gestori definiti dall'utente terminino il programma a meno che il ripristino non sia certo.

Quando viene chiamato il gestore predefinito **_invoke_watson** , se il processore supporta un'operazione di [__fastfail](../../intrinsics/fastfail.md) , viene richiamato usando un parametro di **FAST_FAIL_INVALID_ARG** e il processo viene terminato. In caso contrario, viene generata un'eccezione di errore immediato, che può essere intercettata da un debugger collegato. Se il processo può continuare, viene terminato da una chiamata alla funzione **TerminateProcess** di Windows utilizzando uno stato del codice di eccezione di **STATUS_INVALID_CRUNTIME_PARAMETER**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|
|--------------|------------------|
|**_invalid_parameter**, **_invalid_parameter_noinfo**, **_invalid_parameter_noinfo_noreturn**, **_invoke_watson**|\<corecrt.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[_get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler](get-invalid-parameter-handler-get-thread-local-invalid-parameter-handler.md)<br/>
[_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md)<br/>
[Convalida di parametri](../../c-runtime-library/parameter-validation.md)<br/>

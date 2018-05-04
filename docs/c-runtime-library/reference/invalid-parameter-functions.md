---
title: _invalid_parameter, _invalid_parameter_noinfo, _invalid_parameter_noinfo_noreturn, _invoke_watson | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
apiname:
- _invalid_parameter
- _invalid_parameter_noinfo
- _invalid_parameter_noinfo_noreturn
- _invoke_watson
apilocation:
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6b0fecd7eefe9ac6a7a479fb12475b2b1c769cf4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="invalidparameter-invalidparameternoinfo-invalidparameternoinfonoreturn-invokewatson"></a>_invalid_parameter, _invalid_parameter_noinfo, _invalid_parameter_noinfo_noreturn, _invoke_watson

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

*espressione* una stringa che rappresenta l'espressione del parametro di codice di origine che non è valido.

*nome_funzione* il nome della funzione che ha chiamato il gestore.

*file_name* file del codice sorgente in cui è stato chiamato il gestore.

*line_number* il numero di riga nel codice sorgente in cui è stato chiamato il gestore.

*riservato* inutilizzato.

## <a name="return-value"></a>Valore restituito

Queste funzioni non restituiscono un valore. Il **_invalid_parameter_noinfo_noreturn** e **_invoke_watson** funzioni non restituiscono al chiamante e in alcuni casi, **_invalid_parameter** e **_invalid_parameter_noinfo** non può restituire al chiamante.

## <a name="remarks"></a>Note

Quando alle funzioni della libreria di runtime C vengono passati parametri non validi, la libreria di funzioni chiama un *gestore di parametri non validi*, ovvero una funzione che può essere specificata dal programmatore per eseguire varie operazioni. Ad esempio, segnalare il problema all'utente, scrivere in un log, attivare un debugger, terminare il programma o niente. Se viene specificata alcuna funzione dal programmatore, un gestore predefinito, **_invoke_watson**, viene chiamato.

Per impostazione predefinita, quando un parametro non valido viene identificato nel codice di debug, funzioni della libreria CRT chiamano la funzione **_invalid_parameter** utilizzando i parametri dettagliati. Nel codice non di debug, il **_invalid_parameter_noinfo** funzione viene chiamata, che chiama il **_invalid_parameter** funzione utilizzo di parametri vuoti. Se la funzione della libreria CRT non di debug richiede la chiusura del programma, il **_invalid_parameter_noinfo_noreturn** funzione viene chiamata, che chiama il **_invalid_parameter** funzione usando vuoto i parametri, seguiti da una chiamata ai **_invoke_watson** (funzione) per forzare la chiusura del programma.

Il **_invalid_parameter** funzione controlla se è stato impostato un gestore di parametri non validi definiti dall'utente e in tal caso, lo chiama. Ad esempio, se è stato impostato un gestore thread-local definito dall'utente da una chiamata a [set_thread_local_invalid_parameter_handler](set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md) nel thread corrente, viene chiamato tale gestore e quindi la funzione restituisce il controllo. Altrimenti, se è stato impostato un gestore di parametri non validi globale definito dall'utente da una chiamata a [set_invalid_parameter_handler](set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md), viene chiamato tale gestore e quindi la funzione restituisce il controllo. In caso contrario, il gestore predefinito **_invoke_watson** viene chiamato. Il comportamento predefinito di **_invoke_watson** prevede l'interruzione del programma. I gestori definiti dall'utente possono terminare o restituire il controllo. È consigliabile che i gestori definiti dall'utente terminino il programma a meno che il ripristino non sia certo.

Quando il gestore predefinito **_invoke_watson** viene chiamato se il processore supporta un [__fastfail](../../intrinsics/fastfail.md) operazione, viene richiamato tramite un parametro di **FAST_FAIL_INVALID_ARG** e il processo viene terminato. In caso contrario, viene generata un'eccezione di errore immediato, che può essere intercettata da un debugger collegato. Se il processo può continuare, viene terminata da una chiamata alle finestre **TerminateProcess** funzione usando un stato del codice di eccezione **STATUS_INVALID_CRUNTIME_PARAMETER**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|------------------|
|**_invalid_parameter**, **_invalid_parameter_noinfo**, **_invalid_parameter_noinfo_noreturn**, **_invoke_watson**|\<corecrt.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[_get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler](get-invalid-parameter-handler-get-thread-local-invalid-parameter-handler.md)<br/>
[_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md)<br/>
[Convalida dei parametri](../../c-runtime-library/parameter-validation.md)<br/>

---
title: _invalid_parameter, _invalid_parameter_noinfo, _invalid_parameter_noinfo_noreturn, _invoke_watson | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _invalid_parameter
- _invalid_parameter_noinfo
- _invalid_parameter_noinfo_noreturn
- _invoke_watson
apilocation: api-ms-win-crt-runtime-l1-1-0.dll
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
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 49ae87567cd311e271a0ab50d7112a4a8f0c1b4a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="invalidparameter-invalidparameternoinfo-invalidparameternoinfonoreturn-invokewatson"></a>_invalid_parameter, _invalid_parameter_noinfo, _invalid_parameter_noinfo_noreturn, _invoke_watson
Queste funzioni vengono usate dalla libreria di runtime C per gestire i parametri non validi passati alle funzioni della libreria CRT. Il codice può anche usare queste funzioni per supportare la gestione predefinita o personalizzabile dei parametri non validi.

## <a name="syntax"></a>Sintassi
```
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

## <a name="return-value"></a>Valore restituito
Queste funzioni non restituiscono un valore. Le funzioni `_invalid_parameter_noinfo_noreturn` e `_invoke_watson` non restituiscono il controllo al chiamante e in alcuni casi, `_invalid_parameter` e `_invalid_parameter_noinfo` potrebbero non restituire il controllo al chiamante.

## <a name="parameters"></a>Parametri
`expression`  
Stringa che rappresenta l'espressione del parametro del codice sorgente che non è valido.

`function_name`  
Nome della funzione che ha chiamato il gestore.

`file_name`  
File di codice sorgente in cui è stato chiamato il gestore.

`line_number`  
Numero di riga nel codice sorgente in cui è stato chiamato il gestore.

`reserved`  
Non usato.

## <a name="remarks"></a>Note
Quando alle funzioni della libreria di runtime C vengono passati parametri non validi, la libreria di funzioni chiama un *gestore di parametri non validi*, ovvero una funzione che può essere specificata dal programmatore per eseguire varie operazioni. Ad esempio, segnalare il problema all'utente, scrivere in un log, attivare un debugger, terminare il programma o niente. Se il programmatore non specifica una funzione, viene chiamato un gestore predefinito, `_invoke_watson`.

Per impostazione predefinita, quando viene identificato un parametro non valido nel codice di debug, le funzioni della libreria CRT chiamano la funzione `_invalid_parameter` usando parametri dettagliati. Nel codice non di debug viene chiamata la funzione `_invalid_parameter_noinfo`, che chiama la funzione `_invalid_parameter` usando parametri vuoti. Se la funzione della libreria CRT non di debug richiede la terminazione del programma, viene chiamata la funzione `_invalid_parameter_noinfo_noreturn`, che chiama la funzione `_invalid_parameter` con parametri vuoti, quindi viene eseguita una chiamata della funzione `_invoke_watson` per forzare la terminazione del programma.

La funzione `_invalid_parameter` verifica se è stato impostato un gestore di parametri non validi definito dall'utente e, in caso affermativo, lo chiama. Ad esempio, se è stato impostato un gestore thread-local definito dall'utente da una chiamata a [set_thread_local_invalid_parameter_handler](../../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md) nel thread corrente, viene chiamato tale gestore e quindi la funzione restituisce il controllo. Altrimenti, se è stato impostato un gestore di parametri non validi globale definito dall'utente da una chiamata a [set_invalid_parameter_handler](../../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md), viene chiamato tale gestore e quindi la funzione restituisce il controllo. Altrimenti viene chiamato il gestore predefinito `_invoke_watson`. Il comportamento predefinito di `_invoke_watson` prevede la terminazione del programma. I gestori definiti dall'utente possono terminare o restituire il controllo. È consigliabile che i gestori definiti dall'utente terminino il programma a meno che il ripristino non sia certo. 

Quando viene chiamato il gestore predefinito `_invoke_watson`, se il processore supporta un'operazione [__fastfail](../../intrinsics/fastfail.md), viene richiamato con un parametro `FAST_FAIL_INVALID_ARG` e il processo viene terminato. In caso contrario, viene generata un'eccezione di errore immediato, che può essere intercettata da un debugger collegato. Se il processo può continuare, viene terminato da una chiamata alla funzione di Windows `TerminateProcess` con lo stato del codice di eccezione `STATUS_INVALID_CRUNTIME_PARAMETER`. 

## <a name="requirements"></a>Requisiti  
|Funzione|Intestazione obbligatoria|  
|--------------|------------------|  
|`_invalid_parameter`, `_invalid_parameter_noinfo`, `_invalid_parameter_noinfo_noreturn`, `_invoke_watson`|\<corecrt.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [_get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler](../../c-runtime-library/reference/get-invalid-parameter-handler-get-thread-local-invalid-parameter-handler.md)  
 [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](../../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md)  
 [Convalida dei parametri](../../c-runtime-library/parameter-validation.md)

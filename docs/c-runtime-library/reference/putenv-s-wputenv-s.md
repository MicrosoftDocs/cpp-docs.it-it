---
title: _putenv_s, _wputenv_s
ms.date: 11/04/2016
api_name:
- _wputenv_s
- _putenv_s
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
- api-ms-win-crt-environment-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- putenv_s
- wputenv_s
- _wputenv_s
- _putenv_s
helpviewer_keywords:
- wputenv_s function
- _putenv_s function
- environment variables, deleting
- putenv_s function
- _wputenv_s function
- environment variables, creating
- environment variables, modifying
ms.assetid: fbf51225-a8da-4b9b-9d7c-0b84ef72df18
ms.openlocfilehash: b2de609314a12f626a21680b470bc8831eada2cb
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70949896"
---
# <a name="_putenv_s-_wputenv_s"></a>_putenv_s, _wputenv_s

Crea, modifica o rimuove variabili di ambiente. Queste sono versioni di [_putenv, _wputenv](putenv-wputenv.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _putenv_s(
   const char *varname,
   const char *value_string
);
errno_t _wputenv_s(
   const wchar_t *varname,
   const wchar_t *value_string
);
```

### <a name="parameters"></a>Parametri

*varname*<br/>
Il nome della variabile di ambiente.

*value_string*<br/>
Il valore da impostare nella variabile di ambiente.

## <a name="return-value"></a>Valore restituito

Restituisce 0 se ha esito positivo o un codice di errore.

### <a name="error-conditions"></a>Condizioni di errore

|*varname*|*value_string*|Valore restituito|
|------------|-------------|------------------|
|**NULL**|qualsiasi|**EINVAL**|
|qualsiasi|**NULL**|**EINVAL**|

Se si verifica una delle condizioni di errore, queste funzioni richiamano un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **EINVAL** e impostano **errno** su **EINVAL**.

## <a name="remarks"></a>Note

La funzione **_putenv_s** aggiunge nuove variabili di ambiente o modifica i valori delle variabili di ambiente esistenti. Le variabili di ambiente definiscono l'ambiente in cui viene eseguito un processo (ad esempio, il percorso di ricerca predefinito per le librerie da collegare a un programma). **_wputenv_s** è una versione a caratteri wide di **_putenv_s**; l'argomento *stringaamb* per **_wputenv_s** è una stringa di caratteri wide.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tputenv_s**|**_putenv_s**|**_putenv_s**|**_wputenv_s**|

*VarName* è il nome della variabile di ambiente da aggiungere o modificare e *value_string* è il valore della variabile. Se *VarName* fa già parte dell'ambiente, il relativo valore viene sostituito da *value_string*; in caso contrario, la nuova variabile *VarName* e i relativi *value_string* vengono aggiunti all'ambiente. È possibile rimuovere una variabile dall'ambiente specificando una stringa vuota (ovvero "") per *value_string*.

**_putenv_s** e **_wputenv_s** influiscono solo sull'ambiente locale rispetto al processo corrente. non è possibile usarli per modificare l'ambiente a livello di comando. Queste funzioni sono disponibili solo nelle strutture dati accessibili dalla libreria di runtime e non nel "segmento" di ambiente creato per un processo dal sistema operativo. Quando il processo corrente termina, l'ambiente viene ripristinato al livello del processo chiamante che, nella maggior parte dei casi, è il livello del sistema operativo. Tuttavia, l'ambiente modificato può essere passato a tutti i nuovi processi creati da **_spawn**, **_exec**o **System**e questi nuovi processi ottengono tutti i nuovi elementi aggiunti da **_putenv_s** e **_wputenv_s**.

Non modificare direttamente una voce di ambiente. usare invece **_putenv_s** o **_wputenv_s** per modificarlo. In particolare, la liberazione diretta di elementi della matrice globale **environ []** potrebbe causare la richiamata della memoria non valida.

**getenv** e **_putenv_s** usano la variabile globale **Environ** per accedere alla tabella dell'ambiente. **_wgetenv** e **_wputenv_s** usano **_wenviron**. **_putenv_s** e **_wputenv_s** possono modificare il valore di **Environ** e **_wenviron**e pertanto invalidano l'argomento *envp* su **Main** e l'argomento **_wenvp** in **wmain**. Pertanto, è più sicuro usare **Environ** o **_wenviron** per accedere alle informazioni sull'ambiente. Per ulteriori informazioni sulla relazione tra **_putenv_s** e **_wputenv_s** e le variabili globali, vedere [Environ, _wenviron](../../c-runtime-library/environ-wenviron.md).

> [!NOTE]
> Le famiglie di funzioni **_putenv_s** e **_getenv_s** non sono thread-safe. **_getenv_s** potrebbe restituire un puntatore di stringa mentre **_putenv_s** sta modificando la stringa e causare quindi errori casuali. Assicurarsi che le chiamate alle funzioni siano sincronizzate.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_putenv_s**|\<stdlib.h>|
|**_wputenv_s**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Per un esempio che illustra come usare **_putenv_s**, vedere [getenv_s, _wgetenv_s](getenv-s-wgetenv-s.md).

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[getenv, _wgetenv](getenv-wgetenv.md)<br/>
[_searchenv, _wsearchenv](searchenv-wsearchenv.md)<br/>

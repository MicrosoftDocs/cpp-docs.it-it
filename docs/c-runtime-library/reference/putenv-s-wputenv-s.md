---
title: _putenv_s, _wputenv_s
ms.date: 11/04/2016
apiname:
- _wputenv_s
- _putenv_s
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
- api-ms-win-crt-environment-l1-1-0.dll
apitype: DLLExport
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
ms.openlocfilehash: f675c2c0a2b12db3cce841dd0db9fa722393f1b6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50558951"
---
# <a name="putenvs-wputenvs"></a>_putenv_s, _wputenv_s

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

Se si verifica una delle condizioni di errore, queste funzioni richiamano un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **EINVAL** e impostare **errno** al **EINVAL**.

## <a name="remarks"></a>Note

Il **putenv_s** funzione aggiunge nuove variabili di ambiente o modifica i valori delle variabili di ambiente esistente. Le variabili di ambiente definiscono l'ambiente in cui viene eseguito un processo (ad esempio, il percorso di ricerca predefinito per le librerie da collegare a un programma). **wputenv_s** è una versione a caratteri wide di **putenv_s**; gli *envstring* argomento **wputenv_s** è una stringa di caratteri "wide".

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tputenv_s**|**_putenv_s**|**_putenv_s**|**_wputenv_s**|

*VarName* è il nome della variabile di ambiente per essere aggiunti o modificati e *value_string* è il valore della variabile. Se *varname* fa già parte dell'ambiente, il valore viene sostituito dal *value_string*; in caso contrario, il nuovo *varname* variabile e il relativo *value_string*  vengono aggiunte all'ambiente. È possibile rimuovere una variabile dall'ambiente specificando una stringa vuota (ovvero, "") per *value_string*.

**putenv_s** e **wputenv_s** interessano solo l'ambiente locale per il processo corrente; non possono essere utilizzati per modificare l'ambiente a livello di comando. Queste funzioni sono disponibili solo nelle strutture dati accessibili dalla libreria di runtime e non nel "segmento" di ambiente creato per un processo dal sistema operativo. Quando il processo corrente termina, l'ambiente viene ripristinato al livello del processo chiamante che, nella maggior parte dei casi, è il livello del sistema operativo. Tuttavia, l'ambiente modificato può essere passato a tutti i nuovi processi creati da **spawn**, **Exec**, o **system**, e questi nuovi processi ottengono i nuovi elementi che sono aggiunto da **putenv_s** e **wputenv_s**.

Non modificare una voce dell'ambiente direttamente. Usare invece **putenv_s** oppure **wputenv_s** per modificarlo. In particolare, la liberazione diretta di elementi del **[] Environ** matrice globale può causare la memoria non valida da risolvere.

**getenv** e **putenv_s** usano la variabile globale **Environ** per accedere alla tabella di ambiente; **wgetenv** e **wputenv_s** usare **wenviron**. **putenv_s** e **wputenv_s** può modificare il valore di **Environ** e **wenviron**e pertanto invalidano il *envp*argomento di **principale** e il **_wenvp** argomento **wmain**. Pertanto, è preferibile usare **Environ** oppure **wenviron** per accedere alle informazioni di ambiente. Per altre informazioni sulla relazione tra **putenv_s** e **wputenv_s** le variabili globali, vedere [Environ, wenviron](../../c-runtime-library/environ-wenviron.md).

> [!NOTE]
> Il **putenv_s** e **_getenv_s** famiglie delle funzioni non sono thread-safe. **_getenv_s** potrebbe restituire un puntatore di stringa mentre **putenv_s** è modificando la stringa, causando errori casuali. Assicurarsi che le chiamate alle funzioni siano sincronizzate.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_putenv_s**|\<stdlib.h>|
|**_wputenv_s**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Per un esempio che illustra come usare **putenv_s**, vedere [getenv_s, wgetenv_s](getenv-s-wgetenv-s.md).

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[getenv, _wgetenv](getenv-wgetenv.md)<br/>
[_searchenv, _wsearchenv](searchenv-wsearchenv.md)<br/>

---
title: _putenv, _wputenv | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _putenv
- _wputenv
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
- _tputenv
- _wputenv
- _putenv
- wputenv
- tputenv
dev_langs:
- C++
helpviewer_keywords:
- _putenv function
- environment variables, deleting
- putenv function
- tputenv function
- environment variables, creating
- wputenv function
- _wputenv function
- _tputenv function
- environment variables, modifying
ms.assetid: 9ba9b7fd-276e-45df-8420-d70c4204b8bd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fc7841963584bef19faf60de0112eeea25cb7ffd
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="putenv-wputenv"></a>_putenv, _wputenv

Crea, modifica o rimuove variabili di ambiente. Sono disponibili versioni più sicure di queste funzioni. Vedere [_putenv_s, _wputenv_s](putenv-s-wputenv-s.md).

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _putenv(
   const char *envstring
);
int _wputenv(
   const wchar_t *envstring
);
```

### <a name="parameters"></a>Parametri

*envstring*<br/>
Definizione della stringa di ambiente.

## <a name="return-value"></a>Valore restituito

Restituisce 0 se ha esito positivo o -1 in caso di errore.

## <a name="remarks"></a>Note

Il **putenv** funzione aggiunge nuove variabili di ambiente o modifica i valori delle variabili di ambiente esistente. Le variabili di ambiente definiscono l'ambiente in cui viene eseguito un processo (ad esempio, il percorso di ricerca predefinito per le librerie da collegare a un programma). **wputenv** è una versione a caratteri wide **putenv**; il *envstring* argomento **wputenv** è una stringa di caratteri "wide".

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tputenv**|**_putenv**|**_putenv**|**_wputenv**|

Il *envstring* argomento deve essere un puntatore a una stringa nel formato *varname*=*value_string*, dove *varname* è il nome della variabile di ambiente per essere aggiunto o modificato e *value_string* è il valore della variabile. Se *varname* fa già parte dell'ambiente, il valore viene sostituito da *value_string*; in caso contrario, il nuovo *varname* variabile e il relativo *value_string*  valore vengono aggiunti all'ambiente. È possibile rimuovere una variabile dall'ambiente specificando un oggetto vuoto *value_string*, o in altre parole, tramite l'indicazione *varname*=.

**putenv** e **wputenv** interessano solo l'ambiente locale per il processo corrente; non possono essere utilizzati per modificare l'ambiente a livello di comando. Questo significa che le funzioni agiscono solo su strutture di dati accessibili dalla libreria di runtime e non nel segmento di ambiente creato per un processo dal sistema operativo. Al termine del processo corrente, l'ambiente viene ripristinato al livello del processo chiamante, ovvero nella maggior parte dei casi il livello del sistema operativo. Tuttavia, l'ambiente modificato può essere passato a tutti i nuovi processi creati **spawn**, **Exec**, o **sistema**, e questi nuovi processi ottengono i nuovi elementi aggiunti da **putenv** e **wputenv**.

Non modificare direttamente una voce dell'ambiente: in alternativa, usare **putenv** oppure **wputenv** per modificarlo. In particolare, liberando direttamente gli elementi del **[] Environ** memoria non validi sta risolvendo potrebbe causare matrice globale.

**getenv** e **putenv** usano la variabile globale **Environ** per accedere alla tabella di ambiente; **wgetenv** e **wputenv** utilizzare **wenviron**. **putenv** e **wputenv** potrebbe modificare il valore di **Environ** e **wenviron**, pertanto invalidazione la **_envp** argomenti per **principale** e il **_wenvp** argomento **wmain**. Pertanto, è preferibile usare **Environ** oppure **wenviron** per accedere alle informazioni di ambiente. Per ulteriori informazioni sulla relazione tra **putenv** e **wputenv** per le variabili globali, vedere [Environ, wenviron](../../c-runtime-library/environ-wenviron.md).

> [!NOTE]
> Il **putenv** e **_getenv** famiglie di funzioni non sono thread-safe. **_getenv** potrebbe restituire un puntatore di stringa mentre **putenv** sta modificando la stringa, causando errori casuali. Assicurarsi che le chiamate alle funzioni siano sincronizzate.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_putenv**|\<stdlib.h>|
|**_wputenv**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Per un esempio di utilizzo **putenv**, vedere [getenv, wgetenv](getenv-wgetenv.md).

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[getenv, _wgetenv](getenv-wgetenv.md)<br/>
[_searchenv, _wsearchenv](searchenv-wsearchenv.md)<br/>

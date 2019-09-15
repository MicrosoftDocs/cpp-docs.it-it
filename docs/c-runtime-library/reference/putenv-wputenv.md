---
title: _putenv, _wputenv
ms.date: 11/04/2016
api_name:
- _putenv
- _wputenv
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
- _tputenv
- _wputenv
- _putenv
- wputenv
- tputenv
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
ms.openlocfilehash: 8fe699a476ea1dd09a6ce9922294bce398df16b2
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70949888"
---
# <a name="_putenv-_wputenv"></a>_putenv, _wputenv

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

Restituisce 0 se ha esito positivo o-1 in caso di errore.

## <a name="remarks"></a>Note

La funzione **_putenv** aggiunge nuove variabili di ambiente o modifica i valori delle variabili di ambiente esistenti. Le variabili di ambiente definiscono l'ambiente in cui viene eseguito un processo (ad esempio, il percorso di ricerca predefinito per le librerie da collegare a un programma). **_wputenv** è una versione a caratteri wide di **_putenv**; l'argomento *stringaamb* per **_wputenv** è una stringa di caratteri wide.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tputenv**|**_putenv**|**_putenv**|**_wputenv**|

L'argomento *stringaamb* deve essere un puntatore a una stringa nel formato *VarName*=*value_string*, dove *VarName* è il nome della variabile di ambiente da aggiungere o modificare e *value_string* è la variabile valore. Se *VarName* fa già parte dell'ambiente, il relativo valore viene sostituito da *value_string*; in caso contrario, la nuova variabile *VarName* e il relativo valore *value_string* vengono aggiunti all'ambiente. È possibile rimuovere una variabile dall'ambiente specificando un *value_string*vuoto o, in altre parole, specificando solo *VarName*=.

**_putenv** e **_wputenv** influiscono solo sull'ambiente locale rispetto al processo corrente. non è possibile usarli per modificare l'ambiente a livello di comando. Questo significa che le funzioni agiscono solo su strutture di dati accessibili dalla libreria di runtime e non nel segmento di ambiente creato per un processo dal sistema operativo. Al termine del processo corrente, l'ambiente viene ripristinato al livello del processo chiamante, ovvero nella maggior parte dei casi il livello del sistema operativo. Tuttavia, l'ambiente modificato può essere passato a tutti i nuovi processi creati da **_spawn**, **_exec**o **System**e questi nuovi processi ottengono tutti i nuovi elementi aggiunti da **_putenv** e **_wputenv**.

Non modificare direttamente una voce di ambiente: usare invece **_putenv** o **_wputenv** per modificarla. In particolare, la liberazione diretta di elementi della matrice globale **environ []** potrebbe causare l'indirizzamento di una memoria non valida.

**getenv** e **_putenv** usano la variabile globale **Environ** per accedere alla tabella dell'ambiente. **_wgetenv** e **_wputenv** usano **_wenviron**. **_putenv** e **_wputenv** potrebbero modificare il valore di **Environ** e **_wenviron**, invalidando quindi l'argomento **_envp** in **Main** e l'argomento **_wenvp** in **wmain**. Pertanto, è più sicuro usare **Environ** o **_wenviron** per accedere alle informazioni sull'ambiente. Per ulteriori informazioni sulla relazione tra **_putenv** e **_wputenv** e le variabili globali, vedere [Environ, _wenviron](../../c-runtime-library/environ-wenviron.md).

> [!NOTE]
> Le famiglie di funzioni **_putenv** e **_getenv** non sono thread-safe. **_getenv** potrebbe restituire un puntatore di stringa mentre **_putenv** sta modificando la stringa, causando errori casuali. Assicurarsi che le chiamate alle funzioni siano sincronizzate.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_putenv**|\<stdlib.h>|
|**_wputenv**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Per un esempio di come usare **_putenv**, vedere [getenv, _wgetenv](getenv-wgetenv.md).

## <a name="see-also"></a>Vedere anche

[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[getenv, _wgetenv](getenv-wgetenv.md)<br/>
[_searchenv, _wsearchenv](searchenv-wsearchenv.md)<br/>

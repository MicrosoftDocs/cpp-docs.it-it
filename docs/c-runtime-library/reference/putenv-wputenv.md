---
description: 'Altre informazioni su: _putenv, _wputenv'
title: _putenv, _wputenv
ms.date: 4/2/2020
api_name:
- _putenv
- _wputenv
- _o__putenv
- _o__wputenv
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: 117250553eba7b2c8c1249140b610dc064e6b1fb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97258603"
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

*stringaamb*<br/>
Definizione della stringa di ambiente.

## <a name="return-value"></a>Valore restituito

Restituisce 0 se ha esito positivo o-1 in caso di errore.

## <a name="remarks"></a>Commenti

La funzione **_putenv** aggiunge nuove variabili di ambiente o modifica i valori delle variabili di ambiente esistenti. Le variabili di ambiente definiscono l'ambiente in cui viene eseguito un processo (ad esempio, il percorso di ricerca predefinito per le librerie da collegare a un programma). **_wputenv** è una versione a caratteri wide di **_putenv**; l'argomento *stringaamb* per **_wputenv** è una stringa di caratteri wide.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tputenv**|**_putenv**|**_putenv**|**_wputenv**|

L'argomento *stringaamb* deve essere un puntatore a una stringa nel formato *VarName* = *value_string*, dove *VarName* è il nome della variabile di ambiente da aggiungere o modificare e *value_string* è il valore della variabile. Se *VarName* fa già parte dell'ambiente, il valore viene sostituito da *value_string*; in caso contrario, la nuova variabile *VarName* e il relativo valore *value_string* vengono aggiunti all'ambiente. È possibile rimuovere una variabile dall'ambiente specificando un *value_string* vuoto o, in altre parole, specificando solo *VarName*=.

**_putenv** e **_wputenv** hanno effetto solo sull'ambiente locale rispetto al processo corrente. non è possibile usarli per modificare l'ambiente a livello di comando. Questo significa che le funzioni agiscono solo su strutture di dati accessibili dalla libreria di runtime e non nel segmento di ambiente creato per un processo dal sistema operativo. Al termine del processo corrente, l'ambiente viene ripristinato al livello del processo chiamante, ovvero nella maggior parte dei casi il livello del sistema operativo. Tuttavia, l'ambiente modificato può essere passato a tutti i nuovi processi creati da **_spawn**, **_exec** o **System** e questi nuovi processi ottengono tutti i nuovi elementi aggiunti da **_putenv** e **_wputenv**.

Non modificare direttamente una voce di ambiente: usare invece **_putenv** o **_wputenv** per modificarla. In particolare, la liberazione diretta di elementi della matrice globale **_environ []** potrebbe causare l'indirizzamento di una memoria non valida.

**getenv** e **_putenv** utilizzano la variabile globale **_environ** per accedere alla tabella dell'ambiente. **_wgetenv** e **_wputenv** utilizzare **_wenviron**. **_putenv** e **_wputenv** potrebbero modificare il valore di **_environ** e **_wenviron**, in modo da invalidare l'argomento **_envp** su **Main** e l'argomento **_wenvp** su **wmain**. Pertanto, è più sicuro usare **_environ** o **_wenviron** per accedere alle informazioni sull'ambiente. Per ulteriori informazioni sulla relazione tra **_putenv** e **_wputenv** a variabili globali, vedere [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).

> [!NOTE]
> Le famiglie di funzioni **_putenv** e **_getenv** non sono thread-safe. **_getenv** possibile restituire un puntatore di stringa mentre **_putenv** sta modificando la stringa, causando errori casuali. Assicurarsi che le chiamate alle funzioni siano sincronizzate.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_putenv**|\<stdlib.h>|
|**_wputenv**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Per un esempio di come usare **_putenv**, vedere [getenv, _wgetenv](getenv-wgetenv.md).

## <a name="see-also"></a>Vedi anche

[Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[getenv, _wgetenv](getenv-wgetenv.md)<br/>
[_searchenv, _wsearchenv](searchenv-wsearchenv.md)<br/>

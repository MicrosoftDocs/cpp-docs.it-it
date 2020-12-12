---
description: 'Altre informazioni su: errno, _doserrno, _sys_errlist e _sys_nerr'
title: errno, _doserrno, _sys_errlist, and _sys_nerr
ms.date: 11/04/2016
api_name:
- _errno
api_location:
- msvcrt.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _sys_errlist
- errno
- _sys_nerr
- _doserrno
helpviewer_keywords:
- error codes, printing
- sys_errlist global variable
- doserrno global variable
- errno global variable
- _doserrno global variable
- _sys_errlist global variable
- _sys_nerr global variable
- sys_nerr global variable
ms.assetid: adbec641-6d91-4e19-8398-9a34046bd369
ms.openlocfilehash: b15091ebfffec891b09f5024b14a8ca7fe0d02e1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331164"
---
# <a name="errno-_doserrno-_sys_errlist-and-_sys_nerr"></a>errno, _doserrno, _sys_errlist, and _sys_nerr

Macro globali che contengono i codici di errore impostati durante l'esecuzione del programma e stringhe equivalenti dei codici di errore per la visualizzazione.

## <a name="syntax"></a>Sintassi

```
#define errno   (*_errno())
#define _doserrno   (*__doserrno())
#define _sys_errlist (__sys_errlist())
#define _sys_nerr (*__sys_nerr())
```

## <a name="remarks"></a>Osservazioni

Entrambe le parole chiave `errno` e `_doserrno` vengono impostate su 0 dal runtime durante l'avvio del programma. `errno` è impostato su un errore in una chiamata a livello di sistema. Poiché `errno` contiene il valore dell'ultima chiamata che l'ha impostata, questo valore può essere modificato dalle chiamate successive. Le chiamate della libreria di runtime che impostano `errno` su un errore non cancellano `errno` in caso di operazione riuscita. Cancellare sempre `errno` chiamando `_set_errno(0)` immediatamente prima di una chiamata che potrebbe impostarla e verificarla immediatamente dopo la chiamata.

Al verificarsi di un errore, `errno` non viene necessariamente impostata sullo stesso valore del codice di errore restituito da una chiamata di sistema. Per le operazioni di I/O, `_doserrno` archivia i codici di errore equivalenti del sistema operativo dei codici `errno`. Per la maggior parte delle operazioni non di I/O, il valore di `_doserrno` non è definito.

Ogni valore `errno` è associato a un messaggio di errore in `_sys_errlist` che può essere stampato usando una delle funzioni [perror](../c-runtime-library/reference/perror-wperror.md) o archiviato in una stringa usando una delle funzioni [strerror](../c-runtime-library/reference/strerror-strerror-wcserror-wcserror.md) o [strerror_s](../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md). Le funzioni `perror` e `strerror` usano la matrice `_sys_errlist` e `_sys_nerr`, il numero di elementi in `_sys_errlist`, per elaborare le informazioni sugli errori. Per motivi di sicurezza del codice, l'accesso diretto a `_sys_errlist` e `_sys_nerr` è deprecato. È consigliabile usare le versioni funzionali più sicure anziché le macro globali, come illustrato di seguito:

|Macro globale|Equivalenti funzionali|
|------------------|----------------------------|
|`_doserrno`|[_get_doserrno](../c-runtime-library/reference/get-doserrno.md), [_set_doserrno](../c-runtime-library/reference/set-doserrno.md)|
|`errno`|[_get_errno](../c-runtime-library/reference/get-errno.md), [_set_errno](../c-runtime-library/reference/set-errno.md)|
|`_sys_errlist`, `_sys_nerr`|[strerror_s, _strerror_s, _wcserror_s, \_ _wcserror_s](../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md)|

Le routine matematiche della libreria impostano `errno` chiamando [_matherr](../c-runtime-library/reference/matherr.md). Per gestire gli errori matematici in modo diverso, scrivere una routine in base alla descrizione di riferimento di `_matherr` e assegnare ad essa il nome `_matherr`.

Tutti `errno` i valori nella tabella seguente sono costanti predefinite in \<errno.h> e sono compatibili con UNIX. Solo `ERANGE`, `EILSEQ` e `EDOM` sono specificate nello standard ISO C99.

|Costante|Messaggio di errore di sistema|Valore|
|--------------|--------------------------|-----------|
|`EPERM`|Operazione non consentita|1|
|`ENOENT`|No such file or directory (Causa: il file o la directory non esiste)|2|
|`ESRCH`|Nessun processo di questo tipo|3|
|`EINTR`|Funzione interrotta|4|
|`EIO`|Errore di I/O|5|
|`ENXIO`|Nessun dispositivo o indirizzo di questo tipo|6|
|`E2BIG`|Elenco degli argomenti troppo lungo|7|
|`ENOEXEC`|Errore di formato exec|8|
|`EBADF`|Numero file errato|9|
|`ECHILD`|Nessun processo generato|10|
|`EAGAIN`|Nessun altro processo, memoria insufficiente o raggiunto livello di annidamento massimo|11|
|`ENOMEM`|Memoria insufficiente|12|
|`EACCES`|Autorizzazione negata|13|
|`EFAULT`|Indirizzo errato|14|
|`EBUSY`|Dispositivo o risorsa occupata|16|
|`EEXIST`|File esistente|17|
|`EXDEV`|Collegamento incrociato dispositivo|18|
|`ENODEV`|Nessun dispositivo di questo tipo|19|
|`ENOTDIR`|Non è una directory|20|
|`EISDIR`|È una directory|21|
|`EINVAL`|Argomento non valido|22|
|`ENFILE`|Troppi file aperti nel sistema|23|
|`EMFILE`|Troppi file aperti|24|
|`ENOTTY`|Operazione di controllo di I/O non appropriata|25|
|`EFBIG`|File troppo grande|27|
|`ENOSPC`|Spazio esaurito sul dispositivo|28|
|`ESPIPE`|Ricerca non valida|29|
|`EROFS`|File system di sola lettura|30|
|`EMLINK`|Troppi collegamenti|31|
|`EPIPE`|Pipe interrotta|32|
|`EDOM`|Argomento matematico|33|
|`ERANGE`|Risultato troppo grande|34|
|`EDEADLK`|Si verificherebbe un deadlock delle risorse|36|
|`EDEADLOCK`|Equivale a EDEADLK per compatibilità con le versioni precedenti di Microsoft C|36|
|`ENAMETOOLONG`|Nome file troppo lungo|38|
|`ENOLCK`|Nessun blocco disponibile|39|
|`ENOSYS`|Funzione non supportata|40|
|`ENOTEMPTY`|Directory non vuota|41|
|`EILSEQ`|Sequenza di byte non valida|42|
|`STRUNCATE`|Stringa troncata|80|

## <a name="requirements"></a>Requisiti

|Macro globale|Intestazione obbligatoria|Intestazione facoltativa|
|------------------|---------------------|---------------------|
|`errno`|\<errno.h> o \<stdlib.h> o \<cerrno> \<cstdlib> (C++)||
|`_doserrno`, `_sys_errlist`, `_sys_nerr`|\<stdlib.h>, \<cstdlib> (C++)|\<errno.h>, \<cerrno> (C++)|

Le macro `_doserrno`, `_sys_errlist` e `_sys_nerr` sono estensioni Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibility](../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Variabili globali](../c-runtime-library/global-variables.md)<br/>
[Costanti errno](../c-runtime-library/errno-constants.md)<br/>
[perror, _wperror](../c-runtime-library/reference/perror-wperror.md)<br/>
[strerror, _strerror, _wcserror, \_ _wcserror](../c-runtime-library/reference/strerror-strerror-wcserror-wcserror.md)<br/>
[strerror_s, _strerror_s, _wcserror_s, \_ _wcserror_s](../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md)<br/>
[_get_doserrno](../c-runtime-library/reference/get-doserrno.md)<br/>
[_set_doserrno](../c-runtime-library/reference/set-doserrno.md)<br/>
[_get_errno](../c-runtime-library/reference/get-errno.md)<br/>
[_set_errno](../c-runtime-library/reference/set-errno.md)

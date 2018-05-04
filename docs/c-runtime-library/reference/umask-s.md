---
title: _umask_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _umask_s
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
- api-ms-win-crt-filesystem-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- unmask_s
- _umask_s
dev_langs:
- C++
helpviewer_keywords:
- masks, file-permission-setting
- _umask_s function
- masks
- file permissions [C++]
- umask_s function
- files [C++], permission settings for
ms.assetid: 70898f61-bf2b-4d8d-8291-0ccaa6d33145
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d45cb3ded6fd2c3d7a380069a7d7f3fd79619810
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="umasks"></a>_umask_s

Imposta la maschera di autorizzazione file predefinita. Questa è una versione di [_umask](umask.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _umask_s(
   int mode,
   int * pOldMode
);
```

### <a name="parameters"></a>Parametri

*mode*<br/>
Impostazione di autorizzazione predefinita.

*pOldMode*<br/>
Valore precedente dell'impostazione di autorizzazione.

## <a name="return-value"></a>Valore restituito

Restituisce un codice di errore se *modalità* non specifica una modalità valida o il *pOldMode* puntatore **NULL**.

### <a name="error-conditions"></a>Condizioni di errore

|*mode*|*pOldMode*|Valore restituito|Contenuto di *pOldMode*|
|------------|----------------|----------------------|--------------------------------|
|qualsiasi|**NULL**|**EINVAL**|non modificato|
|modalità non valida|qualsiasi|**EINVAL**|non modificato|

Se si verifica una delle condizioni precedenti, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **umask_s** restituisce **EINVAL** e imposta **errno** a **EINVAL**.

## <a name="remarks"></a>Note

Il **umask_s** funzione imposta la maschera di autorizzazione file del processo corrente per la modalità specificata dal *modalità*. La maschera di autorizzazione file modifica l'impostazione di autorizzazione dei nuovi file creati da **creat**, **Open**, o **sopen**. Se un bit nella maschera è impostato su 1, il bit corrispondente nel valore di autorizzazione richiesto del file è impostato su 0 (non consentito). Se un bit nella maschera è 0, il bit corrispondente viene lasciato invariato. L'impostazione di autorizzazione per un nuovo file non viene impostata fino a quando il file non viene chiuso per la prima volta.

L'espressione integer *pmode* contiene una o entrambe le costanti manifesto seguenti, definite in SYS\STAT. H:

|*pmode*||
|-|-|
|**S_IWRITE**|Scrittura consentita.|
|**S_IREAD**|Lettura consentita.|
|**S_IREAD** \| **S_IWRITE**|Lettura e scrittura consentite.|

Quando vengono fornite entrambe le costanti, queste sono combinate con l'operatore OR bit per bit ( **|** ). Se il *modalità* argomento **s_iread**, la lettura non è consentita (il file è di sola scrittura). Se il *modalità* argomento **s_iwrite**, la scrittura non è consentita (il file è di sola lettura). Ad esempio, se il bit di scrittura è impostato nella maschera, tutti i nuovi file saranno di sola lettura. Si noti che con MS-DOS e i sistemi operativi Windows, tutti i file sono leggibili; non è possibile fornire l'autorizzazione di sola scrittura. Pertanto, il bit di lettura con l'impostazione **umask_s** non influisce sulle modalità del file.

Se *pmode* non è una combinazione di una delle costanti manifesto o non include un set alternativo di costanti, la funzione semplicemente li ignorerà.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_umask_s**|\<io.h> e \<sys/stat.h> e \<sys/types.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_umask_s.c
/* This program uses _umask_s to set
* the file-permission mask so that all future
* files will be created as read-only files.
* It also displays the old mask.
*/

#include <sys/stat.h>
#include <sys/types.h>
#include <io.h>
#include <stdio.h>

int main( void )
{
   int oldmask, err;

   /* Create read-only files: */
   err = _umask_s( _S_IWRITE, &oldmask );
   if (err)
   {
      printf("Error setting the umask.\n");
      exit(1);
   }
   printf( "Oldmask = 0x%.4x\n", oldmask );
}
```

```Output
Oldmask = 0x0000
```

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[I/O a basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_chmod, _wchmod](chmod-wchmod.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_mkdir, _wmkdir](mkdir-wmkdir.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_umask](umask.md)<br/>

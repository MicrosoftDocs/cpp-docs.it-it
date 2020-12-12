---
description: 'Altre informazioni su: _umask_s'
title: _umask_s
ms.date: 4/2/2020
api_name:
- _umask_s
- _o__umask_s
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
- api-ms-win-crt-filesystem-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- unmask_s
- _umask_s
helpviewer_keywords:
- masks, file-permission-setting
- _umask_s function
- masks
- file permissions [C++]
- umask_s function
- files [C++], permission settings for
ms.assetid: 70898f61-bf2b-4d8d-8291-0ccaa6d33145
ms.openlocfilehash: 2a6877b656b17f38dfdf09419da5b64115575a9a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97239935"
---
# <a name="_umask_s"></a>_umask_s

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

Restituisce un codice di errore se la *modalità* non specifica una modalità valida o il puntatore *pOldMode* è **null**.

### <a name="error-conditions"></a>Condizioni di errore

|*mode*|*pOldMode*|Valore restituito|Contenuto di *pOldMode*|
|------------|----------------|----------------------|--------------------------------|
|any|**NULL**|**EINVAL**|non modificato|
|modalità non valida|any|**EINVAL**|non modificato|

Se si verifica una delle condizioni precedenti, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **_umask_s** restituisce **EINVAL** e imposta **errno** su **EINVAL**.

## <a name="remarks"></a>Commenti

La funzione **_umask_s** imposta la maschera di autorizzazione file del processo corrente sulla modalità specificata dalla *modalità*. La maschera di autorizzazione file modifica l'impostazione di autorizzazione dei nuovi file creati da **_creat**, **_open** o **_sopen**. Se un bit nella maschera è impostato su 1, il bit corrispondente nel valore di autorizzazione richiesto del file è impostato su 0 (non consentito). Se un bit nella maschera è 0, il bit corrispondente viene lasciato invariato. L'impostazione di autorizzazione per un nuovo file non viene impostata fino a quando il file non viene chiuso per la prima volta.

L'espressione integer *pmode* contiene una o entrambe le costanti manifeste seguenti, definite in SYS\STAT. H

|*pmode*||
|-|-|
|**_S_IWRITE**|Scrittura consentita.|
|**_S_IREAD**|Lettura consentita.|
|**_S_IREAD** \| **_S_IWRITE**|Lettura e scrittura consentite.|

Quando vengono specificate entrambe le costanti, queste vengono unite con l'operatore OR bit per bit ( **|** ). Se l'argomento *mode* è **_S_IREAD**, la lettura non è consentita (il file è di sola scrittura). Se l'argomento *mode* è **_S_IWRITE**, la scrittura non è consentita (il file è di sola lettura). Ad esempio, se il bit di scrittura è impostato nella maschera, tutti i nuovi file saranno di sola lettura. Si noti che con MS-DOS e i sistemi operativi Windows, tutti i file sono leggibili; non è possibile fornire l'autorizzazione di sola scrittura. Pertanto, l'impostazione del bit di lettura con **_umask_s** non ha alcun effetto sulle modalità del file.

Se *pmode* non è una combinazione di una delle costanti manifeste o incorpora un set alternativo di costanti, la funzione li ignorerà semplicemente.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

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
[I/O di basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_chmod, _wchmod](chmod-wchmod.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_mkdir, _wmkdir](mkdir-wmkdir.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_umask](umask.md)<br/>

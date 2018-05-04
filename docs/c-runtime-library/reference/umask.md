---
title: _umask | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _umask
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
- _umask
dev_langs:
- C++
helpviewer_keywords:
- masks, file-permission-setting
- _umask function
- masks
- umask function
- file permissions [C++]
- files [C++], permission settings for
ms.assetid: 5e9a13ba-5321-4536-8721-6afb6f4c8483
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ce3053bfb19cc81dff15d41d1b5bc6d405da619f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="umask"></a>_umask

Imposta la maschera di autorizzazione file predefinita. È disponibile una versione più sicura di questa funzione; vedere [_umask_s](umask-s.md).

## <a name="syntax"></a>Sintassi

```C
int _umask( int pmode );
```

### <a name="parameters"></a>Parametri

*pmode*<br/>
Impostazione di autorizzazione predefinita.

## <a name="return-value"></a>Valore restituito

**umask** restituisce il valore precedente della *pmode*. Non vi è restituzione di errori.

## <a name="remarks"></a>Note

Il **umask** funzione imposta la maschera di autorizzazione file del processo corrente per la modalità specificata dal *pmode*. La maschera di autorizzazione file modifica l'impostazione di autorizzazione dei nuovi file creati da **creat**, **Open**, o **sopen**. Se un bit nella maschera è impostato su 1, il bit corrispondente nel valore di autorizzazione richiesto del file è impostato su 0 (non consentito). Se un bit nella maschera è 0, il bit corrispondente viene lasciato invariato. L'impostazione di autorizzazione per un nuovo file non viene impostata fino a quando il file non viene chiuso per la prima volta.

L'espressione integer *pmode* contiene una o entrambe le costanti manifesto seguenti, definite in SYS\STAT. H:

|*pmode*||
|-|-|
**S_IWRITE**|Scrittura consentita.
**S_IREAD**|Lettura consentita.
**S_IREAD** \| **S_IWRITE**|Lettura e scrittura consentite.

Quando vengono fornite entrambe le costanti, queste sono combinate con l'operatore OR bit per bit ( **|** ). Se il *pmode* argomento **s_iread**, la lettura non è consentita (il file è di sola scrittura). Se il *pmode* argomento **s_iwrite**, la scrittura non è consentita (il file è di sola lettura). Ad esempio, se il bit di scrittura è impostato nella maschera, tutti i nuovi file saranno di sola lettura. Si noti che con MS-DOS e i sistemi operativi Windows, tutti i file sono leggibili; non è possibile fornire l'autorizzazione di sola scrittura. Pertanto, il bit di lettura con l'impostazione **umask** non influisce sulle modalità del file.

Se *pmode* non è una combinazione di una delle costanti manifesto o non include un set alternativo di costanti, la funzione semplicemente li ignorerà.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_umask**|\<io.h>, \<sys/stat.h>, \<sys/types.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_umask.c
// compile with: /W3
// This program uses _umask to set
// the file-permission mask so that all future
// files will be created as read-only files.
// It also displays the old mask.
#include <sys/stat.h>
#include <sys/types.h>
#include <io.h>
#include <stdio.h>

int main( void )
{
   int oldmask;

   /* Create read-only files: */
   oldmask = _umask( _S_IWRITE ); // C4996
   // Note: _umask is deprecated; consider using _umask_s instead
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

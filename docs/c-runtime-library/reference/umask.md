---
title: _umask
description: Riferimento API per _umask; che imposta la maschera di autorizzazione file predefinita.
ms.date: 4/2/2020
api_name:
- _umask
- _o__umask
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
- _umask
helpviewer_keywords:
- masks, file-permission-setting
- _umask function
- masks
- umask function
- file permissions [C++]
- files [C++], permission settings for
ms.assetid: 5e9a13ba-5321-4536-8721-6afb6f4c8483
ms.openlocfilehash: 3735ecd7ba194009945d3717982d7828ecee3c1e
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89554929"
---
# <a name="_umask"></a>_umask

Imposta la maschera di autorizzazione file predefinita. Per una versione più sicura di questa funzione, vedere [_umask_s](umask-s.md) .

## <a name="syntax"></a>Sintassi

```C
int _umask( int pmode );
```

### <a name="parameters"></a>Parametri

*pmode*<br/>
Impostazione di autorizzazione predefinita.

## <a name="return-value"></a>Valore restituito

**_umask** restituisce il valore precedente di *pmode*. Non viene restituito alcun errore.

## <a name="remarks"></a>Osservazioni

La funzione **_umask** imposta la maschera di autorizzazione file del processo corrente sulla modalità specificata da *pmode*. La maschera di autorizzazione file modifica l'impostazione di autorizzazione dei nuovi file creati da **_creat**, **_open**o **_sopen**. Se un bit nella maschera è impostato su 1, il bit corrispondente nel valore di autorizzazione richiesto del file è impostato su 0 (non consentito). Se un bit nella maschera è 0, il bit corrispondente viene lasciato invariato. L'impostazione di autorizzazione per un nuovo file non viene impostata fino a quando il file non viene chiuso per la prima volta.

L'espressione integer *pmode* contiene una o entrambe le costanti manifeste seguenti, definite in SYS\STAT. H

|*pmode*| |
|-|-|
| **_S_IWRITE** | Scrittura consentita. |
| **_S_IREAD** | Lettura consentita. |
| **_S_IREAD** &#124; **_S_IWRITE** | Lettura e scrittura consentite. |

Quando vengono specificate entrambe le costanti, queste vengono unite con l'operatore OR bit per bit ( **&#124;** ). Se l'argomento *pmode* è **_S_IREAD**, la lettura non è consentita (il file è di sola scrittura). Se l'argomento *pmode* è **_S_IWRITE**, la scrittura non è consentita (il file è di sola lettura). Ad esempio, se il bit di scrittura è impostato nella maschera, tutti i nuovi file saranno di sola lettura. Si noti che con MS-DOS e i sistemi operativi Windows, tutti i file sono leggibili; non è possibile fornire l'autorizzazione di sola scrittura. Pertanto, l'impostazione del bit di lettura con **_umask** non ha alcun effetto sulle modalità del file.

Se *pmode* non è una combinazione di una delle costanti manifeste o incorpora un set alternativo di costanti, la funzione li ignorerà semplicemente.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

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
[I/O di basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_chmod, _wchmod](chmod-wchmod.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_mkdir, _wmkdir](mkdir-wmkdir.md)<br/>
[_open, _wopen](open-wopen.md)<br/>

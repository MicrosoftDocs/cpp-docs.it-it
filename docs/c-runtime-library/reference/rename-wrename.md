---
description: 'Altre informazioni su: Rinomina, _wrename'
title: rename, _wrename
ms.date: 4/2/2020
api_name:
- rename
- _wrename
- _o__wrename
- _o_rename
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
- _wrename
- _trename
- Rename
helpviewer_keywords:
- trename function
- directories [C++], renaming
- renaming directories
- names [C++], changing file
- _trename function
- rename function
- wrename function
- files [C++], renaming
- _wrename function
- names [C++], changing directory
- renaming files
ms.assetid: 9f0a6103-26a2-4dda-b14b-79a48946266a
ms.openlocfilehash: 2a68bff031f321a2566c0da99aacc053ba475928
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322498"
---
# <a name="rename-_wrename"></a>rename, _wrename

Rinomina un file o una directory.

## <a name="syntax"></a>Sintassi

```C
int rename(
   const char *oldname,
   const char *newname
);
int _wrename(
   const wchar_t *oldname,
   const wchar_t *newname
);
```

### <a name="parameters"></a>Parametri

*oldname*<br/>
Puntatore al nome precedente.

*newname*<br/>
Puntatore al nome nuovo.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce 0 in caso di esito positivo. In seguito a un errore, la funzione restituisce un valore diverso da zero e imposta **errno** su uno dei valori seguenti:

|Valore errno|Condizione|
|-|-|
| **EACCES** | La directory o il file specificato da *newname* esiste già o non può essere creato (percorso non valido) oppure *oldname* è una directory e *newname* specifica un percorso diverso. |
| **ENOENT** | File o percorso specificato da *oldname* non trovato. |
| **EINVAL** | Il nome contiene caratteri non validi. |

Per altri possibili valori restituiti, vedere [doserrno, errno, syserrlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

La funzione **rename** rinomina la directory o il file specificato da *oldname* con il nome specificato da *newname*. Il nome precedente deve essere il percorso di un file o una directory esistente. Il nuovo nome deve essere il nome di un file o una directory esistente. È possibile usare **rename** per spostare un file da una directory o un dispositivo a un altro, assegnando a un percorso diverso nell'argomento *newname*. Non è tuttavia possibile usare **rename** per spostare una directory. Le directory possono essere rinominate, ma non spostate.

**_wrename** è una versione a caratteri wide di **_rename**; gli argomenti da **_wrename** sono stringhe a caratteri wide. **_wrename** e **_rename** si comportano in modo identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_trename**|**rename**|**rename**|**_wrename**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**rename**|\<io.h> o \<stdio.h>|
|**_wrename**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_renamer.c
/* This program attempts to rename a file named
* CRT_RENAMER.OBJ to CRT_RENAMER.JBO. For this operation
* to succeed, a file named CRT_RENAMER.OBJ must exist and
* a file named CRT_RENAMER.JBO must not exist.
*/

#include <stdio.h>

int main( void )
{
   int  result;
   char old[] = "CRT_RENAMER.OBJ", new[] = "CRT_RENAMER.JBO";

   /* Attempt to rename file: */
   result = rename( old, new );
   if( result != 0 )
      printf( "Could not rename '%s'\n", old );
   else
      printf( "File '%s' renamed to '%s'\n", old, new );
}
```

### <a name="output"></a>Output

```Output
File 'CRT_RENAMER.OBJ' renamed to 'CRT_RENAMER.JBO'
```

## <a name="see-also"></a>Vedi anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>

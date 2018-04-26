---
title: setbuf | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- setbuf
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- setbuf
dev_langs:
- C++
helpviewer_keywords:
- setbuf function
- stream buffering
ms.assetid: 13beda22-7b56-455d-8a6c-f2eb636885b9
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7a88ac98b8226b51ad036a0e31c919db9a63a0a0
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="setbuf"></a>setbuf

Controlla il buffering del flusso. Questa funzione è deprecata. In alternativa, usare [setvbuf](setvbuf.md).

## <a name="syntax"></a>Sintassi

```C
void setbuf(
   FILE *stream,
   char *buffer
);
```

### <a name="parameters"></a>Parametri

*flusso* puntatore **FILE** struttura.

*buffer* buffer allocato dall'utente.

## <a name="remarks"></a>Note

Il **setbuf** funzione memorizzazione nel buffer per i controlli *flusso*. Il *flusso* argomento deve fare riferimento a un file aperto che non è stato letto o scritto. Se il *buffer* argomento **NULL**, il flusso è non memorizzato nel buffer. Se non, il buffer deve puntare a una matrice di caratteri di lunghezza **BUFSIZ**, dove **BUFSIZ** è la dimensione del buffer, come definito in STDIO. H. Per il buffering di I/O viene usato il buffer specificato dall'utente, invece del buffer allocato dal sistema predefinito per il flusso specificato. Il **stderr** flusso è non memorizzato nel buffer per impostazione predefinita, ma è possibile utilizzare **setbuf** assegnare buffer **stderr**.

**setbuf** è stata sostituita da [setvbuf](setvbuf.md), ovvero la routine preferita per il nuovo codice. **setbuf** viene mantenuto per compatibilità con il codice esistente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**setbuf**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_setbuf.c
// compile with: /W3
// This program first opens files named DATA1 and
// DATA2. Then it uses setbuf to give DATA1 a user-assigned
// buffer and to change DATA2 so that it has no buffer.

#include <stdio.h>

int main( void )
{
   char buf[BUFSIZ];
   FILE *stream1, *stream2;

   fopen_s( &stream1, "data1", "a" );
   fopen_s( &stream2, "data2", "w" );

   if( (stream1 != NULL) && (stream2 != NULL) )
   {
      // "stream1" uses user-assigned buffer:
      setbuf( stream1, buf ); // C4996
      // Note: setbuf is deprecated; consider using setvbuf instead
      printf( "stream1 set to user-defined buffer at: %Fp\n", buf );

      // "stream2" is unbuffered
      setbuf( stream2, NULL ); // C4996
      printf( "stream2 buffering disabled\n" );
      _fcloseall();
   }
}
```

```Output
stream1 set to user-defined buffer at: 0012FCDC
stream2 buffering disabled
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[fflush](fflush.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[setvbuf](setvbuf.md)<br/>

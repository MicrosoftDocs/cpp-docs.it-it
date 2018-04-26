---
title: _getw | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _getw
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
- _getw
dev_langs:
- C++
helpviewer_keywords:
- _getw function
- integers, getting from streams
- getw function
ms.assetid: ef75facc-b84e-470f-9f5f-8746c90822a0
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2079672548a7f25106e7540580b60ac9fead8a36
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="getw"></a>_getw

Ottiene un Integer da un flusso.

## <a name="syntax"></a>Sintassi

```C
int _getw(
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*Flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

**getw** restituisce l'integer letto. Valore restituito di **EOF** indica un errore o fine del file. Tuttavia, poiché il **EOF** valore è anche un integer legittimo, utilizzare **feof** o **ferror** per verificare una condizione di errore o fine del file. Se *flusso* viene **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce **EOF**.

## <a name="remarks"></a>Note

Il **getw** funzione legge il seguente valore binario di tipo **int** dal file associato *flusso* e incrementa il puntatore del file associato (se presente) in modo da puntare il carattere successivo da leggere. **getw** non presuppone alcun allineamento speciale degli elementi nel flusso. I problemi con la portabilità possono verificarsi con **getw** perché le dimensioni del **int** tipo e l'ordine dei byte all'interno di **int** tipo differiscono fra sistemi.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_getw**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_getw.c
// This program uses _getw to read a word
// from a stream, then performs an error check.

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   FILE *stream;
   int i;

   if( fopen_s( &stream, "crt_getw.txt", "rb" ) )
      printf( "Couldn't open file\n" );
   else
   {
      // Read a word from the stream:
      i = _getw( stream );

      // If there is an error...
      if( ferror( stream ) )
      {
         printf( "_getw failed\n" );
         clearerr_s( stream );
      }
      else
         printf( "First data word in file: 0x%.4x\n", i );
      fclose( stream );
   }
}
```

### <a name="input-crtgetwtxt"></a>Input: crt_getw.txt

```Input
Line one.
Line two.
```

### <a name="output"></a>Output

```Output
First data word in file: 0x656e694c
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_putw](putw.md)<br/>

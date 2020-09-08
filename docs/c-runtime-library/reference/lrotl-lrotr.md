---
title: _lrotl, _lrotr
description: 'Informazioni di riferimento sulle API per _lrotl e _lrotr; che ruotano i bit a sinistra (_lrotl) o a destra (_lrotr). '
ms.date: 04/04/2018
api_name:
- _lrotl
- _lrotr
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
- api-ms-win-crt-utility-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- lrotr
- lrotl
- _lrotr
- _lrotl
helpviewer_keywords:
- lrotl function
- bits
- _lrotr function
- lrotr function
- rotating bits
- _lrotl function
- bits, rotating
ms.assetid: d42f295b-35f9-49d2-9ee4-c66896ffe68e
ms.openlocfilehash: ccd14f7aa6ba3c1278063593aecee20c6789110d
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555007"
---
# <a name="_lrotl-_lrotr"></a>_lrotl, _lrotr

Ruota i bit a sinistra (**_lrotl**) o a destra (**_lrotr**).

## <a name="syntax"></a>Sintassi

```C
unsigned long _lrotl( unsigned long value, int shift );
unsigned long _lrotr( unsigned long value, int shift );
```

### <a name="parameters"></a>Parametri

*value*<br/>
Valore da ruotare.

*shift*<br/>
Numero di bit di cui spostare *value*.

## <a name="return-value"></a>Valore restituito

Entrambe le funzioni restituiscono il valore ruotato. Non viene restituito alcun errore.

## <a name="remarks"></a>Osservazioni

Le funzioni **_lrotl** e **_lrotr** ruotano il *valore* in base a *Turn* bit. **_lrotl** ruota il valore a sinistra, verso un bit più significativo. **_lrotr** ruota il valore a destra, verso i bit meno significativi. Entrambe le funzioni ruotano i bit da una estremità all'altra di *value*.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_lrotl**, **_lrotr**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_lrot.c

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   unsigned long val = 0x0fac35791;

   printf( "0x%8.8lx rotated left eight bits is 0x%8.8lx\n",
            val, _lrotl( val, 8 ) );
   printf( "0x%8.8lx rotated right four bits is 0x%8.8lx\n",
            val, _lrotr( val, 4 ) );
}
```

```Output
0xfac35791 rotated left eight bits is 0xc35791fa
0xfac35791 rotated right four bits is 0x1fac3579
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_rotl, _rotl64, _rotr, _rotr64](rotl-rotl64-rotr-rotr64.md)<br/>

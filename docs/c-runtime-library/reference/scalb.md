---
description: 'Altre informazioni su: _scalb, _scalbf'
title: _scalb, _scalbf
ms.date: 1/15/2021
api_name:
- _scalb
- _scalbf
- _o__scalb
- _o__scalbf
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
- api-ms-win-crt-math-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- scalb
- _scalb
- _scalbf
helpviewer_keywords:
- exponential calculations
- _scalb function
- _scalbf function
- scalb function
ms.openlocfilehash: da5a33bd6ed24ba0a3a58f789a9c8900910454d1
ms.sourcegitcommit: 92dc6d99ba5dcf3b64dee164df2d29beb1e608da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/18/2021
ms.locfileid: "98564082"
---
# <a name="_scalb-_scalbf"></a>`_scalb`, `_scalbf`

Eleva l'argomento alla potenza di 2.

## <a name="syntax"></a>Sintassi

```C
double _scalb(
   double x,
   long exp
);
float _scalbf(
   float x,
   long exp
); /* x64 only */
```

### <a name="parameters"></a>Parametri

*`x`*\
Valore a virgola mobile e precisione doppia.

*`exp`*\
Esponente Long Integer.

## <a name="return-value"></a>Valore restituito

Restituisce un valore esponenziale se ha esito positivo. In caso di overflow (a seconda del segno di *`x`* ), **`_scalb`** restituisce +/- **`HUGE_VAL`** ; la **`errno`** variabile è impostata su **`ERANGE`** .

Per altre informazioni su questi e su altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

La **`_scalb`** funzione calcola il valore di *`x`* \* 2 <sup>*`exp`*</sup> .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**`_scalb`**, **`_scalbf`**|`<float.h>`|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[`ldexp`](ldexp.md)
---
title: scalb, _scalbf | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _scalb
- _scalbf
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
- api-ms-win-crt-math-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- scalb
- _scalb
- _scalbf
dev_langs:
- C++
helpviewer_keywords:
- exponential calculations
- _scalb function
- _scalbf function
- scalb function
ms.assetid: 148cf5a8-b405-44bf-a1f0-7487adba2421
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 47b6e20c6395337113088aa51d8ba75744421922
ms.sourcegitcommit: 7eadb968405bcb92ffa505e3ad8ac73483e59685
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/23/2018
ms.locfileid: "39207520"
---
# <a name="scalb-scalbf"></a>scalb, _scalbf

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

*x*<br/>
Valore a virgola mobile e precisione doppia.

*exp*<br/>
Esponente Long Integer.

## <a name="return-value"></a>Valore restituito

Restituisce un valore esponenziale se ha esito positivo. In caso di overflow (a seconda del segno di *x*), **scalb** restituisce + /- **HUGE_VAL**; il **errno** variabile è impostata su  **ERANGE**.

Per altre informazioni su questi e su altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **scalb** funzione calcola il valore di *x* \* 2<sup>*exp*</sup>.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**scalb**, **_scalbf**|\<float.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[ldexp](ldexp.md)<br/>

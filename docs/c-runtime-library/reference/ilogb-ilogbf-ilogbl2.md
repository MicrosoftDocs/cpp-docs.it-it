---
title: ilogb, ilogbf, ilogbl2
ms.date: 04/05/2018
api_name:
- ilogb
- ilogbf
- ilogbl
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- ilogb
- ilogbf
- ilogbl
- math/ilogb
- math/ilogbf
- math/ilogbl
helpviewer_keywords:
- ilogb function
- ilogbf function
- ilogbl function
ms.assetid: 9ef19d57-1caa-41d5-8233-2faad3562fcb
ms.openlocfilehash: 6feea7a242a066f669429944226f4ca6022505b6
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232521"
---
# <a name="ilogb-ilogbf-ilogbl"></a>ilogb, ilogbf, ilogbl

Restituisce un valore intero che rappresenta l'esponente in base 2 non distorto del valore specificato.

## <a name="syntax"></a>Sintassi

```C
int ilogb(
   double x
);

int ilogb(
   float x
); //C++ only

int ilogb(
   long double x
); //C++ only

int ilogbf(
   float x
);

int ilogbl(
   long double x
);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore specificato.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce l'esponente in base 2 di *x* come **`signed int`** valore.

In caso contrario, restituisce uno dei valori seguenti, definito in \<math.h> :

|Input|Risultato|
|-----------|------------|
|± 0|FP_ILOGB0|
|± INF, ± Nan, non definito|FP_ILOGBNAN|

Gli errori vengono segnalati come specificato in [matherr](matherr.md).

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **ilogb** che accettano e restituiscono i **`float`** tipi e **`long double`** . In un programma C **ilogb** accetta e restituisce sempre un oggetto **`double`** .

La chiamata a questa funzione è simile alla chiamata della funzione **logb** equivalente, quindi al cast del valore restituito a **`int`** .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**ilogb**, **ilogbf**, **ilogbl**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[frexp](frexp.md)<br/>
[logb, logbf, logbl, _logb, _logbf](logb-logbf-logbl-logb-logbf.md)<br/>

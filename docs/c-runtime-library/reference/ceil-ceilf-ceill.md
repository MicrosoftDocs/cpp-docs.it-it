---
title: ceil, ceilf, ceill
ms.date: 4/2/2020
api_name:
- ceilf
- ceil
- ceill
- _o_ceil
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
- ntdll.dll
- api-ms-win-crt-math-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- ceil
- ceilf
- ceill
helpviewer_keywords:
- calculating value ceilings
- ceill function
- ceil function
- ceilf function
ms.assetid: f4e5acab-5c8f-4b10-9ae2-9561e6453718
ms.openlocfilehash: 7567e5758e405235bca13bbae8a18c2d42ccbd3b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81333554"
---
# <a name="ceil-ceilf-ceill"></a>ceil, ceilf, ceill

Calcola il limite massimo di un valore.

## <a name="syntax"></a>Sintassi

```C
double ceil(
   double x
);
float ceil(
   float x
);  // C++ only
long double ceil(
   long double x
);  // C++ only
float ceilf(
   float x
);
long double ceill(
   long double x
);
```

### <a name="parameters"></a>Parametri

*X*<br/>
Valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

Le funzioni **ceil** restituiscono un valore a virgola mobile che rappresenta l'intero più piccolo maggiore o uguale a *x*. Non vi è restituzione di errori.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|**QNAN**, **IND**|none|**_DOMAIN**|

**ceil** ha un'implementazione che utilizza streaming SIMD Extensions 2 (SSE2). Per informazioni e le restrizioni sull'uso dell'implementazione SSE2, vedere [_set_SSE2_enable](set-sse2-enable.md).

## <a name="remarks"></a>Osservazioni

Dal fatto che il linguaggio C, è possibile chiamare overload di **ceil** che accettano tipi **float** o **long** **double.** In un programma C, **ceil** accetta e restituisce sempre un **valore double**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ceil**, **ceilf**, **ceill**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [floor](floor-floorf-floorl.md).

## <a name="see-also"></a>Vedere anche

[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[floor, floorf, floorl](floor-floorf-floorl.md)<br/>
[fmod, fmodf](fmod-fmodf.md)<br/>
[round, roundf, roundl](round-roundf-roundl.md)<br/>

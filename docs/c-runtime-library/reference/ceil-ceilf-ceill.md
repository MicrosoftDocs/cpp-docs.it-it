---
title: ceil, ceilf, ceill
ms.date: 6/5/2020
api_name:
- ceilf
- ceil
- ceill
- _o_ceil
- _o_ceilf
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: 284443f511217be7873a7d7b02562484b32cefca
ms.sourcegitcommit: fe146adb3a02872538637196bb3c45aeeeaaf5c2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/08/2020
ms.locfileid: "84507079"
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

*x*<br/>
Valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

Le **funzioni di** cella di sola risposta restituiscono un valore a virgola mobile che rappresenta il numero intero più piccolo maggiore o uguale a *x*. Non vi è restituzione di errori.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± **QNAN**, **IND**|Nessuno|**_DOMAIN**|

il valore di **cella ha un'** implementazione che usa Streaming SIMD Extensions 2 (SSE2). Per informazioni e le restrizioni sull'uso dell'implementazione SSE2, vedere [_set_SSE2_enable](set-sse2-enable.md).

## <a name="remarks"></a>Osservazioni

Poiché C++ **consente l'overload** , è possibile chiamare gli overload di un valore di cella che accettano tipi **float** o **Long** **Double** . In un programma C, **è sempre necessario** e restituisce un **valore Double**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ceil**cella, **ceilf**, **ceill**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [floor](floor-floorf-floorl.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[floor, floorf, floorl](floor-floorf-floorl.md)<br/>
[fmod, fmodf](fmod-fmodf.md)<br/>
[round, roundf, roundl](round-roundf-roundl.md)<br/>

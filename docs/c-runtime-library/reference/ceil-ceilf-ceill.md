---
title: ceil, ceilf, ceill
description: Riferimento API per calcuating il limite massimo di un valore con il valore di cella ().
ms.date: 9/1/2020
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
ms.openlocfilehash: 3079f52c79d6d888923025357bb21adc782aa5cd
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555243"
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
#define ceil(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*\
Valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

Le **funzioni di** cella di sola risposta restituiscono un valore a virgola mobile che rappresenta il numero intero più piccolo maggiore o uguale a *x*. Non viene restituito alcun errore.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± **QNAN**, **IND**|Nessuno|**_DOMAIN**|

il valore di **cella ha un'** implementazione che usa Streaming SIMD Extensions 2 (SSE2). Per informazioni e le restrizioni sull'uso dell'implementazione SSE2, vedere [_set_SSE2_enable](set-sse2-enable.md).

## <a name="remarks"></a>Osservazioni

Poiché C++ **consente l'overload** , è possibile chiamare gli overload di una cella che accettano i **`float`** **`long double`** tipi o. In un programma C, a meno che non si usi la \<tgmath.h> macro per chiamare questa funzione **ceil** , il numero di unità viene sempre eseguito e viene restituito un **`double`** .

Se si utilizza la <tgmath. h> `ceil()` macro, il tipo di argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ceil**cella, **ceilf**, **ceill**|\<math.h>|
|**macro di** cella | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [floor](floor-floorf-floorl.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[floor, floorf, floorl](floor-floorf-floorl.md)<br/>
[fmod, fmodf](fmod-fmodf.md)<br/>
[round, roundf, roundl](round-roundf-roundl.md)<br/>

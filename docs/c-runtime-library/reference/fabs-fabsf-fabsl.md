---
title: fabs, fabsf, fabsl
description: Informazioni di riferimento sulle API per fabs, fabsf e fabsl; che calcola il valore assoluto di un valore a virgola mobile.
ms.date: 1/15/2021
api_name:
- fabsf
- fabs
- fabsl
- _o_fabs
- _o_fabsf
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
- fabs
- fabsf
- fabsl
- "math\fabs"
- "math\fabsf"
- "math\fabsl"
helpviewer_keywords:
- absolute values
- fabsf function
- calculating absolute values
- fabs function
- fabsl function
ms.openlocfilehash: 453965b846dff9affb3fa6dce99ea8b6189a5d6c
ms.sourcegitcommit: 92dc6d99ba5dcf3b64dee164df2d29beb1e608da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/18/2021
ms.locfileid: "98563926"
---
# <a name="fabs-fabsf-fabsl"></a>`fabs`, `fabsf`, `fabsl`

Calcola il valore assoluto dell'argomento a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
double fabs(
   double x
);
float fabs(
   float x
); // C++ only
long double fabs(
   long double x
); // C++ only
float fabsf(
   float x
);
long double fabsl(
   long double x
);

#define fabs(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*`x`*\
Valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

Le **`fabs`** funzioni restituiscono il valore assoluto dell'argomento *x*. Non viene restituito alcun errore.

|Input|Eccezione SEH|`Matherr` eccezione|
|-----------|-------------------|-----------------------|
|± `QNAN`,`IND`|Nessuno|`_DOMAIN`|

## <a name="remarks"></a>Commenti

C++ consente l'overload, quindi è possibile chiamare gli overload di **`fabs`** se si include l' `<cmath>` intestazione. In un programma C, a meno che non si stia usando la `<tgmath.h>` macro per chiamare questa funzione, **`fabs`** accetta sempre e restituisce un **`double`** .

Se si usa la `<tgmath.h>` `fabs()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C obbligatoria|Intestazione C++ obbligatoria|
|--------------|-----------------------|---------------------------|
|**`fabs`**, **`fabsf`**, **`fabsl`**|`<math.h>`|`<cmath>` o `<math.h>`|
|**`fabs`** macro | `<tgmath.h>` ||

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [`abs`](abs-labs-llabs-abs64.md) .

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[`abs, labs, llabs, _abs64`](abs-labs-llabs-abs64.md)\
[`_cabs`](cabs.md)

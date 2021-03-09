---
description: 'Altre informazioni su: _set_SSE2_enable'
title: _set_SSE2_enable
ms.date: 04/05/2018
api_name:
- _set_SSE2_enable
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
- _set_SSE2_enable
- set_SSE2_enable
helpviewer_keywords:
- _set_SSE2_enable function
- Streaming SIMD Extensions 2 instructions
- set_SSE2_enable function
ms.assetid: 55db895d-fc1e-475a-9110-b781a9bb51c5
ms.openlocfilehash: f5b7bc8c0d18423ac981275e08dceef85197af4e
ms.sourcegitcommit: 90c300b74f6556cb5d989802d2e80d79542f55e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/09/2021
ms.locfileid: "102514512"
---
# <a name="_set_sse2_enable"></a>_set_SSE2_enable

Abilita o disabilita l'utilizzo di istruzioni Streaming SIMD Extensions 2 (SSE2) nelle routine matematiche CRT. (Questa funzione non è disponibile nelle architetture x64 perché SSE2 è abilitato per impostazione predefinita).

## <a name="syntax"></a>Sintassi

```C
int _set_SSE2_enable(
   int flag
);
```

### <a name="parameters"></a>Parametri

*flag*<br/>
1 per abilitare l'implementazione SSE2; 0 per disabilitare l'implementazione SSE2. Per impostazione predefinita, l'implementazione SSE2 è abilitata su processori che la supportano.

## <a name="return-value"></a>Valore restituito

Diverso da zero se l'implementazione SSE2 è abilitata; zero se l'implementazione SSE2 è disabilitata.

## <a name="remarks"></a>Commenti

Le funzioni seguenti dispongono di implementazioni SSE2 che possono essere abilitate tramite **_set_SSE2_enable**:

- [Atan](atan-atanf-atanl-atan2-atan2f-atan2l.md)

- [ceil](ceil-ceilf-ceill.md)

- [exp](exp-expf.md)

- [Floor](floor-floorf-floorl.md)

- [log](log-logf-log10-log10f.md)

- [log10](log-logf-log10-log10f.md)

- [modf](modf-modff-modfl.md)

- [POW](pow-powf-powl.md)

Le implementazioni SSE2 di queste funzioni potrebbero fornire risposte leggermente diverse dalle implementazioni predefinite, poiché i valori intermedi SSE2 sono quantità a virgola mobile a 64 bit, ma i valori intermedi di un'implementazione predefinita sono quantità a virgola mobile a 80 bit.

> [!NOTE]
> Se si usa l'opzione del compilatore [/OI (genera funzioni intrinseche)](../../build/reference/oi-generate-intrinsic-functions.md) per compilare il progetto, potrebbe sembrare che **_set_SSE2_enable** non abbia alcun effetto. L'opzione del compilatore **/OI** fornisce al compilatore l'autorità per utilizzare intrinseci per sostituire le chiamate CRT; Questo comportamento sostituisce l'effetto di **_set_SSE2_enable**. Se si vuole garantire che **/OI** non esegua l'override di **_set_SSE2_enable**, usare **/OI-** per compilare il progetto. Questa procedura può essere utile anche quando si usano altre opzioni del compilatore che implicano **/OI**.

L'implementazione SSE2 viene utilizzata solo se tutte le eccezioni sono mascherate. Usare [_control87, _controlfp](control87-controlfp-control87-2.md) per mascherare le eccezioni.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_set_SSE2_enable**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_set_SSE2_enable.c
// processor: x86
#include <math.h>
#include <stdio.h>

int main()
{
   int i = _set_SSE2_enable(1);

   if (i)
      printf("SSE2 enabled.\n");
   else
      printf("SSE2 not enabled; processor does not support SSE2.\n");
}
```

```Output
SSE2 enabled.
```

## <a name="see-also"></a>Vedere anche

[Runtime C (CRT) e file della libreria standard C++ (STL) `.lib`](../../c-runtime-library/crt-library-features.md)

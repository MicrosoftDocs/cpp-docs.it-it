---
title: _set_SSE2_enable | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _set_SSE2_enable
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
- _set_SSE2_enable
- set_SSE2_enable
dev_langs:
- C++
helpviewer_keywords:
- _set_SSE2_enable function
- Streaming SIMD Extensions 2 instructions
- set_SSE2_enable function
ms.assetid: 55db895d-fc1e-475a-9110-b781a9bb51c5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 45f4ed5333dd8ae6bab6291233391884e4efc7ff
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32407851"
---
# <a name="setsse2enable"></a>_set_SSE2_enable

Abilita o disabilita l'uso delle istruzioni Streaming SIMD Extensions 2 (SSE2) nelle routine matematiche CRT. (Questa funzione non è disponibile nelle architetture x64 perché SSE2 è abilitato per impostazione predefinita).

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

## <a name="remarks"></a>Note

Le funzioni seguenti dispongono di implementazioni SSE2 che possono essere abilitate utilizzando **_set_SSE2_enable**:

- [atan](atan-atanf-atanl-atan2-atan2f-atan2l.md)

- [ceil](ceil-ceilf-ceill.md)

- [exp](exp-expf.md)

- [floor](floor-floorf-floorl.md)

- [log](log-logf-log10-log10f.md)

- [log10](log-logf-log10-log10f.md)

- [modf](modf-modff-modfl.md)

- [pow](pow-powf-powl.md)

Le implementazioni SSE2 di queste funzioni potrebbero fornire risposte leggermente diverse dalle implementazioni predefinite, poiché i valori intermedi SSE2 sono quantità a virgola mobile a 64 bit, ma i valori intermedi di un'implementazione predefinita sono quantità a virgola mobile a 80 bit.

> [!NOTE]
> Se si utilizza il [/Oi (genera funzioni intrinseche)](../../build/reference/oi-generate-intrinsic-functions.md) l'opzione del compilatore per compilare il progetto, potrebbe sembrare che **_set_SSE2_enable** non ha alcun effetto. Il **/Oi** l'opzione del compilatore fornisce al compilatore l'autorità per utilizzare intrinseci per sostituire le chiamate CRT; questo comportamento sostituisce l'effetto dei **_set_SSE2_enable**. Se si desidera garantire che **/Oi** non esegue l'override **_set_SSE2_enable**, utilizzare **/Oi-** per compilare il progetto. Ciò potrebbe essere consigliabile quando si utilizzano altre opzioni del compilatore che implicano **/Oi**.

L'implementazione SSE2 viene utilizzata solo se tutte le eccezioni sono mascherate. Usare [_control87, _controlfp](control87-controlfp-control87-2.md) per mascherare le eccezioni.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_set_SSE2_enable**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

[Funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md)<br/>

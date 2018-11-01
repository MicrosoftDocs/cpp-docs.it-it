---
title: _get_FMA3_enable, _set_FMA3_enable
ms.date: 04/05/2018
apiname:
- _get_FMA3_enable
- _set_FMA3_enable
apilocation:
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _get_FMA3_enable
- _set_FMA3_enable
- math/_get_FMA3_enable
- math/_set_FMA3_enable
helpviewer_keywords:
- _get_FMA3_enable
- _set_FMA3_enable
ms.assetid: 4c1dc4bc-e86b-451b-9211-5a2ba6c98ee4
ms.openlocfilehash: 19eabc3b5a11246d5b0056bdafbb169e2a7de9f2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50544365"
---
# <a name="getfma3enable-setfma3enable"></a>_get_FMA3_enable, _set_FMA3_enable

Ottiene o imposta un flag che specifica se le funzioni della libreria a virgola mobile math trascendentale utilizzano istruzioni FMA3 nel codice compilato per X64 piattaforme.

## <a name="syntax"></a>Sintassi

```C
int _set_FMA3_enable(int flag);
int _get_FMA3_enable();
```

### <a name="parameters"></a>Parametri

*flag*<br/>
Impostare su 1 per abilitare le implementazioni FMA3 delle funzioni matematiche trascendentale libreria a virgola mobile e su X64 piattaforme, o su 0 per usare le implementazioni che non usano istruzioni FMA3.

## <a name="return-value"></a>Valore restituito

Un valore diverso da zero se sono abilitate le implementazioni FMA3 delle funzioni matematiche trascendentale libreria a virgola mobile. In caso contrario, zero.

## <a name="remarks"></a>Note

Usare la **_set_FMA3_enable** (funzione) per abilitare o disabilitare l'uso di istruzioni FMA3 nelle funzioni a virgola mobile di trascendentale matematiche della libreria CRT. Il valore restituito riflette l'implementazione in uso dopo la modifica. Se la CPU non supporta istruzioni FMA3, questa funzione non può abilitarle nella libreria e il valore restituito è uguale a zero. Uso **_get_FMA3_enable** per ottenere lo stato corrente della libreria. Per impostazione predefinita, in X64 piattaforme, il codice di avvio di CRT rileva se la CPU supporta istruzioni FMA3 e Abilita o disabilita le implementazioni FMA3 nella libreria.

Poiché le implementazioni FMA3 usano algoritmi diversi, piccole differenze per il risultato dei calcoli possono essere osservabili quando vengono abilitate o disabilitate le implementazioni FMA3, o tra computer che o non supportano FMA3. Per altre informazioni, vedere [problemi di migrazione a virgola mobile](../../porting/floating-point-migration-issues.md).

## <a name="requirements"></a>Requisiti

Il **_set_FMA3_enable** e **_get_FMA3_enable** funzioni sono disponibili solo in X64 versioni di CRT.

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_set_FMA3_enable**, **_get_FMA3_enable**| C: \<math.h><br />C++: \<cmath > o \<Math. h >|

Il **_set_FMA3_enable** e **_get_FMA3_enable** funzioni sono specifiche di Microsoft. Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Problemi relativi alla migrazione dei valori a virgola mobile](../../porting/floating-point-migration-issues.md)<br/>

---
title: _get_FMA3_enable, _set_FMA3_enable
ms.date: 04/05/2018
api_name:
- _get_FMA3_enable
- _set_FMA3_enable
api_location:
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-runtime-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _get_FMA3_enable
- _set_FMA3_enable
- math/_get_FMA3_enable
- math/_set_FMA3_enable
helpviewer_keywords:
- _get_FMA3_enable
- _set_FMA3_enable
ms.assetid: 4c1dc4bc-e86b-451b-9211-5a2ba6c98ee4
ms.openlocfilehash: dee75bf5b16b5fe5b619444f7f2736010bb42a84
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857810"
---
# <a name="_get_fma3_enable-_set_fma3_enable"></a>_get_FMA3_enable, _set_FMA3_enable

Ottiene o imposta un flag che specifica se le funzioni della libreria a virgola mobile per la matematica trascendentale utilizzano istruzioni FMA3 nel codice compilato per le piattaforme x64.

## <a name="syntax"></a>Sintassi

```C
int _set_FMA3_enable(int flag);
int _get_FMA3_enable();
```

### <a name="parameters"></a>Parametri

*flag*<br/>
Impostare su 1 per abilitare le implementazioni FMA3 delle funzioni della libreria a virgola mobile di calcolo trascendente su piattaforme x64 o su 0 per utilizzare le implementazioni che non utilizzano istruzioni FMA3.

## <a name="return-value"></a>Valore restituito

Valore diverso da zero se sono abilitate le implementazioni FMA3 delle funzioni della libreria a virgola mobile per la matematica trascendente. In caso contrario, zero.

## <a name="remarks"></a>Note

Usare la funzione **_set_FMA3_enable** per abilitare o disabilitare l'uso di istruzioni FMA3 nelle funzioni a virgola mobile matematiche trascendenti nella libreria CRT. Il valore restituito riflette l'implementazione in uso dopo la modifica. Se la CPU non supporta le istruzioni FMA3, questa funzione non può abilitarle nella libreria e il valore restituito è zero. Usare **_get_FMA3_enable** per ottenere lo stato corrente della libreria. Per impostazione predefinita, nelle piattaforme x64 il codice di avvio CRT rileva se la CPU supporta le istruzioni FMA3 e Abilita o Disabilita le implementazioni FMA3 nella libreria.

Poiché le implementazioni FMA3 utilizzano algoritmi diversi, le piccole differenze nel risultato dei calcoli possono essere osservabili quando le implementazioni di FMA3 sono abilitate o disabilitate oppure tra computer che eseguono o non supportano FMA3. Per ulteriori informazioni, vedere la pagina relativa ai [problemi di migrazione a virgola mobile](../../porting/floating-point-migration-issues.md).

## <a name="requirements"></a>Requisiti di

Le funzioni **_set_FMA3_enable** e **_get_FMA3_enable** sono disponibili solo nelle versioni x64 di CRT.

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_set_FMA3_enable**, **_get_FMA3_enable**| C: \<math.h><br />C++: \<cmath > o \<Math. h >|

Le funzioni **_set_FMA3_enable** e **_get_FMA3_enable** sono specifiche di Microsoft. Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Problemi relativi alla migrazione dei valori a virgola mobile](../../porting/floating-point-migration-issues.md)<br/>

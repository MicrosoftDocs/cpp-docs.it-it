---
title: _get_FMA3_enable, _set_FMA3_enable | Documenti Microsoft
ms.custom: 
ms.date: 6/13/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
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
dev_langs: C++
helpviewer_keywords:
- _get_FMA3_enable
- _set_FMA3_enable
ms.assetid: 4c1dc4bc-e86b-451b-9211-5a2ba6c98ee4
caps.latest.revision: "1"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: b4c5a5a76a56567e0c0dd41a70b569327eda1cd4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="getfma3enable-setfma3enable"></a>_get_FMA3_enable, _set_FMA3_enable
Ottiene o imposta un flag che specifica se le funzioni di libreria a virgola mobile matematiche trascendenti utilizzano FMA3 istruzioni nel codice compilato per X64 piattaforme.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _set_FMA3_enable(int flag);
int _get_FMA3_enable();
```  
  
### <a name="parameters"></a>Parametri
*flag*  
Impostare su 1 per abilitare le implementazioni di FMA3 il trascendenti matematica a virgola mobile di funzioni della libreria in X64 piattaforme, o su 0 per utilizzare le implementazioni che non usano istruzioni FMA3.
  
## <a name="return-value"></a>Valore restituito  
Un valore diverso da zero se sono abilitate le implementazioni di FMA3 il trascendenti matematica a virgola mobile di funzioni della libreria. In caso contrario, zero.  
  
## <a name="remarks"></a>Note  
Utilizzare il `_set_FMA3_enable` funzione per abilitare o disabilitare l'uso di istruzioni FMA3 nelle funzioni trascendenti matematica a virgola mobile nella libreria CRT. Il valore restituito riflette l'implementazione in uso dopo la modifica. Se la CPU non supporta istruzioni FMA3, questa funzione non è possibile abilitare nella libreria e il valore restituito è zero. Utilizzare `_get_FMA3_enable` per ottenere lo stato corrente della libreria. Per impostazione predefinita, in X64 piattaforme, il codice di avvio CRT rileva se supporta istruzioni FMA3, la CPU e Abilita o disabilita le implementazioni di FMA3 nella libreria.
  
Poiché le implementazioni FMA3 utilizzano algoritmi diversi, piccole differenze nel risultato dei calcoli potrebbero essere observable quando le implementazioni FMA3 vengono abilitate o disabilitate o tra computer che o non supportano FMA3. Per ulteriori informazioni, vedere [problemi relativi alla migrazione a virgola mobile](../../porting/floating-point-migration-issues.md).

## <a name="requirements"></a>Requisiti  
  
Il `_set_FMA3_enable` e `_get_FMA3_enable` funzioni sono disponibili solo in X64 versioni di CRT.  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_set_FMA3_enable` <br /><br /> `_get_FMA3_enable`| C: \<math.h><br /><br /> C++: \<cmath > o \<Math. h >|  
  
Le funzioni `_set_FMA3_enable` e `_get_FMA3_enable` sono specifiche di Microsoft. Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)
[problemi relativi alla migrazione a virgola mobile](../../porting/floating-point-migration-issues.md)  
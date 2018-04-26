---
title: srand | Microsoft Docs
ms.custom: ''
ms.date: 1/02/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- srand
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
- api-ms-win-crt-utility-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- srand
dev_langs:
- C++
helpviewer_keywords:
- random starting point
- random starting point, setting
- random numbers, generating
- srand function
- numbers, pseudorandom
- numbers, random
- pseudorandom numbers
- starting points, setting random
- starting points
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a01e56159bf4f04f2c8a53f39e3fcd1e7dd450b5
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="srand"></a>srand

Imposta il valore di inizializzazione iniziale per il generatore di numeri pseudocasuali utilizzato per il **rand** (funzione).

## <a name="syntax"></a>Sintassi

```C
void srand(
   unsigned int seed
);
```

### <a name="parameters"></a>Parametri

*valore di inizializzazione* valore di inizializzazione per la generazione di numeri pseudocasuale

## <a name="remarks"></a>Note

Il **srand** funzione imposta il punto di partenza per la generazione di una serie di valori integer pseudocasuale nel thread corrente. Per reinizializzare il generatore per creare la stessa sequenza di risultati, chiamare il **srand** funzione e utilizzano la stessa *seme* nuovo argomento. Qualsiasi altro valore per *valore di inizializzazione* imposta il generatore in un altro punto di partenza nella sequenza pseudocasuale. **rand** recupera i numeri pseudocasuali che vengono generati. La chiamata **rand** prima di qualsiasi chiamata a **srand** genera la stessa sequenza di chiamata **srand** con *valore di inizializzazione* passato come 1.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**srand**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [rand](rand.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[rand](rand.md)<br/>

---
title: srand | Microsoft Docs
ms.custom: ''
ms.date: 1/02/2018
ms.technology:
- cpp-standard-libraries
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
ms.workload:
- cplusplus
ms.openlocfilehash: 7972ddfe6ae9c1d591bdbd4cc5e208d78e826037
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44107550"
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

*seed*<br/>
Valore di inizializzazione per la generazione di numeri pseudocasuali

## <a name="remarks"></a>Note

Il **srand** funzione imposta il punto di partenza per la generazione di una serie di interi pseudocasuali nel thread corrente. Per reinizializzare il generatore per creare la stessa sequenza di risultati, chiamare il **srand** funzione, usare lo stesso *seed* nuovo argomento. Qualsiasi altro valore per *seed* imposta il generatore in un altro punto di partenza nella sequenza di numeri pseudocasuale. **la funzione RAND** recupera i numeri pseudocasuali generati. La chiamata **rand** prima di qualsiasi chiamata a **srand** genera la stessa sequenza della chiamata **srand** con *seed* passato come 1.

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

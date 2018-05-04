---
title: feupdateenv | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
apiname:
- feupdateenv
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
apitype: HeaderDef
f1_keywords:
- feupdateenv
- fenv/feupdateenv
dev_langs:
- C++
helpviewer_keywords:
- feupdateenv function
ms.assetid: 3d170042-dfd5-4e4f-a55f-038cf2296cc9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1d88284717aec7a19c936d7ed8d87da96006d7ed
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="feupdateenv"></a>feupdateenv

Salva le eccezioni a virgola mobile attualmente generate, ripristina lo stato dell'ambiente a virgola mobile specificato e genera quindi le eccezioni a virgola mobile salvate.

## <a name="syntax"></a>Sintassi

```C
int feupdateenv(
   const fenv_t* penv
);
```

### <a name="parameters"></a>Parametri

*penv*<br/>
Puntatore a un **fenv_t** oggetto che contiene un ambiente a virgola mobile come set da una chiamata a [fegetenv](fegetenv1.md) oppure [feholdexcept](feholdexcept2.md). È anche possibile specificare l'ambiente a virgola mobile di avvio predefinito tramite la macro FE_DFL_ENV.

## <a name="return-value"></a>Valore restituito

Restituisce 0 se tutte le operazioni sono state completate correttamente. In caso contrario, viene restituito un valore diverso da zero.

## <a name="remarks"></a>Note

Il **feupdateenv** funzione vengono eseguite più azioni. Archivia prima i flag di stato delle eccezioni a virgola mobile attualmente generati in un'archiviazione automatica. Quindi, viene impostato l'ambiente corrente a virgola mobile dal valore archiviato nel **fenv_t** oggetto a cui punta *penv*. Se *penv* non **FE_DFL_ENV** o non punta a un valore valido **fenv_t** dell'oggetto, comportamento successive non è definito. Infine **feupdateenv** genera le eccezioni a virgola mobile e archiviate in locale.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**feupdateenv**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[fegetenv](fegetenv1.md)<br/>
[feclearexcept](feclearexcept1.md)<br/>
[feholdexcept](feholdexcept2.md)<br/>
[fesetexceptflag](fesetexceptflag2.md)<br/>

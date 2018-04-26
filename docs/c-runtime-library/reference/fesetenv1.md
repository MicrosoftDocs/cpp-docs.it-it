---
title: fesetenv | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- fesetenv
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- fesetenv
- fenv/fesetenv
dev_langs:
- C++
helpviewer_keywords:
- fesetenv function
ms.assetid: ffc64fff-8ea7-4d59-9e04-ff96ef8cd012
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 466d37a55cbd0d4fdf3e1fc0eed085cb9fcb5b6a
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="fesetenv"></a>fesetenv

Imposta l'ambiente a virgola mobile corrente.

## <a name="syntax"></a>Sintassi

```C
int fesetenv(
   const fenv_t *penv
);
```

### <a name="parameters"></a>Parametri

*penv*<br/>
Puntatore a un **fenv_t** oggetto che contiene un ambiente a virgola mobile come set da una chiamata a [fegetenv](fegetenv1.md) oppure [feholdexcept](feholdexcept2.md). È inoltre possibile specificare l'ambiente a virgola mobile e di avvio predefinito utilizzando il **FE_DFL_ENV** macro.

## <a name="return-value"></a>Valore restituito

Restituisce 0 se l'ambiente è stato impostato correttamente. In caso contrario, viene restituito un valore diverso da zero.

## <a name="remarks"></a>Note

Il **fesetenv** funzione imposta l'ambiente corrente a virgola mobile dal valore archiviato nel **fenv_t** oggetto a cui punta *penv*. L'ambiente a virgola mobile è il set di flag dello stato e le modalità di controllo che influiscono sui calcoli a virgola mobile. Ciò include la modalità di arrotondamento e i flag di stato delle eccezioni a virgola mobile.  Se *penv* non **FE_DFL_ENV** o non punta a un valore valido **fenv_t** dell'oggetto, comportamento successive non è definito.

Una chiamata a questa funzione imposta l'eccezione di flag di stato che si trovano i *penv* oggetto, ma non genera eccezioni.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fesetenv**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fegetenv](fegetenv1.md)<br/>
[feclearexcept](feclearexcept1.md)<br/>
[feholdexcept](feholdexcept2.md)<br/>
[fesetexceptflag](fesetexceptflag2.md)<br/>

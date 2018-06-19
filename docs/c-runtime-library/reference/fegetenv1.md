---
title: fegetenv | Documenti Microsoft
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
apiname:
- fetegenv
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
- fegetenv
- fenv/fegetenv
dev_langs:
- C++
helpviewer_keywords:
- fetegenv function
ms.assetid: 68962421-6978-4b27-8e4c-ad1577830cf6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fc8b5d189838c2788bc6200f9072c9511e61d42f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32396170"
---
# <a name="fegetenv"></a>fegetenv

Archivia l'ambiente a virgola mobile corrente nell'oggetto specificato.

## <a name="syntax"></a>Sintassi

```C
int fegetenv(
   fenv_t *penv
);
```

### <a name="parameters"></a>Parametri

*penv*<br/>
Puntatore a un **fenv_t** oggetto che conterrà i valori a virgola mobile ambiente corrente.

## <a name="return-value"></a>Valore restituito

Restituisce 0 se l'ambiente a virgola mobile è stato correttamente archiviato *penv*. In caso contrario, viene restituito un valore diverso da zero.

## <a name="remarks"></a>Note

Il **fegetenv** funzione consente di archiviare l'ambiente a virgola mobile corrente dell'oggetto a cui puntata *penv*. L'ambiente a virgola mobile è il set di flag dello stato e le modalità di controllo che influiscono sui calcoli a virgola mobile. Ciò include la direzione della modalità di arrotondamento e i flag di stato delle eccezioni a virgola mobile.  Se *penv* non fa riferimento a un valore valido **fenv_t** dell'oggetto, comportamento successive non è definito.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fegetenv**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fesetenv](fesetenv1.md)<br/>

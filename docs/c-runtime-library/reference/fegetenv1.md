---
description: 'Altre informazioni su: fegetenv'
title: fegetenv
ms.date: 04/05/2018
api_name:
- fetegenv
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
- api-ms-win-crt-runtime-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- fegetenv
- fenv/fegetenv
helpviewer_keywords:
- fetegenv function
ms.assetid: 68962421-6978-4b27-8e4c-ad1577830cf6
ms.openlocfilehash: f4d6ab3de440d2d8d7e145111339577f04699f8b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322576"
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
Puntatore a un oggetto **fenv_t** per contenere i valori correnti dell'ambiente a virgola mobile.

## <a name="return-value"></a>Valore restituito

Restituisce 0 se l'ambiente a virgola mobile è stato archiviato correttamente in *penv*. In caso contrario, viene restituito un valore diverso da zero.

## <a name="remarks"></a>Commenti

La funzione **fegetenv** archivia l'ambiente a virgola mobile corrente nell'oggetto a cui fa riferimento *penv*. L'ambiente a virgola mobile è il set di flag dello stato e le modalità di controllo che influiscono sui calcoli a virgola mobile. Ciò include la direzione della modalità di arrotondamento e i flag di stato delle eccezioni a virgola mobile.  Se *penv* non punta a un oggetto **fenv_t** valido, il comportamento successivo non è definito.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fegetenv**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fesetenv](fesetenv1.md)<br/>

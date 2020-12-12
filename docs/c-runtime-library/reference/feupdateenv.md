---
description: 'Altre informazioni su: feupdateenv'
title: feupdateenv
ms.date: 04/05/2018
api_name:
- feupdateenv
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
api_type:
- HeaderDef
f1_keywords:
- feupdateenv
- fenv/feupdateenv
helpviewer_keywords:
- feupdateenv function
ms.assetid: 3d170042-dfd5-4e4f-a55f-038cf2296cc9
ms.openlocfilehash: 4e3fe47c6a03138f2bc82679eb5fc8e938678a17
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97289335"
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
Puntatore a un oggetto **fenv_t** che contiene un ambiente a virgola mobile impostato da una chiamata a [fegetenv](fegetenv1.md) o [feholdexcept](feholdexcept2.md). È anche possibile specificare l'ambiente a virgola mobile di avvio predefinito tramite la macro FE_DFL_ENV.

## <a name="return-value"></a>Valore restituito

Restituisce 0 se tutte le operazioni sono state completate correttamente. In caso contrario, viene restituito un valore diverso da zero.

## <a name="remarks"></a>Commenti

La funzione **feupdateenv** esegue più azioni. Archivia prima i flag di stato delle eccezioni a virgola mobile attualmente generati in un'archiviazione automatica. Imposta quindi l'ambiente a virgola mobile corrente dal valore archiviato nell'oggetto **fenv_t** a cui punta *penv*. Se *penv* non è **FE_DFL_ENV** o non punta a un oggetto **fenv_t** valido, il comportamento successivo non è definito. Infine, **feupdateenv** genera le eccezioni a virgola mobile archiviate localmente.

Per usare questa funzione, è necessario disattivare le ottimizzazioni a virgola mobile che potrebbero impedire l'accesso tramite la direttiva `#pragma fenv_access(on)` prima della chiamata. Per altre informazioni, vedere [fenv_access](../../preprocessor/fenv-access.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**feupdateenv**|\<fenv.h>|\<cfenv>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[fegetenv](fegetenv1.md)<br/>
[feclearexcept](feclearexcept1.md)<br/>
[feholdexcept](feholdexcept2.md)<br/>
[fesetexceptflag](fesetexceptflag2.md)<br/>

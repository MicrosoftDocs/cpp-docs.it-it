---
title: _local_unwind2
ms.date: 11/04/2016
apiname:
- _local_unwind2
apilocation:
- msvcr110_clr0400.dll
- msvcrt.dll
- msvcr100.dll
- msvcr110.dll
- msvcr80.dll
- msvcr90.dll
- msvcr120.dll
apitype: DLLExport
f1_keywords:
- _local_unwind2
- local_unwind2
helpviewer_keywords:
- _local_unwind2 function
- local_unwind2 function
ms.assetid: 44f1fa82-e01e-490f-a6e6-18fc6811c28c
ms.openlocfilehash: 8ae5c3937c9dedc54f0a936b91963419d59f79cc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50535408"
---
# <a name="localunwind2"></a>_local_unwind2

Funzione CRT interna. Esegue tutti i gestori di terminazione elencati nella tabella di ambito indicata.

## <a name="syntax"></a>Sintassi

```
void _local_unwind2(
   PEXCEPTION_REGISTRATION xr,
   int stop
);
```

#### <a name="parameters"></a>Parametri

*xr*<br/>
[in] Un record di registrazione associato a una tabella di ambito.

*stop*<br/>
[in] Il livello lessicale che indica dove `_local_unwind2` verrà arrestata.

## <a name="remarks"></a>Note

Questo metodo viene usato solo dall'ambiente di runtime. Non chiamare il metodo nel proprio codice.

Quando questo metodo esegue i gestori di terminazione, inizia al livello lessicale corrente e procede tra i livelli lessicali fino al raggiungimento del livello indicato da `stop`. Non esegue i gestori di terminazione al livello che viene indicato da `stop`.

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)
---
description: 'Altre informazioni su: _local_unwind2'
title: _local_unwind2
ms.date: 11/04/2016
api_name:
- _local_unwind2
api_location:
- msvcr110_clr0400.dll
- msvcrt.dll
- msvcr100.dll
- msvcr110.dll
- msvcr80.dll
- msvcr90.dll
- msvcr120.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _local_unwind2
- local_unwind2
helpviewer_keywords:
- _local_unwind2 function
- local_unwind2 function
ms.assetid: 44f1fa82-e01e-490f-a6e6-18fc6811c28c
ms.openlocfilehash: b2e3ca2f792abaa3ace54b25131d82c21aadf972
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97246409"
---
# <a name="_local_unwind2"></a>_local_unwind2

Funzione CRT interna. Esegue tutti i gestori di terminazione elencati nella tabella di ambito indicata.

## <a name="syntax"></a>Sintassi

```cpp
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

## <a name="remarks"></a>Commenti

Questo metodo viene usato solo dall'ambiente di runtime. Non chiamare il metodo nel proprio codice.

Quando questo metodo esegue i gestori di terminazione, inizia al livello lessicale corrente e procede tra i livelli lessicali fino al raggiungimento del livello indicato da `stop`. Non esegue i gestori di terminazione al livello che viene indicato da `stop`.

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)

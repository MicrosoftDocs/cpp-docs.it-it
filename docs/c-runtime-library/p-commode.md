---
title: __p__commode | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apiname:
- __p__commode
apilocation:
- msvcr110.dll
- msvcrt.dll
- msvcr120.dll
- msvcr90.dll
- msvcr100.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- __p__commode
dev_langs:
- C++
helpviewer_keywords:
- __p__commode
ms.assetid: 4380acb8-e3e4-409c-a60f-6205ac5189ce
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5f610b26c79201f3431b6263a002b59df7456cfe
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46082443"
---
# <a name="pcommode"></a>__p__commode

Punta alla variabile globale `_commode` che specifica la *modalità di commit di file* predefinita per operazioni di I/O dei file.

## <a name="syntax"></a>Sintassi

```cpp
int * __p__commode(
   );
```

## <a name="return-value"></a>Valore restituito

Puntatore alla variabile globale `_commode`.

## <a name="remarks"></a>Note

La funzione `__p__commode` è solo per uso interno e non deve essere chiamata dal codice utente.

La modalità di commit di file specifica quando i dati critici vengono scritti nel disco. Per altre informazioni, vedere [fflush](../c-runtime-library/reference/fflush.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__p\__commode|internal.h|
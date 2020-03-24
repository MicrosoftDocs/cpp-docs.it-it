---
title: __p__fmode
ms.date: 11/04/2016
api_name:
- __p__fmode
api_location:
- msvcr80.dll
- msvcr120.dll
- msvcr90.dll
- msvcrt.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr100.dll
- api-ms-win-crt-stdio-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __p__fmode
helpviewer_keywords:
- __p__fmode
ms.assetid: 1daa1394-81eb-43aa-a71b-4cc6acf3207b
ms.openlocfilehash: 2364a22d52c5bc418e4499a4a639c8e06559063a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80171450"
---
# <a name="__p__fmode"></a>__p__fmode

Punta alla variabile globale `_fmode` che specifica la *modalità di conversione di file* predefinita per operazioni di I/O dei file.

## <a name="syntax"></a>Sintassi

```cpp
int* __p__fmode(
   );
```

## <a name="return-value"></a>Valore restituito

Puntatore alla variabile globale `_fmode`.

## <a name="remarks"></a>Osservazioni

La funzione `__p__fmode` è solo per uso interno e non deve essere chiamata dal codice utente.

La modalità di conversione dei file specifica la conversione `binary` o `text` per le operazioni di I/O [_open](../c-runtime-library/reference/open-wopen.md) e [_pipe](../c-runtime-library/reference/pipe.md). Per altre informazioni, vedere [_fmode](../c-runtime-library/fmode.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__p\__fmode|stdlib.h|

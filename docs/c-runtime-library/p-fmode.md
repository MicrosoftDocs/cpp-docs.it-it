---
title: __p__fmode
ms.date: 11/04/2016
apiname:
- __p__fmode
apilocation:
- msvcr80.dll
- msvcr120.dll
- msvcr90.dll
- msvcrt.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr100.dll
apitype: DLLExport
f1_keywords:
- __p__fmode
helpviewer_keywords:
- __p__fmode
ms.assetid: 1daa1394-81eb-43aa-a71b-4cc6acf3207b
ms.openlocfilehash: 59687cca87d283682c4b7231b5f8c1a55ff512db
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50579715"
---
# <a name="pfmode"></a>__p__fmode

Punta alla variabile globale `_fmode` che specifica la *modalità di conversione di file* predefinita per operazioni di I/O dei file.

## <a name="syntax"></a>Sintassi

```cpp
int* __p__fmode(
   );
```

## <a name="return-value"></a>Valore restituito

Puntatore alla variabile globale `_fmode`.

## <a name="remarks"></a>Note

La funzione `__p__fmode` è solo per uso interno e non deve essere chiamata dal codice utente.

La modalità di conversione dei file specifica la conversione `binary` o `text` per le operazioni di I/O [_open](../c-runtime-library/reference/open-wopen.md) e [_pipe](../c-runtime-library/reference/pipe.md). Per altre informazioni, vedere [_fmode](../c-runtime-library/fmode.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__p\__fmode|stdlib.h|
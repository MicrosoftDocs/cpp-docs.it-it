---
title: __p__commode
ms.date: 4/2/2020
api_name:
- __p__commode
- _o___p__commode
api_location:
- msvcr110.dll
- msvcrt.dll
- msvcr120.dll
- msvcr90.dll
- msvcr100.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- api-ms-win-crt-stdio-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __p__commode
helpviewer_keywords:
- __p__commode
ms.assetid: 4380acb8-e3e4-409c-a60f-6205ac5189ce
ms.openlocfilehash: fa589c1972d27854e3f794d8283f49d9db5d053a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81349310"
---
# <a name="__p__commode"></a>__p__commode

Punta alla variabile globale `_commode` che specifica la *modalità di commit di file* predefinita per operazioni di I/O dei file.

## <a name="syntax"></a>Sintassi

```cpp
int * __p__commode(
   );
```

## <a name="return-value"></a>Valore restituito

Puntatore alla variabile globale `_commode`.

## <a name="remarks"></a>Osservazioni

La funzione `__p__commode` è solo per uso interno e non deve essere chiamata dal codice utente.

La modalità di commit di file specifica quando i dati critici vengono scritti nel disco. Per altre informazioni, vedere [fflush](../c-runtime-library/reference/fflush.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__p\__commode|internal.h|

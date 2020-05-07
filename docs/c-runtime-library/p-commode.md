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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __p__commode
helpviewer_keywords:
- __p__commode
ms.assetid: 4380acb8-e3e4-409c-a60f-6205ac5189ce
ms.openlocfilehash: 057a0146aed87a50fc2e8c444b97a8b7b51eada1
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82919506"
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

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__p\__commode|internal.h|

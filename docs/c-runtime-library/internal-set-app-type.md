---
title: __set_app_type
ms.date: 11/04/2016
api_name:
- __set_app_type
- _set_app_type
api_location:
- msvcr90.dll
- msvcr100.dll
- msvcr110.dll
- msvcr80.dll
- msvcrt.dll
- msvcr120.dll
- msvcr110_clr0400.dll
- api-ms-win-crt-runtime-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __set_app_type
helpviewer_keywords:
- __set_app_type
ms.assetid: f0ac0f4d-70e6-4e96-9e43-eb9d1515490c
ms.openlocfilehash: 8efe2159618f728cfaad33493dd482fbdd5375f7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80171489"
---
# <a name="__set_app_type"></a>__set_app_type

Imposta il tipo di applicazione corrente.

## <a name="syntax"></a>Sintassi

```cpp
void __set_app_type (
   int at
   )
```

#### <a name="parameters"></a>Parametri

*at*<br/>
Un valore che indica il tipo di applicazione. I valori possibili sono:

|valore|Descrizione|
|-----------|-----------------|
|_UNKNOWN_APP|Tipo di applicazione sconosciuto.|
|_CONSOLE_APP|Applicazione console (riga di comando).|
|_GUI_APP|Applicazione GUI (Windows).|

## <a name="remarks"></a>Osservazioni

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__set_app_type|internal.h|

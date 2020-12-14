---
description: 'Altre informazioni su: __set_app_type'
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
ms.openlocfilehash: 19aafebc4f7fd848804e21193332fb693af56010
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97246761"
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

|Valore|Description|
|-----------|-----------------|
|_UNKNOWN_APP|Tipo di applicazione sconosciuto.|
|_CONSOLE_APP|Applicazione console (riga di comando).|
|_GUI_APP|Applicazione GUI (Windows).|

## <a name="remarks"></a>Osservazioni

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__set_app_type|internal.h|

---
title: 'Enumerazione platform:: TypeCode | Microsoft Docs'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::TypeCode
dev_langs:
- C++
helpviewer_keywords:
- Platform::TypeCode Enumeration
ms.assetid: 93c1305f-eb16-4bec-aead-f88d9518b4cf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cb19a922655a77a2f7a2b5806c9b721f17e028f8
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44104173"
---
# <a name="platformtypecode-enumeration"></a>Platform::TypeCode (enumerazione)

Specifica una categoria numerica che rappresenta un tipo incorporato.

## <a name="syntax"></a>Sintassi

```cpp
enum class TypeCode {};
```

### <a name="members"></a>Membri

|Codice di tipo|Descrizione|
|---------------|-----------------|
|Booleano|Tipo Platform::Boolean.|
|Char16|Tipo default::char16.|
|DateTime|Tipo DateTime.|
|Decimale|Tipo numerico.|
|Double|Tipo default::float64.|
|Empty|Void|
|Int16|Tipo default::int16.|
|Int32|Tipo default::int32.|
|Int64|Tipo default::int64.|
|Int8|Tipo default::int8.|
|Object|Tipo Platform::Object.|
|Single|Tipo default::float32.|
|Stringa|Tipo Platform::String.|
|UInt16|Tipo default::uint16.|
|UInt32|Tipo default::uint32.|
|UInt64|Tipo default::uint64.|
|UInt8|Tipo default::uint8.|

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** platform.winmd
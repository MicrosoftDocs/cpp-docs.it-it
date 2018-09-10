---
title: 'Classe di valori platform:: sizet | Microsoft Docs'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/PlatformSizeT::SizeT constructor
dev_langs:
- C++
helpviewer_keywords:
- Platform::SizeT Struct
ms.assetid: 0803612c-8ba1-430c-9b7b-1bebae88608d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b78d205956f026fe730848afa4c0d6fe7b52b52c
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44102002"
---
# <a name="platformsizet-value-class"></a>Classe di valori Platform::SizeT

Rappresenta la dimensione di un oggetto. SizeT è un tipo di dati senza segno.

## <a name="syntax"></a>Sintassi

```cpp
public ref class SizeT sealed : ValueType
```

### <a name="members"></a>Membri

|Membro|Descrizione|
|------------|-----------------|
|[Costruttore SizeT::SizeT](#ctor)|Inizializza una nuova istanza della classe con il valore specificato.|

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** platform.winmd

## <a name="ctor"></a>  Costruttore sizet:: Sizet

Inizializza una nuova istanza di SizeT con il valore specificato.

### <a name="syntax"></a>Sintassi

```cpp
SizeT( uint32 value1 );   SizeT( void* value2 );
```

### <a name="parameters"></a>Parametri

*Value1*<br/>
Valore a 32 bit Unsigned.

*Value2*<br/>
Puntatore a un valore a 32 bit Unsigned.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
---
description: 'Altre informazioni su: classe di valori Platform:: SizeT'
title: Classe di valori Platform::SizeT
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/PlatformSizeT::SizeT constructor
helpviewer_keywords:
- Platform::SizeT Struct
ms.assetid: 0803612c-8ba1-430c-9b7b-1bebae88608d
ms.openlocfilehash: ebcca27a94d23082374daafaa9fd7db180955a30
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97308016"
---
# <a name="platformsizet-value-class"></a>Classe di valori Platform::SizeT

Rappresenta la dimensione di un oggetto. SizeT è un tipo di dati senza segno.

## <a name="syntax"></a>Sintassi

```cpp
public ref class SizeT sealed : ValueType
```

### <a name="members"></a>Members

|Membro|Descrizione|
|------------|-----------------|
|[Costruttore SizeT::SizeT](#ctor)|Inizializza una nuova istanza della classe con il valore specificato.|

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** Platform. winmd

## <a name="sizetsizet-constructor"></a><a name="ctor"></a> Costruttore SizeT:: SizeT

Inizializza una nuova istanza di SizeT con il valore specificato.

### <a name="syntax"></a>Sintassi

```cpp
SizeT( uint32 value1 );   SizeT( void* value2 );
```

### <a name="parameters"></a>Parametri

*value1*<br/>
Valore a 32 bit Unsigned.

*Value2*<br/>
Puntatore a un valore a 32 bit Unsigned.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)

---
title: Classe di valori Platform::SizeT
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/PlatformSizeT::SizeT constructor
helpviewer_keywords:
- Platform::SizeT Struct
ms.assetid: 0803612c-8ba1-430c-9b7b-1bebae88608d
ms.openlocfilehash: 7f81cb9e1fc2ef7a74cb3878c369e4d7d14e3d90
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62330141"
---
# <a name="platformsizet-value-class"></a>Classe di valori Platform::SizeT

Rappresenta la dimensione di un oggetto. SizeT è un tipo di dati senza segno.

## <a name="syntax"></a>Sintassi

```cpp
public ref class SizeT sealed : ValueType
```

### <a name="members"></a>Membri

|Member|Descrizione|
|------------|-----------------|
|[Costruttore SizeT::SizeT](#ctor)|Inizializza una nuova istanza della classe con il valore specificato.|

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Piattaforma

**Metadati:** platform.winmd

## <a name="ctor"></a>  Costruttore sizet:: Sizet

Inizializza una nuova istanza di SizeT con il valore specificato.

### <a name="syntax"></a>Sintassi

```cpp
SizeT( uint32 value1 );   SizeT( void* value2 );
```

### <a name="parameters"></a>Parametri

*value1*<br/>
Valore a 32 bit Unsigned.

*value2*<br/>
Puntatore a un valore a 32 bit Unsigned.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)

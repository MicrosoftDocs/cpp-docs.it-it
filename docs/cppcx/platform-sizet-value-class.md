---
title: Classe di valori Platform::SizeT
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/PlatformSizeT::SizeT constructor
helpviewer_keywords:
- Platform::SizeT Struct
ms.assetid: 0803612c-8ba1-430c-9b7b-1bebae88608d
ms.openlocfilehash: 5add9212dc2655bc37cd357741073f855b009bde
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81322153"
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

**Client minimo supportato:** Windows 8 (informazioni in due)

**Server minimo supportato:** Windows Server 2012 (informazioni in due)

**Spazio dei nomi:** Platform

**Metadati:** platform.winmd

## <a name="sizetsizet-constructor"></a><a name="ctor"></a>Costruttore SizeT::SizeT

Inizializza una nuova istanza di SizeT con il valore specificato.

### <a name="syntax"></a>Sintassi

```cpp
SizeT( uint32 value1 );   SizeT( void* value2 );
```

### <a name="parameters"></a>Parametri

*valore1*<br/>
Valore a 32 bit Unsigned.

*valore2*<br/>
Puntatore a un valore a 32 bit Unsigned.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)

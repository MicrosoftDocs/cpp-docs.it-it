---
title: Platform::MTAThreadAttribute (classe)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::MTAThreadAttribute::Equals
- VCCORLIB/Platform::MTAThreadAttribute::GetHashCode
- VCCORLIB/Platform::MTAThreadAttribute::ToString
helpviewer_keywords:
- Platform::MTAThreadAttribute Class
ms.assetid: bfc546a7-4333-4407-85b4-4721565e1f44
ms.openlocfilehash: 700eeae226be48c1f6659d621f2f5c0ed397bb7f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213047"
---
# <a name="platformmtathreadattribute-class"></a>Platform::MTAThreadAttribute (classe)

Indica che il modello di threading per un'applicazione è un apartment a thread multipli (MTA).

## <a name="syntax"></a>Sintassi

```
public ref class MTAThreadAttribute sealed : Attribute
```

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|Costruttore [MTAThreadAttribute 1](#ctor)|Inizializza una nuova istanza della classe.|

### <a name="public-methods"></a>Metodi pubblici

L'attributo MTAThreadAttribute eredita dalla [Classe Platform:: Object](../cppcx/platform-object-class.md). MTAThreadAttribute esegue anche l'overload o contiene i membri seguenti:

|Nome|Descrizione|
|----------|-----------------|
|[MTAThreadAttribute::Equals](#equals)|Determina se l'oggetto specificato è uguale all'oggetto corrente.|
|[MTAThreadAttribute::GetHashCode](#gethashcode)|Restituisce il codice hash per l'istanza.|
|[MTAThreadAttribute::ToString](#tostring)|Restituisce una stringa che rappresenta l'oggetto corrente.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Platform`

### <a name="requirements"></a>Requisiti

**Metadati:** Platform. winmd

**Spazio dei nomi:** Platform

## <a name="mtathreadattribute-constructor"></a><a name="ctor"></a>Costruttore MTAThreadAttribute

Inizializza una nuova istanza della classe MTAThreadAttribute.

### <a name="syntax"></a>Sintassi

```cpp
public:MTAThreadAttribute();
```

## <a name="mtathreadattributeequals"></a><a name="equals"></a>MTAThreadAttribute:: Equals

Determina se l'oggetto specificato è uguale all'oggetto corrente.

### <a name="syntax"></a>Sintassi

```cpp
public:virtual override bool Equals( Object^ obj );
```

### <a name="parameters"></a>Parametri

*obj*<br/>
Oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

**`true`** Se gli oggetti sono uguali; in caso contrario, **`false`** .

## <a name="mtathreadattributegethashcode"></a><a name="gethashcode"></a>MTAThreadAttribute:: GetHashCode

Restituisce il codice hash per l'istanza.

### <a name="syntax"></a>Sintassi

```cpp
public:int GetHashCode();
```

### <a name="return-value"></a>Valore restituito

Codice hash per l'istanza.

## <a name="mtathreadattributetostring"></a><a name="tostring"></a>MTAThreadAttribute:: ToString

Restituisce una stringa che rappresenta l'oggetto corrente.

### <a name="syntax"></a>Sintassi

```cpp
public:String^ ToString();
```

### <a name="return-value"></a>Valore restituito

Stringa che rappresenta l'oggetto corrente.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Platform](platform-namespace-c-cx.md)

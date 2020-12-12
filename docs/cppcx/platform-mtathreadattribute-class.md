---
description: 'Altre informazioni su: classe Platform:: MTAThreadAttribute'
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
ms.openlocfilehash: cc8586b37b4e5a1f6a6d0f33a27a21acca4aceb0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97308367"
---
# <a name="platformmtathreadattribute-class"></a>Platform::MTAThreadAttribute (classe)

Indica che il modello di threading per un'applicazione è un apartment a thread multipli (MTA).

## <a name="syntax"></a>Sintassi

```
public ref class MTAThreadAttribute sealed : Attribute
```

### <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|Costruttore [MTAThreadAttribute 1](#ctor)|Inizializza una nuova istanza della classe.|

### <a name="public-methods"></a>Metodi pubblici

L'attributo MTAThreadAttribute eredita dalla [Classe Platform:: Object](../cppcx/platform-object-class.md). MTAThreadAttribute esegue anche l'overload o contiene i membri seguenti:

|Nome|Description|
|----------|-----------------|
|[MTAThreadAttribute::Equals](#equals)|Determina se l'oggetto specificato è uguale all'oggetto corrente.|
|[MTAThreadAttribute::GetHashCode](#gethashcode)|Restituisce il codice hash per l'istanza.|
|[MTAThreadAttribute::ToString](#tostring)|Restituisce una stringa che rappresenta l'oggetto corrente.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Platform`

### <a name="requirements"></a>Requisiti

**Metadati:** Platform. winmd

**Spazio dei nomi:** Platform

## <a name="mtathreadattribute-constructor"></a><a name="ctor"></a> Costruttore MTAThreadAttribute

Inizializza una nuova istanza della classe MTAThreadAttribute.

### <a name="syntax"></a>Sintassi

```cpp
public:MTAThreadAttribute();
```

## <a name="mtathreadattributeequals"></a><a name="equals"></a> MTAThreadAttribute:: Equals

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

## <a name="mtathreadattributegethashcode"></a><a name="gethashcode"></a> MTAThreadAttribute:: GetHashCode

Restituisce il codice hash per l'istanza.

### <a name="syntax"></a>Sintassi

```cpp
public:int GetHashCode();
```

### <a name="return-value"></a>Valore restituito

Codice hash per l'istanza.

## <a name="mtathreadattributetostring"></a><a name="tostring"></a> MTAThreadAttribute:: ToString

Restituisce una stringa che rappresenta l'oggetto corrente.

### <a name="syntax"></a>Sintassi

```cpp
public:String^ ToString();
```

### <a name="return-value"></a>Valore restituito

Stringa che rappresenta l'oggetto corrente.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform](platform-namespace-c-cx.md)

---
description: 'Altre informazioni su: classe Platform:: STAThreadAttribute'
title: Platform::STAThreadAttribute (classe)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Platform
- COLLECTION/Platform::Platform::STAThreadAttribute constructor 1
- COLLECTION/Platform::Platform::STAThreadAttribute::Equals
- COLLECTION/Platform::Platform::STAThreadAttribute::GetHashCode
- COLLECTION/Platform::Platform::STAThreadAttribute::ToString
helpviewer_keywords:
- Platform::STAThreadAttribute Class
ms.assetid: f97960fc-e673-4d9e-910a-54c8415411c4
ms.openlocfilehash: a1c235ef9a171e650c960df184b081c4b6511cf1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97308003"
---
# <a name="platformstathreadattribute-class"></a>Platform::STAThreadAttribute (classe)

Indica che il modello di threading per un'applicazione è di tipo apartment a thread singolo (STA, Single-Threaded Apartment).

## <a name="syntax"></a>Sintassi

```
public ref class STAThreadAttribute sealed : Attribute
```

### <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore 1 STAThreadAttribute](#ctor)|Inizializza una nuova istanza della classe.|

### <a name="public-methods"></a>Metodi pubblici

L'attributo STAThreadAttribute eredita dalla [Classe Platform:: Object](../cppcx/platform-object-class.md). STAThreadAttribute esegue anche l'overload o contiene i membri seguenti:

|Nome|Description|
|----------|-----------------|
|[STAThreadAttribute::Equals](#equals)|Determina se l'oggetto specificato è uguale all'oggetto corrente.|
|[STAThreadAttribute::GetHashCode](#gethashcode)|Restituisce il codice hash per l'istanza.|
|[STAThreadAttribute::ToString](#tostring)|Restituisce una stringa che rappresenta l'oggetto corrente.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Platform`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform

## <a name="stathreadattribute-constructor"></a><a name="ctor"></a> STAThreadAttribute constructor

Inizializza una nuova istanza della classe STAThreadAttribute.

### <a name="syntax"></a>Sintassi

```cpp
public:STAThreadAttribute();
```

## <a name="stathreadattributeequals"></a><a name="equals"></a> STAThreadAttribute:: Equals

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

## <a name="stathreadattributegethashcode"></a><a name="gethashcode"></a> STAThreadAttribute:: GetHashCode

Restituisce il codice hash per l'istanza.

### <a name="syntax"></a>Sintassi

```cpp
public:int GetHashCode();
```

### <a name="return-value"></a>Valore restituito

Codice hash per l'istanza.

## <a name="stathreadattributetostring"></a><a name="tostring"></a> STAThreadAttribute:: ToString

Restituisce una stringa che rappresenta l'oggetto corrente.

### <a name="syntax"></a>Sintassi

```cpp
public:String^ ToString();
```

### <a name="return-value"></a>Valore restituito

Stringa che rappresenta l'oggetto corrente.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform](platform-namespace-c-cx.md)

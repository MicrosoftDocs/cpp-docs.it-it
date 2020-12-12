---
description: 'Altre informazioni su: Struttura CreatorMap'
title: CreatorMap (struttura)
ms.date: 09/21/2018
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreatorMap
- implements/Microsoft::WRL::Details::CreatorMap
- module/Microsoft::WRL::Details::CreatorMap::activationId
- module/Microsoft::WRL::Details::CreatorMap::factoryCache
- module/Microsoft::WRL::Details::CreatorMap::factoryCreator
- module/Microsoft::WRL::Details::CreatorMap::serverName
helpviewer_keywords:
- Microsoft::WRL::Details::CreatorMap structure
- Microsoft::WRL::Details::CreatorMap::activationId data member
- Microsoft::WRL::Details::CreatorMap::factoryCache data member
- Microsoft::WRL::Details::CreatorMap::factoryCreator data member
- Microsoft::WRL::Details::CreatorMap::serverName data member
ms.assetid: 94e40927-90c3-4107-bca3-3ad2dc4beda9
ms.openlocfilehash: 0ef3b441390a22a6c4b35f274857ccb58de030d9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97273046"
---
# <a name="creatormap-structure"></a>CreatorMap (struttura)

Supporta l'infrastruttura della libreria di modelli C++ Windows Runtime e non può essere utilizzata direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
struct CreatorMap;
```

## <a name="remarks"></a>Osservazioni

Sono incluse informazioni su come inizializzare, registrare e annullare la registrazione di oggetti.

`CreatorMap` include le informazioni seguenti:

- Come inizializzare, registrare e annullare la registrazione di oggetti.

- Come confrontare i dati di attivazione in base a una factory COM o Windows Runtime classica.

- Informazioni sulla cache factory e il nome del server per un'interfaccia.

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

Nome                                          | Description
--------------------------------------------- | ------------------------------------------------------------------------------------------------------
[CreatorMap:: activationId](#activationid)     | Rappresenta un ID oggetto identificato da un ID di classe COM classico o da un nome di Windows Runtime.
[CreatorMap:: factoryCache](#factorycache)     | Archivia il puntatore alla cache factory per l'oggetto `CreatorMap` .
[CreatorMap:: factoryCreator](#factorycreator) | Crea una factory per l'oggetto specificato `CreatorMap` .
[CreatorMap:: serverName](#servername)         | Archivia il nome del server per l'oggetto `CreatorMap` .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CreatorMap`

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="creatormapactivationid"></a><a name="activationid"></a> CreatorMap:: activationId

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
union {
   const IID* clsid;
   const wchar_t* (*getRuntimeName)();
} activationId;
```

### <a name="parameters"></a>Parametri

*CLSID*<br/>
ID di interfaccia.

*getruntimename*<br/>
Funzione che recupera il nome di Windows Runtime di un oggetto.

### <a name="remarks"></a>Commenti

Rappresenta un ID oggetto identificato da un ID di classe COM classico o un nome di Windows Runtime.

## <a name="creatormapfactorycache"></a><a name="factorycache"></a> CreatorMap:: factoryCache

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
FactoryCache* factoryCache;
```

### <a name="remarks"></a>Commenti

Archivia il puntatore alla cache factory per l'oggetto `CreatorMap` .

## <a name="creatormapfactorycreator"></a><a name="factorycreator"></a> CreatorMap:: factoryCreator

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
HRESULT (*factoryCreator)(
   unsigned int* currentflags,
   const CreatorMap* entry,
   REFIID iidClassFactory,
IUnknown** factory);
```

### <a name="parameters"></a>Parametri

*currentflags*<br/>
Uno degli enumeratori [RuntimeClassType](runtimeclasstype-enumeration.md) .

*voce*<br/>
CreatorMap.

*iidClassFactory*<br/>
ID di interfaccia di un class factory.

*factory*<br/>
Al termine dell'operazione, l'indirizzo di un class factory.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Commenti

Crea una factory per il CreatorMap specificato.

## <a name="creatormapservername"></a><a name="servername"></a> CreatorMap:: serverName

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
const wchar_t* serverName;
```

### <a name="remarks"></a>Commenti

Archivia il nome del server per CreatorMap.

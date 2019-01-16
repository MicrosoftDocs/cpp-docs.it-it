---
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
ms.openlocfilehash: 44d06f317661059bea92d8c6f27955606a964bb7
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336476"
---
# <a name="creatormap-structure"></a>CreatorMap (struttura)

Supporta l'infrastruttura di libreria modelli C++ per Windows Runtime e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
struct CreatorMap;
```

## <a name="remarks"></a>Note

Contiene informazioni su come inizializzare, registrare e annullare la registrazione di oggetti.

`CreatorMap` include le informazioni seguenti:

- Come inizializzare, registrare e annullare la registrazione di oggetti.

- Come confrontare i dati di attivazione a seconda di una factory di Windows Runtime o COM classica.

- Informazioni sul nome factory della cache e il server per un'interfaccia.

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

Nome                                          | Descrizione
--------------------------------------------- | ------------------------------------------------------------------------------------------------------
[CreatorMap::activationId](#activationid)     | Rappresenta un ID di oggetto identificato da un ID di classe COM classico o un nome di Windows Runtime.
[CreatorMap::factoryCache](#factorycache)     | Contiene il puntatore per la cache della factory per il `CreatorMap`.
[CreatorMap::factoryCreator](#factorycreator) | Crea una factory per l'oggetto specificato `CreatorMap`.
[CreatorMap::serverName](#servername)         | Archivia il nome del server per il `CreatorMap`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CreatorMap`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="activationid"></a>CreatorMap::activationId

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
union {
   const IID* clsid;
   const wchar_t* (*getRuntimeName)();
} activationId;
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
ID di interfaccia.

*getRuntimeName*<br/>
Una funzione che recupera il nome del runtime di Windows di un oggetto.

### <a name="remarks"></a>Note

Rappresenta un ID di oggetto identificato da un ID di classe COM classico o un nome del runtime di Windows.

## <a name="factorycache"></a>CreatorMap::factoryCache

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
FactoryCache* factoryCache;
```

### <a name="remarks"></a>Note

Contiene il puntatore per la cache della factory per il `CreatorMap`.

## <a name="factorycreator"></a>CreatorMap::factoryCreator

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
HRESULT (*factoryCreator)(
   unsigned int* currentflags,
   const CreatorMap* entry,
   REFIID iidClassFactory,
IUnknown** factory);
```

### <a name="parameters"></a>Parametri

*currentflags*<br/>
Uno dei [RuntimeClassType](runtimeclasstype-enumeration.md) enumeratori.

*entry*<br/>
Un CreatorMap.

*iidClassFactory*<br/>
L'ID di interfaccia di una class factory.

*factory*<br/>
Al termine dell'operazione, l'indirizzo di una class factory.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Note

Crea una factory per la CreatorMap specificato.

## <a name="servername"></a>CreatorMap::serverName

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
const wchar_t* serverName;
```

### <a name="remarks"></a>Note

Archivia il nome del server per il CreatorMap.

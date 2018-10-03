---
title: CreatorMap (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 09/21/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreatorMap
- implements/Microsoft::WRL::Details::CreatorMap
- module/Microsoft::WRL::Details::CreatorMap::activationId
- module/Microsoft::WRL::Details::CreatorMap::factoryCache
- module/Microsoft::WRL::Details::CreatorMap::factoryCreator
- module/Microsoft::WRL::Details::CreatorMap::serverName
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Details::CreatorMap structure
- Microsoft::WRL::Details::CreatorMap::activationId data member
- Microsoft::WRL::Details::CreatorMap::factoryCache data member
- Microsoft::WRL::Details::CreatorMap::factoryCreator data member
- Microsoft::WRL::Details::CreatorMap::serverName data member
ms.assetid: 94e40927-90c3-4107-bca3-3ad2dc4beda9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a7bf4ec2132e19989c5f1ae7c47003056928d0fd
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48234936"
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
[Creatormap:: ActivationID](#activationid)     | Rappresenta un ID di oggetto identificato da un ID di classe COM classico o un nome di Windows Runtime.
[Creatormap:: Factorycache](#factorycache)     | Contiene il puntatore per la cache della factory per il `CreatorMap`.
[Creatormap:: FactoryCreator](#factorycreator) | Crea una factory per l'oggetto specificato `CreatorMap`.
[Creatormap:: ServerName](#servername)         | Archivia il nome del server per il `CreatorMap`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CreatorMap`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Namespace:** Microsoft::WRL::Details

## <a name="activationid"></a>Creatormap:: ActivationID

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

## <a name="factorycache"></a>Creatormap:: Factorycache

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
FactoryCache* factoryCache;
```

### <a name="remarks"></a>Note

Contiene il puntatore per la cache della factory per il `CreatorMap`.

## <a name="factorycreator"></a>Creatormap:: FactoryCreator

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
Uno dei [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeratori.

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

## <a name="servername"></a>Creatormap:: ServerName

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
const wchar_t* serverName;
```

### <a name="remarks"></a>Note

Archivia il nome del server per il CreatorMap.

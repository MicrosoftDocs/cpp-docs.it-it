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
ms.openlocfilehash: 1527f81694d1d809d585f3f6504c0e6433a2c26b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372607"
---
# <a name="creatormap-structure"></a>CreatorMap (struttura)

Supporta l'infrastruttura della libreria di modelli di Windows Runtime di C, non è destinato a essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
struct CreatorMap;
```

## <a name="remarks"></a>Osservazioni

Contiene informazioni su come inizializzare, registrare e annullare la registrazione degli oggetti.

`CreatorMap` include le informazioni seguenti:

- Come inizializzare, registrare e annullare la registrazione degli oggetti.

- Come confrontare i dati di attivazione in base a una factory COM o Windows Runtime classica.

- Informazioni sulla cache di fabbrica e sul nome del server per un'interfaccia.

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

Nome                                          | Descrizione
--------------------------------------------- | ------------------------------------------------------------------------------------------------------
[CreatorMap::activationId](#activationid)     | Rappresenta un ID oggetto identificato da un ID di classe COM classico o da un nome di Windows Runtime.
[CreatorMap::factoryCache](#factorycache)     | Memorizza il puntatore alla `CreatorMap`cache di fabbrica per l'oggetto .
[CreatorE::factoryCreator](#factorycreator) | Crea una factory `CreatorMap`per l'oggetto specificato.
[CreatorMap::nomeserver](#servername)         | Memorizza il nome `CreatorMap`del server per il file .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CreatorMap`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="creatormapactivationid"></a><a name="activationid"></a>CreatorMap::activationId

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

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
Funzione che recupera il nome di Windows Runtime di un oggetto.

### <a name="remarks"></a>Osservazioni

Rappresenta un ID oggetto identificato da un ID di classe COM classico o da un nome di runtime di Windows.

## <a name="creatormapfactorycache"></a><a name="factorycache"></a>CreatorMap::factoryCache

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
FactoryCache* factoryCache;
```

### <a name="remarks"></a>Osservazioni

Memorizza il puntatore alla `CreatorMap`cache di fabbrica per l'oggetto .

## <a name="creatormapfactorycreator"></a><a name="factorycreator"></a>CreatorE::factoryCreator

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
HRESULT (*factoryCreator)(
   unsigned int* currentflags,
   const CreatorMap* entry,
   REFIID iidClassFactory,
IUnknown** factory);
```

### <a name="parameters"></a>Parametri

*currentflags (flag di corrente)*<br/>
Uno degli enumeratori [RuntimeClassType.](runtimeclasstype-enumeration.md)

*Voce*<br/>
Oggetto CreatorMap.

*IidClassFactory*<br/>
ID di interfaccia di una class factory.

*factory*<br/>
Al termine dell'operazione, l'indirizzo di una class factory.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Osservazioni

Crea una factory per l'oggetto CreatorMap specificato.

## <a name="creatormapservername"></a><a name="servername"></a>CreatorMap::nomeserver

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
const wchar_t* serverName;
```

### <a name="remarks"></a>Osservazioni

Memorizza il nome del server per CreatorMap.

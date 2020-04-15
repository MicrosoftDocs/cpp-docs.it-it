---
title: FactoryCache (struttura)
ms.date: 09/21/2018
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::FactoryCache
- module/Microsoft::WRL::Details::FactoryCache::cookie
- module/Microsoft::WRL::Details::FactoryCache::factory
helpviewer_keywords:
- Microsoft::WRL::Details::FactoryCache structure
- Microsoft::WRL::Details::FactoryCache::cookie data member
- Microsoft::WRL::Details::FactoryCache::factory data member
ms.assetid: 624544e6-0989-47f6-a3e9-edb60e1ee6d4
ms.openlocfilehash: 507d35179b9fa86399e56b18171800f41eaf1f10
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371503"
---
# <a name="factorycache-structure"></a>FactoryCache (struttura)

Supporta l'infrastruttura della libreria di modelli di Windows Runtime di C, non è destinato a essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
struct FactoryCache;
```

## <a name="remarks"></a>Osservazioni

Contiene il percorso di una class factory e un valore che identifica un oggetto classe COM o wrt registrato.

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

Nome                              | Descrizione
--------------------------------- | ------------------------------------------------------------------------------------------------------------------------------
[FactoryCache::cookie](#cookie)   | Contiene un valore che identifica un oggetto di classe COM o Windows Runtime registrato e viene successivamente utilizzato per annullare la registrazione dell'oggetto.
[FactoryCache::factoryFactoryCache::factory](#factory) | Punta a una class factory di Windows Runtime o COM.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`FactoryCache`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="factorycachecookie"></a><a name="cookie"></a>FactoryCache::cookie

Supporta l'infrastruttura della libreria di modelli di Windows Runtime di C, non è destinato a essere utilizzato direttamente dal codice.

```cpp
union {
   WINRT_REGISTRATION_COOKIE winrt;
   DWORD com;
} cookie;
```

### <a name="remarks"></a>Osservazioni

Contiene un valore che identifica un oggetto di classe COM o Windows Runtime registrato e viene successivamente utilizzato per annullare la registrazione dell'oggetto.

## <a name="factorycachefactory"></a><a name="factory"></a>FactoryCache::factoryFactoryCache::factory

Supporta l'infrastruttura della libreria di modelli di Windows Runtime di C, non è destinato a essere utilizzato direttamente dal codice.

```cpp
IUnknown* factory;
```

### <a name="remarks"></a>Osservazioni

Punta a una class factory di Windows Runtime o COM.

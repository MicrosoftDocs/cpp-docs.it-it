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
ms.openlocfilehash: 7196363567dffa43844bbbd1de76934a317302d1
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58785504"
---
# <a name="factorycache-structure"></a>FactoryCache (struttura)

Supporta l'infrastruttura di libreria modelli C++ per Windows Runtime e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
struct FactoryCache;
```

## <a name="remarks"></a>Note

Contiene il percorso di una class factory e un valore che identifica un oggetto registrato wrt o oggetto di classe COM.

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

Nome                              | Descrizione
--------------------------------- | ------------------------------------------------------------------------------------------------------------------------------
[FactoryCache::cookie](#cookie)   | Contiene un valore che identifica un oggetto di classe di Windows Runtime o COM registrato e viene successivamente utilizzato per annullare la registrazione dell'oggetto.
[FactoryCache::factory](#factory) | Punta a una class factory COM o Windows Runtime.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`FactoryCache`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="cookie"></a>FactoryCache::cookie

Supporta l'infrastruttura di libreria modelli C++ per Windows Runtime e non deve essere usato direttamente dal codice.

```cpp
union {
   WINRT_REGISTRATION_COOKIE winrt;
   DWORD com;
} cookie;
```

### <a name="remarks"></a>Note

Contiene un valore che identifica un oggetto di classe di Windows Runtime o COM registrato e viene successivamente utilizzato per annullare la registrazione dell'oggetto.

## <a name="factory"></a>FactoryCache::factory

Supporta l'infrastruttura di libreria modelli C++ per Windows Runtime e non deve essere usato direttamente dal codice.

```cpp
IUnknown* factory;
```

### <a name="remarks"></a>Note

Punta a una class factory COM o Windows Runtime.

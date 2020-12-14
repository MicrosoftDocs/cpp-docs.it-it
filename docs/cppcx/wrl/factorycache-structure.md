---
description: 'Altre informazioni su: struttura FactoryCache'
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
ms.openlocfilehash: 3e9ee084a063eb8094c309dee412a8793801921b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97198551"
---
# <a name="factorycache-structure"></a>FactoryCache (struttura)

Supporta l'infrastruttura della libreria di modelli C++ Windows Runtime e non può essere utilizzata direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
struct FactoryCache;
```

## <a name="remarks"></a>Osservazioni

Contiene la posizione di un class factory e un valore che identifica un oggetto della classe WRT o COM registrato.

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

Nome                              | Description
--------------------------------- | ------------------------------------------------------------------------------------------------------------------------------
[FactoryCache:: cookie](#cookie)   | Contiene un valore che identifica un oggetto Windows Runtime o una classe COM registrato e viene usato in seguito per annullare la registrazione dell'oggetto.
[FactoryCache:: Factory](#factory) | Punta a un Windows Runtime o a un class factory COM.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`FactoryCache`

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="factorycachecookie"></a><a name="cookie"></a> FactoryCache:: cookie

Supporta l'infrastruttura della libreria di modelli C++ Windows Runtime e non può essere utilizzata direttamente dal codice.

```cpp
union {
   WINRT_REGISTRATION_COOKIE winrt;
   DWORD com;
} cookie;
```

### <a name="remarks"></a>Commenti

Contiene un valore che identifica un oggetto Windows Runtime o una classe COM registrato e viene usato in seguito per annullare la registrazione dell'oggetto.

## <a name="factorycachefactory"></a><a name="factory"></a> FactoryCache:: Factory

Supporta l'infrastruttura della libreria di modelli C++ Windows Runtime e non può essere utilizzata direttamente dal codice.

```cpp
IUnknown* factory;
```

### <a name="remarks"></a>Commenti

Punta a un Windows Runtime o a un class factory COM.

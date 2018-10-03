---
title: FactoryCache (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 09/21/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::FactoryCache
- module/Microsoft::WRL::Details::FactoryCache::cookie
- module/Microsoft::WRL::Details::FactoryCache::factory
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Details::FactoryCache structure
- Microsoft::WRL::Details::FactoryCache::cookie data member
- Microsoft::WRL::Details::FactoryCache::factory data member
ms.assetid: 624544e6-0989-47f6-a3e9-edb60e1ee6d4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d56779b5df33f75c9147d34b55f8c2fc65204a82
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48234541"
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
[Factorycache:: cookie](#cookie)   | Contiene un valore che identifica un oggetto di classe di Windows Runtime o COM registrato e viene successivamente utilizzato per annullare la registrazione dell'oggetto.
[Factorycache:: factory](#factory) | Punta a una class factory COM o Windows Runtime.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`FactoryCache`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Namespace:** Microsoft::WRL::Details

## <a name="cookie"></a>Factorycache:: cookie

Supporta l'infrastruttura di libreria modelli C++ per Windows Runtime e non deve essere usato direttamente dal codice.

```cpp
union {
   WINRT_REGISTRATION_COOKIE winrt;
   DWORD com;
} cookie;
```

### <a name="remarks"></a>Note

Contiene un valore che identifica un oggetto di classe di Windows Runtime o COM registrato e viene successivamente utilizzato per annullare la registrazione dell'oggetto.

## <a name="factory"></a>Factorycache:: factory

Supporta l'infrastruttura di libreria modelli C++ per Windows Runtime e non deve essere usato direttamente dal codice.

```cpp
IUnknown* factory;
```

### <a name="remarks"></a>Note

Punta a una class factory COM o Windows Runtime.

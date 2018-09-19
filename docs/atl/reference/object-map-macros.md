---
title: Macro della mappa dell'oggetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlcom/ATL::DECLARE_OBJECT_DESCRIPTION
- atlcom/ATL::OBJECT_ENTRY_AUTO
- atlcom/ATL::OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO
dev_langs:
- C++
ms.assetid: 680087f4-9894-41dd-a79c-6f337e1f13c1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3b85d157cd6124bb0ef6e6167a415c018e14b046
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46040440"
---
# <a name="object-map-macros"></a>Macro della mappa oggetti

Queste macro definiscono mappe di oggetti e le voci.

|||
|-|-|
|[DECLARE_OBJECT_DESCRIPTION](#declare_object_description)|Consente di specificare la descrizione di testo dell'oggetto di classe, che verrà immesso nella mappa oggetto.|
|[OBJECT_ENTRY_AUTO](#object_entry_auto)|Entra in un oggetto ATL nella mappa oggetto, aggiornare il Registro di sistema e crea un'istanza dell'oggetto.|
|[OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](#object_entry_non_createable_ex_auto)|Consente di specificare che l'oggetto deve essere registrato e inizializzato, ma non deve essere creabile esternamente tramite `CoCreateInstance`.|  

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="declare_object_description"></a>  DECLARE_OBJECT_DESCRIPTION

Consente di specificare una descrizione di testo per l'oggetto della classe.

```
DECLARE_OBJECT_DESCRIPTION( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
[in] Descrizione dell'oggetto classe.

### <a name="remarks"></a>Note

ATL entra in questa descrizione nella mappa oggetto tramite il [OBJECT_ENTRY_AUTO](#object_entry_auto) macro.

DECLARE_OBJECT_DESCRIPTION implementa una `GetObjectDescription` funzione, che è possibile usare per eseguire l'override di [CComCoClass::GetObjectDescription](ccomcoclass-class.md#getobjectdescription) (metodo).  

Il `GetObjectDescription` funzione viene chiamata da `IComponentRegistrar::GetComponents`. `IComponentRegistrar` è un'interfaccia di automazione che consente di registrare e annullare la registrazione di singoli componenti in una DLL. Quando si crea un oggetto di registrazione componenti con la creazione guidata progetto ATL, la procedura guidata implementerà automaticamente il `IComponentRegistrar` interfaccia. `IComponentRegistrar` in genere viene utilizzata da Microsoft Transaction Server.

Per altre informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#123](../../atl/codesnippet/cpp/object-map-macros_1.h)]

##  <a name="object_entry_auto"></a>  OBJECT_ENTRY_AUTO

Entra in un oggetto ATL nella mappa oggetto, aggiornare il Registro di sistema e crea un'istanza dell'oggetto.

```
OBJECT_ENTRY_AUTO( clsid, class )
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
[in] Il CLSID di una classe COM implementata dalla classe C++ denominata *classe*.

*class*<br/>
[in] Il nome della classe C++ implementa la classe COM rappresentata da *clsid*.

### <a name="remarks"></a>Note

Le macro di voci di oggetto vengono inserite in ambito globale nel progetto per fornire supporto per la registrazione, l'inizializzazione e la creazione di una classe.

OBJECT_ENTRY_AUTO immette i puntatori a funzione della classe dell'autore e classe factory creatore della classe `CreateInstance` funzioni per questo oggetto nella mappa oggetto ATL generato automaticamente. Quando [CAtlComModule::RegisterServer](catlcommodule-class.md#registerserver) viene chiamato, viene aggiornato il Registro di sistema per ogni oggetto nella mappa oggetto.  

La tabella seguente descrive come le informazioni aggiunte alla mappa dell'oggetto viene ottenute dalla classe indicata come secondo parametro di questa macro.

|Informazioni per|Ottenuto da|
|---------------------|-------------------|
|Registrazione COM|[Macro del Registro di sistema](../../atl/reference/registry-macros.md)|
|Creazione della factory di classe|[Macro di Class Factory](../../atl/reference/aggregation-and-class-factory-macros.md)|
|Creazione di istanze|[Macro di aggregazione](../../atl/reference/aggregation-and-class-factory-macros.md)|
|Registrazione del componente categoria|[Macro di categoria](../../atl/reference/category-macros.md)|
|Pulizia e l'inizializzazione a livello di classe|[ObjectMain](ccomobjectrootex-class.md#objectmain)|  

##  <a name="object_entry_non_createable_ex_auto"></a>  OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO

Consente di specificare che l'oggetto deve essere registrato e inizializzato, ma non deve essere creabile esternamente tramite `CoCreateInstance`.

```
OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO( clsid, class )
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
[in] Il CLSID di una classe COM implementata dalla classe C++ denominata *classe*.

*class*<br/>
[in] Il nome della classe C++ implementa la classe COM rappresentata da *clsid*.

### <a name="remarks"></a>Note

Le macro di voci di oggetto vengono inserite in ambito globale nel progetto per fornire supporto per la registrazione, l'inizializzazione e la creazione di una classe.

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO consente di specificare che un oggetto deve essere registrato e inizializzato (vedere [OBJECT_ENTRY_AUTO](#object_entry_auto) per altre informazioni), ma non deve essere creabile esternamente tramite `CoCreateInstance`.

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)

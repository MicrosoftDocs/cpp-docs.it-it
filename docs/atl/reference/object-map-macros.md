---
title: Macro mappa oggetti
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::DECLARE_OBJECT_DESCRIPTION
- atlcom/ATL::OBJECT_ENTRY_AUTO
- atlcom/ATL::OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO
ms.assetid: 680087f4-9894-41dd-a79c-6f337e1f13c1
ms.openlocfilehash: 73dc924527bac8499adefab3d0d6b51afa500a5a
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417579"
---
# <a name="object-map-macros"></a>Macro mappa oggetti

Queste macro definiscono le mappe e le voci degli oggetti.

|||
|-|-|
|[DECLARE_OBJECT_DESCRIPTION](#declare_object_description)|Consente di specificare la descrizione del testo di un oggetto della classe, che verrà immesso nella mappa degli oggetti.|
|[OBJECT_ENTRY_AUTO](#object_entry_auto)|Immette un oggetto ATL nella mappa degli oggetti, aggiorna il registro di sistema e crea un'istanza dell'oggetto.|
|[OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](#object_entry_non_createable_ex_auto)|Consente di specificare che l'oggetto deve essere registrato e inizializzato, ma non deve essere creabile esternamente tramite `CoCreateInstance`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="declare_object_description"></a>DECLARE_OBJECT_DESCRIPTION

Consente di specificare una descrizione di testo per l'oggetto classe.

```
DECLARE_OBJECT_DESCRIPTION( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Descrizione dell'oggetto della classe.

### <a name="remarks"></a>Osservazioni

ATL immette questa descrizione nella mappa degli oggetti tramite la macro [OBJECT_ENTRY_AUTO](#object_entry_auto) .

DECLARE_OBJECT_DESCRIPTION implementa una funzione `GetObjectDescription`, che è possibile usare per eseguire l'override del metodo [CComCoClass:: GetObjectDescription](ccomcoclass-class.md#getobjectdescription) .

La funzione `GetObjectDescription` viene chiamata da `IComponentRegistrar::GetComponents`. `IComponentRegistrar` è un'interfaccia di automazione che consente di registrare e annullare la registrazione di singoli componenti in una DLL. Quando si crea un oggetto registrar componente con la creazione guidata progetto ATL, la procedura guidata implementerà automaticamente l'interfaccia `IComponentRegistrar`. `IComponentRegistrar` viene in genere utilizzato da Microsoft Transaction Server.

Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#123](../../atl/codesnippet/cpp/object-map-macros_1.h)]

##  <a name="object_entry_auto"></a>OBJECT_ENTRY_AUTO

Immette un oggetto ATL nella mappa degli oggetti, aggiorna il registro di sistema e crea un'istanza dell'oggetto.

```
OBJECT_ENTRY_AUTO( clsid, class )
```

### <a name="parameters"></a>Parametri

*CLSID*<br/>
in CLSID di una classe COM implementata dalla C++ classe denominata *Class*.

*class*<br/>
in Nome della C++ classe che implementa la classe com rappresentata da *CLSID*.

### <a name="remarks"></a>Osservazioni

Le macro di voci di oggetto vengono inserite in ambito globale nel progetto per fornire supporto per la registrazione, l'inizializzazione e la creazione di una classe.

OBJECT_ENTRY_AUTO immette i puntatori a funzione della classe Creator e della classe Creator `CreateInstance` funzioni per questo oggetto nella mappa degli oggetti ATL generata automaticamente. Quando viene chiamato [CAtlComModule:: RegisterServer](catlcommodule-class.md#registerserver) , viene aggiornato il registro di sistema per ogni oggetto nella mappa degli oggetti.

Nella tabella seguente viene descritto il modo in cui le informazioni aggiunte alla mappa degli oggetti vengono ottenute dalla classe specificata come secondo parametro della macro.

|Informazioni per|Ottenuta da|
|---------------------|-------------------|
|Registrazione COM|[Macro del Registro di sistema](../../atl/reference/registry-macros.md)|
|Creazione di class factory|[Macro di class factory](../../atl/reference/aggregation-and-class-factory-macros.md)|
|Creazione di istanze|[Macro di aggregazione](../../atl/reference/aggregation-and-class-factory-macros.md)|
|Registrazione categoria Componenti|[Macro di categoria](../../atl/reference/category-macros.md)|
|Inizializzazione e pulizia a livello di classe|[ObjectMain](ccomobjectrootex-class.md#objectmain)|

##  <a name="object_entry_non_createable_ex_auto"></a>OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO

Consente di specificare che l'oggetto deve essere registrato e inizializzato, ma non deve essere creabile esternamente tramite `CoCreateInstance`.

```
OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO( clsid, class )
```

### <a name="parameters"></a>Parametri

*CLSID*<br/>
in CLSID di una classe COM implementata dalla C++ classe denominata *Class*.

*class*<br/>
in Nome della C++ classe che implementa la classe com rappresentata da *CLSID*.

### <a name="remarks"></a>Osservazioni

Le macro di voci di oggetto vengono inserite in ambito globale nel progetto per fornire supporto per la registrazione, l'inizializzazione e la creazione di una classe.

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO consente di specificare che un oggetto deve essere registrato e inizializzato (vedere [OBJECT_ENTRY_AUTO](#object_entry_auto) per ulteriori informazioni), ma non deve essere creabile tramite `CoCreateInstance`.

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)

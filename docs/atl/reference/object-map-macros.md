---
title: Macro della mappa oggetti
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::DECLARE_OBJECT_DESCRIPTION
- atlcom/ATL::OBJECT_ENTRY_AUTO
- atlcom/ATL::OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO
ms.assetid: 680087f4-9894-41dd-a79c-6f337e1f13c1
ms.openlocfilehash: 66a418019ba506a5832c8e3ad86a3764c1186df0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326208"
---
# <a name="object-map-macros"></a>Macro della mappa oggetti

Queste macro definiscono le mappe oggetto e le voci.

|||
|-|-|
|[DECLARE_OBJECT_DESCRIPTION](#declare_object_description)|Consente di specificare la descrizione del testo di un oggetto classe, che verrà immessa nella mappa oggetti.|
|[OBJECT_ENTRY_AUTO](#object_entry_auto)|Immette un oggetto ATL nella mappa degli oggetti, aggiorna il Registro di sistema e crea un'istanza dell'oggetto.|
|[OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](#object_entry_non_createable_ex_auto)|Consente di specificare che l'oggetto deve essere registrato e inizializzato, ma non deve essere creabile esternamente tramite `CoCreateInstance`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="declare_object_description"></a><a name="declare_object_description"></a>DECLARE_OBJECT_DESCRIPTION

Consente di specificare una descrizione di testo per l'oggetto classe.

```
DECLARE_OBJECT_DESCRIPTION( x )
```

### <a name="parameters"></a>Parametri

*X*<br/>
[in] Descrizione dell'oggetto classe.

### <a name="remarks"></a>Osservazioni

ATL immette questa descrizione nella mappa oggetti tramite la macro [OBJECT_ENTRY_AUTO.](#object_entry_auto)

DECLARE_OBJECT_DESCRIPTION implementa `GetObjectDescription` una funzione, che è possibile utilizzare per eseguire l'override del metodo [CComCoClass::GetObjectDescription](ccomcoclass-class.md#getobjectdescription) .

La `GetObjectDescription` funzione viene `IComponentRegistrar::GetComponents`chiamata da . `IComponentRegistrar`è un'interfaccia di automazione che consente di registrare e annullare la registrazione di singoli componenti in una DLL. Quando si crea un oggetto Component Registrar con la Creazione `IComponentRegistrar` guidata progetto ATL, la procedura guidata implementerà automaticamente l'interfaccia. `IComponentRegistrar`viene in genere utilizzato da Microsoft Transaction Server.

Per ulteriori informazioni sulla Creazione guidata progetto ATL, vedere l'articolo [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#123](../../atl/codesnippet/cpp/object-map-macros_1.h)]

## <a name="object_entry_auto"></a><a name="object_entry_auto"></a>OBJECT_ENTRY_AUTO

Immette un oggetto ATL nella mappa degli oggetti, aggiorna il Registro di sistema e crea un'istanza dell'oggetto.

```
OBJECT_ENTRY_AUTO( clsid, class )
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
[in] Il CLSID di una classe COM implementato dalla classe denominata *di classe*C .

*classe*<br/>
[in] Il nome della classe C, che implementa la classe COM rappresentata da *clsid*.

### <a name="remarks"></a>Osservazioni

Le macro di voci di oggetto vengono inserite in ambito globale nel progetto per fornire supporto per la registrazione, l'inizializzazione e la creazione di una classe.

OBJECT_ENTRY_AUTO i puntatori a funzione della classe creatore `CreateInstance` e le funzioni della classe del creatore della factory per questo oggetto vengono immessi nella mappa oggetti ATL generata automaticamente. Quando [CAtlComModule::RegisterServer](catlcommodule-class.md#registerserver) viene chiamato, aggiorna il Registro di sistema per ogni oggetto nella mappa degli oggetti.

Nella tabella seguente viene descritto come le informazioni aggiunte alla mappa oggetti vengono ottenute dalla classe specificata come secondo parametro di questa macro.

|Informazioni per|Ottenuto da|
|---------------------|-------------------|
|Registrazione COM|[Macro del Registro di sistema](../../atl/reference/registry-macros.md)|
|Creazione di class factory|[Macro di Class Factory](../../atl/reference/aggregation-and-class-factory-macros.md)|
|Creazione dell'istanza|[Macro di aggregazione](../../atl/reference/aggregation-and-class-factory-macros.md)|
|Registrazione della categoria componente|[Macro di categoria](../../atl/reference/category-macros.md)|
|Inizializzazione e pulizia a livello di classe|[Oggetto Main](ccomobjectrootex-class.md#objectmain)|

## <a name="object_entry_non_createable_ex_auto"></a><a name="object_entry_non_createable_ex_auto"></a>OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO

Consente di specificare che l'oggetto deve essere registrato e inizializzato, ma non deve essere creabile esternamente tramite `CoCreateInstance`.

```
OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO( clsid, class )
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
[in] Il CLSID di una classe COM implementato dalla classe denominata *di classe*C .

*classe*<br/>
[in] Il nome della classe C, che implementa la classe COM rappresentata da *clsid*.

### <a name="remarks"></a>Osservazioni

Le macro di voci di oggetto vengono inserite in ambito globale nel progetto per fornire supporto per la registrazione, l'inizializzazione e la creazione di una classe.

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO consente di specificare che un oggetto deve [OBJECT_ENTRY_AUTO](#object_entry_auto) essere registrato e inizializzato (vedere `CoCreateInstance`OBJECT_ENTRY_AUTO per ulteriori informazioni), ma non deve essere creabile tramite .

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)

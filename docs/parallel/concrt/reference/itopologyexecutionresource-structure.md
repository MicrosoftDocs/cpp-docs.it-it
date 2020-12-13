---
description: 'Altre informazioni su: struttura ITopologyExecutionResource'
title: Struttura ITopologyExecutionResource
ms.date: 11/04/2016
f1_keywords:
- ITopologyExecutionResource
- CONCRTRM/concurrency::ITopologyExecutionResource
- CONCRTRM/concurrency::ITopologyExecutionResource::ITopologyExecutionResource::GetId
- CONCRTRM/concurrency::ITopologyExecutionResource::ITopologyExecutionResource::GetNext
helpviewer_keywords:
- ITopologyExecutionResource structure
ms.assetid: e36756f7-4cd9-4fa6-ba60-23fea58ef2bf
ms.openlocfilehash: c2567cf9e34e0b27308e331056d5e0dbc99b2779
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334384"
---
# <a name="itopologyexecutionresource-structure"></a>Struttura ITopologyExecutionResource

Interfaccia a una risorsa di esecuzione come definita da Gestione risorse.

## <a name="syntax"></a>Sintassi

```cpp
struct ITopologyExecutionResource;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[ITopologyExecutionResource:: GetId](#getid)|Restituisce l'identificatore univoco di Gestione risorse per questa risorsa di esecuzione.|
|[ITopologyExecutionResource:: GetNext](#getnext)|Restituisce un'interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione.|

## <a name="remarks"></a>Commenti

Questa interfaccia viene in genere utilizzata per esaminare la topologia del sistema come osservato dal Gestione risorse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ITopologyExecutionResource`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="itopologyexecutionresourcegetid-method"></a><a name="getid"></a> Metodo ITopologyExecutionResource:: GetId

Restituisce l'identificatore univoco di Gestione risorse per questa risorsa di esecuzione.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco di Gestione risorse per questa risorsa di esecuzione.

## <a name="itopologyexecutionresourcegetnext-method"></a><a name="getnext"></a> Metodo ITopologyExecutionResource:: GetNext

Restituisce un'interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione.

```cpp
virtual ITopologyExecutionResource *GetNext() const = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione. Se non esistono altri nodi nell'ordine dell'enumerazione del nodo a cui questa risorsa di esecuzione appartiene, tramite questo metodo verrà restituito il valore `NULL`.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)

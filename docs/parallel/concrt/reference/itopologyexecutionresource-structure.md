---
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
ms.openlocfilehash: 82193a9b592cded96f3726cbabd6cf646eaa27c8
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77140072"
---
# <a name="itopologyexecutionresource-structure"></a>Struttura ITopologyExecutionResource

Interfaccia a una risorsa di esecuzione come definita da Gestione risorse.

## <a name="syntax"></a>Sintassi

```cpp
struct ITopologyExecutionResource;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ITopologyExecutionResource:: GetId](#getid)|Restituisce l'identificatore univoco di Gestione risorse per questa risorsa di esecuzione.|
|[ITopologyExecutionResource:: GetNext](#getnext)|Restituisce un'interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione.|

## <a name="remarks"></a>Osservazioni

Questa interfaccia viene in genere utilizzata per esaminare la topologia del sistema come osservato dal Gestione risorse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ITopologyExecutionResource`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="getid"></a>Metodo ITopologyExecutionResource:: GetId

Restituisce l'identificatore univoco di Gestione risorse per questa risorsa di esecuzione.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco di Gestione risorse per questa risorsa di esecuzione.

## <a name="getnext"></a>Metodo ITopologyExecutionResource:: GetNext

Restituisce un'interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione.

```cpp
virtual ITopologyExecutionResource *GetNext() const = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione. Se non esistono altri nodi nell'ordine dell'enumerazione del nodo a cui questa risorsa di esecuzione appartiene, tramite questo metodo verrà restituito il valore `NULL`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)

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
ms.openlocfilehash: 2c9221cab1ac2d48bd099a769188e4bee797823c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368140"
---
# <a name="itopologyexecutionresource-structure"></a>Struttura ITopologyExecutionResource

Interfaccia a una risorsa di esecuzione come definita da Gestione risorse.

## <a name="syntax"></a>Sintassi

```cpp
struct ITopologyExecutionResource;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ITopologyExecutionResource::GetIdITopologyExecutionResource::GetId](#getid)|Restituisce l'identificatore univoco di Gestione risorse per questa risorsa di esecuzione.|
|[ITopologyExecutionResource::GetNextITopologyExecutionResource::GetNext](#getnext)|Restituisce un'interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione.|

## <a name="remarks"></a>Osservazioni

Questa interfaccia viene in genere utilizzata per esaminare la topologia del sistema come osservato da Gestione risorse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ITopologyExecutionResource`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="itopologyexecutionresourcegetid-method"></a><a name="getid"></a>Metodo ITopologyExecutionResource::GetIdITopologyExecutionResource::GetId Method

Restituisce l'identificatore univoco di Gestione risorse per questa risorsa di esecuzione.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco di Gestione risorse per questa risorsa di esecuzione.

## <a name="itopologyexecutionresourcegetnext-method"></a><a name="getnext"></a>Metodo ITopologyExecutionResource::GetNextITopologyExecutionResource::GetNext Method

Restituisce un'interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione.

```cpp
virtual ITopologyExecutionResource *GetNext() const = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione. Se non esistono altri nodi nell'ordine dell'enumerazione del nodo a cui questa risorsa di esecuzione appartiene, tramite questo metodo verrà restituito il valore `NULL`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)

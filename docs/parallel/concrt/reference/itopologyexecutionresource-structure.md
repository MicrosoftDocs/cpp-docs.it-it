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
ms.openlocfilehash: 4bfb614d5ffd6a399fae33d38a50cee62f17c208
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64339503"
---
# <a name="itopologyexecutionresource-structure"></a>Struttura ITopologyExecutionResource

Interfaccia a una risorsa di esecuzione come definita da Gestione risorse.

## <a name="syntax"></a>Sintassi

```
struct ITopologyExecutionResource;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ITopologyExecutionResource::GetId](#getid)|Restituisce l'identificatore univoco di Gestione risorse per questa risorsa di esecuzione.|
|[ITopologyExecutionResource::GetNext](#getnext)|Restituisce un'interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione.|

## <a name="remarks"></a>Note

Questa interfaccia è in genere usata per scorrere la topologia del sistema come osservato dal gestore delle risorse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ITopologyExecutionResource`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

##  <a name="getid"></a>  Metodo itopologyexecutionresource:: GetID

Restituisce l'identificatore univoco di Gestione risorse per questa risorsa di esecuzione.

```
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco di Gestione risorse per questa risorsa di esecuzione.

##  <a name="getnext"></a>  Metodo itopologyexecutionresource:: GetNext

Restituisce un'interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione.

```
virtual ITopologyExecutionResource *GetNext() const = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia in corrispondenza della risorsa di esecuzione successiva nell'ordine dell'enumerazione. Se non esistono altri nodi nell'ordine dell'enumerazione del nodo a cui questa risorsa di esecuzione appartiene, tramite questo metodo verrà restituito il valore `NULL`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)

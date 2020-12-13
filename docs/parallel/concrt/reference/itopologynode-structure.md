---
description: 'Altre informazioni su: Struttura ITopologyNode'
title: Struttura ITopologyNode
ms.date: 11/04/2016
f1_keywords:
- ITopologyNode
- CONCRTRM/concurrency::ITopologyNode
- CONCRTRM/concurrency::ITopologyNode::ITopologyNode::GetExecutionResourceCount
- CONCRTRM/concurrency::ITopologyNode::ITopologyNode::GetFirstExecutionResource
- CONCRTRM/concurrency::ITopologyNode::ITopologyNode::GetId
- CONCRTRM/concurrency::ITopologyNode::ITopologyNode::GetNext
- CONCRTRM/concurrency::ITopologyNode::ITopologyNode::GetNumaNode
helpviewer_keywords:
- ITopologyNode structure
ms.assetid: 92e7e032-04f6-4c7c-be36-8f9a35fc4734
ms.openlocfilehash: 1d603e35728791ff94e43b03d890061dec834660
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334366"
---
# <a name="itopologynode-structure"></a>Struttura ITopologyNode

Interfaccia a un nodo di topologia come definito da Gestione risorse. Un nodo contiene una o più risorse di esecuzione.

## <a name="syntax"></a>Sintassi

```cpp
struct ITopologyNode;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[ITopologyNode:: GetExecutionResourceCount](#getexecutionresourcecount)|Restituisce il numero di risorse di esecuzione raggruppate in questo nodo.|
|[ITopologyNode:: GetFirstExecutionResource](#getfirstexecutionresource)|Restituisce la prima risorsa di esecuzione raggruppata sotto questo nodo nell'ordine dell'enumerazione.|
|[ITopologyNode:: GetId](#getid)|Restituisce l'identificatore univoco del Gestione risorse per questo nodo.|
|[ITopologyNode:: GetNext](#getnext)|Restituisce un'interfaccia in corrispondenza del nodo di topologia successivo nell'ordine dell'enumerazione.|
|[ITopologyNode:: GetNumaNode](#getnumanode)|Restituisce il numero del nodo NUMA assegnato da Windows a cui appartiene il nodo gestore della risorsa.|

## <a name="remarks"></a>Commenti

Questa interfaccia viene in genere utilizzata per esaminare la topologia del sistema come osservato dal Gestione risorse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ITopologyNode`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="itopologynodegetexecutionresourcecount-method"></a><a name="getexecutionresourcecount"></a> Metodo ITopologyNode:: GetExecutionResourceCount

Restituisce il numero di risorse di esecuzione raggruppate in questo nodo.

```cpp
virtual unsigned int GetExecutionResourceCount() const = 0;
```

### <a name="return-value"></a>Valore restituito

Numero di risorse di esecuzione raggruppate in questo nodo.

## <a name="itopologynodegetfirstexecutionresource-method"></a><a name="getfirstexecutionresource"></a> Metodo ITopologyNode:: GetFirstExecutionResource

Restituisce la prima risorsa di esecuzione raggruppata sotto questo nodo nell'ordine dell'enumerazione.

```cpp
virtual ITopologyExecutionResource *GetFirstExecutionResource() const = 0;
```

### <a name="return-value"></a>Valore restituito

Prima risorsa di esecuzione raggruppata sotto questo nodo nell'ordine dell'enumerazione.

## <a name="itopologynodegetid-method"></a><a name="getid"></a> Metodo ITopologyNode:: GetId

Restituisce l'identificatore univoco del Gestione risorse per questo nodo.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco del Gestione risorse per questo nodo.

### <a name="remarks"></a>Commenti

Il runtime di concorrenza rappresenta i thread hardware del sistema in gruppi di nodi del processore. I nodi vengono in genere derivati dalla topologia hardware del sistema. Ad esempio, tutti i processori in un socket specifico o in uno specifico nodo NUMA possono appartenere allo stesso nodo del processore. Il Gestione risorse assegna identificatori univoci a questi nodi iniziando con `0` fino a e includendo `nodeCount - 1` , dove `nodeCount` rappresenta il numero totale di nodi del processore nel sistema.

Il numero di nodi può essere ottenuto dalla funzione [GetProcessorNodeCount](concurrency-namespace-functions.md).

## <a name="itopologynodegetnext-method"></a><a name="getnext"></a> Metodo ITopologyNode:: GetNext

Restituisce un'interfaccia in corrispondenza del nodo di topologia successivo nell'ordine dell'enumerazione.

```cpp
virtual ITopologyNode *GetNext() const = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia in corrispondenza del nodo successivo nell'ordine dell'enumerazione. Se non sono disponibili altri nodi nell'ordine dell'enumerazione della topologia del sistema, tramite questo metodo verrà restituito il valore `NULL`.

## <a name="itopologynodegetnumanode-method"></a><a name="getnumanode"></a> Metodo ITopologyNode:: GetNumaNode

Restituisce il numero del nodo NUMA assegnato da Windows a cui appartiene il nodo gestore della risorsa.

```cpp
virtual unsigned long GetNumaNode() const = 0;
```

### <a name="return-value"></a>Valore restituito

Numero del nodo NUMA assegnato da Windows a cui appartiene il nodo Gestione risorse.

### <a name="remarks"></a>Commenti

Un proxy di thread in esecuzione su una radice del processore virtuale appartenente a questo nodo avrà affinità almeno al livello del nodo NUMA per il nodo NUMA restituito da questo metodo.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)

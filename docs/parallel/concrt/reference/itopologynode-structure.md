---
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
ms.openlocfilehash: 7cb815c4f7dc5ad09e8d352abc3f3375b8d9e205
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368110"
---
# <a name="itopologynode-structure"></a>Struttura ITopologyNode

Interfaccia a un nodo di topologia come definito da Gestione risorse. Un nodo contiene una o più risorse di esecuzione.

## <a name="syntax"></a>Sintassi

```cpp
struct ITopologyNode;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ITopologyNode::GetExecutionResourceCount](#getexecutionresourcecount)|Restituisce il numero di risorse di esecuzione raggruppate in questo nodo.|
|[ITopologyNode::GetFirstExecutionResource](#getfirstexecutionresource)|Restituisce la prima risorsa di esecuzione raggruppata sotto questo nodo nell'ordine dell'enumerazione.|
|[ITopologyNode::GetId](#getid)|Restituisce l'identificatore univoco di Gestione risorse per questo nodo.|
|[ITopologyNode::GetNext](#getnext)|Restituisce un'interfaccia in corrispondenza del nodo di topologia successivo nell'ordine dell'enumerazione.|
|[ITopologyNode::GetNumaNode](#getnumanode)|Restituisce il numero del nodo NUMA assegnato a Windows a cui appartiene questo nodo Resource Maanger.|

## <a name="remarks"></a>Osservazioni

Questa interfaccia viene in genere utilizzata per esaminare la topologia del sistema come osservato da Gestione risorse.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ITopologyNode`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="itopologynodegetexecutionresourcecount-method"></a><a name="getexecutionresourcecount"></a>Metodo ITopologyNode::GetExecutionResourceCountITopologyNode::GetExecutionResourceCount Method

Restituisce il numero di risorse di esecuzione raggruppate in questo nodo.

```cpp
virtual unsigned int GetExecutionResourceCount() const = 0;
```

### <a name="return-value"></a>Valore restituito

Numero di risorse di esecuzione raggruppate in questo nodo.

## <a name="itopologynodegetfirstexecutionresource-method"></a><a name="getfirstexecutionresource"></a>Metodo ITopologyNode::GetFirstExecutionResourceITopologyNode::GetFirstExecutionResource Method

Restituisce la prima risorsa di esecuzione raggruppata sotto questo nodo nell'ordine dell'enumerazione.

```cpp
virtual ITopologyExecutionResource *GetFirstExecutionResource() const = 0;
```

### <a name="return-value"></a>Valore restituito

Prima risorsa di esecuzione raggruppata sotto questo nodo nell'ordine dell'enumerazione.

## <a name="itopologynodegetid-method"></a><a name="getid"></a>Metodo ITopologyNode::GetIdITopologyNode::GetId Method

Restituisce l'identificatore univoco di Gestione risorse per questo nodo.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore univoco di Gestione risorse per questo nodo.

### <a name="remarks"></a>Osservazioni

Il runtime di concorrenza rappresenta i thread di hardware nel sistema in gruppi di nodi del processore. I nodi sono in genere derivati dalla topologia hardware del sistema. Ad esempio, tutti i processori su un socket specifico o un nodo NUMA specifico possono appartenere allo stesso nodo del processore. Gestione risorse assegna identificatori univoci a `0` questi nodi `nodeCount - 1`a `nodeCount` partire da , dove rappresenta il numero totale di nodi del processore nel sistema.

Il numero di nodi può essere ottenuto dalla funzione [GetProcessorNodeCount](concurrency-namespace-functions.md).

## <a name="itopologynodegetnext-method"></a><a name="getnext"></a>Metodo ITopologyNode::GetNextITopologyNode::GetNext Method

Restituisce un'interfaccia in corrispondenza del nodo di topologia successivo nell'ordine dell'enumerazione.

```cpp
virtual ITopologyNode *GetNext() const = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia in corrispondenza del nodo successivo nell'ordine dell'enumerazione. Se non sono disponibili altri nodi nell'ordine dell'enumerazione della topologia del sistema, tramite questo metodo verrà restituito il valore `NULL`.

## <a name="itopologynodegetnumanode-method"></a><a name="getnumanode"></a>Metodo ITopologyNode::GetNumaNodeITopologyNode::GetNumaNode Method

Restituisce il numero del nodo NUMA assegnato a Windows a cui appartiene questo nodo Resource Maanger.

```cpp
virtual unsigned long GetNumaNode() const = 0;
```

### <a name="return-value"></a>Valore restituito

Numero di nodo NUMA assegnato a Windows a cui appartiene il nodo Gestione risorse.

### <a name="remarks"></a>Osservazioni

Un proxy di thread in esecuzione su una radice del processore virtuale appartenente a questo nodo avrà affinità con almeno il livello di nodo NUMA per il nodo NUMA restituito da questo metodo.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)

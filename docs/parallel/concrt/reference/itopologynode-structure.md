---
title: Struttura ITopologyNode | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- ITopologyNode
- CONCRTRM/concurrency::ITopologyNode
- CONCRTRM/concurrency::ITopologyNode::ITopologyNode::GetExecutionResourceCount
- CONCRTRM/concurrency::ITopologyNode::ITopologyNode::GetFirstExecutionResource
- CONCRTRM/concurrency::ITopologyNode::ITopologyNode::GetId
- CONCRTRM/concurrency::ITopologyNode::ITopologyNode::GetNext
- CONCRTRM/concurrency::ITopologyNode::ITopologyNode::GetNumaNode
dev_langs:
- C++
helpviewer_keywords:
- ITopologyNode structure
ms.assetid: 92e7e032-04f6-4c7c-be36-8f9a35fc4734
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1c4168fbfbd2bf17ad8b8b752d2843c8f57b0f3f
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="itopologynode-structure"></a>Struttura ITopologyNode
Interfaccia a un nodo di topologia come definito da Gestione risorse. Un nodo contiene una o più risorse di esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct ITopologyNode;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ITopologyNode::GetExecutionResourceCount](#getexecutionresourcecount)|Restituisce il numero di risorse di esecuzione raggruppate in questo nodo.|  
|[ITopologyNode::GetFirstExecutionResource](#getfirstexecutionresource)|Restituisce la prima risorsa di esecuzione raggruppata sotto questo nodo nell'ordine dell'enumerazione.|  
|[ITopologyNode::GetId](#getid)|Restituisce il gestore delle risorse dell'identificatore univoco per questo nodo.|  
|[Itopologynode:: GetNext](#getnext)|Restituisce un'interfaccia in corrispondenza del nodo di topologia successivo nell'ordine dell'enumerazione.|  
|[ITopologyNode::GetNumaNode](#getnumanode)|Restituisce il Windows assegnato il numero di nodi NUMA a cui appartiene il nodo del gestore delle risorse.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia viene generalmente utilizzata per analizzare la topologia del sistema, come rilevato dal gestore delle risorse.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ITopologyNode`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="getexecutionresourcecount"></a>  Metodo itopologynode:: Getexecutionresourcecount  
 Restituisce il numero di risorse di esecuzione raggruppate in questo nodo.  
  
```
virtual unsigned int GetExecutionResourceCount() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di risorse di esecuzione raggruppate in questo nodo.  
  
##  <a name="getfirstexecutionresource"></a>  Metodo itopologynode:: Getfirstexecutionresource  
 Restituisce la prima risorsa di esecuzione raggruppata sotto questo nodo nell'ordine dell'enumerazione.  
  
```
virtual ITopologyExecutionResource *GetFirstExecutionResource() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Prima risorsa di esecuzione raggruppata sotto questo nodo nell'ordine dell'enumerazione.  
  
##  <a name="getid"></a>  Metodo itopologynode:: GetID  
 Restituisce il gestore delle risorse dell'identificatore univoco per questo nodo.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il gestore delle risorse dell'identificatore univoco per questo nodo.  
  
### <a name="remarks"></a>Note  
 Il Runtime di concorrenza rappresenta i thread hardware sul sistema in gruppi di nodi del processore. I nodi vengono in genere derivati dalla topologia hardware del sistema. Ad esempio, tutti i processori di un socket specifico o un nodo NUMA specifico possono appartenere allo stesso nodo del processore. Gestione risorse assegna identificatori univoci per tali nodi a partire da `0` alla `nodeCount - 1`, dove `nodeCount` rappresenta il numero totale di nodi di processori nel sistema.  
  
 Il numero di nodi può essere ottenuto dalla funzione [GetProcessorNodeCount](concurrency-namespace-functions.md).  
  
##  <a name="getnext"></a>  Metodo itopologynode:: GetNext  
 Restituisce un'interfaccia in corrispondenza del nodo di topologia successivo nell'ordine dell'enumerazione.  
  
```
virtual ITopologyNode *GetNext() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Interfaccia in corrispondenza del nodo successivo nell'ordine dell'enumerazione. Se non sono disponibili altri nodi nell'ordine dell'enumerazione della topologia del sistema, tramite questo metodo verrà restituito il valore `NULL`.  
  
##  <a name="getnumanode"></a>  Metodo itopologynode:: Getnumanode  
 Restituisce il Windows assegnato il numero di nodi NUMA a cui appartiene il nodo del gestore delle risorse.  
  
```
virtual unsigned long GetNumaNode() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Le finestre assegnate numero del nodo NUMA a cui appartiene il nodo di gestione risorse.  
  
### <a name="remarks"></a>Note  
 Un proxy del thread in esecuzione in una radice del processore virtuale appartenente a questo nodo disporrà affinità almeno al livello del nodo NUMA per il nodo NUMA restituito da questo metodo.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

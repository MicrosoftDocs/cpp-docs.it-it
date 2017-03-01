---
title: Struttura ITopologyNode | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concrtrm/concurrency::ITopologyNode
dev_langs:
- C++
helpviewer_keywords:
- ITopologyNode structure
ms.assetid: 92e7e032-04f6-4c7c-be36-8f9a35fc4734
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: fa774c7f025b581d65c28d65d83e22ff2d798230
ms.openlocfilehash: 8274da148f9f74cad73d63363bbbaff307943539
ms.lasthandoff: 02/24/2017

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
|[Metodo itopologynode:: Getexecutionresourcecount](#getexecutionresourcecount)|Restituisce il numero di risorse di esecuzione raggruppate in questo nodo.|  
|[Metodo itopologynode:: Getfirstexecutionresource](#getfirstexecutionresource)|Restituisce la prima risorsa di esecuzione raggruppata sotto questo nodo nell'ordine dell'enumerazione.|  
|[Metodo itopologynode:: GetID](#getid)|Restituisce l'identificatore univoco di gestione risorse per questo nodo.|  
|[Metodo itopologynode:: GetNext](#getnext)|Restituisce un'interfaccia in corrispondenza del nodo di topologia successivo nell'ordine dell'enumerazione.|  
|[Metodo itopologynode:: Getnumanode](#getnumanode)|Restituisce il Windows assegnato il numero di nodi NUMA a cui appartiene il nodo gestore delle risorse.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia viene generalmente utilizzata per esaminare la topologia del sistema come osservato dal gestore delle risorse.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ITopologyNode`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namegetexecutionresourcecounta--itopologynodegetexecutionresourcecount-method"></a><a name="getexecutionresourcecount"></a>Metodo itopologynode:: Getexecutionresourcecount  
 Restituisce il numero di risorse di esecuzione raggruppate in questo nodo.  
  
```
virtual unsigned int GetExecutionResourceCount() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di risorse di esecuzione raggruppate in questo nodo.  
  
##  <a name="a-namegetfirstexecutionresourcea--itopologynodegetfirstexecutionresource-method"></a><a name="getfirstexecutionresource"></a>Metodo itopologynode:: Getfirstexecutionresource  
 Restituisce la prima risorsa di esecuzione raggruppata sotto questo nodo nell'ordine dell'enumerazione.  
  
```
virtual ITopologyExecutionResource *GetFirstExecutionResource() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Prima risorsa di esecuzione raggruppata sotto questo nodo nell'ordine dell'enumerazione.  
  
##  <a name="a-namegetida--itopologynodegetid-method"></a><a name="getid"></a>Metodo itopologynode:: GetID  
 Restituisce l'identificatore univoco di gestione risorse per questo nodo.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Identificatore univoco di gestione risorse per questo nodo.  
  
### <a name="remarks"></a>Note  
 Il Runtime di concorrenza rappresenta thread hardware sul sistema in gruppi di nodi del processore. I nodi sono in genere derivati dalla topologia hardware del sistema. Ad esempio, tutti i processori di un socket specifico o un nodo NUMA specifico possono appartenere allo stesso nodo del processore. Gestione risorse assegna identificatori univoci a questi nodi a partire da `0` alla `nodeCount - 1`, dove `nodeCount` rappresenta il numero totale di nodi di processori nel sistema.  
  
 Il numero dei nodi può essere ottenuto dalla funzione [GetProcessorNodeCount](concurrency-namespace-functions.md).  
  
##  <a name="a-namegetnexta--itopologynodegetnext-method"></a><a name="getnext"></a>Metodo itopologynode:: GetNext  
 Restituisce un'interfaccia in corrispondenza del nodo di topologia successivo nell'ordine dell'enumerazione.  
  
```
virtual ITopologyNode *GetNext() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Interfaccia in corrispondenza del nodo successivo nell'ordine dell'enumerazione. Se non sono disponibili altri nodi nell'ordine dell'enumerazione della topologia del sistema, tramite questo metodo verrà restituito il valore `NULL`.  
  
##  <a name="a-namegetnumanodea--itopologynodegetnumanode-method"></a><a name="getnumanode"></a>Metodo itopologynode:: Getnumanode  
 Restituisce il Windows assegnato il numero di nodi NUMA a cui appartiene il nodo gestore delle risorse.  
  
```
virtual unsigned long GetNumaNode() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Windows assegnato il numero di nodi NUMA a cui appartiene il nodo di gestione risorse.  
  
### <a name="remarks"></a>Note  
 Un proxy del thread in esecuzione in una radice del processore virtuale appartenente a questo nodo disporrà affinità almeno al livello del nodo NUMA per il nodo NUMA restituito da questo metodo.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)


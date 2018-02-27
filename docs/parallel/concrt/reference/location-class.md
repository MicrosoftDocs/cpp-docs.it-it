---
title: Classe Location | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- location
- CONCRT/concurrency::location
- CONCRT/concurrency::location::location
- CONCRT/concurrency::location::current
- CONCRT/concurrency::location::from_numa_node
dev_langs:
- C++
helpviewer_keywords:
- location class
ms.assetid: c3289f51-5bf1-4dff-a18d-d0dab8e5d9c7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 16362cb8cecff32db1802dd6dea187d047d59294
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="location-class"></a>Classe location
Un'astrazione di una posizione fisica sull'hardware.  
  
## <a name="syntax"></a>Sintassi  
  
```
class location;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[location](#ctor)|Di overload. Costruisce un oggetto `location`.|  
|[~ percorso distruttore](#dtor)|Elimina un oggetto `location`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[current](#current)|Restituisce un oggetto `location` che rappresenta il punto più specifico in cui il thread chiamante è in esecuzione.|  
|[from_numa_node](#from_numa_node)|Restituisce un oggetto `location` che rappresenta un nodo NUMA specifico.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator!=](#operator_neq)|Determina se due oggetti `location` rappresentano posizioni diverse.|  
|[operator=](#operator_eq)|Assegna il contenuto di un oggetto `location` differente a questo oggetto.|  
|[operator==](#operator_eq_eq)|Determina se due `location` oggetti rappresentano lo stesso percorso.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `location`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="dtor"></a> ~ percorso 

 Elimina un oggetto `location`.  
  
```
~location();
```  
  
##  <a name="current"></a> Corrente 

 Restituisce un oggetto `location` che rappresenta il punto più specifico in cui il thread chiamante è in esecuzione.  
  
```
static location __cdecl current();
```  
  
### <a name="return-value"></a>Valore restituito  
 Posizione che rappresenta il punto più specifico in cui il thread chiamante è in esecuzione.  
  
##  <a name="from_numa_node"></a> from_numa_node 

 Restituisce un oggetto `location` che rappresenta un nodo NUMA specifico.  
  
```
static location __cdecl from_numa_node(unsigned short _NumaNodeNumber);
```  
  
### <a name="parameters"></a>Parametri  
 `_NumaNodeNumber`  
 Numero del nodo NUMA per cui costruire una posizione.  
  
### <a name="return-value"></a>Valore restituito  
 Posizione che rappresenta il nodo NUMA specificato dal parametro `_NumaNodeNumber`.  
  
##  <a name="ctor"></a> Percorso 

 Costruisce un oggetto `location`.  
  
```
location();

location(
    const location& _Src);

location(
    T _LocationType,
    unsigned int _Id,
    unsigned int _BindingId = 0,
    _Inout_opt_ void* _PBinding = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `_Src`  
 `_LocationType`  
 `_Id`  
 `_BindingId`  
 `_PBinding`  
  
### <a name="remarks"></a>Note  
 Una posizione costruita predefinita rappresenta il sistema nel suo complesso.  
  
##  <a name="operator_neq"></a> operatore! = 

 Determina se due oggetti `location` rappresentano posizioni diverse.  
  
```
bool operator!= (const location& _Rhs) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
  
### <a name="return-value"></a>Valore restituito  
 `true` se le due posizioni sono diverse; in caso contrario `false`.  
  
##  <a name="operator_eq"></a> operator = 

 Assegna il contenuto di un oggetto `location` differente a questo oggetto.  
  
```
location& operator= (const location& _Rhs);
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
 Oggetto `location` di origine.  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="operator_eq_eq"></a> operatore = = 

 Determina se due `location` oggetti rappresentano lo stesso percorso.  
  
```
bool operator== (const location& _Rhs) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se i due percorsi sono identici, e `false` in caso contrario.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

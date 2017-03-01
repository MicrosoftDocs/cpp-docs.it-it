---
title: Classe Location | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concrt/concurrency::location
dev_langs:
- C++
helpviewer_keywords:
- location class
ms.assetid: c3289f51-5bf1-4dff-a18d-d0dab8e5d9c7
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: 1a404f44600addcbf332fabcfc19a7b48dab0c81
ms.lasthandoff: 02/24/2017

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
|[percorso di costruttore](#ctor)|Di overload. Costruisce un oggetto `location`.|  
|[~ percorso distruttore](#dtor)|Elimina un oggetto `location`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo corrente](#current)|Restituisce un oggetto `location` che rappresenta il punto più specifico in cui il thread chiamante è in esecuzione.|  
|[from_numa_node (metodo)](#from_numa_node)|Restituisce un oggetto `location` che rappresenta un nodo NUMA specifico.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore! = (operatore)](#operator_neq)|Determina se due oggetti `location` rappresentano posizioni diverse.|  
|[operatore = (operatore)](#operator_eq)|Assegna il contenuto di un oggetto `location` differente a questo oggetto.|  
|[operatore Operator = =](#operator_eq_eq)|Determina se due `location` gli oggetti rappresentano lo stesso percorso.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `location`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namedtora-location"></a><a name="dtor"></a>~ percorso 

 Elimina un oggetto `location`.  
  
```
~location();
```  
  
##  <a name="a-namecurrenta-current"></a><a name="current"></a>corrente 

 Restituisce un oggetto `location` che rappresenta il punto più specifico in cui il thread chiamante è in esecuzione.  
  
```
static location __cdecl current();
```  
  
### <a name="return-value"></a>Valore restituito  
 Posizione che rappresenta il punto più specifico in cui il thread chiamante è in esecuzione.  
  
##  <a name="a-namefromnumanodea-fromnumanode"></a><a name="from_numa_node"></a>from_numa_node 

 Restituisce un oggetto `location` che rappresenta un nodo NUMA specifico.  
  
```
static location __cdecl from_numa_node(unsigned short _NumaNodeNumber);
```  
  
### <a name="parameters"></a>Parametri  
 `_NumaNodeNumber`  
 Numero del nodo NUMA per cui costruire una posizione.  
  
### <a name="return-value"></a>Valore restituito  
 Posizione che rappresenta il nodo NUMA specificato dal parametro `_NumaNodeNumber`.  
  
##  <a name="a-namectora-location"></a><a name="ctor"></a>percorso 

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
  
##  <a name="a-nameoperatorneqa-operator"></a><a name="operator_neq"></a>operatore! = 

 Determina se due oggetti `location` rappresentano posizioni diverse.  
  
```
bool operator!= (const location& _Rhs) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
  
### <a name="return-value"></a>Valore restituito  
 `true` se le due posizioni sono diverse; in caso contrario `false`.  
  
##  <a name="a-nameoperatoreqa-operator"></a><a name="operator_eq"></a>operatore = 

 Assegna il contenuto di un oggetto `location` differente a questo oggetto.  
  
```
location& operator= (const location& _Rhs);
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
 Oggetto `location` di origine.  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="a-nameoperatoreqeqa-operator"></a><a name="operator_eq_eq"></a>operatore = = 

 Determina se due `location` gli oggetti rappresentano lo stesso percorso.  
  
```
bool operator== (const location& _Rhs) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se le due posizioni sono identiche, e `false` in caso contrario.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)


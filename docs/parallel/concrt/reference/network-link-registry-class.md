---
title: Classe network_link_registry | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- network_link_registry
- AGENTS/concurrency::network_link_registry
- AGENTS/concurrency::network_link_registry::add
- AGENTS/concurrency::network_link_registry::begin
- AGENTS/concurrency::network_link_registry::contains
- AGENTS/concurrency::network_link_registry::count
- AGENTS/concurrency::network_link_registry::remove
dev_langs: C++
helpviewer_keywords: network_link_registry class
ms.assetid: 3e7b4097-09f1-4252-964e-b15b8f7f7fc6
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 116c36b5c0b990672a455e1419c92d60ec992845
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="networklinkregistry-class"></a>Classe network_link_registry
La classe base astratta `network_link_registry` gestisce i collegamenti tra i blocchi di origine e blocchi di destinazione.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class _Block>
class network_link_registry;
```  
  
#### <a name="parameters"></a>Parametri  
 `_Block`  
 Tipo di dati di blocco memorizzato nel `network_link_registry`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`const_pointer`|Un tipo che fornisce un puntatore a un `const` elemento in un `network_link_registry` oggetto.|  
|`const_reference`|Un tipo che fornisce un riferimento a un `const` elemento archiviato in un `network_link_registry` oggetto per la lettura e l'esecuzione di operazioni const.|  
|`iterator`|Un tipo che fornisce un iteratore che può leggere o modificare qualsiasi elemento in un `network_link_registry` oggetto.|  
|`type`|Un tipo che rappresenta il tipo di blocco memorizzato nel `network_link_registry` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[add](#add)|Quando sottoposto a override in una classe derivata, aggiunge un collegamento al `network_link_registry` oggetto.|  
|[begin](#begin)|Quando sottoposto a override in una classe derivata, restituisce un iteratore al primo elemento nel `network_link_registry` oggetto.|  
|[contiene](#contains)|Quando sottoposto a override in una classe derivata, Cerca il `network_link_registry` oggetto per un blocco specificato.|  
|[count](#count)|In caso di override in una classe derivata, restituisce il numero di elementi di `network_link_registry` oggetto.|  
|[remove](#remove)|Quando sottoposto a override in una classe derivata, rimuove un blocco specificato da di `network_link_registry` oggetto.|  
  
## <a name="remarks"></a>Note  
 Il `network link registry` non è sicuro per l'accesso simultaneo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `network_link_registry`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="add"></a>aggiungere 

 Quando sottoposto a override in una classe derivata, aggiunge un collegamento al `network_link_registry` oggetto.  
  
```
virtual void add(_EType _Link) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_Link`  
 Un puntatore a un blocco da aggiungere.  
  
##  <a name="begin"></a>iniziare 

 Quando sottoposto a override in una classe derivata, restituisce un iteratore al primo elemento nel `network_link_registry` oggetto.  
  
```
virtual iterator begin() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore che punta al primo elemento di `network_link_registry` oggetto.  
  
### <a name="remarks"></a>Note  
 Viene indicato lo stato finale dell'iteratore da un `NULL` collegamento.  
  
##  <a name="contains"></a>contiene 

 Quando sottoposto a override in una classe derivata, Cerca il `network_link_registry` oggetto per un blocco specificato.  
  
```
virtual bool contains(_EType _Link) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_Link`  
 Un puntatore a un blocco che viene cercato nel `network_link_registry` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il blocco è stato trovato, `false` in caso contrario.  
  
##  <a name="count"></a>conteggio 

 In caso di override in una classe derivata, restituisce il numero di elementi di `network_link_registry` oggetto.  
  
```
virtual size_t count() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi di `network_link_registry` oggetto.  
  
##  <a name="remove"></a>rimuovere 

 Quando sottoposto a override in una classe derivata, rimuove un blocco specificato da di `network_link_registry` oggetto.  
  
```
virtual bool remove(_EType _Link) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_Link`  
 Un puntatore a un blocco da rimuovere, se trovato.  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il collegamento è stato trovato e rimosso, `false` in caso contrario.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe single_link_registry](single-link-registry-class.md)   
 [Classe multi_link_registry](multi-link-registry-class.md)

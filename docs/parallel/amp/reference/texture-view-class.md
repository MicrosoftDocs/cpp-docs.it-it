---
title: "Classe texture_view | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 6ec2e289-1626-4727-9592-07981cf1d27d
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe texture_view
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Fornisce accesso in lettura e scrittura a una trama.  `texture_view` può essere utilizzato solo per leggere le trame il cui tipo di valore è `int`, `unsigned int` o `float` con bpse predefinito di 32 bit.  Per leggere altri formati di trama, utilizzare `texture_view<const _Value_type, _Rank>`.  
  
## Sintassi  
  
```  
template <  
   typename _Value_type,  
   int _Rank  
>  
class texture_view;  
  
template <  
   typename _Value_type,  
   int _Rank  
>  
class texture_view : public details::_Texture_base<_Value_type, _Rank>;  
  
template <  
   typename _Value_type,  
   int _Rank  
>  
class texture_view<const _Value_type, _Rank> : public details::_Texture_base<_Value_type, _Rank>;  
```  
  
#### Parametri  
 `_Value_type`  
 Tipo di elementi contenuti nell'aggregato della trama.  
  
 `_Rank`  
 Numero di dimensioni di `texture_view`.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`value_type`|Tipo di elementi contenuti negli aggregati della trama.|  
|`coordinates_type`|Il tipo della coordinata utilizzata per specificare un texel in `texture_view`, ovvero un oggetto `short_vector` con lo stesso numero di dimensioni della trama associata con un tipo di valore `float`.|  
|`gather_return_type`|Tipo restituito utilizzato per riunire le operazioni, ovvero un oggetto `short_vector` di dimensioni 4 che contiene le quattro componenti di colore omogenee raccolte dai quattro valori di texel campionati.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore texture\_view::texture\_view](../Topic/texture_view::texture_view%20Constructor.md)|Di overload.  Costruisce un'istanza di `texture_view`.|  
|[Distruttore texture\_view::~texture\_view](../Topic/texture_view::~texture_view%20Destructor.md)|Elimina l'istanza `texture_view`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo texture\_view::gather\_alpha](../Topic/texture_view::gather_alpha%20Method.md)|Di overload.  Esegue il campionamento della trama alle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti alfa \(w\) dei quattro texel campionati.|  
|[Metodo texture\_view::gather\_blue](../Topic/texture_view::gather_blue%20Method.md)|Di overload.  Esegue il campionamento della trama alle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti blu \(z\) dei quattro texel campionati.|  
|[Metodo texture\_view::gather\_green](../Topic/texture_view::gather_green%20Method.md)|Di overload.  Esegue il campionamento della trama alle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti verdi \(y\) dei quattro texel campionati.|  
|[Metodo texture\_view::gather\_red](../Topic/texture_view::gather_red%20Method.md)|Di overload.  Esegue il campionamento della trama alle coordinate specificate utilizzando la configurazione di campionamento specificata e restituisce i componenti rossi \(x\) dei quattro texel campionati.|  
|[Metodo texture\_view::get](../Topic/texture_view::get%20Method.md)|Di overload.  Ottiene il valore dell'elemento in base all'indice.|  
|[Metodo texture\_view::sample](../Topic/texture_view::sample%20Method.md)|Di overload.  Esegue il campionamento della trama in corrispondenza delle coordinate e a livello di dettaglio specificati utilizzando la configurazione di campionamento specificata.|  
|[Metodo texture\_view::set](../Topic/texture_view::set%20Method.md)|Imposta il valore di un elemento tramite l'indice.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore texture\_view::operator\(\)](../Topic/texture_view::operator\(\)%20Operator.md)|Di overload.  Ottiene il valore dell'elemento in base all'indice.|  
|[texture\_view::operatorOperator](../Topic/texture_view::operatorOperator.md)|Di overload.  Ottiene il valore dell'elemento in base all'indice.|  
|[Operatore texture\_view::operator\=](../Topic/texture_view::operator=%20Operator.md)|Di overload.  Operatore di assegnazione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati texture\_view::value\_type](../Topic/texture_view::value_type%20Data%20Member.md)|Tipo di valore degli elementi di `texture_view`.|  
  
## Gerarchia di ereditarietà  
 `_Texture_base`  
  
 `texture_view`  
  
## Requisiti  
 **Intestazione:** amp\_graphics.h  
  
 **Spazio dei nomi** concurrency::graphics  
  
## Vedere anche  
 [Spazio dei nomi Concurrency::graphics](../../../parallel/amp/reference/concurrency-graphics-namespace.md)
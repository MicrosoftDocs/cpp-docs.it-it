---
title: "Classe writeonly_texture_view | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp_graphics/Concurrency::graphics::writeonly_texture_view"
dev_langs: 
  - "C++"
ms.assetid: 8d117ad3-0a1c-41ae-b29c-7c95fdd4d04d
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe writeonly_texture_view
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Fornisce l'accesso writeonly ad una texture.  
  
## Sintassi  
  
```  
template <  
   typename _Value_type,  
   int _Rank  
>  
class writeonly_texture_view;  
  
template <  
   typename _Value_type,  
   int _Rank  
>  
class writeonly_texture_view<_Value_type, _Rank> : public details::_Texture_base<_Value_type, _Rank>;  
```  
  
#### Parametri  
 `_Value_type`  
 ITipo di elementi nella trama.  
  
 `_Rank`  
 Numero di dimensioni della trama.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`scalar_type`||  
|`value_type`|ITipo di elementi nella trama.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore writeonly\_texture\_view::writeonly\_texture\_view](../Topic/writeonly_texture_view::writeonly_texture_view%20Constructor.md)|Inizializza una nuova istanza della classe [writeonly\_texture\_view](../../../parallel/amp/reference/writeonly-texture-view-class.md).|  
|[Distruttore writeonly\_texture\_view::~writeonly\_texture\_view](../Topic/writeonly_texture_view::~writeonly_texture_view%20Destructor.md)|Elimina l'oggetto [writeonly\_texture\_view](../../../parallel/amp/reference/writeonly-texture-view-class.md).|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo writeonly\_texture\_view::set](../Topic/writeonly_texture_view::set%20Method.md)|Imposta il valore dell'elemento all'indice specificato.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore writeonly\_texture\_view::operator\=](../Topic/writeonly_texture_view::operator=%20Operator.md)|Copia l'oggetto [writeonly\_texture\_view](../../../parallel/amp/reference/writeonly-texture-view-class.md) specificato a questo.|  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante writeonly\_texture\_view::rank](../Topic/writeonly_texture_view::rank%20Constant.md)|Ottiene il rango dell'oggetto [writeonly\_texture\_view](../../../parallel/amp/reference/writeonly-texture-view-class.md).|  
  
## Gerarchia di ereditarietà  
 `_Texture_base`  
  
 `writeonly_texture_view`  
  
## Requisiti  
 **Intestazione:** amp\_graphics.h  
  
 **Spazio dei nomi** Concurrency::graphics  
  
## Vedere anche  
 [Spazio dei nomi Concurrency::graphics](../../../parallel/amp/reference/concurrency-graphics-namespace.md)
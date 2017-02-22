---
title: "Classe texture | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp_graphics/Concurrency::graphics::texture"
dev_langs: 
  - "C++"
ms.assetid: 16e85d4d-e80a-474a-995d-8bf63fbdf34c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe texture
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Una texture è un aggregato di dati in un `accelerator_view` nel dominio dell'extent.  E' una raccolta di variabili, una per ogni elemento in un dominio della classe extent.  Ogni variabile contiene un valore corrispondente al tipo primitivo C\+\+ \(`unsigned int`, `int`, `float`, `double`\), un tipo scalare \(`norm`, o a `unorm`\), o a un tipo vettore di short.  
  
## Sintassi  
  
```  
template <  
   typename _Value_type,  
   int _Rank  
>  
class texture;  
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
|`scalar_type`|Tipi scalari.|  
|`value_type`|Tipi valore.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore texture::texture](../Topic/texture::texture%20Constructor.md)|Inizializza una nuova istanza della classe [texture](../../../parallel/amp/reference/texture-class.md).|  
|[Distruttore texture::~texture](../Topic/texture::~texture%20Destructor.md)|Elimina l'oggetto [texture](../../../parallel/amp/reference/texture-class.md).|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo texture::copy\_to](../Topic/texture::copy_to%20Method.md)|Copia l'oggetto [texture](../../../parallel/amp/reference/texture-class.md) nella destinazione, creando una copia completa.|  
|[Metodo texture::data](../Topic/texture::data%20Method.md)|Restituisce un puntatore della CPU ai dati non elaborati della trama.|  
|[Metodo texture::get](../Topic/texture::get%20Method.md)|Restituisce il valore dell'elemento all'indice specificato.|  
|[Metodo texture::get\_associated\_accelerator\_view](../Topic/texture::get_associated_accelerator_view%20Method.md)|Restituisce l'oggetto [accelerator\_view](../../../parallel/amp/reference/accelerator-view-class.md) che è la destinazione preferita per questa trama in cui eseguire la copia.|  
|[Metodo texture::get\_depth\_pitch](../Topic/texture::get_depth_pitch%20Method.md)|Restituisce il numero di byte tra ciascuna sezione di profondità in una trama di gestione temporanea 3D sulla CPU.|  
|[Metodo texture::get\_row\_pitch](../Topic/texture::get_row_pitch%20Method.md)|Restituisce il numero di byte tra ciascuna riga in una trama di gestione temporanea 2D o 3D sulla CPU.|  
|[Metodo texture::set](../Topic/texture::set%20Method.md)|Imposta il valore dell'elemento all'indice specificato.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore texture::operator\(\)](../Topic/texture::operator\(\)%20Operator.md)|Restituisce il valore dell'elemento specificato dai parametri.|  
|[texture::operatorOperator](../Topic/texture::operatorOperator.md)|Restituisce l'elemento che corrisponde all'indice specificato.|  
|[Operatore texture::operator\=](../Topic/texture::operator=%20Operator.md)|Copia l'oggetto [texture](../../../parallel/amp/reference/texture-class.md) specificato in questo.|  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante texture::rank](../Topic/texture::rank%20Constant.md)|Ottiene il rango dell'oggetto [texture](../../../parallel/amp/reference/texture-class.md).|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati texture::associated\_accelerator\_view](../Topic/texture::associated_accelerator_view%20Data%20Member.md)|Ottiene l'oggetto [accelerator\_view](../../../parallel/amp/reference/accelerator-view-class.md) che è la destinazione preferita in cui copiare questa trama.|  
|[Membro dati texture::depth\_pitch](../Topic/texture::depth_pitch%20Data%20Member.md)|Ottiene il numero di byte tra ciascuna sezione di profondità in una trama di gestione temporanea 3D sulla CPU.|  
|[Membro dati texture::row\_pitch](../Topic/texture::row_pitch%20Data%20Member.md)|Ottiene il numero di byte tra ciascuna riga in una trama di gestione temporanea 2D o 3D sulla CPU.|  
  
## Gerarchia di ereditarietà  
 `_Texture_base`  
  
 `texture`  
  
## Requisiti  
 **Intestazione:** amp\_graphics.h  
  
 **Spazio dei nomi** Concurrency::graphics  
  
## Vedere anche  
 [Spazio dei nomi Concurrency::graphics](../../../parallel/amp/reference/concurrency-graphics-namespace.md)
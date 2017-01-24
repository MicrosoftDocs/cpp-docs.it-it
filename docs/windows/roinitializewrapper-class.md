---
title: "Classe RoInitializeWrapper | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper"
dev_langs: 
  - "C++"
ms.assetid: 4055fbe0-63a7-4c06-b5a0-414fda5640e5
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe RoInitializeWrapper
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
class RoInitializeWrapper  
```  
  
## Note  
 RoInitializeWrapper è una convenienza che inizializza [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e restituisce un HRESULT che indica se l'operazione è stata completata.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore RoInitializeWrapper::RoInitializeWrapper](../windows/roinitializewrapper-roinitializewrapper-constructor.md)|Inizializza una nuova istanza della classe RoInitializeWrapper.|  
|[Distruttore RoInitializeWrapper::~RoInitializeWrapper](../windows/roinitializewrapper-tilde-roinitializewrapper-destructor.md)|Eliminata l'istanza corrente della classe di RoInitializeWrapper.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore RoInitializeWrapper::HRESULT\(\)](../windows/roinitializewrapper-hresult-parens-operator.md)|Recupera il valore di HRESULT prodotto dal costruttore di RoInitializeWrapper.|  
  
## Gerarchia di ereditarietà  
 `RoInitializeWrapper`  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Metodo Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)
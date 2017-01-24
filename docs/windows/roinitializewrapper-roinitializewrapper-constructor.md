---
title: "Costruttore RoInitializeWrapper::RoInitializeWrapper | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::RoInitializeWrapper"
dev_langs: 
  - "C++"
ms.assetid: c6f7fb07-14af-4574-9135-cea164607f30
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttore RoInitializeWrapper::RoInitializeWrapper
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza una nuova istanza della classe RoInitializeWrapper.  
  
## Sintassi  
  
```cpp  
RoInitializeWrapper(  
   RO_INIT_TYPE flags)  
  
```  
  
#### Parametri  
 `flags`  
 Una delle enumerazioni di RO\_INIT\_TYPE, che specifica il supporto fornito da [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
## Osservazioni  
 La classe di RoInitializeWrapper richiama Windows::Foundation::Initialize\(*flags*\).  
  
## Requisiti  
 **Intestazione:** corewrappers.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)
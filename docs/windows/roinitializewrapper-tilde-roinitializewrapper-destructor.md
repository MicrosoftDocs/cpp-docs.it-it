---
title: "Distruttore RoInitializeWrapper::~RoInitializeWrapper | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper"
dev_langs: 
  - "C++"
ms.assetid: afef4c1f-ffde-4cd2-8654-8de4182eb5f4
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Distruttore RoInitializeWrapper::~RoInitializeWrapper
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Annulla l'inizializzazione di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```cpp  
~RoInitializeWrapper()  
```  
  
## Note  
 La classe di RoInitializeWrapper richiama Windows::Foundation::Uninitialize \(\).  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)
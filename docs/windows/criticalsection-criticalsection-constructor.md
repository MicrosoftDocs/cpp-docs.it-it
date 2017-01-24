---
title: "Costruttore CriticalSection::CriticalSection | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::CriticalSection::CriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CriticalSection, costruttore"
ms.assetid: 930b89be-4d74-46bd-8879-5dd4d15bcbd0
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttore CriticalSection::CriticalSection
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza un oggetto di sincronizzazione simile a un oggetto mutex, ma può essere utilizzato solo dai thread di singolo processo.  
  
## Sintassi  
  
```  
explicit CriticalSection(  
   ULONG spincount = 0  
);  
```  
  
#### Parametri  
 `spincount`  
 Imposta il numero di iterazioni cicliche per la sezione critica.  Il valore predefinito è 0.  
  
## Note  
 Per ulteriori informazioni sulle sezioni critiche e gli spincounts, vedere la funzione **InitializeCriticalSectionAndSpinCount** nella sezione sincronizzazione di documenatione di Windows.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe CriticalSection](../windows/criticalsection-class.md)
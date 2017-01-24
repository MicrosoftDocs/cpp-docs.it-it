---
title: "Struttura space_info | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "filesystem/std::tr2::sys::space_info"
dev_langs: 
  - "C++"
ms.assetid: f2b35b42-06ff-45bd-8617-39a0f5358a54
caps.latest.revision: 13
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Struttura space_info
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Contiene informazioni su un volume.  
  
## Sintassi  
  
```  
struct space_info;  
```  
  
## Membri  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`unsigned long long available`|Rappresenta il numero di byte disponibili per rappresentare i dati nel volume.|  
|`unsigned long long capacity`|Rappresenta il numero totale di byte che il volume può rappresentare.|  
|`unsigned long long free`|Rappresenta il numero di byte che non vengono usati per rappresentare i dati nel volume.|  
  
## Requisiti  
 **Intestazione:** filesystem  
  
 **Spazio dei nomi:** std::tr2::sys  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<filesystem\>](../standard-library/filesystem.md)   
 [Funzione space](http://msdn.microsoft.com/it-it/7fce0b0e-523b-4598-b218-47245d0204ca)   
 [Esplorazione del file system \(C\+\+\)](../standard-library/file-system-navigation.md)
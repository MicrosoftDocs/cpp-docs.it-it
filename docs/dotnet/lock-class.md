---
title: "Classe lock | Microsoft Docs"
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
  - "msclr::lock"
  - "msclr.lock"
  - "lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lock (classe)"
ms.assetid: 5123edd9-6aed-497d-9a0b-f4b6d6c0d666
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe lock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa classe consente di automatizzare la creazione di blocco per la sincronizzazione dell'accesso a un oggetto da più thread.  Una volta costruito acquisisce il blocco e distrutti quando si rilascia il blocco.  
  
## Sintassi  
  
```  
ref class lock;  
```  
  
## Note  
 `lock` è disponibile solo per gli oggetti CLR e può essere utilizzato solo nel codice CLR.  
  
 Internamente, la classe lock utilizza <xref:System.Threading.Monitor> per sincronizzare l'accesso.  Vedere questo argomento per informazioni dettagliate sulla sincronizzazione.  
  
## Requisiti  
 msclr \<\\ lock.h di**File di intestazione** \>  
  
 msclr di**Spazio dei nomi**  
  
## Vedere anche  
 [blocco](../dotnet/lock.md)   
 [Membri lock](../dotnet/lock-members.md)
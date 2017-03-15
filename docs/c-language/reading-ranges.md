---
title: "Lettura di intervalli | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 99de29ce-ab14-46f4-97e1-2081fd996b53
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Lettura di intervalli
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 4.9.6.2** L'interpretazione di un carattere trattino \(–\) che non sia né il primo né dell'ultimo carattere in scanlist per la conversione di % \[ nella funzione `fscanf`  
  
 Nella riga seguente  
  
```  
fscanf( fileptr, "%[A-Z]", strptr);  
```  
  
 viene letto qualsiasi numero di caratteri, nell'intervallo che va dalla A alla Z, nella stringa alla quale punta `strptr`.  
  
## Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)
---
title: "Errore irreversibile C1081 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1081"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1081"
ms.assetid: e58adf17-cbe1-4955-a5c7-80622bbba249
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore irreversibile C1081
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': nome file troppo lungo  
  
 La lunghezza del nome di percorso di un file supera `_MAX_PATH`, definito da STDLIB.h come 260 caratteri.  Abbreviare il nome del file.  
  
 Se si chiama CL.exe con un nome di file breve, può essere necessario che il compilatore generi un nome di percorso completo.  È ad esempio possibile che con `cl -c myfile.cpp` venga generato quanto segue:  
  
```  
D:\<very-long-directory-path>\myfile.cpp  
```
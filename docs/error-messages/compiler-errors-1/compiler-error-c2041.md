---
title: "Errore del compilatore C2041 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2041"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2041"
ms.assetid: c9a33bb1-f9cf-47d6-bd21-7d867a8c37d5
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2041
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

cifra 'carattere' non valida per la base 'numero'  
  
 Il carattere specificato non è una cifra valida per la base, quale un ottale o un esadecimale.  
  
 Il seguente codice di esempio genera l'errore C2041:  
  
```  
// C2041.cpp  
int i = 081;   // C2041  8 is not a base 8 digit  
```  
  
 Possibile soluzione:  
  
```  
// C2041b.cpp  
// compile with: /c  
int j = 071;  
```
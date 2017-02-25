---
title: "Errore del compilatore C3874 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3874"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3874"
ms.assetid: fd55fc05-69a7-4237-b3b7-dca1d5400b4f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3874
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il tipo restituito di 'funzione' dovrebbe essere 'int' invece di 'tipo'  
  
 In una funzione non è presente il tipo restituito previsto dal compilatore.  
  
 Il seguente codice di esempio genera l'errore C3874:  
  
```  
// C3874b.cpp  
double main()  
{   // C3874  
}  
```
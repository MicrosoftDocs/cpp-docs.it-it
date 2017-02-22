---
title: "Errore del compilatore C2026 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2026"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2026"
ms.assetid: 8e64b6e1-b967-479b-be97-d12dc4a8e389
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2026
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

stringa troppo grande. Caratteri finali troncati  
  
 La stringa supera il limite di 16380 caratteri a byte singolo.  
  
 Prima della concatenazione delle stringhe adiacenti, le singole stringhe non possono superare i 16380 caratteri a byte singolo.  
  
 È inoltre possibile che l'errore venga generato da una stringa Unicode contenente all'incirca la metà di tale numero di caratteri.  
  
 Nella definizione di stringa seguente viene generato l'errore C2026:  
  
```  
char sz[] =  
"\  
imagine a really, really \  
long string here\  
";  
```  
  
 È possibile suddividere la stringa come segue:  
  
```  
char sz[] =  
"\  
imagine a really, really "  
"long string here\  
";  
```  
  
 Può essere utile memorizzare stringhe letterali di grandi dimensioni \(32 KB o più\) in un file esterno o di risorsa personalizzato.  Per ulteriori informazioni, vedere [Creazione di una nuova risorsa personalizzata o di dati](../../mfc/creating-a-new-custom-or-data-resource.md).
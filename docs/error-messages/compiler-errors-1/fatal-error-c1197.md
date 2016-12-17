---
title: "Errore irreversibile C1197 | Microsoft Docs"
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
  - "C1197"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1197"
ms.assetid: 22b801b7-e792-41f6-a461-973c03c69f25
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1197
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile fare riferimento a 'mscorlib.dll\_1' poiché il programma ha già fatto riferimento a 'mscorlib.dll\_2'  
  
 Il compilatore corrisponde a una versione di Common Language Runtime,  ma si è tentato di fare riferimento a una versione di un file di Common Language Runtime di una versione precedente.  
  
 Per correggere questo errore, fare riferimento solo a file della versione di Common Language Runtime forniti con la versione di Visual C\+\+ in cui è in corso la compilazione.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C1197:  
  
```  
// C1197.cpp  
// compile with: /clr /c  
// processor: x86  
#using "C:\Windows\Microsoft.NET\Framework\v1.1.4322\mscorlib.dll"   // C1197  
// try the following line instead  
// #using "mscorlib.dll"  
```
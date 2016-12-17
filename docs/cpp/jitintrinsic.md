---
title: "jitintrinsic | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "jitintrinsic"
  - "jitintrinsic_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], jitintrinsic"
  - "jitintrinsic __declspec (modificatore)"
ms.assetid: 23dbe416-7ef6-442b-b16d-9a81aab04fa6
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# jitintrinsic
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Contrassegna la funzione come significativa in Common Language Runtime a 64 bit.  Viene utilizzato in alcune funzioni in librerie fornite da Microsoft.  
  
## Sintassi  
  
```  
__declspec(jitintrinsic)  
```  
  
## Note  
 `jitintrinsic` aggiungi un oggetto MODOPT \(<xref:System.Runtime.CompilerServices.IsJitIntrinsic>\) a una firma di funzione.  
  
 Si consiglia di non utilizzare il modificatore `__declspec` poiché potrebbero verificarsi risultati imprevisti.  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)
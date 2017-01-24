---
title: "Errore del compilatore C2506 | Microsoft Docs"
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
  - "C2506"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2506"
ms.assetid: cfed21cd-2404-46f2-985e-d0c2c3820830
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2506
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': impossibile applicare '\_\_declspec\(modificatore\)' a questo simbolo  
  
 Non è possibile dichiarare i membri statici di una classe gestita per processo o per dominio applicazione.  
  
 Per ulteriori informazioni, vedere [appdomain](../../cpp/appdomain.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2506:  
  
```  
// C2506.cpp  
// compile with: /clr /c  
ref struct R {  
   __declspec(process) static int n;   // C2506  
   int o;   // OK  
};  
```
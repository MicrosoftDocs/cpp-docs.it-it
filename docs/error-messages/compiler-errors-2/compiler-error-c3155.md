---
title: "Errore del compilatore C3155 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3155"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3155"
ms.assetid: b04a42e1-64e7-40f8-81fe-c7945348b2cf
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3155
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

attributi non consentiti in un indicizzatore di proprietà  
  
 Una proprietà indicizzata non è stata dichiarata in modo corretto.  Per ulteriori informazioni, vedere [Procedura: utilizzare proprietà indicizzate](../../misc/how-to-use-indexed-properties.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3155:  
  
```  
// C3155.cpp  
// compile with: /clr /c  
using namespace System;  
ref struct R {  
   property int F[[ParamArray] int] {   // C3155  
   // try the following line instead  
   // property int F[ int] {   // OK  
      int get(int i) {   
         return 0;   
      }  
   }  
};  
```
---
title: "Errore del compilatore C3883 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3883"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3883"
ms.assetid: cdd1c1f4-f268-4469-9c62-d52303114b0c
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C3883
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': un membro dati statico initonly deve essere inizializzato  
  
 Una variabile contrassegnata con [initonly](../../dotnet/initonly-cpp-cli.md) non è stata inizializzata in modo corretto.  
  
 Il seguente codice di esempio genera l'errore C3883:  
  
```  
// C3883.cpp  
// compile with: /clr  
ref struct Y1 {  
   initonly  
   static int staticConst1;   // C3883  
};  
```  
  
 Nell'esempio riportato di seguito viene illustrata una possibile soluzione:  
  
```  
// C3883b.cpp  
// compile with: /clr /c  
ref struct Y1 {  
   initonly  
   static int staticConst2 = 0;  
};  
```  
  
 Nell'esempio riportato di seguito viene illustrato come eseguire l'inizializzazione in un costruttore statico:  
  
```  
// C3883c.cpp  
// compile with: /clr /LD  
ref struct Y1 {  
   initonly  
   static int staticConst1;  
  
   static Y1() {  
      staticConst1 = 0;  
   }  
};  
```
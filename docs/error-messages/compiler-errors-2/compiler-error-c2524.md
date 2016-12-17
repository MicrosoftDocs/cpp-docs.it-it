---
title: "Errore del compilatore C2524 | Microsoft Docs"
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
  - "C2524"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2524"
ms.assetid: e71d17f5-2fc2-416b-8dbd-e9bed85eb33a
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2524
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'distruttore': un distruttore\/finalizzatore deve avere un elenco di parametri 'void'  
  
 L'elenco di parametri del distruttore o del finalizzatore non è [void](../../cpp/void-cpp.md).  Non sono consentiti altri tipi di parametri.  
  
## Esempio  
 Nel codice seguente viene riprodotto l'errore C2524.  
  
```  
// C2524.cpp  
// compile with: /c  
class A {  
   A() {}  
   ~A(int i) {}    // C2524  
   // try the following line instead  
   // ~A() {}  
};  
```  
  
## Esempio  
 Nel codice seguente viene riprodotto l'errore C2524.  
  
```  
// C2524_b.cpp  
// compile with: /clr /c  
ref struct I1 {  
protected:  
   !I1(int i);   // C2524  
   // try the following line instead  
   // !I1();  
};  
```
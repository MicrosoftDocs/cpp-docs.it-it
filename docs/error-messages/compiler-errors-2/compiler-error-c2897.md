---
title: "Errore del compilatore C2897 | Microsoft Docs"
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
  - "C2897"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2897"
ms.assetid: a88349e2-823f-42a0-8660-0653b677afa4
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2897
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

un distruttore\/finalizzatore non può essere un modello di funzione  
  
 I distruttori o finalizzatori non possono essere sottoposti a overload. Non è quindi consentito dichiarare un distruttore come modello \(quest'ultimo definirebbe un insieme di distruttori\).  
  
 Il seguente codice di esempio genera l'errore C2897:  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2897:  
  
```  
// C2897.cpp  
// compile with: /c  
class X {  
public:  
   template<typename T> ~X() {}   // C2897  
};  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2897:  
  
```  
// C2897_b.cpp  
// compile with: /c /clr  
ref struct R2 {  
protected:  
   template<typename T> !R2(){}   // C2897 error  
};  
```
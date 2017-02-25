---
title: "Errore del compilatore C3495 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3495"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3495"
ms.assetid: 1fd40cb8-8373-403d-b8a8-f08424a50807
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3495
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': la durata dell'archiviazione di un'acquisizione di espressioni lambda deve essere automatica  
  
 Non è possibile acquisire una variabile che non ha una durata di archiviazione automatica, ad esempio una variabile contrassegnata come `static` o `extern`.  
  
### Per correggere l'errore  
  
-   Non passare una variabile `static` o `extern` all'elenco di acquisizione dell'espressione lambda.  
  
## Esempio  
 L'esempio seguente genera l'errore C3495 perché la variabile `static``n` è presente nell'elenco di acquisizione di un'espressione lambda:  
  
```  
// C3495.cpp int main() { static int n = 66; [&n]() { return n; }(); // C3495 }  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)   
 [\(NOTINBUILD\) Identificatori di classe di archiviazione](http://msdn.microsoft.com/it-it/10b3d22d-cb40-450b-994b-08cf9a211b6c)
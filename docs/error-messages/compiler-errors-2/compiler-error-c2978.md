---
title: "Errore del compilatore C2978 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2978"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2978"
ms.assetid: 5e7bee82-e266-4ccd-ad2e-ee89606ec5bf
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2978
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore di sintassi: previsto 'keyword1' o 'keyword2', trovato il tipo 'keyword3'. I parametri non di tipo non sono supportati in generics  
  
 Una classe generica è stata dichiarata in modo non corretto. Per altre informazioni, vedere [Generics](../../windows/generics-cpp-component-extensions.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C2978.  
  
```  
// C2978.cpp // compile with: /clr /c generic <ref class T>   // C2978 // try the following line instead // generic <typename T>   // OK ref class Utils { static void sort(T elems, size_t size); }; generic <int> // try the following line instead // generic <class T> ref class Utils2 { static void sort(T elems, size_t size); };  
```
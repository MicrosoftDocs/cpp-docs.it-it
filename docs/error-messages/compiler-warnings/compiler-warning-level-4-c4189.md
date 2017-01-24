---
title: "Avviso del compilatore (livello 4) C4189 | Microsoft Docs"
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
  - "C4189"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4189"
ms.assetid: 7ad9242c-228e-4054-8244-5e914b618ef3
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4189
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': variabile locale inizializzata ma senza riferimenti  
  
 Una variabile è stata dichiarata e inizializzata, ma non usata.  
  
 L'esempio seguente genera l'errore C4189:  
  
```  
// C4189.cpp // compile with: /W4 int main() { int a = 1;   // C4189, remove declaration to resolve }  
```
---
title: "Errore del compilatore C2619 | Microsoft Docs"
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
  - "C2619"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2619"
ms.assetid: c826f8ab-d66a-4b79-a0b2-93b0af8c41ac
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2619
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': membro dati statico non consentito in una struct o unione anonima  
  
 Un membro di una struct o unione anonima è dichiarato come `static`.  
  
 L'esempio seguente genera l'errore C2619 e illustra come risolverlo rimuovendo la parola chiave static.  
  
```  
// C2619.cpp  
int main() {  
   union { static int j; };  // C2619  
   union { int j; };  // OK  
}  
```
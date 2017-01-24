---
title: "Errore del compilatore C2785 | Microsoft Docs"
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
  - "C2785"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2785"
ms.assetid: d8d13360-0d00-4815-8475-b49c7f0dc0f3
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2785
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'dichiarazione1' e 'dichiarazione2' hanno tipi restituiti diversi  
  
 Il tipo restituito della specializzazione del template di funzione è diverso dal tipo restituito del template di funzione primario.  
  
### Per correggere l'errore  
  
1.  Controllare tutte le specializzazioni del template di funzione per ottenere tipi coerenti.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C2785:  
  
```  
// C2785.cpp  
// compile with: /c  
template<class T> void f(T);  
  
template<> int f(int); // C2785  
template<> void f(int); // OK  
```
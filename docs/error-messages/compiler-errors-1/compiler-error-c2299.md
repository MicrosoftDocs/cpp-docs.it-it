---
title: "Errore del compilatore C2299 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2299"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2299"
ms.assetid: d001c2bc-f6fd-47aa-8e42-0eb824d6441d
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# Errore del compilatore C2299
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': modifica del comportamento. Una specializzazione esplicita non può essere un costruttore di copia o un operatore di assegnazione di copia.  
  
 Questo errore può anche essere generato in seguito alle operazioni di conformità eseguite per Visual C\+\+ 2005: le versioni precedenti di Visual C\+\+ consentivano specializzazioni esplicite per un costruttore di copia o un operatore di assegnazione di copia.  
  
 Per risolvere l'errore C2299, rendere il costruttore o l'operatore di assegnazione di copia una funzione non modello che accetta un tipo classe anziché una funzione modello.  Nel codice che chiama il costruttore o l'operatore di assegnazione di copia specificando in modo esplicito gli argomenti del modello è necessario rimuovere tali argomenti.  
  
 Il seguente codice di esempio genera l'errore C2299:  
  
```  
// C2299.cpp  
// compile with: /c  
class C {  
   template <class T>  
   C (T t);  
  
   template <> C (const C&);   // C2299  
   C (const C&);   // OK  
};  
```
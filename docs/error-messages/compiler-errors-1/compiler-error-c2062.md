---
title: "Errore del compilatore C2062 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2062"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2062"
ms.assetid: 6cc98353-2ddf-43ab-88a2-9cc91cdd6033
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2062
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

tipo 'tipo' imprevisto  
  
 Non era previsto un nome di tipo.  
  
 Il seguente codice di esempio genera l'errore C2062:  
  
```  
// C2062.cpp  
// compile with: /c  
struct A {  : int l; };   // C2062  
struct B { private: int l; };   // OK  
```  
  
 L'errore C2062 può verificarsi anche a causa della modalità con cui il compilatore gestisce i tipi non definiti nell'elenco di parametri di un costruttore.  Se il compilatore rileva un tipo non definito o con errori di ortografia, presuppone che il costruttore sia un'espressione e genera l'errore C2062.  Per correggere questo errore, utilizzare solo tipi definiti nell'elenco di parametri di un costruttore.
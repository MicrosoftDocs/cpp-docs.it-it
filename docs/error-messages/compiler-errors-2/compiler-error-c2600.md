---
title: "Errore del compilatore C2600 | Microsoft Docs"
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
  - "C2600"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2600"
ms.assetid: cce11943-ea01-4bee-a7b0-b67d24ec6493
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2600
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': impossibile definire una funzione membro speciale generata dal compilatore. Occorre prima dichiararla nella classe  
  
 Prima che le funzioni di membro quali costruttori o distruttori per una classe possano essere definite, è necessario che siano dichiarate nella classe.  Il compilatore può generare costruttori e distruttori predefiniti \(chiamati funzioni membro speciali\) se non sono dichiarati nella classe.  Tuttavia, se si definisce una di queste funzioni senza una dichiarazione corrispondente nella classe, il compilatore rileva un conflitto.  
  
 Per correggere questo errore, nella dichiarazione della classe, dichiarare ogni funzione membro definita all'esterno della dichiarazione di classe.  
  
 Il seguente codice di esempio genera l'errore C2600:  
  
```  
// C2600.cpp  
// compile with: /c  
class C {};  
C::~C() {}   // C2600  
  
class D {  
   D::~D();  
};  
  
D::~D() {}  
```
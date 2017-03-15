---
title: "Avviso del compilatore (livello 2) C4150 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4150"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4150"
ms.assetid: ff1760ec-0d9f-4d45-b797-94261624becf
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 2) C4150
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

eliminazione di puntatore al tipo incompleto 'tipo'. Nessun distruttore chiamato  
  
 Poiché viene chiamato l'operatore **delete** per eliminare un tipo dichiarato ma non definito, non è possibile trovare un distruttore.  
  
 Il seguente codice di esempio genera l'errore C4150:  
  
```  
// C4150.cpp  
// compile with: /W2  
class  IncClass;  
  
void NoDestruct( IncClass* pIncClass )  
{  
   delete pIncClass;  
} // C4150, define class to resolve  
  
int main()  
{  
}  
```
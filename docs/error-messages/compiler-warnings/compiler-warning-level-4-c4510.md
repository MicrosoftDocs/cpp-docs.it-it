---
title: "Avviso del compilatore (livello 4) C4510 | Microsoft Docs"
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
  - "C4510"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4510"
ms.assetid: fd28d1d4-ad27-4dad-94c0-9dba46c93180
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4510
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'classe': impossibile generare un costruttore predefinito  
  
 Non è possibile generare un costruttore predefinito per la classe specificata e non è stato creato alcun costruttore definito dall'utente.  Non sarà pertanto possibile creare oggetti di questo tipo.  
  
 Varie situazioni impediscono la generazione di un costruttore predefinito, incluse le seguenti:  
  
-   Un membro dati const.  
  
-   Un membro dati di tipo riferimento.  
  
 È necessario creare un costruttore predefinito definito dall'utente per la classe in cui vengono inizializzati tali membri.  
  
 Il seguente codice di esempio genera l'errore C4510:  
  
```  
// C4510.cpp  
// compile with: /W4  
struct A {  
   const int i;  
   int &j;  
   A& operator=( const A& ); // C4510 expected  
   // uncomment the following line to resolve this C4510  
   // A(int ii, int &jj) : i(ii), j(jj) {}  
};   // C4510  
  
int main() {  
}  
```
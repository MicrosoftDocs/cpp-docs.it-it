---
title: "Errore del compilatore C2758 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2758"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2758"
ms.assetid: 1d273034-194c-4926-9869-142d1b219cbe
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2758
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'member': un membro di tipo di riferimento deve essere inizializzato  
  
 L'errore del compilatore C2758 si verifica quando il costruttore non inizializza un membro del tipo riferimento in un elenco di inizializzatori.  Il compilatore lascia il membro non definito.  È necessario che le variabili del membro di riferimento siano inizializzate quando vengono dichiarate o che ricevano un valore nell'elenco di inizializzazione del costruttore.  
  
 L'esempio seguente genera l'errore C2758:  
  
```  
// C2758.cpp  
// Compile by using: cl /W3 /c C2758.cpp  
struct A {  
   const int i;  
  
   A(int n) { };   // C2758  
   // try the following line instead  
   // A(int n) : i{n} {};  
};  
```
---
title: "Errore del compilatore C2803 | Microsoft Docs"
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
  - "C2803"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2803"
ms.assetid: 2cdbe374-8cc4-4c4e-ba15-062a7479e937
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2803
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator operatore' deve avere almeno un parametro formale di tipo classe  
  
 Manca un parametro di tipo classe nell'operatore di overload.  
  
 Per poter scrivere "a \< b" \(con a e b di classe tipo A\), è necessario passare almeno un parametro per riferimento \(utilizzando riferimenti e non puntatori\) o per valore.  
  
 Se entrambi i parametri sono puntatori, verrà effettuato un semplice confronto degli indirizzi dei puntatori e la conversione definita dall'utente non verrà utilizzata.  
  
 Il seguente codice di esempio genera l'errore C2803:  
  
```  
// C2803.cpp  
// compile with: /c  
class A{};  
bool operator< (const A *left, const A *right);   // C2803  
// try the following line instead  
// bool operator< (const A& left, const A& right);  
```
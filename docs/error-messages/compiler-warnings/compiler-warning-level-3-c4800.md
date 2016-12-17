---
title: "Avviso del compilatore (livello 3) C4800 | Microsoft Docs"
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
  - "C4800"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4800"
ms.assetid: 4f409799-a250-45ed-bb5f-657691b0d9f7
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4800
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': imposto valore booleano 'true' o false' \(avviso di prestazioni\)  
  
 L'avviso viene generato quando un valore non `bool` viene assegnato al tipo `bool`.  Il messaggio è in genere dovuto all'assegnazione di variabili `int` alle variabili `bool` in casi in cui la variabile `int` contiene solo valori **true** e **false** e può essere dichiarata nuovamente come tipo `bool`.  Se non è possibile riscrivere l'espressione in modo da utilizzare il tipo `bool`, aggiungere "`!=0`" all'espressione per assegnarle tale tipo.  In base all'impostazione di progettazione, l'esecuzione del cast dell'espressione nel tipo `bool` non determina la disattivazione dell'avviso.  
  
 Il seguente codice di esempio genera l'errore C4800:  
  
```  
// C4800.cpp  
// compile with: /W3  
int main() {  
   int i = 0;  
  
   // try..  
   // bool i = 0;  
  
   bool j = i;   // C4800  
   j++;  
}  
```
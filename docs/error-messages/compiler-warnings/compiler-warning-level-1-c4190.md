---
title: "Avviso del compilatore (livello 1) C4190 | Microsoft Docs"
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
  - "C4190"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4190"
ms.assetid: a4d0ad93-a19a-4063-addd-36d605831567
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4190
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore1' è stato avviato al collegamento C, ma restituisce il tipo definito dall'utente 'identificatore2', che è incompatibile con il C  
  
 Una funzione o un puntatore a funzione contiene un tipo definito dell'utente, ovvero un tipo di classe, struttura, enumerazione, unione o [\_\_value](../../misc/value.md), come tipo restituito e un collegamento "C" `extern`.  Questa operazione è valida nei seguenti casi:  
  
-   Tutte le chiamate alla funzione sono effettuate da C\+\+.  
  
-   La definizione della funzione è in C\+\+.  
  
## Esempio  
  
```  
// C4190.cpp  
// compile with: /W1 /LD  
struct X  
{  
   int i;  
   X ();  
   virtual ~X ();  
};  
  
extern "C" X func ();   // C4190  
```
---
title: "Errore del compilatore C2530 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2530"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2530"
ms.assetid: b790a312-48df-4a6a-9e27-be2c5f32f16c
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2530
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': i riferimenti devono essere inizializzati  
  
 È necessario inizializzare un riferimento al momento della dichiarazione, a meno che non sia già stato dichiarato:  
  
-   con la parola chiave [extern](../../cpp/using-extern-to-specify-linkage.md).  
  
-   come membro di una classe, struttura o unione e inizializzato nel costruttore.  
  
-   come parametro in una definizione o dichiarazione di funzione.  
  
-   come tipo restituito di una funzione.  
  
 Il seguente codice di esempio genera l'errore C2530:  
  
```  
// C2530.cpp  
int main() {  
   int i = 0;  
   int &j;   // C2530  
   int &k = i;   // OK  
}  
```
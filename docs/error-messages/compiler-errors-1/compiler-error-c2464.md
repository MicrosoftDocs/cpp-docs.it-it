---
title: "Errore del compilatore C2464 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2464"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2464"
ms.assetid: ace953d6-b414-49ee-bfef-90578a8da00c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2464
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': impossibile utilizzare 'new' per allocare un riferimento  
  
 Un identificatore di riferimento è stato allocato con l'operatore `new`.  I riferimenti non sono oggetti di memoria. `new` non può quindi restituire un puntatore ai riferimenti.  Utilizzare la sintassi delle dichiarazioni di variabile standard per dichiarare un riferimento.  
  
 Il seguente codice di esempio genera l'errore C2464:  
  
```  
// C2464.cpp  
int main() {  
   new ( int& ir );   // C2464  
}  
```
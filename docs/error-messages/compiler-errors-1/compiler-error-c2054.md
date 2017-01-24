---
title: "Errore del compilatore C2054 | Microsoft Docs"
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
  - "C2054"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2054"
ms.assetid: 37f7c612-0d7d-4728-9e67-ac4160555f48
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2054
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

previsto '\(' dopo 'identificatore'  
  
 L'identificatore della funzione è utilizzato in un contesto che richiede le parentesi di chiusura.  
  
 Questo errore può essere causato dall'omissione di un segno di uguale \(\=\) in un'inizializzazione complessa.  
  
 Il seguente codice di esempio genera l'errore C2054:  
  
```  
// C2054.c  
int array1[] { 1, 2, 3 };   // C2054, missing =  
```  
  
 Possibile soluzione:  
  
```  
// C2054b.c  
int main() {  
   int array2[] = { 1, 2, 3 };  
}  
```
---
title: "Errore del compilatore C3854 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3854"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3854"
ms.assetid: 32a9ead0-c6c7-485a-8802-c7b1fe921d3a
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3854
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'espressione a sinistra di '\=' restituisce una funzione.Impossibile eseguire un'assegnazione a una funzione \(una funzione non è un l\-value\)  
  
 Non è possibile reinizializzare un riferimento.  La dereferenziazione di un riferimento a una funzione genera una funzione rvalue a cui non è possibile eseguire un'assegnazione.  Non è pertanto possibile eseguire un'assegnazione tramite un riferimento a una funzione.  
  
 Il seguente codice di esempio genera l'errore C3854:  
  
```  
// C3854.cpp  
int afunc(int i)  
{  
   return i;  
}  
  
typedef int (& rFunc_t)(int);  
typedef int (* pFunc_t)(int);  
  
int main()  
{  
   rFunc_t rf = afunc;   // OK binding a reference to function  
   pFunc_t pf = &afunc;   // OK initializing a pointer to function  
  
   *pf = &afunc;   // C3854  
   // try the following line instead  
   // pf = &afunc;  
   *rf = &afunc;   // C3854  
}  
```
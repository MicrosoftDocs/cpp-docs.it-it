---
title: "Errore del compilatore C2513 | Microsoft Docs"
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
  - "C2513"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2513"
ms.assetid: ab5b21d3-61e2-4df7-8eea-6f14d6ba8620
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2513
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': nessuna variabile dichiarata prima di '\='  
  
 L'identificatore del tipo è presente in una dichiarazione senza identificatore della variabile.  
  
 Il seguente codice di esempio genera l'errore C2513:  
  
```  
// C2513.cpp  
int main() {  
   int = 9;   // C2513  
   int i = 9;   // OK  
}  
```  
  
 Questo errore può anche venire generato come risultato delle operazioni di conformità eseguite per Visual Studio .NET 2003: l'inizializzazione di un typedef non è più consentita.  L'inizializzazione di un typedef non è consentita dallo standard e attualmente genera un errore del compilatore.  
  
```  
// C2513b.cpp  
// compile with: /c  
typedef struct S {  
   int m_i;  
} S = { 1 };   // C2513  
// try the following line instead  
// } S;  
```  
  
 Una soluzione alternativa potrebbe consistere nell'eliminare `typedef` per definire una variabile con un elenco di inizializzatori di aggregazione, ma è comunque sconsigliata perché verrebbe creata una variabile con lo stesso nome del tipo e quest'ultimo risulterebbe quindi nascosto.
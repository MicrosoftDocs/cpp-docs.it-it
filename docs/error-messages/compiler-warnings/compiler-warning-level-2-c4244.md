---
title: "Avviso del compilatore (livello 2) C4244 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4244"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4244"
ms.assetid: 2c19d157-21d1-42c2-a6c0-3f30f2ce3813
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 2) C4244
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'argomento': conversione da 'tipo1' a 'tipo2'. Possibile perdita di dati  
  
 Un tipo a virgola mobile è stato convertito in un tipo integer.  È possibile che si sia verificata una perdita di dati.  
  
 Se viene visualizzato l'avviso C4244, è necessario modificare il programma in modo che utilizzi tipi compatibili oppure aggiungere alcuni costrutti logici al codice per assicurarsi che l'intervallo dei valori possibili sia compatibile con i tipi in uso.  
  
 L'avviso C4244 può venire generato anche a livello 3 e 4. Per ulteriori informazioni, vedere [Avviso del compilatore \(livellos 3 and 4\) C4244](../../error-messages/compiler-warnings/compiler-warning-levels-3-and-4-c4244.md).  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C4244:  
  
```  
// C4244_level2.cpp  
// compile with: /W2  
  
int f(int x){ return 0; }  
int main() {  
   double x = 10.1;  
   int i = 10;  
   return (f(x));   // C4244  
   // try the following line instead  
   // return (f(i));  
}  
```
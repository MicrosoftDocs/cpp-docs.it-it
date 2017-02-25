---
title: "Errore del compilatore C2712 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2712"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2712"
ms.assetid: f7d4ffcc-7ed2-459b-8067-a728ce647071
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Errore del compilatore C2712
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile utilizzare \_\_try in funzioni che richiedono la rimozione di oggetti  
  
 L'errore C2712 può verificarsi se si usa [\/EHsc](../../build/reference/eh-exception-handling-model.md) e una funzione con la gestione di eccezioni strutturata contiene anche oggetti che richiedono la rimozione \(eliminazione\).  
  
 Possibili soluzioni:  
  
-   Spostare il codice che richiede SEH in un'altra funzione  
  
-   Riscrivere le funzioni che usano SEH per evitare l'uso di variabili e parametri locali contenenti distruttori.  Non usare SEH nei costruttori o nei distruttori  
  
-   Compilare senza \/EHsc  
  
 L'errore C2712 può verificarsi anche se si chiama un metodo dichiarato usando la parola chiave [\_\_event](../../cpp/event.md).  Poiché l'evento potrebbe essere usato in un ambiente multithreading, il compilatore genera un codice che impedisce la manipolazione dell'oggetto evento sottostante e quindi include il codice generato in un'[istruzione try\-finally](../../cpp/try-finally-statement.md) SEH.  Di conseguenza, l'errore C2712 si verificherà se si chiama il metodo dell'evento e si passa per valore un argomento il cui tipo contiene un distruttore.  Una soluzione in questo caso consiste nel passare l'argomento come riferimento costante.  
  
## Esempio  
 L'errore C2712 può verificarsi anche se si compila con **\/clr:pure** e si dichiara una matrice statica di puntatori a funzioni in un blocco `__try`.  Un membro statico richiede al compilatore di usare l'inizializzazione dinamica in **\/clr:pure**, che comporta la gestione delle eccezioni C\+\+.  La gestione delle eccezioni C\+\+ non è però consentita in un blocco `__try`.  
  
 L'esempio seguente genera l'errore C2712 e mostra come risolverlo.  
  
```  
// C2712.cpp  
// compile with: /clr:pure /c  
struct S1 {  
   static int smf();  
   void fnc();  
};  
  
void S1::fnc() {  
   __try {  
      static int (*array_1[])() = {smf,};   // C2712  
  
      // OK  
      static int (*array_2[2])();  
      array_2[0] = smf;  
    }  
    __except(0) {}  
}  
```
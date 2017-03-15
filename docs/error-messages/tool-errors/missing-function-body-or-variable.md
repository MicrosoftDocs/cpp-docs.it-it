---
title: "Codice di funzione o variabile mancante | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "corpo della funzione"
  - "variabili, mancante"
ms.assetid: 1a88d809-b14f-46a4-97c4-3e48beb418f2
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Codice di funzione o variabile mancante
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La compilazione può continuare senza errori solo con un prototipo di funzione, ma una chiamata a un indirizzo non può essere risolta dal linker poiché non esiste il codice della funzione o uno spazio di variabile riservato.  Questo errore non viene visualizzato finché non si crea una chiamata alla funzione che il linker deve risolvere.  
  
## Esempio  
 La chiamata alla funzione in main genererà l'errore LNK2019 perché, a causa del prototipo, il compilatore presupporrà che la funzione esista,  mentre il linker non ne rileverà la presenza.  
  
```  
// LNK2019_MFBV.cpp  
// LNK2019 expected  
void DoSomething(void);  
int main() {  
   DoSomething();  
}  
```  
  
## Esempio  
 In C\+\+, accertarsi di includere nella definizione della classe l'implementazione di una funzione specifica per una classe, non solo un prototipo.  Se si definisce la classe all'esterno del file di intestazione, verificare di includere il nome della classe prima della funzione \(`Classname``::``memberfunction`\).  
  
```  
// LNK2019_MFBV_2.cpp  
// LNK2019 expected  
struct A {  
   static void Test();  
};  
  
// Should be void A::Test() {}  
void Test() {}  
  
int main() {  
   A AObject;  
   AObject.Test();  
}  
```  
  
## Vedere anche  
 [Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)
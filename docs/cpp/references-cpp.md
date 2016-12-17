---
title: "Riferimenti (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dichiarazioni, riferimenti"
  - "oggetti [C++], riferimento"
  - "riferimenti"
  - "riferimenti, dichiarazione"
  - "riferimenti, a puntatori"
  - "riferimento a oggetti, sintassi del dichiaratore"
ms.assetid: 68156f7f-97a0-4b66-b26d-b25ade5e3bd8
caps.latest.revision: 12
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Riferimenti (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un riferimento, analogamente a un puntatore, archivia l'indirizzo di un oggetto che si trova in un'altra posizione in memoria.  A differenza di un puntatore, dopo l'inizializzazione non è possibile impostare un riferimento in modo che indichi un oggetto diverso o che sia impostato su Null.  Esistono due tipi di riferimenti: i riferimenti lvalue che fanno riferimento a una variabile denominata e i riferimenti rvalue che fanno riferimento a un [oggetto temporaneo](../cpp/temporary-objects.md).  L'operatore & indica un riferimento lvalue e l'operatore && indica un riferimento rvalue o un riferimento universale \(rvalue o lvalue\) in base al contesto.  
  
 È possibile dichiarare i riferimenti tramite la seguente sintassi:  
  
```  
[storage-class-specifiers] [cv-qualifiers] type-specifiers   
[ms-modifier] declarator [= expression];  
```  
  
 È possibile usare qualsiasi dichiaratore valido che specifica un riferimento.  A meno che il riferimento non sia un riferimento al tipo di funzione o di matrice, si applica la sintassi seguente semplificata:  
  
```  
[storage-class-specifiers] [cv-qualifiers] type-specifiers [& or &&]   
[cv-qualifiers] identifier [= expression];  
```  
  
 I riferimenti vengono dichiarati tramite la seguente sequenza:  
  
 1.  Gli identificatori di dichiarazione:  
  
-   Identificatore della classe di archiviazione facoltativo.  
  
-   I qualificatori facoltativi **const** e\/o `volatile`.  
  
-   Il tipo di identificatore: il nome di un tipo.  
  
-   2.  Dichiaratore:  
  
-   Un modificatore facoltativo specifico di Microsoft.  Per altre informazioni, vedere il sito Web Microsoft [Modificatori specifici di Microsoft](../cpp/microsoft-specific-modifiers.md).  
  
-   L'operatore & oppure l'operatore &&.  
  
-   I qualificatori facoltativi **const** e\/o `volatile`.  
  
-   Identificatore.  
  
 3.  Inizializzatore facoltativo.  
  
 I form di dichiaratori più complessi per i puntatori a matrici e a funzioni si applicano anche ai riferimenti alle matrici e alle funzioni; vedere gli argomenti relativi ai [puntatori](../cpp/pointers-cpp.md) e ai [dichiaratori](http://msdn.microsoft.com/it-it/8a7b9b51-92bd-4ac0-b3fe-0c4abe771838).  
  
 Più dichiaratori e inizializzatori possono essere visualizzati in un elenco separato da virgola che segue un singolo identificatore di dichiarazione.  Ad esempio:  
  
```  
int &i;   
int &i, &j;   
```  
  
 I riferimenti, i puntatori e gli oggetti possono essere dichiarati insieme:  
  
```  
int &ref, *ptr, k;   
```  
  
 Un riferimento contiene l'indirizzo di un oggetto, ma dal punto di vista sintattico si comporta come un oggetto.  
  
 Nel seguente programma osservare come il nome dell'oggetto, `Today` e il riferimento all'oggetto, `TodayRef`, possano essere usati in modo identico nei programmi:  
  
## Esempio  
  
```  
// references.cpp  
#include <stdio.h>  
struct S {  
   short i;  
};  
  
int main() {  
   S  s;   // Declare the object.  
   S& SRef = s;   // Declare the reference.  
   s.i = 3;  
  
   printf_s("%d\n", s.i);  
   printf_s("%d\n", SRef.i);  
  
   SRef.i = 4;  
   printf_s("%d\n", s.i);  
   printf_s("%d\n", SRef.i);  
}  
```  
  
  **3**  
**3**  
**4**  
**4**   
## Commento  
 Argomenti contenuti in questa sezione:  
  
-   [Argomenti della funzione tipo\-riferimento](../cpp/reference-type-function-arguments.md)  
  
-   [Elementi restituiti dalla funzione tipo\-riferimento](../cpp/reference-type-function-returns.md)  
  
-   [Riferimenti a puntatori](../cpp/references-to-pointers.md)  
  
## Vedere anche  
 [Inizializzazione di riferimenti](../misc/initializing-references.md)
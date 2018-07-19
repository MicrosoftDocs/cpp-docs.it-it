---
title: Riferimenti (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- objects [C++], referencing
- references [C++]
- references, to pointers
- declarations, references
- references, declaring
- referencing objects, declarator syntax
ms.assetid: 68156f7f-97a0-4b66-b26d-b25ade5e3bd8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 174ab622b177766a33dd55f6b3c78ac38c26ded1
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38956593"
---
# <a name="references-c"></a>Riferimenti (C++)
Un riferimento, analogamente a un puntatore, archivia l'indirizzo di un oggetto che si trova in un'altra posizione in memoria. A differenza di un puntatore, dopo l'inizializzazione non è possibile impostare un riferimento in modo che indichi un oggetto diverso o che sia impostato su Null. Esistono due tipi di riferimenti: i riferimenti lvalue che fanno riferimento a un nome variabile e i riferimenti rvalue che fanno riferimento a un [oggetto temporaneo](../cpp/temporary-objects.md). L'operatore & indica un riferimento lvalue e l'operatore && indica un riferimento rvalue o un riferimento universale (rvalue o lvalue) in base al contesto.  
  
 È possibile dichiarare i riferimenti tramite la seguente sintassi:  
  
```  
[storage-class-specifiers] [cv-qualifiers] type-specifiers   
[ms-modifier] declarator [= expression];  
```  
  
 È possibile usare qualsiasi dichiaratore valido che specifica un riferimento. A meno che il riferimento non sia un riferimento al tipo di funzione o di matrice, si applica la sintassi seguente semplificata:  
  
```  
[storage-class-specifiers] [cv-qualifiers] type-specifiers [& or &&]   
[cv-qualifiers] identifier [= expression];  
```  
  
 I riferimenti vengono dichiarati tramite la seguente sequenza:  
  
 1. Gli identificatori di dichiarazione:  
  
-   Identificatore della classe di archiviazione facoltativo.  
  
-   Facoltativo **const** e/o **volatile** qualificatori.  
  
-   Il tipo di identificatore: il nome di un tipo.  
  
-   2. Dichiaratore:  
  
-   Un modificatore facoltativo specifico di Microsoft. Per altre informazioni, vedere [modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md).  
  
-   L'operatore & oppure l'operatore &&.  
  
-   Facoltativo **const** e/o **volatile** qualificatori.  
  
-   Identificatore.  
  
 3. Inizializzatore facoltativo.  
  
 I form di dichiaratori più complessi per i puntatori a matrici e le funzioni si applicano anche ai riferimenti alle matrici e funzioni, vedere [puntatori](../cpp/pointers-cpp.md).  
  
 Più dichiaratori e inizializzatori possono essere visualizzati in un elenco separato da virgola che segue un singolo identificatore di dichiarazione. Ad esempio:  
  
```cpp 
int &i;   
int &i, &j;   
```  
  
 I riferimenti, i puntatori e gli oggetti possono essere dichiarati insieme:  
  
```cpp 
int &ref, *ptr, k;   
```  
  
 Un riferimento contiene l'indirizzo di un oggetto, ma dal punto di vista sintattico si comporta come un oggetto.  
  
 Nel seguente programma osservare come il nome dell'oggetto, `Today` e il riferimento all'oggetto, `TodayRef`, possano essere usati in modo identico nei programmi:  
  
## <a name="example"></a>Esempio  
  
```cpp 
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
  
```Output  
3  
3  
4  
4  
```  
  
## <a name="comment"></a>Commento  
 Argomenti contenuti in questa sezione:  
  
-   [Argomenti della funzione tipo-riferimento](../cpp/reference-type-function-arguments.md)  
  
-   [Elementi restituiti dalla funzione tipo-riferimento](../cpp/reference-type-function-returns.md)  
  
-   [Riferimenti a puntatori](../cpp/references-to-pointers.md)  
  

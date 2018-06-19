---
title: Compilatore avviso (livello 4) C4714 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4714
dev_langs:
- C++
helpviewer_keywords:
- C4714
ms.assetid: 22c7fd0c-899d-4e9b-95f3-725b2c49fb46
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f0f327e7ffc5d2fe00abe3c0845af10a846243bf
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33295418"
---
# <a name="compiler-warning-level-4-c4714"></a>Avviso del compilatore (livello 4) C4714
funzione 'funzione' contrassegnata come forceinline non resa inline  
  
 La funzione specificata è stata selezionata per l'espansione inline, ma il compilatore non ha eseguito l'incorporamento.  
  
 Anche se `__forceinline` è un'indicazione più forte al compilatore di `__inline`, inline viene comunque eseguita a discrezione del compilatore, ma non euristica viene utilizzati per determinare i vantaggi derivanti dall'incorporamento questa funzione.  
  
 In alcuni casi, il compilatore verrà non inline una funzione specifica per motivi di meccanici. Ad esempio, il compilatore verrà non inline:  
  
-   Una funzione se il risultato sarà la combinazione di entrambi SEH ed EH di C++.  
  
-   Alcune funzioni con copia costruita gli oggetti passati per valore quando /EHs / - GX//EHa è attiva.  
  
-   Funzioni che restituiscono un oggetto non rimovibili per valore quando /EHs / - GX//EHa è attiva.  
  
-   Funzioni con assembly inline durante la compilazione senza - Og//Ox, /O1/O2.  
  
-   Funzioni con un elenco di argomenti variabile.  
  
-   Una funzione con un **provare** istruzione (gestione delle eccezioni C++).  
  
 L'esempio seguente genera l'errore C4714:  
  
```  
// C4714.cpp  
// compile with: /Ob1 /GX /W4  
__forceinline void func1()  
{  
   try  
   {  
   }  
   catch (...)  
   {  
   }  
}  
  
void func2()  
{  
   func1();   // C4714  
}  
  
int main()  
{  
}  
```
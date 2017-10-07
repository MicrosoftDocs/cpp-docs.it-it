---
title: Operatore sizeof | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- sizeof_cpp
dev_langs:
- C++
helpviewer_keywords:
- sizeof operator
ms.assetid: 8bc3b6fb-54a1-4eb7-ada0-05f8c5efc532
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 67b699a93880a89e634ac024699ac79a9ea8d3ba
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="sizeof-operator"></a>Operatore sizeof
Genera la dimensione dell'operando in base alla dimensione del tipo `char`.  
  
> [!NOTE]
>  Per informazioni di `sizeof ...` (operatore), vedere [ellissi e modelli Variadic](../cpp/ellipses-and-variadic-templates.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
sizeof unary-expression  
sizeof  ( type-name )  
```  
  
## <a name="remarks"></a>Note  
 Il risultato dell'operatore `sizeof` è di tipo `size_t`, un tipo integrale definito nel file di inclusione STDDEF.H. Tale operatore consente di evitare di specificare le dimensioni dei dati dipendenti dal computer nei programmi.  
  
 L'operando di `sizeof` può essere uno dei seguenti:  
  
-   Un nome di tipo. Per usare `sizeof` con un nome di tipo, il nome deve essere racchiuso tra parentesi.  
  
-   Un'espressione. Se usato con un'espressione, `sizeof` può essere specificato con o senza le parentesi. L'espressione non viene valutata.  
  
 Quando l'operatore `sizeof` viene applicato a un oggetto di tipo `char`, restituisce 1. Quando l'operatore `sizeof` viene applicato a una matrice, restituisce il numero totale di byte della matrice, non la dimensione del puntatore rappresentato dall'identificatore della matrice. Per ottenere la dimensione del puntatore rappresentato dall'identificatore della matrice, passarlo come parametro a una funzione che usa `sizeof`. Ad esempio:  
  
## <a name="example"></a>Esempio  
  
```  
#include <iostream>  
using namespace std;  
  
size_t getPtrSize( char *ptr )  
{  
   return sizeof( ptr );  
}  
  
int main()  
{  
   char szHello[] = "Hello, world!";  
  
   cout  << "The size of a char is: "  
         << sizeof( char )  
         << "\nThe length of " << szHello << " is: "  
         << sizeof szHello  
         << "\nThe size of the pointer is "  
         << getPtrSize( szHello ) << endl;  
}  
```  
  
## <a name="sample-output"></a>Esempio di output  
  
```  
The size of a char is: 1  
The length of Hello, world! is: 14  
The size of the pointer is 4  
```  
  
 Quando l'operatore `sizeof` viene applicato a un tipo `class`, `struct` o `union`, il risultato è il numero di byte in un oggetto di tale tipo, più la spaziatura interna aggiunta per allineare i membri ai confini di parola. Il risultato non corrisponde necessariamente alla dimensione calcolata sommando i requisiti di archiviazione dei singoli membri. Il [/Zp](../build/reference/zp-struct-member-alignment.md) l'opzione del compilatore e [pack](../preprocessor/pack.md) pragma influisce sui limiti di allineamento per i membri.  
  
 L'operatore `sizeof` non restituisce mai 0, neanche per una classe vuota.  
  
 L'operatore `sizeof` non può essere usato con gli operandi seguenti:  
  
-   Funzioni. `sizeof` può tuttavia essere applicato ai puntatori a funzioni.  
  
-   Campi di bit.  
  
-   Classi non definite.  
  
-   Tipo `void`.  
  
-   Matrici allocate in modo dinamico.  
  
-   Matrici esterne.  
  
-   Tipi incompleti.  
  
-   Nomi tra parentesi di tipi incompleti.  
  
 Quando l'operatore `sizeof` viene applicato a un riferimento, il risultato corrisponde a `sizeof` applicato all'oggetto stesso.  
  
 Se una matrice non dimensionata è l'ultimo elemento di una struttura, l'operatore `sizeof` restituisce le dimensioni della struttura senza la matrice.  
  
 L'operatore `sizeof` viene spesso usato per calcolare il numero di elementi di una matrice con un'espressione in formato:  
  
```  
sizeof array / sizeof array[0]  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Parole chiave](../cpp/keywords-cpp.md)

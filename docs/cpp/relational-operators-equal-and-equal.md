---
title: 'Operatori relazionali: &lt;, &gt;, &lt;=, e &gt;= | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- <
- '>'
dev_langs:
- C++
helpviewer_keywords:
- '> operator'
- less than operator
- relational operators [C++], syntax
- '>= operator'
- greater than or equal to operators [C++]
- greater than operators [C++]
- < operator
- less than or equal to operator
- <= operator
ms.assetid: d346b53d-f14d-4962-984f-89d39a17ca0f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 393cb0b23ca67877a18d2148af76c8de59d29f30
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39465558"
---
# <a name="relational-operators-lt-gt-lt-and-gt"></a>Operatori relazionali: &lt;, &gt;, &lt;=, e &gt;=
## <a name="syntax"></a>Sintassi  
  
```  
expression < expression  
expression > expression  
expression <= expression  
expression >= expression  
```  
  
## <a name="remarks"></a>Note  
 Gli operatori relazionali binari determinano le relazioni seguenti:  
  
-   Minore di (**\<**)  
  
-   Maggiore di (**>**)  
  
-   Minore o uguale a (**\<=**)  
  
-   Maggiore o uguale a (**>=**)  
  
 Gli operatori relazionali hanno un'associatività da sinistra a destra. Entrambi gli operandi degli operatori relazionali devono essere di tipo aritmetico o di tipo puntatore. Producono valori di tipo **bool**. Il valore restituito è **false** (0) se la relazione nell'espressione è false; in caso contrario, il valore restituito è **true** (1).  
  
## <a name="example"></a>Esempio  
  
```cpp 
// expre_Relational_Operators.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
  
int main() {  
   cout  << "The true expression 3 > 2 yields: "  
         << (3 > 2) << endl  
         << "The false expression 20 < 10 yields: "  
         << (20 < 10) << endl;  
}  
```  
  
 Le espressioni nell'esempio precedente devono essere racchiuso tra parentesi perché l'operatore di inserimento di stream (**<<**) ha maggiore precedenza rispetto agli operatori relazionali. Di conseguenza, la prima espressione senza le parentesi verrebbe valutata come:  
  
```cpp 
(cout << "The true expression 3 > 2 yields: " << 3) < (2 << "\n");  
```  
  
 Le conversioni aritmetiche consuete analizzate [conversioni Standard](standard-conversions.md) si applicano agli operandi di tipi aritmetici.  
  
## <a name="comparing-pointers"></a>Confronto tra puntatori  
 Quando vengono confrontati due puntatori a oggetti dello stesso tipo, il risultato è determinato dalla posizione degli oggetti puntati nello spazio degli indirizzi del programma. I puntatori possono essere confrontati anche con un'espressione costante che restituisce 0 o a un puntatore di tipo `void *`. Se un confronto tra puntatori viene eseguito su un puntatore di tipo `void *`, l'altro puntatore viene implicitamente convertito nel tipo `void *`. A questo punto, viene eseguito il confronto.  
  
 Non è possibile eseguire il confronto di due puntatori di tipo diverso, tranne nei seguenti casi:  
  
-   Un tipo è un tipo di classe derivato dall'altro tipo.  
  
-   Almeno uno dei puntatori viene convertito in modo esplicito (cast) nel tipo `void *`. (Il primo puntatore viene implicitamente convertito nel tipo `void *` per la conversione.)  
  
 Due puntatori dello stesso tipo che puntano allo stesso oggetto risultano sicuramente uguali. Se due puntatori a membri non statici di un oggetto vengono confrontati, è necessario rispettare le seguenti regole:  
  
-   Se il tipo di classe non è un **union**, e se i due membri non sono separati da un *access-specifier*, ad esempio **pubblico**, **protetti**, oppure **privato**, il puntatore al membro dichiarato per ultimo risulta maggiore del puntatore al membro dichiarato in precedenza.  
  
-   Se i due membri sono separati da un *access-specifier*, i risultati sono indefiniti.  
  
-   Se il tipo di classe è un **unione**, i puntatori ai membri dati diversi in quanto **union** risultano uguali.  
  
 Se due puntatori puntano a elementi della stessa matrice o all'elemento uno oltre la fine della matrice, il puntatore all'oggetto con indice maggiore risulta maggiore. Il confronto tra puntatori è sicuramente valido solo quando i puntatori fanno riferimento a oggetti nella stessa matrice o alla posizione uno oltre la fine della matrice.  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)   
 [Operatori C++ predefiniti, precedenza e associatività degli operatori](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori relazionali e operatori di uguaglianza C](../c-language/c-relational-and-equality-operators.md)
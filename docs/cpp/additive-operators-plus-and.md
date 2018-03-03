---
title: 'Operatori di addizione: + e - | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- +
- '-'
dev_langs:
- C++
helpviewer_keywords:
- operators [C++], addition
- subtraction operator [C++], additive operators
- + operator [C++], additive operators
- additive operators [C++]
- arithmetic operators [C++], additive operators
- '- operator [C++], additive operators in C++'
ms.assetid: d4afafe7-e201-4c69-a649-37f17756e784
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d1096565843cfe150530a825254e9ad6c24b5ec8
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="additive-operators--and--"></a>Operatori di addizione: + e -
## <a name="syntax"></a>Sintassi  
  
```  
expression + expression   
expression - expression  
```  
  
## <a name="remarks"></a>Note  
 Gli operatori additivi sono:  
  
-   Addizione (**+**)  
  
-   Sottrazione (**-**)  
  
 Questi operatori binari hanno un'associatività da sinistra a destra.  
  
 Gli operatori additivi accettano gli operandi di tipi aritmetici o tipi puntatore. Il risultato dell'addizione (**+**) (operatore) è la somma degli operandi. Il risultato della sottrazione (**-**) (operatore) è la differenza tra gli operandi. Se uno o entrambi gli operandi sono puntatori, questi devono essere puntatori agli oggetti, non alle funzioni. Se entrambi gli operandi sono puntatori, i risultati non sono significativi a meno che entrambi siano puntatori agli oggetti nella stessa matrice.  
  
 Operatori additivi accettano gli operandi di *aritmetici*, *integrale*, e *scalare* tipi. Questi vengono definiti nella tabella seguente.  
  
### <a name="types-used-with-additive-operators"></a>Tipi usati con gli operatori additivi  
  
|Tipo|Significato|  
|----------|-------------|  
|*arithmetic*|I tipi integrali e mobili collettivamente sono denominati tipi "aritmetici".|  
|*integral*|I tipi char e int di tutte le dimensioni (long e short) e le enumerazioni sono tipi "integrali".|  
|*scalar*|Gli operandi scalari sono operandi di tipo aritmetico o di tipo puntatore.|  
  
 Le combinazioni valide per questi operatori sono:  
  
 *arithmetic* + *arithmetic*  
  
 *scalar* + *integral*  
  
 *integral* + *scalar*  
  
 *arithmetic* - *arithmetic*  
  
 *scalar* - *scalar*  
  
 Si noti che l'addizione e la sottrazione non sono operazioni equivalenti.  
  
 Se entrambi gli operandi sono di tipo aritmetico, le conversioni descritte in [conversioni Standard](standard-conversions.md) vengono applicate agli operandi e il risultato è di tipo convertito.  
  
## <a name="example"></a>Esempio  
  
```  
// expre_Additive_Operators.cpp  
// compile with: /EHsc  
#include <iostream>  
#define SIZE 5  
using namespace std;  
int main() {  
   int i = 5, j = 10;  
   int n[SIZE] = { 0, 1, 2, 3, 4 };  
   cout  << "5 + 10 = " << i + j << endl  
         << "5 - 10 = " << i - j << endl;  
  
   // use pointer arithmetic on array  
  
   cout << "n[3] = " << *( n + 3 ) << endl;  
}  
```  
  
## <a name="pointer-addition"></a>Addizione di puntatori  
 Se uno degli operandi presenti in un'operazione di addizione è un puntatore a una matrice di oggetti, l'altro deve essere di tipo integrale. Il risultato è un puntatore dello stesso tipo del puntatore originale e che punta un altro elemento della matrice. Nel frammento di codice seguente è illustrato questo concetto:  
  
```  
short IntArray[10]; // Objects of type short occupy 2 bytes  
short *pIntArray = IntArray;  
  
for( int i = 0; i < 10; ++i )  
{  
    *pIntArray = i;  
    cout << *pIntArray << "\n";  
    pIntArray = pIntArray + 1;  
}  
```  
  
 Sebbene il valore integrale 1 venga aggiunto a `pIntArray`, questa operazione non è interpretabile come "aggiungere 1 all'indirizzo"; significa invece "modificare il puntatore affinché punti all'oggetto successivo della matrice" che si trova a 2 byte (o `sizeof( int )`) di distanza.  
  
> [!NOTE]
>  Il codice del form `pIntArray = pIntArray + 1` si trova raramente nei programmi C++; per eseguire un incremento, sono preferibili i seguenti form: `pIntArray++` o `pIntArray += 1`.  
  
## <a name="pointer-subtraction"></a>Sottrazione di puntatori  
 Se entrambi gli operandi sono puntatori, il risultato di una sottrazione è la differenza (in elementi di matrice) tra gli operandi. L'espressione di sottrazione restituisce un risultato integrale con segno di tipo ptrdiff_t (definito nel file di inclusione standard \<STDDEF. h >).  
  
 Uno degli operandi può essere di tipo integrale purché sia il secondo operando. Il risultato della sottrazione è dello stesso tipo del puntatore originale. Il valore della sottrazione è un puntatore al (*n* - *si*) elemento di matrice th, in cui  *n*  è l'elemento a cui fa riferimento il puntatore originale e *si* è il valore integrale del secondo operando.  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)   
 [Operatori C++ predefiniti, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori di addizione C](../c-language/c-additive-operators.md)

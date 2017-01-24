---
title: "Operatori di moltiplicazione e operatori modulo | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "%"
  - "/"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "% (operatore)"
  - "* (operatore)"
  - "operatori aritmetici [C++], operatori di moltiplicazione"
  - "operatore divisione"
  - "operatore divisione, operatori di moltiplicazione"
  - "modulo (operatore), C+"
  - "moltiplicazione (operatore) [C++], operatori di moltiplicazione"
  - "operatori di moltiplicazione [C++]"
  - "operatori [C++], moltiplicazione"
ms.assetid: b53ea5da-d0b4-40dc-98f3-0aa52d548293
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori di moltiplicazione e operatori modulo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
expression * expression   
expression / expression   
expression % expression  
```  
  
## Note  
 Gli operatori moltiplicativi sono:  
  
-   Moltiplicazione \(**\***\)  
  
-   Divisione \(**\/**\)  
  
-   Modulo \(resto della divisione\) \(`%`\)  
  
 Questi operatori binari hanno un'associatività da sinistra a destra.  
  
 Gli operatori moltiplicativi accettano gli operandi di tipi aritmetici.  L'operatore modulo \(`%`\) dispone di un requisito più rigido in quanto i propri operandi devono essere di tipo integrale. Per ottenere il resto di una divisione a virgola mobile, utilizzare la funzione di runtime, [fmod](../c-runtime-library/reference/fmod-fmodf.md). Le conversioni descritte in [Conversioni aritmetiche](../misc/arithmetic-conversions.md) vengono applicate agli operandi e il risultato è di tipo convertito.  
  
 L'operatore di moltiplicazione produce il risultato moltiplicando il primo operando per il secondo.  
  
 L'operatore di divisione produce il risultato dividendo il primo operando per il secondo.  
  
 L'operatore modulo produce il resto fornito dalla seguente espressione, dove *e1* è il primo operando e *e2* è il secondo: *e1* – \(*e1* \/ *e2*\) \* *e2*, dove entrambi gli operandi sono di tipo integrale.  
  
 La divisione per 0 in una divisione o in un'espressione di modulo non è definita e provoca un errore di runtime.  Pertanto, le espressioni seguenti generano risultati errati non definiti:  
  
```  
i % 0  
f / 0.0  
```  
  
 Se entrambi gli operandi in una moltiplicazione, divisione o espressione di modulo hanno lo stesso segno, il risultato è positivo.  In caso contrario, il risultato sarà negativo.  Il risultato del segno di un'operazione modulo è definito dall'implementazione.  
  
> [!NOTE]
>  Poiché le conversioni eseguite dagli operatori di moltiplicazione non consentono condizioni di overflow o di underflow, le informazioni potrebbero essere perse se il risultato di un'operazione di moltiplicazione non può essere rappresentato nel tipo degli operandi in seguito alla conversione.  
  
## Sezione specifica Microsoft  
 In Microsoft C\+\+, il risultato di un'espressione di modulo è sempre uguale al segno del primo operando.  
  
## Fine sezione specifica Microsoft  
 Se la divisione calcolata di due interi non è esatta e un solo operando è negativo, il risultato è l'intero più grande \(in termini di grandezza, non considerando il segno\) che è minore del valore esatto che produrrebbe l'operazione di divisione.  Il valore calcolato, ad esempio, di –11 \/ 3 è –3,666666666.  Risultato della divisione del numero intero è –3.  
  
 La relazione tra gli operatori moltiplicativi viene fornita dall'identità \(*e1* \/ *e2*\) \* *e2* \+ *e1* % *e2* \=\= *e1*.  
  
## Esempio  
 Nel programma seguente vengono illustrati gli operatori moltiplicativi.  Si noti che ogni operando di `10 / 3` deve esplicitamente eseguire il cast al tipo `float` per evitare il troncamento in modo che entrambi gli operandi siano di tipo `float` prima della divisione.  
  
```  
// expre_Multiplicative_Operators.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
int main() {  
   int x = 3, y = 6, z = 10;  
   cout  << "3 * 6 is " << x * y << endl  
         << "6 / 3 is " << y / x << endl  
         << "10 % 3 is " << z % x << endl  
         << "10 / 3 is " << (float) z / x << endl;  
}  
```  
  
## Vedere anche  
 [Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori di moltiplicazione C](../c-language/c-multiplicative-operators.md)
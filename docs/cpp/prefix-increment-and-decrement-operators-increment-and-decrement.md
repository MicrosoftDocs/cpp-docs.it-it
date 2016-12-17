---
title: "Operatori di incremento e decremento in forma prefissa: ++ e -- | Microsoft Docs"
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
  - "--"
  - "++"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-- (operatore), operatori di decremento prefissi"
  - "++ (operatore), operatori di incremento prefissi"
  - "decremento (operatori)"
  - "decremento (operatori), sintassi"
  - "incremento (operatori), sintassi"
  - "operatori [C++], decrement"
  - "operatori [C++], incremento"
ms.assetid: 45ea7fc7-f279-4be9-a216-1d9a0ef9eb7b
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori di incremento e decremento in forma prefissa: ++ e --
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
++ unary-expression –– unary-expression  
```  
  
## Note  
 L'operatore di incremento prefisso \(`++`\) aggiunge uno al relativo operando; questo valore incrementato è il risultato dell'espressione.  L'operando deve essere un l\-value non di tipo **const**.  Il risultato è un l\-value dello stesso tipo dell'operando.  
  
 L'operatore di decremento prefisso \(**––**\) è analogo all'operatore di incremento prefisso, tranne per il fatto che all'operando viene applicato un decremento di uno e il risultato è il valore decrementato.  
  
 Gli operatori di incremento e di decremento sia in forma prefissa sia in forma suffissa hanno impatto sui relativi operandi.  La differenza principale tra loro è data dall'ordine in cui avviene l'incremento o il decremento nella valutazione di un'espressione.  Per altre informazioni, vedere [Operatori di incremento e decremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md). Nella forma prefissa, l'incremento o il decremento si verifica prima che il valore venga utilizzato nella valutazione dell'espressione, pertanto il valore dell'espressione è diverso dal valore dell'operando.  Nella forma suffissa, l'incremento o il decremento si verifica dopo che il valore viene utilizzato nella valutazione dell'espressione, pertanto il valore dell'espressione è lo stesso dal valore dell'operando.  Ad esempio il seguente programma stampa "`++i = 6`":  
  
```  
// expre_Increment_and_Decrement_Operators.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
  
int main() {  
   int i = 5;  
   cout << "++i = " << ++i << endl;  
}  
```  
  
 Un operando di tipo integrale o mobile viene incrementato o decrementato dell'intero 1.  Il tipo del risultato è uguale al tipo di operando.  Un operando di tipo puntatore viene incrementato o decrementato alle dimensioni dell'oggetto che indirizza.  Un puntatore incrementato punta all'oggetto successivo; mentre un puntatore decrementato punta all'oggetto precedente.  
  
 Dal momento che gli operatori di incremento e decremento hanno effetti collaterali, l'utilizzo di espressioni con operatori di incremento o di incremento in una [macro del preprocessore](../preprocessor/macros-c-cpp.md) può produrre risultati indesiderati.  Si consideri l'esempio seguente:  
  
```  
// expre_Increment_and_Decrement_Operators2.cpp  
#define max(a,b) ((a)<(b))?(b):(a)  
  
int main()  
{  
   int i = 0, j = 0, k;  
   k = max( ++i, j );  
}  
```  
  
 La macro si espande a:  
  
```  
k = ((++i)<(j))?(j):(++i);  
```  
  
 Se `i` è maggiore o uguale a `j` o minore di `j` di 1, verrà incrementato due volte.  
  
> [!NOTE]
>  Le funzioni inline C\+\+ sono preferibili rispetto alle macro in molti casi perché eliminano gli effetti collaterali come quelli qui riportati, consentono inoltre al linguaggio di eseguire un controllo del tipo più completo.  
  
## Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori di incremento e decremento in forma prefissa](../c-language/prefix-increment-and-decrement-operators.md)
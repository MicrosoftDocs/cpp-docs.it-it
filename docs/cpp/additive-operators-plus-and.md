---
title: "Operatori di addizione: + e - | Microsoft Docs"
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
  - "-"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "- (operatore), operatori di addizione in C++"
  - "+ (operatore), operatori di addizione"
  - "operatori di addizione"
  - "operatori aritmetici [C++], operatori di addizione"
  - "operatori [C++], addizione"
  - "sottrazione (operatore), operatori di addizione"
ms.assetid: d4afafe7-e201-4c69-a649-37f17756e784
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori di addizione: + e -
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
expression + expression   
expression – expression  
```  
  
## Note  
 Gli operatori additivi sono:  
  
-   Addizione \(**\+**\)  
  
-   Sottrazione \(**–**\)  
  
 Questi operatori binari hanno un'associatività da sinistra a destra.  
  
 Gli operatori additivi accettano gli operandi di tipi aritmetici o tipi puntatore.  Il risultato dell'operatore di addizione \(**\+**\) è la somma degli operandi.  Il risultato dell'operatore di sottrazione \(**–**\) è la differenza tra gli operandi.  Se uno o entrambi gli operandi sono puntatori, questi devono essere puntatori agli oggetti, non alle funzioni.  Se entrambi gli operandi sono puntatori, i risultati non sono significativi a meno che entrambi siano puntatori agli oggetti nella stessa matrice.  
  
 Gli operatori additivi accettano gli operandi di tipi *arithmetic*, *integral* e *scalar*.  Questi vengono definiti nella tabella seguente.  
  
### Tipi usati con gli operatori additivi  
  
|Tipo|Significato|  
|----------|-----------------|  
|*arithmetic*|I tipi integrali e mobili collettivamente sono denominati tipi "aritmetici".|  
|*integral*|I tipi char e int di tutte le dimensioni \(long e short\) e le enumerazioni sono tipi "integrali".|  
|*scalar*|Gli operandi scalari sono operandi di tipo aritmetico o di tipo puntatore.|  
  
 Le combinazioni valide per questi operatori sono:  
  
 *arithmetic* \+ *arithmetic*  
  
 *scalar* \+ *integral*  
  
 *integral* \+ *scalar*  
  
 *arithmetic* – *arithmetic*  
  
 *scalar* – *scalar*  
  
 Si noti che l'addizione e la sottrazione non sono operazioni equivalenti.  
  
 Se entrambi gli operandi sono di tipo aritmetico, le conversioni descritte in [Conversioni aritmetiche](../misc/arithmetic-conversions.md) si applicano agli operandi e il risultato è di tipo convertito.  
  
## Esempio  
  
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
  
## Addizione di puntatori  
 Se uno degli operandi presenti in un'operazione di addizione è un puntatore a una matrice di oggetti, l'altro deve essere di tipo integrale.  Il risultato è un puntatore dello stesso tipo del puntatore originale e che punta un altro elemento della matrice.  Nel frammento di codice seguente è illustrato questo concetto:  
  
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
  
 Sebbene il valore integrale 1 venga aggiunto a `pIntArray`, questa operazione non è interpretabile come "aggiungere 1 all'indirizzo"; significa invece "modificare il puntatore affinché punti all'oggetto successivo della matrice" che si trova a 2 byte \(o `sizeof( int )`\) di distanza.  
  
> [!NOTE]
>  Il codice del form `pIntArray = pIntArray + 1` si trova raramente nei programmi C\+\+; per eseguire un incremento, sono preferibili i seguenti form: `pIntArray++` o `pIntArray += 1`.  
  
## Sottrazione di puntatori  
 Se entrambi gli operandi sono puntatori, il risultato di una sottrazione è la differenza \(in elementi di matrice\) tra gli operandi.  L'espressione di sottrazione restituisce un risultato integrale con segno di tipo ptrdiff\_t \(definito nel file di inclusione standard STDDEF.H\).  
  
 Uno degli operandi può essere di tipo integrale purché sia il secondo operando.  Il risultato della sottrazione è dello stesso tipo del puntatore originale.  Il valore della sottrazione è un puntatore all'elemento *n* \- *i\-esimo* della matrice, dove *n* è l'elemento a cui fa riferimento il puntatore originale e *i* è il valore integrale del secondo operando.  
  
## Vedere anche  
 [Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Aggiunta di tipi di puntatori](../misc/addition-of-pointer-types.md)   
 [Sottrazione di tipi di puntatori](../misc/subtraction-of-pointer-types.md)   
 [Operatori di addizione C](../c-language/c-additive-operators.md)
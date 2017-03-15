---
title: "Operatore di espressione condizionale | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "condizionali (operatori)"
  - "espressioni [C++], condizionale"
  - "operatori [C++], condizionale"
ms.assetid: c4f1a5ca-0844-44a7-a384-eca584d4e3dd
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Operatore di espressione condizionale
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il linguaggio C dispone di un operatore ternario: l'operatore di espressione condizionale \(**? :**\).  
  
## Sintassi  
 *conditional\-expression*:  
 *logical\-OR\-expression*  
  
 *logical\-OR expression*  **?**  *expression*  **:**  *conditional\-expression*  
  
 *logical\-OR\-expression* deve disporre di un tipo integrale, a virgola mobile o puntatore.  Viene valutata in termini di equivalenza relativa a 0.  Un punto di sequenza segue *logical\-OR\-expression*.  La valutazione degli operandi prosegue nel modo seguente:  
  
-   Se *logical\-OR\-expression* non è uguale a 0, *expression* viene valutato.  Il risultato di valutazione dell'espressione è dato da *expression*non terminale. Ciò significa che *expression* viene valutata solo se *logical\-OR\-expression* è true.  
  
-   Se *logical\-OR\-expression* è uguale a 0, *conditional\-expression* viene valutata.  Il risultato dell'espressione è il valore di *conditional\-expression*. Ciò significa che *conditional\-expression* viene valutato solo se *logical\-OR\-expression* è di tipo false.  
  
 Si noti che viene valutato *expression* o *conditional\-expression*, ma non entrambi.  
  
 Il tipo del risultato di un'operazione condizionale dipende dal tipo di operando di *expression* o di *conditional\-expression* come segue:  
  
-   Se *expression* o *conditional\-expression* è di tipo integrale o a virgola mobile \(i tipi possono essere diversi\), l'operatore esegue le conversioni aritmetiche comuni.  Il tipo del risultato è il tipo degli operandi in seguito alla conversione.  
  
-   Se *expression* e *conditional\-expression* hanno lo stesso tipo struttura, unione o puntatore, il tipo del risultato è lo stesso tipo struttura, unione o puntatore.  
  
-   Se entrambi gli operandi possiedono il tipo `void`, il risultato è di tipo `void`.  
  
-   Se uno degli operandi è un puntatore a un oggetto di qualsiasi tipo e l'altro operando è un puntatore a `void`, il puntatore all'oggetto viene convertito in un puntatore a `void` e il risultato è un puntatore a `void`.  
  
-   Se *expression* o *conditional\-expression* è un puntatore e l'altro operando è un'espressione costante con il valore 0, il tipo del risultato è il tipo puntatore.  
  
 Nel confronto dei tipi tra i puntatori, qualsiasi qualificatore di tipo \(**const** o `volatile`\) nel tipo a cui punta il puntatore è insignificante, ma il tipo di risultato eredita i qualificatori da entrambi i componenti del condizionale.  
  
## Esempi  
 Negli esempi seguenti vengono illustrati gli utilizzi dell'operatore condizionale.  
  
```  
j = ( i < 0 ) ? ( -i ) : ( i );  
```  
  
 In questo esempio viene assegnato il valore assoluto `i` a `j`.  Se `i` è minore di 0, `-i` è assegnato a `j`.  Se `i` è maggiore o uguale a 0, `i` è assegnato a `j`.  
  
```  
void f1( void );  
void f2( void );  
int x;  
int y;  
    .  
    .  
    .  
( x == y ) ? ( f1() ) : ( f2() );  
```  
  
 In questo esempio le due funzioni `f1` e `f2` e le due variabili `x` e `y` vengono dichiarate.  Più avanti nel programma, se le due variabili presentano lo stesso valore, viene chiamata la funzione `f1`.  In caso contrario, viene chiamato `f2`.  
  
## Vedere anche  
 [Operatore condizionale: ? :](../cpp/conditional-operator-q.md)
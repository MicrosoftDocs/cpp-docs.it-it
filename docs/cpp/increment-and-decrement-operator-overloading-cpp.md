---
title: Incremento e decremento operatore overload (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- increment operators [C++]
- increment operators [C++], types of
- decrement operators [C++]
- decrement operators [C++], types of
ms.assetid: 5423c6ce-3999-4a77-92f6-ad540add1b1d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 10987b351ebc34b7b17963e17047e32ee0d9bc5c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="increment-and-decrement-operator-overloading-c"></a>Overload degli operatori di incremento e decremento (C++)
Gli operatori di incremento e decremento rientrano in una categoria speciale poiché esistono due varianti di ciascuno:  
  
-   Incremento prefisso e incremento suffisso  
  
-   Decremento prefisso e decremento suffisso  
  
 Quando si creano le funzioni dell'operatore di overload, può essere utile implementare versioni separate della forma prefissa e suffissa di questi operatori. Per distinguere tra i due, osservare la seguente regola: il form della forma prefissa dell'operatore viene dichiarato esattamente così come qualsiasi altro operatore unario; il form della forma suffisso accetta un argomento supplementare di tipo `int`.  
  
> [!NOTE]
>  Quando si specifica un operatore di overload per il form della forma suffissa dell'operatore di incremento o di decremento, l'argomento aggiuntivo deve essere di tipo `int`; la specifica di qualsiasi altro tipo genera un errore.  
  
 Di seguito viene illustrato come definire gli operatori di incremento e di decremento in forma prefissa e suffissa per la classe `Point`:  
  
```  
// increment_and_decrement1.cpp  
class Point  
{  
public:  
   // Declare prefix and postfix increment operators.  
   Point& operator++();       // Prefix increment operator.  
   Point operator++(int);     // Postfix increment operator.  
  
   // Declare prefix and postfix decrement operators.  
   Point& operator--();       // Prefix decrement operator.  
   Point operator--(int);     // Postfix decrement operator.  
  
   // Define default constructor.  
   Point() { _x = _y = 0; }  
  
   // Define accessor functions.  
   int x() { return _x; }  
   int y() { return _y; }  
private:  
   int _x, _y;  
};  
  
// Define prefix increment operator.  
Point& Point::operator++()  
{  
   _x++;  
   _y++;  
   return *this;  
}  
  
// Define postfix increment operator.  
Point Point::operator++(int)  
{  
   Point temp = *this;  
   ++*this;  
   return temp;  
}  
  
// Define prefix decrement operator.  
Point& Point::operator--()  
{  
   _x--;  
   _y--;  
   return *this;  
}  
  
// Define postfix decrement operator.  
Point Point::operator--(int)  
{  
   Point temp = *this;  
   --*this;  
   return temp;  
}  
int main()  
{  
}  
```  
  
 Gli stessi operatori possono essere definiti in ambito file (a livello globale) mediante l'utilizzo delle intestazioni di funzione:  
  
```  
friend Point& operator++( Point& )      // Prefix increment  
friend Point& operator++( Point&, int ) // Postfix increment  
friend Point& operator--( Point& )      // Prefix decrement  
friend Point& operator--( Point&, int ) // Postfix decrement  
```  
  
 L'argomento di tipo `int` che denota il form dell'operatore di incremento o decremento della forma suffissa non viene in genere utilizzato per passare gli argomenti. Di solito contiene il valore 0. Tuttavia, può essere utilizzato nel modo seguente:  
  
```  
// increment_and_decrement2.cpp  
class Int  
{  
public:  
    Int &operator++( int n );  
private:  
    int _i;  
};  
  
Int& Int::operator++( int n )  
{  
    if( n != 0 )    // Handle case where an argument is passed.  
        _i += n;  
    else  
        _i++;       // Handle case where no argument is passed.  
    return *this;  
}  
int main()  
{  
   Int i;  
   i.operator++( 25 ); // Increment by 25.  
}  
```  
  
 Non esiste una sintassi per l'utilizzo degli operatori di incremento o decremento per passare questi valori; è necessario utilizzare la chiamata esplicita, come mostrato nel codice precedente. Un modo più semplice per implementare questa funzionalità consiste nell'eseguire l'overload dell'operatore di aggiunta/assegnazione (`+=`).  
  
## <a name="see-also"></a>Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)
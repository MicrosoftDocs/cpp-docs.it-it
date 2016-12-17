---
title: "Indice | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [C++], indice"
  - "overload di operatori, esempi"
  - "operatori [C++], overload"
  - "operatore di indice"
  - "operatore di indice, in overload"
  - "indice"
ms.assetid: eb151281-6733-401d-9787-39ab6754c62c
caps.latest.revision: 10
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Indice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'operatore di pedice \(**\[ \]**\), come l'operatore di chiamata di funzione, è considerato un operatore binario.  L'operatore di pedice deve essere una funzione membro non statica che accetta un solo argomento.  In questo argomento può essere di qualsiasi tipo e definisce il pedice di matrice desiderato.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come creare un vettore di tipo `int` che implementa il controllo dei limiti:  
  
```  
// subscripting.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
class IntVector {  
public:  
   IntVector( int cElements );  
   ~IntVector() { delete [] _iElements; }  
   int& operator[](int nSubscript);  
private:  
   int *_iElements;  
   int _iUpperBound;  
};  
  
// Construct an IntVector.  
IntVector::IntVector( int cElements ) {  
   _iElements = new int[cElements];  
   _iUpperBound = cElements;  
}  
  
// Subscript operator for IntVector.  
int& IntVector::operator[](int nSubscript) {  
   static int iErr = -1;  
  
   if( nSubscript >= 0 && nSubscript < _iUpperBound )  
      return _iElements[nSubscript];  
   else {  
      clog << "Array bounds violation." << endl;  
      return iErr;  
   }  
}  
  
// Test the IntVector class.  
int main() {  
   IntVector v( 10 );  
   int i;  
  
   for( i = 0; i <= 10; ++i )  
      v[i] = i;  
  
   v[3] = v[9];  
  
   for ( i = 0; i <= 10; ++i )  
      cout << "Element: [" << i << "] = " << v[i] << endl;  
}  
```  
  
  **Violazione dei limiti di matrice.**  
**Elemento: \[0\] \= 0**  
**Elemento: \[1\] \= 1**  
**Elemento: \[2\] \= 2**  
**Elemento: \[3\] \= 9**  
**Elemento: \[4\] \= 4**  
**Elemento: \[5\] \= 5**  
**Elemento: \[6\] \= 6**  
**Elemento: \[7\] \= 7**  
**Elemento: \[8\] \= 8**  
**Elemento: \[9\] \= 9**  
**Violazione dei limiti di matrice.**  
**Elemento: \[10\] \= 10**   
## Commenti  
 Quando `i` raggiunge 10 nel programma precedente, `operator[]` rileva che un indice fuori limite viene utilizzato e genera un messaggio di errore.  
  
 Si noti che la funzione `operator[]` restituisce un tipo di riferimento.  In questo modo esso risulterà un l\-value, consentendo di utilizzare le espressioni di indice su entrambi i lati degli operatori di assegnazione.  
  
## Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)
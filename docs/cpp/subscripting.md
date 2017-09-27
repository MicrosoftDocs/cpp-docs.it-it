---
title: Indice | Documenti Microsoft
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
- subscript operator, overloaded
- arrays [C++], subscripting
- subscripting
- operators [C++], overloading
- operator overloading, examples
- subscript operator
ms.assetid: eb151281-6733-401d-9787-39ab6754c62c
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 82feaa68724e36c7ac7e739397d8a11a18e970a0
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="subscripting"></a>Indice
L'operatore di pedice (**[]**), ad esempio l'operatore di chiamata di funzione, viene considerato un operatore binario. L'operatore di pedice deve essere una funzione membro non statica che accetta un solo argomento. In questo argomento può essere di qualsiasi tipo e definisce il pedice di matrice desiderato.  
  
## <a name="example"></a>Esempio  
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
  
```Output  
Array bounds violation.  
Element: [0] = 0  
Element: [1] = 1  
Element: [2] = 2  
Element: [3] = 9  
Element: [4] = 4  
Element: [5] = 5  
Element: [6] = 6  
Element: [7] = 7  
Element: [8] = 8  
Element: [9] = 9  
Array bounds violation.  
Element: [10] = 10  
```  
  
## <a name="comments"></a>Commenti  
 Quando `i` raggiunge 10 nel programma precedente, `operator[]` rileva che un indice fuori limite viene utilizzato e genera un messaggio di errore.  
  
 Si noti che la funzione `operator[]` restituisce un tipo di riferimento. In questo modo esso risulterà un l-value, consentendo di utilizzare le espressioni di indice su entrambi i lati degli operatori di assegnazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)

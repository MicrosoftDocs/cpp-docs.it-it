---
title: reinterpret_cast Operator | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- reinterpret_cast
- reinterpret_cast_cpp
dev_langs:
- C++
helpviewer_keywords:
- reinterpret_cast keyword [C++]
ms.assetid: eb3283c7-7f88-467e-affd-407d37b46d6c
caps.latest.revision: 9
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
ms.openlocfilehash: 71218dc713b24669dc1648b748a0326da0c03152
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="reinterpretcast-operator"></a>Operatore reinterpret_cast
Consente a qualsiasi puntatore di essere convertito in un qualsiasi altro tipo di puntatore. Consente inoltre a qualsiasi tipo integrale di essere convertito in qualsiasi tipo di puntatore e viceversa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
reinterpret_cast < type-id > ( expression )  
```  
  
## <a name="remarks"></a>Note  
 L'uso improprio dell'operatore `reinterpret_cast` può facilmente essere non sicuro. A meno che la conversione desiderata sia intrinsecamente di basso livello, è necessario usare uno degli altri operatori di cast.  
  
 L'operatore `reinterpret_cast` può essere usato per conversioni come `char*` in `int*` o `One_class*` in `Unrelated_class*`, che sono intrinsecamente non sicure.  
  
 Il risultato di un `reinterpret_cast` non può essere usato in modo sicuro per nulla di diverso dall'eseguire nuovamente il cast al tipo originale. Altri usi sono, nella migliore delle ipotesi, non portabili.  
  
 Il `reinterpret_cast` operatore non è possibile eseguire il cast di **const**, `volatile`, o **unaligned** attributi. Vedere [operatore di const_cast](../cpp/const-cast-operator.md) per informazioni sulla rimozione di questi attributi.  
  
 L'operatore `reinterpret_cast` converte un valore di puntatore null in un valore di puntatore null del tipo di destinazione.  
  
 Un uso pratico di `reinterpret_cast` è in una funzione hash, che esegue il mapping di un valore a un indice in modo che due valori distinti finiscono raramente con lo stesso indice.  
  
```  
#include <iostream>  
using namespace std;  
  
// Returns a hash code based on an address  
unsigned short Hash( void *p ) {  
   unsigned int val = reinterpret_cast<unsigned int>( p );  
   return ( unsigned short )( val ^ (val >> 16));  
}  
  
using namespace std;  
int main() {  
   int a[20];  
   for ( int i = 0; i < 20; i++ )  
      cout << Hash( a + i ) << endl;  
}  
  
Output:   
64641  
64645  
64889  
64893  
64881  
64885  
64873  
64877  
64865  
64869  
64857  
64861  
64849  
64853  
64841  
64845  
64833  
64837  
64825  
64829  
```  
  
 L'operatore `reinterpret_cast` consente al puntatore di essere considerato come un tipo integrale. Il risultato viene quindi spostato su bit e XORed con se stesso per creare un indice univoco (univoco a un livello elevato di probabilità). L'indice viene quindi troncato da un cast di tipo C standard al tipo restituito della funzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori di cast](../cpp/casting-operators.md)   
 [Parole chiave](../cpp/keywords-cpp.md)

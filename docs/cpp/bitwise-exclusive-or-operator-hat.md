---
title: 'Operatore OR bit per bit esclusivo: ^ | Documenti Microsoft'
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
- operators [C++], bitwise
- exclusive OR operator
- XOR operator
- bitwise operators, OR operator
- ^ operator
- OR operator, bitwise exclusive
- operators [C++], logical
ms.assetid: f9185d85-65d5-4f64-a6d6-679758d52217
caps.latest.revision: 7
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
ms.openlocfilehash: c6d7713a28fa6c0dbe7a5543afa65cd927f614e7
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="bitwise-exclusive-or-operator-"></a>Operatore OR bit per bit esclusivo: ^
## <a name="syntax"></a>Sintassi  
  
```  
expression ^ expression  
```  
  
## <a name="remarks"></a>Note  
L'operatore OR esclusivo bit per bit (**^**) confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se un bit è 0 e l'altro bit è 1, il bit di risultato corrispondente viene impostato su 1. In caso contrario, il bit di risultato corrispondente viene impostato su 0.  
  
Entrambi gli operandi all'operatore OR bit per bit esclusivo devono essere di tipi integrali. Le conversioni aritmetiche consuete analizzate [conversioni Standard](standard-conversions.md) vengono applicate agli operandi.  
  
## <a name="operator-keyword-for-"></a>Parola chiave operator per ^  
Il **xor** operatore è il testo equivalente di ** ^ **. Esistono due modi per accedere il **xor** operatore nei programmi: includere il file di intestazione `iso646.h`, o compilare il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).  
  
## <a name="example"></a>Esempio  
  
```cpp  
// expre_Bitwise_Exclusive_OR_Operator.cpp  
// compile with: /EHsc  
// Demonstrate bitwise exclusive OR  
#include <iostream>  
using namespace std;  
int main() {  
   unsigned short a = 0x5555;      // pattern 0101 ...  
   unsigned short b = 0xFFFF;      // pattern 1111 ...  
  
   cout  << hex << ( a ^ b ) << endl;   // prints "aaaa" pattern 1010 ...  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   




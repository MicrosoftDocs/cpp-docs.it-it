---
title: 'Operatore AND bit per bit: &amp; | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- bitand
dev_langs:
- C++
helpviewer_keywords:
- AND operator
- bitwise operators [C++], AND operator
- '& operator [C++], bitwise operators'
ms.assetid: 76f40de3-c417-47b9-8a77-532f3fc990a5
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 99ff65f38abf5cfcac135e2cc54e3df6df5f336d
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="bitwise-and-operator-amp"></a>Operatore AND bit per bit:&amp;
## <a name="syntax"></a>Sintassi  
  
```  
  
expression   
&  
 expression  
  
```  
  
## <a name="remarks"></a>Note  
 Le espressioni possono essere altre espressioni And o (in base alle restrizioni dei tipi menzionate di seguito) espressioni di uguaglianza, espressioni relazionali, espressioni additive, espressioni moltiplicative, espressioni puntatore a membro, espressioni cast, espressioni unarie, espressioni di suffisso o espressioni primarie.  
  
 L'operatore AND bit per bit (**&**) confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se entrambi i bit sono 1, il bit del risultato corrispondente viene impostato su 1. In caso contrario, il bit di risultato corrispondente viene impostato su 0.  
  
 Entrambi gli operandi all'operatore AND bit per bit devono essere tipi integrali. Le conversioni aritmetiche consuete analizzate [conversioni Standard](standard-conversions.md), vengono applicate agli operandi.  
  
## <a name="operator-keyword-for-"></a>Parola chiave operator per &  
 Il `bitand` operatore è il testo equivalente di ** & **. Esistono due modi per accedere il `bitand` operatore nei programmi: includere il file di intestazione `iso646.h`, o compilare il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).  
  
## <a name="example"></a>Esempio  
  
```  
// expre_Bitwise_AND_Operator.cpp  
// compile with: /EHsc  
// Demonstrate bitwise AND  
#include <iostream>  
using namespace std;  
int main() {  
   unsigned short a = 0xFFFF;      // pattern 1111 ...  
   unsigned short b = 0xAAAA;      // pattern 1010 ...  
  
   cout  << hex << ( a & b ) << endl;   // prints "aaaa", pattern 1010 ...  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori predefiniti C++, precedenza e associazione](cpp-built-in-operators-precedence-and-associativity.md)  
 [Operatori C++ predefiniti, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori bit per bit C](../c-language/c-bitwise-operators.md)

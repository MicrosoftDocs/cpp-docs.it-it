---
title: 'Operatore AND bit per bit: &amp; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 428e3634898f50e7737c5fc5dae2ce7d0445572e
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943182"
---
# <a name="bitwise-and-operator-amp"></a>Operatore AND bit per bit: &amp;

## <a name="syntax"></a>Sintassi  
  
```

expression & expression  

```
  
## <a name="remarks"></a>Note  
 Le espressioni possono essere altre espressioni And o (in base alle restrizioni dei tipi menzionate di seguito) espressioni di uguaglianza, espressioni relazionali, espressioni additive, espressioni moltiplicative, espressioni puntatore a membro, espressioni cast, espressioni unarie, espressioni di suffisso o espressioni primarie.  
  
 L'operatore AND bit per bit (**&**) confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se entrambi i bit sono 1, il bit del risultato corrispondente viene impostato su 1. In caso contrario, il bit di risultato corrispondente viene impostato su 0.  
  
 Entrambi gli operandi all'operatore AND bit per bit devono essere tipi integrali. Le conversioni aritmetiche consuete analizzate [conversioni Standard](standard-conversions.md), vengono applicate agli operandi.  
  
## <a name="operator-keyword-for-"></a>Parola chiave operator per &  
 Il **bitand** operatore è l'equivalente testuale di **&**. Esistono due modi per accedere la **bitand** operatore nei programmi: includere il file di intestazione `iso646.h`, o eseguire la compilazione con il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).  
  
## <a name="example"></a>Esempio  
  
```cpp 
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
 [Operatori C++ predefiniti, precedenza e associatività degli operatori](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori bit per bit C](../c-language/c-bitwise-operators.md)
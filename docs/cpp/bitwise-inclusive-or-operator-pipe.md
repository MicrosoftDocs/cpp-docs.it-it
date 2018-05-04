---
title: 'Bit per bit inclusivo o operatore: | | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- bitor
- '|'
dev_langs:
- C++
helpviewer_keywords:
- OR operator [C++], bitwise inclusive
- bitwise operators [C++], OR operator
- inclusive OR operator
- '| operator'
ms.assetid: 4c8a6a68-d828-447d-875a-aedb4ce3aa9a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fc43460bc2c20262156bfdc6bd7f69a693c222f0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="bitwise-inclusive-or-operator-"></a>Operatore OR bit per bit inclusivo: |
## <a name="syntax"></a>Sintassi  
  
```  
  
expression   
|  
 expression  
  
```  
  
## <a name="remarks"></a>Note  
 L'operatore OR inclusivo bit per bit (**&#124;**) confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se un bit è 1 bit, il bit di risultato corrispondente viene impostato su 1. In caso contrario, il bit di risultato corrispondente viene impostato su 0.  
  
 Entrambi gli operandi all'operatore OR bit per bit inclusivo devono essere tipi integrali. Le conversioni aritmetiche consuete analizzate [conversioni Standard](standard-conversions.md) vengono applicate agli operandi.  
  
## <a name="operator-keyword-for-124"></a>Parola chiave operator per&#124;  
 Il `bitor` operatore è il testo equivalente di **&#124;**. Esistono due modi per accedere il `bitor` operatore nei programmi: includere il file di intestazione `iso646.h`, o compilare il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).  
  
## <a name="example"></a>Esempio  
  
```  
// expre_Bitwise_Inclusive_OR_Operator.cpp  
// compile with: /EHsc  
// Demonstrate bitwise inclusive OR  
#include <iostream>  
using namespace std;  
  
int main() {  
   unsigned short a = 0x5555;      // pattern 0101 ...  
   unsigned short b = 0xAAAA;      // pattern 1010 ...  
  
   cout  << hex << ( a | b ) << endl;   // prints "ffff" pattern 1111 ...  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori C++ predefiniti, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori bit per bit C](../c-language/c-bitwise-operators.md)


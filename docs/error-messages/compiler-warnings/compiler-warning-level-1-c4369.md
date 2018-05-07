---
title: Compilatore avviso (livello 1) C4369 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4369
dev_langs:
- C++
helpviewer_keywords:
- C4369
ms.assetid: ade87e84-36be-4e00-be99-2930af848feb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 63445f0713b43ce7fde418ebd9d65403965c07ba
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4369"></a>Avviso del compilatore (livello 1) C4369
'enumeratore': il valore di enumeratore 'value' non può essere rappresentato come 'type', valore è 'nuovo_valore'  
  
 Un enumeratore è stato calcolato sia maggiore del valore massimo per il tipo sottostante specificato.  Questo ha causato un overflow e il compilatore è incluso il valore dell'enumeratore per il valore minimo per il tipo.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4369.  
  
```  
// C4369.cpp  
// compile with: /W1  
int main() {  
   enum Color: char { red = 0x7e, green, blue };   // C4369  
   enum Color2: char { red2 = 0x7d, green2, blue2};   // OK  
}  
```
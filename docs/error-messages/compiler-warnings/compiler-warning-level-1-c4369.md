---
title: Compilatore avviso (livello 1) C4369 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4369
dev_langs: C++
helpviewer_keywords: C4369
ms.assetid: ade87e84-36be-4e00-be99-2930af848feb
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3c0419908ed7d914196cd65d07a3fb43a16d75ea
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
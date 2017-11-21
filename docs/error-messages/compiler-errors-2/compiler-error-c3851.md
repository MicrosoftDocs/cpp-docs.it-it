---
title: Errore del compilatore C3851 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3851
dev_langs: C++
helpviewer_keywords: C3851
ms.assetid: da30c21c-33aa-4439-8fb3-2f5021ea4985
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: ed2a62b859e37455041171c81bb6830db372c697
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3851"></a>Errore del compilatore C3851
'char': non è possibile usare nomi di caratteri universali per indicare caratteri nel set di caratteri di base  
  
 Nel codice compilato come C++, non è possibile usare un nome di carattere universale che rappresenta un carattere nel set di caratteri di origine di base esterno al valore letterale di stringa o carattere. Per altre informazioni, vedere [Character Sets](../../cpp/character-sets2.md). Nel codice compilato come C, non è possibile usare nomi di caratteri universali per i caratteri compresi nell'intervallo 0x20-0x7f, inclusivo, ad eccezione di 0x24 ('$'), 0x40 ('@'), o 0x60 ('`').  
  
 Gli esempi seguenti generano l'errore C3851 e mostrano come correggerlo:  
  
```cpp  
// C3851.cpp  
int main()  
{  
   int test1_\u0041 = 0;   // C3851, \u0041 = 'A' in basic character set  
   int test2_A = 0;        // OK  
}  
```
---
title: Errore del compilatore C3872 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3872
dev_langs: C++
helpviewer_keywords: C3872
ms.assetid: 519e95be-5641-40cc-894c-da4819506604
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: e42ebb3e1fc286e40662eb7fcce83893b1e4007f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3872"></a>Errore del compilatore C3872
'char': carattere non consentito in un identificatore  
  
 Il compilatore C++ è conforme allo standard C++11 sui caratteri consentiti in un identificatore. In un identificatore sono consentiti solo alcuni intervalli di caratteri e di nomi di caratteri universali. Sono previste ulteriori restrizioni per il carattere iniziale di un identificatore. Per altre informazioni e per un elenco degli intervalli di caratteri universali e di caratteri consentiti, vedere [Identifiers](../../cpp/identifiers-cpp.md).  
  
 L'intervallo di caratteri consentiti in un identificatore è meno restrittivo quando si compila codice C++/CLI. Gli identificatori nel codice compilato con /clr devono essere conformi allo  [standard ECMA-335: Common Language Infrastructure (CLI)](http://www.ecma-international.org/publications/standards/Ecma-335.htm).  
  
 L'esempio seguente genera l'errore C3872:  
  
```  
// C3872.cpp  
int main() {  
   int abc_\u0040;   // C3872, U+0040 is in base char set  
   int abc_\u3001;   // C3872, U+3001 is not in allowed range  
   int \u30A2_abc_\u3042;   // OK, UCNs in allowed range  
}  
```
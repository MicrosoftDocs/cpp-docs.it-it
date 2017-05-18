---
title: Errore del compilatore C2345 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2345
dev_langs:
- C++
helpviewer_keywords:
- C2345
ms.assetid: e1cc88b0-0223-4d07-975b-fa99956a82bd
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: ce62879fc4694fd52cfa4145e5e7889103c80762
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2345"></a>Errore del compilatore C2345
align(value): valore di allineamento non valido  
  
 È stato passato un valore per il [allineare](../../cpp/align-cpp.md) parola chiave che non è compreso nell'intervallo consentito.  
  
 Il codice seguente genera l'errore C2345  
  
```  
// C2345.cpp  
// compile with: /c  
__declspec(align(0)) int a;   // C2345  
__declspec(align(1)) int a;   // OK  
```

---
title: Errore del compilatore C2383 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2383
dev_langs:
- C++
helpviewer_keywords:
- C2383
ms.assetid: 6696221d-879c-477a-a0f3-a6edc15fd3d7
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 20f6fa7626541f5fcd06bc2c2c513f52ec443ba4
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2383"></a>Errore del compilatore C2383
'*simbolo*': argomenti predefiniti non consentiti su questo simbolo  
  
 Il compilatore C++ non consente argomenti predefiniti sui puntatori a funzioni.  
  
 Questo codice è stato accettato dal compilatore Visual C++ nelle versioni precedenti di Visual Studio 2005, ma attualmente causa un errore. Per il codice che funziona in tutte le versioni di Visual C++, non assegnare un valore predefinito a un argomento di puntatore a funzione.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente genera l'errore C2383 e illustra una possibile soluzione:  
  
```cpp  
// C2383.cpp  
// compile with: /c   
void (*pf)(int = 0);   // C2383  
void (*pf)(int);   // OK  
```

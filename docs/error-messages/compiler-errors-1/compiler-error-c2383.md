---
title: Errore del compilatore C2383 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2383
dev_langs:
- C++
helpviewer_keywords:
- C2383
ms.assetid: 6696221d-879c-477a-a0f3-a6edc15fd3d7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 81624ccd7f4857cb2f7d8474d393a9743ab1a2b3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33196493"
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
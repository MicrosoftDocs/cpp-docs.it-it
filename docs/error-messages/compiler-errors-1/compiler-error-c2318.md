---
title: Errore del compilatore C2318 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C2318
dev_langs: C++
helpviewer_keywords: C2318
ms.assetid: 169e30b9-df78-46cb-90bf-576ad3c32fd4
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 2e73934351caf640b650335b7c4766407d5c485d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2318"></a>Errore del compilatore C2318
nessun blocco try associato a questo gestore catch  
  
 Un gestore `catch` è stato definito, ma non è preceduto da un blocco `try` .  
  
 L'esempio seguente genera l'errore C2318:  
  
```  
// C2318.cpp  
// compile with: /EHsc  
#include <eh.h>  
int main() {  
   // no try block  
   catch( int ) {}   // C2318  
}  
```  
  
 Possibile soluzione:  
  
```  
// C2318b.cpp  
// compile with: /EHsc  
#include <eh.h>  
int main() {  
   try{}  
   catch( int ) {}  
}  
```
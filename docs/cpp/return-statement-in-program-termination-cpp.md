---
title: Istruzione return in chiusura programma (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- data types [C++], function return types
- function return types [C++], return statement
- return keyword [C++], syntax
ms.assetid: 66d002ab-5625-4b68-8446-71e1b8fcdbd8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 61d09c1b3aaea799c227686436486efa48fc7857
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="return-statement-in-program-termination-c"></a>Istruzione return in chiusura del programma (C++)
Emissione un `return` from dell'istruzione **principale** è funzionalmente equivalente alla chiamata di **uscire** (funzione). Si consideri l'esempio seguente:  
  
```  
// return_statement.cpp  
#include <stdlib.h>  
int main()  
{  
    exit( 3 );  
    return 3;  
}  
```  
  
 Il **uscire** e `return` istruzioni nell'esempio precedente sono identiche. Tuttavia, in C++ è necessario che le funzioni contenenti tipi restituiti diversi da `void` restituiscano un valore. Il `return` istruzione consente di restituire un valore da **principale**.  
  
## <a name="see-also"></a>Vedere anche  
 [Chiusura del programma](../cpp/program-termination.md)
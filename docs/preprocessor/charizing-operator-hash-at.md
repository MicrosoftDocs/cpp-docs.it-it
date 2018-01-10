---
title: Operatore charizing (#@) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: '#@'
dev_langs: C++
helpviewer_keywords:
- preprocessor, operators
- charizing operator
- '#@ preprocessor operator'
ms.assetid: dee03314-d27c-4063-965c-64756efbef22
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 933e97732462b61919d9e5a1e73f2a72d26ea01b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="charizing-operator-"></a>Operatore charizing (#@)
**Sezione specifica Microsoft**  
  
 L'operatore per la creazione di caratteri può essere utilizzato solo con argomenti di macro. Se  **#@**  precede il parametro formale nella definizione della macro, l'argomento effettivo è racchiuso tra virgolette singole e considerato come un carattere quando la macro viene espansa. Ad esempio:  
  
```  
#define makechar(x)  #@x  
```  
  
 fa sì che l'istruzione  
  
```  
a = makechar(b);  
```  
  
 venga espansa a  
  
```  
a = 'b';  
```  
  
 Il carattere della virgoletta singola non può essere utilizzato con l'operatore per la creazione di caratteri.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori del preprocessore](../preprocessor/preprocessor-operators.md)
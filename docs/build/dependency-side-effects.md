---
title: Effetti collaterali delle dipendenze | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- dependencies, side effects
- NMAKE program, dependents
ms.assetid: d4e8db25-fdc0-4d73-81ec-1538f2e1b3e8
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f595099d2a71c948c769adf7f7eafcbc373f3146
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dependency-side-effects"></a>Effetti collaterali delle dipendenze
Se viene specificata una destinazione con due punti (:) in due righe di dipendenze in posizioni diverse e se i comandi vengono visualizzati solo dopo una delle righe, vengono interpretate le dipendenze come se adiacenti o combinate. Non richiama una regola di inferenza per la dipendenza che non presenta comandi, ma si presuppone che le dipendenze appartengono al blocco di una descrizione e che esegue i comandi specificati con la dipendenza da altri. Ad esempio, questo set di regole:  
  
```Output  
bounce.exe : jump.obj  
   echo Building bounce.exe...  
  
bounce.exe : up.obj  
```  
  
 viene valutato come questo:  
  
```Output  
bounce.exe : jump.obj up.obj  
   echo Building bounce.exe...  
```  
  
 Questo effetto non si verifica se un doppio carattere due punti (`::`) viene utilizzato. Ad esempio, questo set di regole:  
  
```Output  
bounce.exe :: jump.obj  
   echo Building bounce.exe...  
  
bounce.exe :: up.obj  
```  
  
 viene valutato come questo:  
  
```Output  
bounce.exe : jump.obj  
   echo Building bounce.exe...  
  
bounce.exe : up.obj  
# invokes an inference rule  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Destinazioni](../build/targets.md)
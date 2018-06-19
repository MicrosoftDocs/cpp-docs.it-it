---
title: Dipendenze cumulative | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- dependencies, cumulative
- cumulative dependencies in NMAKE
- dependencies
ms.assetid: fa6dd777-80b8-437d-87a7-aec0ed818a49
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d502912a8aeee2e6b3782e7795f44238386e1dba
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32366975"
---
# <a name="cumulative-dependencies"></a>Dipendenze cumulative
Le dipendenze sono cumulative in un blocco di descrizione, se una destinazione viene ripetuta.  
  
 Ad esempio, questo set di regole,  
  
```Output  
bounce.exe : jump.obj  
bounce.exe : up.obj  
   echo Building bounce.exe...  
```  
  
 viene valutato come questo:  
  
```Output  
bounce.exe : jump.obj up.obj  
   echo Building bounce.exe...  
```  
  
 Più destinazioni in più righe di dipendenze in un unico blocco di descrizione vengono valutate come se ciascuna fosse specificata in un blocco di descrizione separato, ma le destinazioni che non sono nell'ultima riga dipendenza non utilizzano il blocco di comandi. NMAKE tenta di usare una regola di inferenza per tali obiettivi.  
  
 Ad esempio, questo set di regole,  
  
```Output  
leap.exe bounce.exe : jump.obj  
bounce.exe climb.exe : up.obj  
   echo Building bounce.exe...  
```  
  
 viene valutato come questo:  
  
```Output  
  
leap.exe : jump.obj  
# invokes an inference rule  
bounce.exe : jump.obj up.obj  
   echo Building bounce.exe...  
climb.exe : up.obj  
   echo Building bounce.exe...  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Destinazioni](../build/targets.md)
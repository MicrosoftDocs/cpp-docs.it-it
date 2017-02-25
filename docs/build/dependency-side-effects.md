---
title: "Effetti collaterali delle dipendenze | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dipendenze, gli effetti collaterali"
  - "NMAKE (programma), gli oggetti dipendenti"
ms.assetid: d4e8db25-fdc0-4d73-81ec-1538f2e1b3e8
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Effetti collaterali delle dipendenze
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se viene specificata una destinazione con due punti (:) in due righe di dipendenze in posizioni diverse e i comandi vengono visualizzati solo dopo una delle righe, vengono interpretate le dipendenze come se adiacenti o combinate. Questo strumento non richiama una regola di inferenza per la dipendenza che non presenta comandi, ma si presuppone che le dipendenze appartengono al blocco di una descrizione ed esegue i comandi specificati con la dipendenza da altri. Ad esempio, questo set di regole:  
  
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
  
 Questo effetto non si verifica se i due punti doppio (`::`) viene utilizzato. Ad esempio, questo set di regole:  
  
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
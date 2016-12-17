---
title: "Dipendenze cumulative | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dipendenze cumulative"
  - "dipendenze cumulative in NMAKE"
  - "dependencies"
ms.assetid: fa6dd777-80b8-437d-87a7-aec0ed818a49
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Dipendenze cumulative
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

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
  
 Destinazioni multiple in più righe di dipendenze in un unico blocco di descrizione vengono valutate come se ciascuna fosse specificata in un blocco di descrizione separato, ma le destinazioni che non sono nell'ultima riga di dipendenza che utilizzano il blocco di comandi. NMAKE cerca di utilizzare una regola di inferenza per queste destinazioni.  
  
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
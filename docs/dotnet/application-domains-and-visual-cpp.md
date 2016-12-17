---
title: "Domini applicazione e Visual C++ | Microsoft Docs"
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
  - "/clr (opzione del compilatore) [C++], domini applicazione"
  - "domini applicazione[C++], C++"
  - "interoperabilità [C++], domini applicazione"
  - "interoperabilità [C++], domini applicazione"
  - "assembly misti [C++], domini applicazione"
ms.assetid: 75a08efc-9b02-40ba-99b7-dcbd71010bbf
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Domini applicazione e Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si dispone di una funzione virtuale `__clrcall`, la tabella vtable sarà basata sul dominio applicazione.  Se si crea un oggetto in un dominio applicazione, è possibile chiamare la funzione virtuale soltanto da tale dominio applicazione.  Tutte le funzioni definite in moduli **\/clr:pure** utilizzano la convenzione di chiamata `__clrcall`.  Di conseguenza, tutte le tabelle vtable definite in moduli **\/clr:pure** sono basate sul dominio applicazione.  In modalità mista \(**\/clr**\), se il tipo non dispone di funzioni virtuali `__clrcall` verranno utilizzate vtable per processo.  
  
 Per ulteriori informazioni, vedere  
  
-   [appdomain](../cpp/appdomain.md)  
  
-   [\_\_clrcall](../cpp/clrcall.md)  
  
-   [Procedura: migrare a \/clr:pure](../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md)  
  
-   [processo](../cpp/process.md)  
  
## Vedere anche  
 [Assembly misti \(nativi e gestiti\)](../dotnet/mixed-native-and-managed-assemblies.md)
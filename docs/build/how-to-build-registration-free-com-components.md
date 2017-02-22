---
title: "Procedura: compilare componenti COM senza registrazione | Microsoft Docs"
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
  - "COM (componenti), senza registrazione"
ms.assetid: 7e585d6a-0314-45b2-8f1b-cae9ac4df037
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Procedura: compilare componenti COM senza registrazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I componenti COM senza registrazione sono componenti COM che contengono manifesti incorporati nelle DLL.  
  
### Per compilare manifesti nei componenti COM  
  
1.  Aprire le pagine delle proprietà del progetto corrispondenti al componente COM.  
  
2.  Espandere il nodo **Proprietà di configurazione**, quindi il nodo **Strumento Manifesto**.  
  
3.  Selezionare la pagina delle proprietà **Input e output**, quindi impostare la proprietà **Incorpora manifesto** su **Sì**.  
  
4.  Scegliere **OK**.  
  
5.  Compilare la soluzione.  
  
## Vedere anche  
 [Applicazioni isolate](http://msdn.microsoft.com/library/aa375190)   
 [Assembly side\-by\-side](_win32_side_by_side_assemblies)   
 [Procedura: compilare applicazioni isolate per l'utilizzo di componenti COM](../build/how-to-build-isolated-applications-to-consume-com-components.md)
---
title: "OpenMP Libraries | Microsoft Docs"
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
ms.assetid: f89abf97-67e3-4327-bc30-43f85b9533a2
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# OpenMP Libraries
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Vengono descritti i file lib che costituiscono le librerie di runtime di OpenMP in Visual C\+\+.  
  
 Le seguenti raccolte contengono funzioni della libreria di runtime di Visual C\+\+ OpenMP.  
  
|Libreria di runtime di OpenMP|Caratteristica|  
|-----------------------------------|--------------------|  
|VCOMP.LIB|Collegamento con multithreading e dinamico \(libreria di importazione per VCOMP.LIB\).|  
|VCOMPD.LIB|Collegamento con multithreading e dinamico \(libreria di importazione per VCOMPD.LID\) \(debug\)|  
  
 Se \_DEBUG è definito in una compilazione e se `#include omp.h` è nel codice sorgente, VCOMPD.LIB sarà il lib predefinito.  In caso contrario, VCOMP.LIB verrà utilizzato.  
  
 È possibile utilizzare [\/NODEFAULTLIB \(Ignora librerie\)](../../../build/reference/nodefaultlib-ignore-libraries.md) per rimuovere il lib e in modo esplicito il collegamento predefiniti con il lib di scelta.  
  
 Le DLL di OpenMP sono nella directory ridistribuibile di Visual C\+\+ e devono essere distribuite con le applicazioni che utilizzano OpenMP.  
  
## Vedere anche  
 [Library Reference](../../../parallel/openmp/reference/openmp-library-reference.md)
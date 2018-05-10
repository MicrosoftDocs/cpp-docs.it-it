---
title: Librerie OpenMP | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
dev_langs:
- C++
ms.assetid: f89abf97-67e3-4327-bc30-43f85b9533a2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 46bd287ff8a020a4d5d7775afdb12f5571d43294
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="openmp-libraries"></a>Librerie OpenMP
Descrive i file lib che costituiscono le librerie di runtime OpenMP in Visual C++.  
  
 Le seguenti librerie contengono le funzioni della libreria run-time Visual C++ OpenMP.  
  
|Libreria di run-time OpenMP|Caratteristiche|  
|------------------------------|---------------------|  
|VCOMP.LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMP. LIB).|  
|VCOMPD.LIB|Multithreading, collegamento dinamico (libreria di importazione per VCOMPD. COPERCHIO) (debug)|  
  
 Se viene definito debug in una compilazione e `#include omp.h` nel codice sorgente, VCOMPD. LIB sarà lib predefinito. In caso contrario, VCOMP. Verrà utilizzato LIB.  
  
 È possibile utilizzare [/NODEFAULTLIB (Ignora librerie)](../../../build/reference/nodefaultlib-ignore-libraries.md) per rimuovere la libreria predefinita e in modo esplicito il collegamento con la libreria di propria scelta.  
  
 Le DLL OpenMP si trovano nella directory Visual C++ redistributable e devono essere distribuiti con applicazioni che utilizzano OpenMP.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti alla libreria](../../../parallel/openmp/reference/openmp-library-reference.md)
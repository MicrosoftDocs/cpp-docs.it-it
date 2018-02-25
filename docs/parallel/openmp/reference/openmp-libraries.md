---
title: Librerie OpenMP | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: f89abf97-67e3-4327-bc30-43f85b9533a2
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 760e7d138ab71244419ff71960948d4d10f125eb
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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
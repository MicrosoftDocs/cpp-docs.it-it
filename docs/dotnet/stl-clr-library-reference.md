---
title: Riferimenti alla libreria STL/CLR | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- STL/CLR Library
- STL/CLR, redistribution
- cliext directory
ms.assetid: a9d9ca00-7bf2-48c1-b205-3ae6f8c25f82
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 8cab573b0c1de57ef2629f662108098095b722eb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="stlclr-library-reference"></a>Riferimenti della libreria STL/CLR
La libreria STL/CLR è un pacchetto di un subset della libreria Standard C++ per l'uso con C++ e .NET Framework common language runtime (CLR). Con STL/CLR, è possibile utilizzare tutti i contenitori, gli iteratori e gli algoritmi della libreria standard in un ambiente gestito.  
  
 Per utilizzare STL/CLR:  
  
-   Includere le intestazioni dal **cliext** includere sottodirectory anziché gli equivalenti della libreria Standard C++ normale.  
  
-   Qualificare i nomi delle librerie con `cliext::` anziché `std::`.  
  
 STL/CLR espone i tipi generici e le interfacce utilizzate negli scenari tra assembly nell'assembly .NET **Microsoft.VisualC.STLCLR.dll**. Questa DLL è incluso in .NET Framework 3.5. Se si ridistribuisce un'applicazione che utilizza STL/CLR, è necessario includere .NET Framework 3.5, nonché altre librerie di Visual C++ che utilizza il progetto, nella sezione delle dipendenze del progetto di installazione.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Spazio dei nomi cliext](../dotnet/cliext-namespace.md)  
 Viene descritto lo spazio dei nomi che contiene tutti i tipi della libreria STL/CLR.  
  
 [Contenitori STL/CLR](../dotnet/stl-clr-containers.md)  
 Viene fornita una panoramica dei contenitori che si trovano nella libreria Standard C++, inclusi i requisiti per gli elementi contenitore, tipi di elementi che possono essere inseriti e problemi di proprietà.  
  
 [Requisiti degli elementi del contenitore STL/CLR](../dotnet/requirements-for-stl-clr-container-elements.md)  
 Descrive i requisiti minimi per tutti i tipi di riferimento che vengono inseriti nei contenitori della libreria Standard C++.  
  
 [Procedura: Convertire da una raccolta .NET a un contenitore STL/CLR](../dotnet/how-to-convert-from-a-dotnet-collection-to-a-stl-clr-container.md)  
 Viene descritto come convertire una raccolta .NET a un contenitore STL/CLR.  
  
 [Procedura: Convertire da contenitore STL/CLR a raccolta di .NET](../dotnet/how-to-convert-from-a-stl-clr-container-to-a-dotnet-collection.md)  
 Viene descritto come convertire un contenitore STL/CLR a raccolta .NET.  
  
 [Procedura: Esporre un contenitore STL/CLR da un assembly](../dotnet/how-to-expose-an-stl-clr-container-from-an-assembly.md)  
 Viene illustrato come visualizzare gli elementi di diversi contenitori STL/CLR scritti in un assembly C++.  
  
 Inoltre, questa sezione descrive anche i componenti seguenti di STL/CLR:  
  
|||  
|-|-|  
|[adapter (STL/CLR)](../dotnet/adapter-stl-clr.md)|[algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)|  
|[deque (STL/CLR)](../dotnet/deque-stl-clr.md)|[for each, in](../dotnet/for-each-in.md)|  
|[functional (STL/CLR)](../dotnet/functional-stl-clr.md)|[hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)|  
|[hash_multimap (STL/CLR)](../dotnet/hash-multimap-stl-clr.md)|[hash_multiset (STL/CLR)](../dotnet/hash-multiset-stl-clr.md)|  
|[hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)|[list (STL/CLR)](../dotnet/list-stl-clr.md)|  
|[map (STL/CLR)](../dotnet/map-stl-clr.md)|[multimap (STL/CLR)](../dotnet/multimap-stl-clr.md)|  
|[multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)|[numeric (STL/CLR)](../dotnet/numeric-stl-clr.md)|  
|[priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)|[queue (STL/CLR)](../dotnet/queue-stl-clr.md)|  
|[set (STL/CLR)](../dotnet/set-stl-clr.md)|[stack (STL/CLR)](../dotnet/stack-stl-clr.md)|  
|[utility (STL/CLR)](../dotnet/utility-stl-clr.md)|[vector (STL/CLR)](../dotnet/vector-stl-clr.md)|  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
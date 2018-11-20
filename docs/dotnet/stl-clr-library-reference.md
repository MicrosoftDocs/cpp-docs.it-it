---
title: Riferimenti della libreria STL/CLR
ms.date: 09/18/2018"
ms.topic: reference
helpviewer_keywords:
- STL/CLR Library
- STL/CLR, redistribution
- cliext directory
ms.assetid: a9d9ca00-7bf2-48c1-b205-3ae6f8c25f82
ms.openlocfilehash: 6914b61597e38c94a214089ecc3aeed17aec46d3
ms.sourcegitcommit: 984fb4814a2dd9bcea5ec88c9528707f17a7cffa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2018
ms.locfileid: "51949518"
---
# <a name="stlclr-library-reference"></a>Riferimenti della libreria STL/CLR

La libreria STL/CLR fornisce un'interfaccia simile per i contenitori della libreria Standard C++ per l'uso con C++ e .NET Framework common language runtime (CLR). STL/CLR è completamente separato rispetto all'implementazione Microsoft della libreria Standard C++. STL/CLR viene mantenuto per il supporto legacy ma non viene mantenuto aggiornato con lo standard C++. È consigliabile usare l'oggetto nativo [libreria Standard C++](../standard-library/cpp-standard-library-reference.md) contenitori anziché STL/CLR laddove possibile.

Per utilizzare STL/CLR:

- Intestazioni da includere il **cliext** includono la sottodirectory invece gli equivalenti della libreria Standard C++ normale.

- Qualificare i nomi delle librerie con `cliext::` invece di `std::`.

La libreria STL/CLR fornisce un'interfaccia simile a STL per l'uso con C++ e .NET Framework common language runtime (CLR). Questa libreria viene mantenuta per il supporto legacy ma non viene mantenuta aggiornata con lo standard C++. È consigliabile usare l'oggetto nativo [libreria Standard C++](../standard-library/cpp-standard-library-reference.md) contenitori anziché STL/CLR.

## <a name="in-this-section"></a>In questa sezione

[Spazio dei nomi cliext](../dotnet/cliext-namespace.md)<br/>
Viene descritto lo spazio dei nomi che contiene tutti i tipi della libreria STL/CLR.

[Contenitori STL/CLR](../dotnet/stl-clr-containers.md)<br/>
Viene fornita una panoramica dei contenitori che si trovano nella libreria Standard C++, inclusi i requisiti per gli elementi del contenitore, i tipi di elementi che possono essere inseriti e problemi di proprietà.

[Requisiti degli elementi del contenitore STL/CLR](../dotnet/requirements-for-stl-clr-container-elements.md)<br/>
Descrive i requisiti minimi per tutti i tipi di riferimento che vengono inseriti nei contenitori della libreria Standard C++.

[Procedura: Convertire da una raccolta .NET a un contenitore STL/CLR](../dotnet/how-to-convert-from-a-dotnet-collection-to-a-stl-clr-container.md)<br/>
Viene descritto come convertire una raccolta .NET in un contenitore STL/CLR.

[Procedura: Convertire da contenitore STL/CLR a raccolta di .NET](../dotnet/how-to-convert-from-a-stl-clr-container-to-a-dotnet-collection.md)<br/>
Viene descritto come convertire un contenitore STL/CLR a raccolta di .NET.

[Procedura: Esporre un contenitore STL/CLR da un assembly](../dotnet/how-to-expose-an-stl-clr-container-from-an-assembly.md)<br/>
Viene illustrato come visualizzare gli elementi di numerosi contenitori STL/CLR scritti in un assembly C++.

Inoltre, questa sezione descrive anche i seguenti componenti di STL/CLR:

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

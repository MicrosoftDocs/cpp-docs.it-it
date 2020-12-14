---
description: 'Altre informazioni su: riferimenti alla libreria STL/CLR'
title: Riferimenti della libreria STL/CLR
ms.date: 09/18/2018
ms.topic: reference
helpviewer_keywords:
- STL/CLR Library
- STL/CLR, redistribution
- cliext directory
ms.assetid: a9d9ca00-7bf2-48c1-b205-3ae6f8c25f82
ms.openlocfilehash: c051b58b76a70dd5ef3bd17b1f9bec1cbeeccebf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335330"
---
# <a name="stlclr-library-reference"></a>Riferimenti della libreria STL/CLR

La libreria STL/CLR fornisce un'interfaccia simile ai contenitori della libreria standard C++ da usare con C++ e con il .NET Framework Common Language Runtime (CLR). STL/CLR è completamente separato dall'implementazione Microsoft della libreria standard C++. STL/CLR viene mantenuto per il supporto legacy ma non è sempre aggiornato con lo standard C++. Quando possibile, è consigliabile usare i contenitori della [libreria standard C++](../standard-library/cpp-standard-library-reference.md) nativi anziché STL/CLR.

Per usare STL/CLR:

- Le intestazioni di inclusione della sottodirectory **cliext** includono invece dei normali equivalenti della libreria standard C++.

- Qualifica i nomi delle librerie con `cliext::` anziché con `std::` .

La libreria STL/CLR fornisce un'interfaccia di tipo STL da usare con C++ e il .NET Framework Common Language Runtime (CLR). Questa libreria viene mantenuta per il supporto legacy ma non è sempre aggiornata con lo standard C++. È consigliabile usare i contenitori della [libreria standard C++](../standard-library/cpp-standard-library-reference.md) nativi invece di STL/CLR.

## <a name="in-this-section"></a>Contenuto della sezione

[Spazio dei nomi cliext](../dotnet/cliext-namespace.md)<br/>
Viene illustrato lo spazio dei nomi che contiene tutti i tipi della libreria STL/CLR.

[Contenitori STL/CLR](../dotnet/stl-clr-containers.md)<br/>
Viene fornita una panoramica dei contenitori presenti nella libreria standard C++, inclusi i requisiti per gli elementi contenitore, i tipi di elementi che è possibile inserire e i problemi di proprietà.

[Requisiti per gli elementi contenitore STL/CLR](../dotnet/requirements-for-stl-clr-container-elements.md)<br/>
Vengono descritti i requisiti minimi per tutti i tipi di riferimento inseriti nei contenitori della libreria standard C++.

[Procedura: eseguire la conversione da una raccolta .NET a un contenitore STL/CLR](../dotnet/how-to-convert-from-a-dotnet-collection-to-a-stl-clr-container.md)<br/>
Viene descritto come convertire una raccolta .NET in un contenitore STL/CLR.

[Procedura: eseguire la conversione da un contenitore STL/CLR a una raccolta .NET](../dotnet/how-to-convert-from-a-stl-clr-container-to-a-dotnet-collection.md)<br/>
Viene descritto come convertire un contenitore STL/CLR in una raccolta .NET.

[Procedura: esporre un contenitore STL/CLR da un assembly](../dotnet/how-to-expose-an-stl-clr-container-from-an-assembly.md)<br/>
Viene illustrato come visualizzare gli elementi di diversi contenitori STL/CLR scritti in un assembly C++.

Inoltre, in questa sezione vengono descritti i seguenti componenti di STL/CLR:

:::row:::
   :::column span="":::
      [`adapter` (STL/CLR)](../dotnet/adapter-stl-clr.md)\
      [`algorithm` (STL/CLR)](../dotnet/algorithm-stl-clr.md)\
      [`deque` (STL/CLR)](../dotnet/deque-stl-clr.md)\
      [`for each`, `in`](../dotnet/for-each-in.md)\
      [`functional` (STL/CLR)](../dotnet/functional-stl-clr.md)\
      [`hash_map` (STL/CLR)](../dotnet/hash-map-stl-clr.md)\
      [`hash_multimap` (STL/CLR)](../dotnet/hash-multimap-stl-clr.md)\
      [`hash_multiset` (STL/CLR)](../dotnet/hash-multiset-stl-clr.md)\
      [`hash_set` (STL/CLR)](../dotnet/hash-set-stl-clr.md)\
      [`list` (STL/CLR)](../dotnet/list-stl-clr.md)\
   :::column-end:::
   :::column span="":::
      [`map` (STL/CLR)](../dotnet/map-stl-clr.md)\
      [`multimap` (STL/CLR)](../dotnet/multimap-stl-clr.md)\
      [`multiset` (STL/CLR)](../dotnet/multiset-stl-clr.md)\
      [`numeric` (STL/CLR)](../dotnet/numeric-stl-clr.md)\
      [`priority_queue` (STL/CLR)](../dotnet/priority-queue-stl-clr.md)\
      [`queue` (STL/CLR)](../dotnet/queue-stl-clr.md)\
      [`set` (STL/CLR)](../dotnet/set-stl-clr.md)\
      [`stack` (STL/CLR)](../dotnet/stack-stl-clr.md)\
      [`utility` (STL/CLR)](../dotnet/utility-stl-clr.md)\
      [`vector` (STL/CLR)](../dotnet/vector-stl-clr.md)\
   :::column-end:::
:::row-end:::

## <a name="see-also"></a>Vedi anche

[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)

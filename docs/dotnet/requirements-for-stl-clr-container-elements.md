---
description: 'Altre informazioni su: requisiti per gli elementi del contenitore STL/CLR'
title: Requisiti degli elementi del contenitore STL/CLR
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- C++ Standard Library, template class containers
- STL/CLR, containers
- containers, STL/CLR
- containers, C++ Standard Library
ms.assetid: 59ab240c-15bf-4701-a9f9-e7c56e5ab53f
ms.openlocfilehash: 3696d9df40f69b1dd39205a2dc7a3b802e815841
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97305507"
---
# <a name="requirements-for-stlclr-container-elements"></a>Requisiti degli elementi del contenitore STL/CLR

Tutti i tipi di riferimento inseriti nei contenitori STL/CLR devono contenere almeno gli elementi seguenti:

- Un costruttore di copia pubblico.

- Operatore di assegnazione pubblico.

- Distruttore pubblico.

Inoltre, i contenitori associativi, ad esempio [set](../dotnet/set-stl-clr.md) e [Map](../dotnet/map-stl-clr.md) , devono avere un operatore di confronto pubblico definito, che è `operator<` per impostazione predefinita. Alcune operazioni sui contenitori potrebbero anche richiedere un costruttore predefinito pubblico e un operatore di equivalenza pubblico da definire.

Come i tipi di riferimento, i tipi di valore e gli handle ai tipi di riferimento che devono essere inseriti in un contenitore associativo devono disporre di un operatore di confronto, ad esempio `operator<` defined. I requisiti per un costruttore di copia pubblico, un operatore di assegnazione pubblico e un distruttore pubblico non esistono per i tipi di valore o gli handle ai tipi di riferimento.

## <a name="see-also"></a>Vedi anche

[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)

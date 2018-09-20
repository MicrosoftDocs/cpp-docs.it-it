---
title: Requisiti degli elementi del contenitore STL/CLR | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- C++ Standard Library, template class containers
- STL/CLR, containers
- containers, STL/CLR
- containers, C++ Standard Library
ms.assetid: 59ab240c-15bf-4701-a9f9-e7c56e5ab53f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: fcba36fdf280cef31efb9a84288475fcbb82b291
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46400426"
---
# <a name="requirements-for-stlclr-container-elements"></a>Requisiti degli elementi del contenitore STL/CLR

Come minimo, tutti i tipi di riferimento che vengono inseriti nei contenitori STL/CLR devono includere i seguenti elementi:

- Un costruttore di copia pubblico.

- Un operatore di assegnazione pubblico.

- Un distruttore pubblico.

Inoltre, i contenitori associativi, ad esempio [impostata](../dotnet/set-stl-clr.md) e [mappa](../dotnet/map-stl-clr.md) deve avere un operatore di confronto pubblico definito, ovvero `operator<` per impostazione predefinita. Alcune operazioni sui contenitori potrebbero anche richiedere un costruttore predefinito pubblico e un operatore di equivalenza pubblico da definire.

Quali tipi di riferimento, i tipi di valore e gli handle per fare riferimento a tipi che devono essere inseriti in un contenitore associativo da preferire devono avere un operatore di confronto, ad esempio `operator<` definito. I requisiti per un costruttore di copia pubblico, l'operatore di assegnazione pubblico e un distruttore pubblico non esistono per i tipi di valore o handle ai tipi di riferimento.

## <a name="see-also"></a>Vedere anche

[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
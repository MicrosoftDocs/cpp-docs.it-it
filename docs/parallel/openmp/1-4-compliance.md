---
title: 1.4 Conformità
ms.date: 11/04/2016
ms.assetid: 662ad260-b9a1-43b7-b269-ef6ff0714e05
ms.openlocfilehash: 7fb47c9989e971e10701c2ee2bd7ac7823141812
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50642455"
---
# <a name="14-compliance"></a>1.4 Conformità

È un'implementazione dell'API OpenMP C/C++ *OpenMP conformi* se che riconosce e consente di mantenere la semantica di tutti gli elementi di questa specifica, come illustrato nei capitoli 1, 2, 3, 4, e appendice C. appendici A, B, D, E e F per informazioni solo a scopo e non fanno parte della specifica. Le implementazioni che includono solo un subset dell'API non sono compatibili con OpenMP.

Il OpenMP C e C++ API è un'estensione del linguaggio di base che è supportato da un'implementazione. Se la lingua di base non supporta un costrutto di linguaggio o un'estensione che viene visualizzato in questo documento, l'implementazione di OpenMP non è necessario che lo supporta.

Tutte le funzioni della libreria standard C e C++ e funzioni predefinite (vale a dire, le funzioni di cui il compilatore dispone di conoscenze specifiche) deve essere thread-safe. Non sincronizzato uso delle funzioni thread-safe da thread diversi all'interno di un'area parallela non produce un comportamento indefinito. Tuttavia, il comportamento potrebbe non essere le stesse di una regione seriale. (Una funzione di generazione di numeri casuali è riportato un esempio).

L'API di OpenMP C/C++ specifica che determinati comportamenti *definito dall'implementazione.* Un'implementazione conforme OpenMP è necessaria definire e documentare il proprio comportamento in questi casi. Visualizzare [appendice](../../parallel/openmp/e-implementation-defined-behaviors-in-openmp-c-cpp.md), pagina 97, per un elenco di comportamenti definiti dall'implementazione.
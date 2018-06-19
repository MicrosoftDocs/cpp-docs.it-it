---
title: 1.4 conformità | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 662ad260-b9a1-43b7-b269-ef6ff0714e05
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7c1bde41491f456ff99b0cd0d1ccc8ab98508412
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33687231"
---
# <a name="14-compliance"></a>1.4 Conformità
È un'implementazione dell'API di C/C++ OpenMP *OpenMP conforme* se riconosce e mantiene la semantica di tutti gli elementi di questa specifica, come illustrato nei capitoli 1, 2, 3, 4, e appendice C. appendici A, B, D, E e F per informazioni solo a scopo e non fanno parte della specifica. Le implementazioni che includono solo un subset dell'API non sono compatibili con OpenMP.  
  
 Le API C++ OpenMP C è un'estensione del linguaggio di base che è supportato da un'implementazione. Se la lingua di base non supporta un costrutto di linguaggio o un'estensione che viene visualizzato in questo documento, l'implementazione di OpenMP non è richiesta per il suo supporto.  
  
 Tutte le funzioni della libreria standard C e C++ e le funzioni predefinite (ovvero, funzioni di cui il compilatore abbia una conoscenza specifica) deve essere thread-safe. Non sincronizzato utilizzo delle funzioni di thread-safe da thread diversi all'interno di un'area parallela non produce un comportamento indefinito. Tuttavia, il comportamento potrebbe non essere uguale a quello di un'area seriale. (Una funzione di generazione di numeri casuali è riportato un esempio).  
  
 L'API di C/C++ OpenMP specifica che determinati comportamenti *definito dall'implementazione.* Un'implementazione conforme di OpenMP è necessaria definire e documentare il comportamento in questi casi. Vedere [appendice](../../parallel/openmp/e-implementation-defined-behaviors-in-openmp-c-cpp.md), pagina 97, per un elenco di comportamenti definito dall'implementazione.
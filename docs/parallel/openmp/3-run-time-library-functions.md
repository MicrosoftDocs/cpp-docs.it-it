---
title: 3. Funzioni della libreria di runtime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: b226e512-6822-4cbe-a2ca-74cc2bb7e880
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5c1a05df3b47c2bbf345bc0101f30ffb83b84967
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46401849"
---
# <a name="3-run-time-library-functions"></a>3. Funzioni della libreria run-time

Questa sezione descrive le funzioni della libreria di runtime OpenMP C e C++. L'intestazione  **\<omp.h >** dichiara due tipi, diverse funzioni che consente di controllare l'ambiente di esecuzione parallela di query e funzioni che possono essere utilizzate per sincronizzare l'accesso ai dati di blocco.

Il tipo **omp_lock_t** è in grado di rappresentare che un blocco è disponibile un tipo di oggetto o che un thread è proprietario di un blocco. Questi blocchi sono dette *blocchi semplici*.

Il tipo **omp_nest_lock_t** è un tipo di oggetto in grado di rappresentare entrambi che un blocco è disponibile, o entrambe le identità del thread che possiede il blocco e una *nidificazione conteggio* (descritti di seguito). Questi blocchi sono dette *blocchi annidabili*.

Le funzioni della libreria sono funzioni esterne con il collegamento "C".

Le descrizioni in questo capitolo sono suddivisi nei seguenti argomenti:

- Esecuzione di funzioni di ambiente (vedere [sezione 3.1](../../parallel/openmp/3-1-execution-environment-functions.md) nella pagina 35).

- Funzioni di blocco (vedere [sezione 3.2](../../parallel/openmp/3-2-lock-functions.md) nella pagina 41).
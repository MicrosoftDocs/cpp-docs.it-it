---
title: 1. Introduzione
ms.date: 11/04/2016
ms.assetid: c42e72bc-0e31-4b1c-b670-cd82673c0c5a
ms.openlocfilehash: b365ff828fd7dc2b7d9d3136a4fbfb68c43902ce
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50554713"
---
# <a name="1-introduction"></a>1. Introduzione

Questo documento specifica una raccolta di direttive del compilatore, le funzioni della libreria e le variabili di ambiente che possono essere utilizzate per specificare il parallelismo di memoria condivisa nei programmi C e C++. Le funzionalità descritte in questo documento sono note come le *OpenMP C/C++ dell'interfaccia API (Application Program)*. L'obiettivo di questa specifica è fornire un modello di programmazione parallela che consente a un programma per garantire la portabilità tra le architetture di memoria condivisa di fornitori diversi. L'API C/C++ OpenMP saranno supportato dai compilatori di diversi fornitori. Ulteriori informazioni su OpenMP, tra cui il *OpenMP Fortran Application Program Interface*, sono disponibili nel sito web seguente:

[http://www.openmp.org](http://www.openmp.org)

Le direttive, le funzioni della libreria e variabili di ambiente definite in questo documento consentirà agli utenti di creare e gestire i programmi paralleli, permettendo di portabilità. Le direttive di estendono i C e programmazione sequenziale C++ modellare con singolo programma più costrutti di dati (SPMD), costrutti di condivisione del lavoro e costrutti di sincronizzazione e forniscono il supporto per la condivisione e privatizzazione dei dati. I compilatori che supportano il OpenMP C e C++ API includerà un'opzione della riga di comando del compilatore che viene attivato e consente l'interpretazione di tutte le direttive del compilatore OpenMP.
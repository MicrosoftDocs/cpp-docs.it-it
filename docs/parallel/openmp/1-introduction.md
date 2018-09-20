---
title: 1. Introduzione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: c42e72bc-0e31-4b1c-b670-cd82673c0c5a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4ce963d312d145e26567a5902f32e45735eb1d89
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46438418"
---
# <a name="1-introduction"></a>1. Introduzione

Questo documento specifica una raccolta di direttive del compilatore, le funzioni della libreria e le variabili di ambiente che possono essere utilizzate per specificare il parallelismo di memoria condivisa nei programmi C e C++. Le funzionalità descritte in questo documento sono note come le *OpenMP C/C++ dell'interfaccia API (Application Program)*. L'obiettivo di questa specifica è fornire un modello di programmazione parallela che consente a un programma per garantire la portabilità tra le architetture di memoria condivisa di fornitori diversi. L'API C/C++ OpenMP saranno supportato dai compilatori di diversi fornitori. Ulteriori informazioni su OpenMP, tra cui il *OpenMP Fortran Application Program Interface*, sono disponibili nel sito web seguente:

[http://www.openmp.org](http://www.openmp.org)

Le direttive, le funzioni della libreria e variabili di ambiente definite in questo documento consentirà agli utenti di creare e gestire i programmi paralleli, permettendo di portabilità. Le direttive di estendono i C e programmazione sequenziale C++ modellare con singolo programma più costrutti di dati (SPMD), costrutti di condivisione del lavoro e costrutti di sincronizzazione e forniscono il supporto per la condivisione e privatizzazione dei dati. I compilatori che supportano il OpenMP C e C++ API includerà un'opzione della riga di comando del compilatore che viene attivato e consente l'interpretazione di tutte le direttive del compilatore OpenMP.
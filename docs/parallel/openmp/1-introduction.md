---
title: 1. Introduzione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: c42e72bc-0e31-4b1c-b670-cd82673c0c5a
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f850e236ebfd056da93700df06ec830e5a573284
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="1-introduction"></a>1. Introduzione
Questo documento specifica una raccolta di direttive del compilatore, le funzioni della libreria e le variabili di ambiente che possono essere usate per specificare il parallelismo di memoria condivisa in programmi C e C++. La funzionalità descritta in questo documento è note come il *OpenMP C/C++ dell'interfaccia API (Application Program)*. L'obiettivo di questa specifica è di per fornire un modello di programmazione in parallelo che consente a un programma garantire la portabilità tra le architetture di memoria condivisa da diversi fornitori. L'API di C/C++ OpenMP saranno supportato dai compilatori da numerosi fornitori. Ulteriori informazioni su OpenMP, inclusi il *OpenMP Fortran Application Program Interface*, visitare il seguente sito web:  
  
 [http://www.OpenMP.org](http://www.openmp.org)  
  
 Le direttive, le funzioni della libreria e variabili di ambiente definite in questo documento consente agli utenti di creare e gestire applicazioni parallele, permettendo portabilità. C di estendere le direttive per il modello di programmazione sequenziale C++ con singolo programma di più costrutti di dati (SPMD), costrutti di condivisione del lavoro e i costrutti di sincronizzazione e forniscono supporto per la condivisione e privatizzazione dei dati. I compilatori che supportano le API C++ OpenMP C include un'opzione della riga di comando per il compilatore che attiva e consente l'interpretazione di tutte le direttive del compilatore OpenMP.
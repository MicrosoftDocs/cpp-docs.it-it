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
ms.openlocfilehash: 766ab1b367cd3d13f26243a68caf5c207069dd4c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="1-introduction"></a>1. Introduzione
Questo documento specifica una raccolta di direttive del compilatore, le funzioni della libreria e le variabili di ambiente che possono essere usate per specificare il parallelismo di memoria condivisa in programmi C e C++. La funzionalità descritta in questo documento è note come il *OpenMP C/C++ dell'interfaccia API (Application Program)*. L'obiettivo di questa specifica è di per fornire un modello di programmazione in parallelo che consente a un programma garantire la portabilità tra le architetture di memoria condivisa da diversi fornitori. L'API di C/C++ OpenMP saranno supportato dai compilatori da numerosi fornitori. Ulteriori informazioni su OpenMP, inclusi il *OpenMP Fortran Application Program Interface*, visitare il seguente sito web:  
  
 [http://www.OpenMP.org](http://www.openmp.org)  
  
 Le direttive, le funzioni della libreria e variabili di ambiente definite in questo documento consente agli utenti di creare e gestire applicazioni parallele, permettendo portabilità. C di estendere le direttive per il modello di programmazione sequenziale C++ con singolo programma di più costrutti di dati (SPMD), costrutti di condivisione del lavoro e i costrutti di sincronizzazione e forniscono supporto per la condivisione e privatizzazione dei dati. I compilatori che supportano le API C++ OpenMP C include un'opzione della riga di comando per il compilatore che attiva e consente l'interpretazione di tutte le direttive del compilatore OpenMP.
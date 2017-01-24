---
title: "1. Introduction | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: c42e72bc-0e31-4b1c-b670-cd82673c0c5a
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 1. Introduction
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento specifica una raccolta di direttive del compilatore, funzioni di libreria e di variabili d'ambiente che possono essere utilizzate per specificare il parallelismo di condividere\-memoria nei programmi c e C\+\+.  La funzionalità descritta in questo documento è nota come collettivamente *Application program interface\) di OpenMP C\/C\+\+ \(API\)*.  L'obiettivo di questa specifica è fornire un modello per la programmazione parallela che consente un programma sia portabile tra le architetture di condividere\-memoria da fornitori diversi.  Il OpenMP C\/C\+\+ API viene supportato dai compilatori da più fornitori.  Ulteriori informazioni su OpenMP, inclusi *Application program interface FORTRAN di OpenMP*, è possibile trovare il sito Web seguente:  
  
 [http:\/\/www.openmp.org](http://www.openmp.org)  
  
 Le direttive, le funzioni della libreria e le variabili di ambiente definite in questo documento consentono agli utenti crino e gestire programmi paralleli tempo stesso la portabilità.  Le direttive estendono il modello di programmazione sequenziale C\+\+ e c\# con i costrutti di dati più di \(SPMD\) un unico programma, i costrutti di suddivisione del lavoro e i costrutti di sincronizzazione e forniscono il supporto per la condivisione e alla privatizzazione dei dati.  I compilatori che supportano il OpenMP C\# e C\+\+ API includeranno un'opzione della riga di comando al compilatore che attiva e consente l'interpretazione di tutte le direttive del compilatore di OpenMP.
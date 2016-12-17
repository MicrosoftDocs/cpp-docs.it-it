---
title: "File di inclusione per il multithreading | Microsoft Docs"
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
helpviewer_keywords: 
  - "file di inclusione, multithreading"
  - "multithreading [C++], file di inclusione"
  - "threading [C++], file di inclusione"
ms.assetid: 98d764f9-71f4-4da5-8f3a-8d2d26e96799
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# File di inclusione per il multithreading
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I file di inclusione standard dichiarano le funzioni della libreria di runtime del linguaggio C così come sono implementate all'interno delle librerie.  Se si utilizza l'opzione di [ottimizzazione completa](../../build/reference/ox-full-optimization.md) \(\/Ox\) o di [convenzione di chiamata \_fastcall](../../build/reference/gd-gr-gv-gz-calling-convention.md) \(\/Gr\), il compilatore presuppone che tutte le funzioni debbano essere chiamate utilizzando la convenzione di chiamata basata sui registri.  Le funzioni della libreria di runtime sono state compilate utilizzando la convenzione di chiamata di C e le dichiarazioni nei file di inclusione standard indicano al compilatore di generare riferimenti esterni corretti a tali funzioni.  
  
## Vedere anche  
 [Multithreading con C e Win32](../../parallel/multithreading-with-c-and-win32.md)
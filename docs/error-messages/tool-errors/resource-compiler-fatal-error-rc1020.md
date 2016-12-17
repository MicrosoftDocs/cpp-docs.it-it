---
title: "Errore irreversibile del compilatore di risorse RC1020 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RC1020"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC1020"
ms.assetid: 3e073ebf-9136-4bf8-ac6a-3c642ed64594
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile del compilatore di risorse RC1020
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

"\#endif" imprevisto.  
  
 Alla direttiva `#endif` non corrisponde una direttiva `#if`, **\#ifdef** o **\#ifndef**.  
  
 Verificare che sia presente una corrispondente `#endif` per ogni istruzione `#if`, **\#ifdef** e **\#ifndef**.
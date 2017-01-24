---
title: "Errore irreversibile del compilatore di risorse RC1022 | Microsoft Docs"
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
  - "RC1022"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC1022"
ms.assetid: 30a0f3c7-08a8-4c40-b0de-46ee5feb789d
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile del compilatore di risorse RC1022
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

previsto "\#endif"  
  
 Una direttiva `#if`, **\#ifdef** o **\#ifndef** non termina con una corrispondente direttiva `#endif`.  
  
 Assicurarsi che prima di questa istruzione sia attiva una direttiva `#if`, **\#ifdef** o **\#ifndef**.
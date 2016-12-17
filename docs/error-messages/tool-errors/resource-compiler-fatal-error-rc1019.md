---
title: "Errore irreversibile del compilatore di risorse RC1019 | Microsoft Docs"
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
  - "RC1019"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC1019"
ms.assetid: 432fff44-04a9-4e13-91c6-870df6f0b4e4
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile del compilatore di risorse RC1019
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

"\#else" imprevisto.  
  
 La direttiva `#else` non è presente all'interno di un costrutto `#if`, **\#ifdef** o **\#ifndef**.  
  
 Assicurarsi che prima di questa istruzione sia attiva una direttiva `#if`, **\#ifdef** o **\#ifndef**.
---
title: "Convenzioni di chiamata obsolete | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__fortran"
  - "__pascal"
  - "__syscall"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__fortran (parola chiave) [C++]"
  - "__pascal (parola chiave) [C++]"
  - "__syscall (parola chiave) [C++]"
  - "convenzioni di chiamata, obsolete"
  - "WINAPI"
ms.assetid: a91fc665-034a-48ce-b6bd-d27125f308a7
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Convenzioni di chiamata obsolete
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Le convenzioni di chiamata **\_\_pascal**, **\_\_fortran** e **\_\_syscall** non sono più supportate.  È possibile emulare le relative funzionalità utilizzando una delle convenzioni di chiamata supportate e le opzioni di collegamento adatte.  
  
 WINDOWS.H ora supporta la macro **WINAPI**, che effettua la conversione nella convenzione di chiamata adatta alla destinazione.  Utilizzare **WINAPI** nei casi in cui, precedentemente, si utilizzava **PASCAL** o **\_\_far \_\_pascal**.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Passaggio di argomenti e convenzioni di denominazione](../cpp/argument-passing-and-naming-conventions.md)
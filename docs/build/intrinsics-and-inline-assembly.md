---
title: "Funzioni intrinseche e assembly inline | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 8affd4bb-279d-46f3-851f-8be0a9c5ed3f
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Funzioni intrinseche e assembly inline
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Uno dei vincoli del compilatore [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] è l'assenza di supporto per l'assembler inline.  Di conseguenza, le funzioni che non possono essere scritte in C o C\+\+ dovranno essere scritte come subroutine o funzioni intrinseche supportate dal compilatore.  Alcune funzioni sono sensibili alle prestazioni, mentre altre no.  Le funzioni sensibili alle prestazioni devono essere implementate come funzioni intrinseche.  
  
 Le funzioni intrinseche supportate dal compilatore sono descritte in [Funzioni intrinseche del compilatore](../intrinsics/compiler-intrinsics.md).  
  
## Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)
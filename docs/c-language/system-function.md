---
title: "Funzione system | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "system (funzione)"
ms.assetid: 0786ccdc-20cd-4d96-b3d8-3230507c3066
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione system
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 4.10.4.5** Contenuto e modalità di esecuzione della stringa da parte della funzione **system**  
  
 La funzione **system** esegue un comando interno del sistema operativo oppure un file con estensione exe, com \(cmd in Windows NT\) o bat da un programma C anziché dalla riga di comando.  
  
 La funzione system cerca l'interprete dei comandi, in genere CMD.EXE nel sistema operativo Windows NT o COMMAND.COM in Windows.  La funzione system passa quindi la stringa di argomenti all'interprete dei comandi.  
  
 Per ulteriori informazioni, vedere [system, \_wsystem](../c-runtime-library/reference/system-wsystem.md).  
  
## Vedere anche  
 [Funzioni della libreria](../c-language/library-functions.md)
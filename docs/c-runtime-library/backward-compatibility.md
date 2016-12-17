---
title: "Compatibilit&#224; con le versioni precedenti | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.programs"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "compatibilità con le versioni precedenti"
  - "compatibilità con le versioni precedenti, librerie di runtime del linguaggio C"
  - "compatibilità, librerie di runtime del linguaggio C"
  - "CRT, compatibilità"
ms.assetid: cc3175cf-97fd-492f-b329-5791aea63090
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compatibilit&#224; con le versioni precedenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per la compatibilità tra le versioni del prodotto, la libreria OLDNAMES.LIB esegue il mapping dei nomi precedenti ai nuovi nomi.  Ad esempio, `open` è mappato in `_open`.  È necessario collegarsi in modo esplicito con OLDNAMES.LIB solo quando si esegue la compilazione con le seguenti combinazioni di opzioni della riga di comando:  
  
-   `/Zl` \(omettere il nome della libreria predefinita dal file oggetto\) e `/Ze` \(predefinito, utilizzare le estensioni Microsoft\)  
  
-   `/link` \(linker controllo\), `/NOD` \(nessuna ricerca della libreria predefinita\) e `/Ze`  
  
 Per ulteriori informazioni sulle opzioni della riga di comando del compilatore, vedere [Riferimento del compilatore](../build/reference/compiler-options.md).  
  
## Vedere anche  
 [Compatibilità](../c-runtime-library/compatibility.md)
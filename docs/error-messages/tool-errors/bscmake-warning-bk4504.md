---
title: "Avviso BK4504 di BSCMAKE | Microsoft Docs"
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
  - "BK4504"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK4504"
ms.assetid: b56ee2d4-ad44-40f4-98c0-75934ea44a6c
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso BK4504 di BSCMAKE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il file contiene troppi riferimenti; ulteriori riferimenti da questa origine verranno ignorati  
  
 Il file .cpp contiene più di 64.000 riferimenti dei simboli.  Quando BSCMAKE ha rilevato 64.000 riferimenti in un file, ignora eventuali ulteriormente riferimenti.  
  
 Per risolvere il problema, dividere il file in due o più file, ciascuno dei quali ha meno di 64.000 riferimenti dei simboli, o utilizzare la direttiva per il preprocessore `#pragma component(browser)` per limitare i simboli generati per i riferimenti particolari.  Per ulteriori informazioni, vedere [componente](../../preprocessor/component.md).
---
title: "Macro di ricorsione | Microsoft Docs"
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
helpviewer_keywords: 
  - "macro, ricorsione"
  - "NMAKE (programma), macro di ricorsione"
  - "macro di ricorsione"
ms.assetid: c53e5ae7-619e-46b1-bdc2-86d8c7798b1d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Macro di ricorsione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le macro di ricorsione consentono di richiamare NMAKE in modo ricorsivo.  Le sessioni ricorsive ereditano le macro della riga di comando e delle variabili di ambiente e le informazioni contenute in Tools.ini.  Non ereditano le regole di inferenza definite nel makefile né le specifiche **.SUFFIXES** e **.PRECIOUS**.  Per passare le macro a una sessione ricorsiva di NMAKE, impostare una variabile di ambiente con SET prima della chiamata ricorsiva, definire una macro nel comando della chiamata ricorsiva oppure definire una macro in Tools.ini.  
  
|Macro|Definizione|  
|-----------|-----------------|  
|**MAKE**|Comando utilizzato originariamente per richiamare NMAKE.<br /><br /> La macro $\(MAKE\) fornisce il percorso completo di nmake.exe.|  
|**MAKEDIR**|Directory corrente al momento della chiamata a NMAKE.|  
|**MAKEFLAGS**|Opzioni correntemente attive.  Utilizzare la macro come `/$(MAKEFLAGS)`.  Si noti che \/F non è inclusa.|  
  
## Vedere anche  
 [Macro speciali di NMAKE](../build/special-nmake-macros.md)
---
title: "Opzioni di LINK controllate dal compilatore | Microsoft Docs"
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
  - "link"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilatore cl.exe [C++], controllo del linker"
  - "compilatore cl.exe [C++], funzionalità che hanno effetto sul collegamento"
  - "LINK (strumento) [C++], opzioni controllate dal compilatore"
  - "linker [C++], controllo del compilatore CL"
  - "collegamento [C++], interessato dalle funzionalità CL"
ms.assetid: e4c03896-c99c-4599-8502-e0f4bebe69d0
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Opzioni di LINK controllate dal compilatore
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Se non si specifica l'opzione \/c, nel compilatore CL viene chiamato automaticamente LINK.  CL consente di controllare il linker attraverso opzioni e argomenti della riga di comando.  Nella tabella che segue sono riepilogate le funzionalità di CL che hanno effetto sul collegamento.  
  
|Specifica CL|Azione CL che influisce su LINK|  
|------------------|-------------------------------------|  
|Qualsiasi estensione di nome file diversa da C, CXX, CPP o DEF|Passa un nome file come input a LINK|  
|*nomefile*.def|Passa \/DEF:*nomefile*.def|  
|\/F`number`|Passa \/STACK:`number`|  
|\/Fd*nomefile*|Passa \/PDB:*nomefile*|  
|\/Fe*nomefile*|Passa \/OUT:*nomefile*|  
|\/Fm*nomefile*|Passa \/MAP:*nomefile*|  
|\/Gy|Crea funzioni di package \(COMDAT\). Attiva il collegamento a livello di funzione.|  
|\/LD|Passa \/DLL|  
|\/LDd|Passa \/DLL|  
|\/link|Passa il resto della riga di comando a LINK|  
|\/MD o \/MT|Inserisce il nome di una libreria predefinita nel file OBJ|  
|\/MDd o \/MTd|Inserisce il nome di una libreria predefinita nel file OBJ.  Definisce il simbolo **\_DEBUG**|  
|\/nologo|Passa \/NOLOGO|  
|\/Zd|Passa \/DEBUG|  
|\/Zi o \/Z7|Passa \/DEBUG|  
|\/Zl|Omette il nome di una libreria predefinita dal file OBJ|  
  
 Per ulteriori informazioni, vedere [Opzioni del compilatore](../../build/reference/compiler-options.md).  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
---
title: "Riferimenti a EDITBIN | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "editbin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dati binari, modifica"
  - "COFF (file), modifica"
  - "EDITBIN (programma)"
  - "file oggetto, modifica"
ms.assetid: efdda03b-3dfc-4d31-90e6-caf5b3977914
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Riferimenti a EDITBIN
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

EDITBIN.EXE \(Microsoft COFF Binary File Editor\) consente di modificare i file binari COFF \(Formato file oggetto comune, Common Object File Format\),  nonché i file oggetto, i file eseguibili e le DLL \(Librerie a collegamento dinamico, Dynamic Link Library\).  
  
> [!NOTE]
>  Questo strumento può essere avviato solo dal prompt dei comandi di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)],  Non è possibile avviarlo dal prompt dei comandi di sistema o da Esplora file.  
  
 EDITBIN non è utilizzabile con i file generati mediante l'opzione del compilatore [\/GL](../../build/reference/gl-whole-program-optimization.md).  Eventuali modifiche dei file binari generati mediante tale opzione dovranno essere apportate mediante ricompilazione e collegamento.  
  
-   [Riga di comando EDITBIN](../../build/reference/editbin-command-line.md)  
  
-   [Opzioni di EDITBIN](../../build/reference/editbin-options.md)  
  
## Vedere anche  
 [Strumenti per la compilazione in C\/C\+\+](../../build/reference/c-cpp-build-tools.md)
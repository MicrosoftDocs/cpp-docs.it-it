---
title: "Convenzioni di denominazione delle librerie | Microsoft Docs"
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
helpviewer_keywords: 
  - "convenzioni di codifica, nomi di librerie MFC"
  - "applicazioni console, versioni di librerie MFC"
  - "convenzioni [C++], nomi di librerie MFC"
  - "librerie [C++], statiche"
  - "MFC (librerie), convenzioni di denominazione"
  - "NAFXCW.LIB"
  - "NAFXCWD.LIB"
  - "convenzioni di denominazione [C++], librerie di codici oggetto MFC"
  - "librerie di codici oggetto"
  - "librerie di codici oggetto, convenzioni di denominazione MFC"
ms.assetid: 39fe7d93-5a14-4c6a-b16c-bf318fa01278
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Convenzioni di denominazione delle librerie
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le librerie di codice dell'oggetto per MFC utilizzano le seguenti convenzioni di denominazione.  I nomi delle librerie presentano il modello  
  
 *u*AFX`c`W`d`.LIB  
  
 dove le lettere mostrate in minuscolo corsivo sono dei segnaposti per gli identificatori i cui significati sono mostrati nella tabella seguente:  
  
### Convenzioni di denominazione delle librerie  
  
|Identificatore|Valori e significati|  
|--------------------|--------------------------|  
|*u*|ANSI \(N\) o Unicode \(U\)|  
|`c`|Tipo di programma da creare: C\=tutti|  
|`d`|Debug o Release: D\=Debug; omettere l'identificatore per le versioni di rilascio|  
  
 L'impostazione predefinita è quella di compilare un'applicazione Windows ANSI di debug per piattaforma Intel: NAFXCWD.Lib.  Tutte le librerie elencate nella seguente tabella sono incluse precompilate nella directory \\atlmfc\\lib del CD di Visual C\+\+.  
  
### Convenzioni di denominazione delle librerie a collegamento statico  
  
|Libreria|Descrizione|  
|--------------|-----------------|  
|NAFXCW.LIB|Libreria a collegamento statico MFC, versione di rilascio|  
|NAFXCWD.LIB|Libreria a collegamento statico MFC, versione di debug|  
|UAFXCW.LIB|Libreria a collegamento statico MFC con supporto Unicode, versione di rilascio|  
|UAFXCWD.LIB|Libreria a collegamento statico MFC con supporto Unicode, versione di debug|  
  
> [!NOTE]
>  Se è necessario compilare una versione della libreria, vedere il file di Readme.Txt nella directory \\atlmfc\\src\\mfc.  Questo file descrive l'utilizzo del makefile fornito con NMAKE.  
  
 Per ulteriori informazioni, vedere [Convenzioni di denominazione per le DLL MFC](../build/naming-conventions-for-mfc-dlls.md) e [Versioni Unicode delle librerie MFC](../mfc/unicode-in-mfc.md).  
  
## Vedere anche  
 [Versioni di librerie MFC](../mfc/mfc-library-versions.md)
---
title: "Informazioni sulla generazione di manifesti per programmi C/C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
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
  - "manifesti [C++]"
ms.assetid: a1f24221-5b09-4824-be48-92eae5644b53
caps.latest.revision: 12
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Informazioni sulla generazione di manifesti per programmi C/C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un [manifesto](http://msdn.microsoft.com/library/aa375365) è un documento XML che può essere un file XML esterno oppure una risorsa incorporata in un'applicazione o in un assembly.  Il manifesto di un'[applicazione isolata](http://msdn.microsoft.com/library/aa375190) viene utilizzato per gestire i nomi e le versioni di assembly side\-by\-side condivisi a cui l'applicazione deve essere associata in fase di esecuzione.  Nel manifesto di un [assembly side\-by\-side](_win32_side_by_side_assemblies) ne vengono specificate le dipendenze da nomi, versioni, risorse e altri assembly.  
  
 Sono disponibili due modi per creare un manifesto per un'applicazione isolata o per un assembly side\-by\-side.  Innanzitutto, l'autore dell'assembly può creare manualmente un file manifesto seguendo le regole e i requisiti di denominazione.  In alternativa, se un programma dipende esclusivamente da assembly [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] quali CRT, MFC, ATL o altri, il manifesto potrà essere generato automaticamente dal linker.  
  
 Le intestazioni delle librerie [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] contengono informazioni sull'assembly. Quando le librerie vengono incluse nel codice dell'applicazione, tali informazioni sull'assembly vengono utilizzate dal linker per formare un manifesto per il file binario finale.  Il linker non incorpora il file manifesto all'interno del file binario e può generare il manifesto esclusivamente come file esterno.  Un manifesto come file esterno potrebbe non funzionare in tutti gli scenari.  Ad esempio, è consigliabile che gli assembly privati dispongano di manifesti incorporati.  Nelle build da riga di comando, ad esempio quelle che utilizzano nmake per compilare il codice, un manifesto può essere incorporato mediante lo strumento Manifesto. Per ulteriori informazioni, vedere [Generazione di manifesti dalla riga di comando](../build/manifest-generation-at-the-command-line.md).  Quando si esegue la compilazione in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], un manifesto può essere incorporato impostando una proprietà per lo strumento Manifesto nella finestra di dialogo **Proprietà progetti**; vedere [Generazione di manifesti in Visual Studio](../build/manifest-generation-in-visual-studio.md).  
  
## Vedere anche  
 [Concetti di applicazioni isolate e assembly side\-by\-side](../build/concepts-of-isolated-applications-and-side-by-side-assemblies.md)   
 [Compilazione di applicazioni isolate C\/C\+\+ e di assembly side\-by\-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
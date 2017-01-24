---
title: "Confronto tra le modalit&#224; mista, pura e verificabile (C++/CLI) | Microsoft Docs"
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
  - "assembly misti [C++]"
  - "assembly misti [C++], e puri"
  - "assembly misti [C++], e protetti"
  - "assembly puri [C++]"
  - "MSIL puro [C++]"
  - "MSIL puro [C++], confronto con assembly misti e protetti"
  - "MSIL puro [C++], e misti"
  - "MSIL puro [C++], e protetti"
  - "assembly sicuri [C++]"
  - "assembly sicuri [C++], e misti"
  - "assembly sicuri [C++], e puri"
  - "assembly verificabili [C++]"
  - "assembly verificabili [C++], e misti"
  - "assembly verificabili [C++], e puri"
ms.assetid: 3f7a82ba-0e69-4927-ba0c-fbc3160e4394
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Confronto tra le modalit&#224; mista, pura e verificabile (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene effettuato un confronto tra le diverse modalità di compilazione **\/clr**.  Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md).  
  
## Confronto tra le funzionalità  
  
|Funzionalità|Misto \(\/clr\)|Pure \(\/clr:pure\)|Verificabile \(\/clr:safe\)|Informazioni correlate|  
|------------------|---------------------|-------------------------|---------------------------------|----------------------------|  
|Libreria CRT|Supportata|Supportata||[Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)|  
|MFC\/ATL|Supportata|||[Applicazioni desktop MFC](../mfc/mfc-desktop-applications.md) &#124; [Class Overview](../atl/atl-class-overview.md)|  
|Funzioni non gestite|Supportata|||[Assembly misti \(nativi e gestiti\)](../dotnet/mixed-native-and-managed-assemblies.md)|  
|Dati non gestiti|Supportata|Supportata||[Codice pure e verificabile](../dotnet/pure-and-verifiable-code-cpp-cli.md)|  
|Chiamabile da funzioni non gestite|Supportata|||[Procedura: migrare a \/clr:pure](../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md)|  
|Chiamata di funzioni non gestite|Supportata|Solo funzioni di tipo C|Solo P\/Invoke|[Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)|  
|Reflection|Solo DLL|Supportata|Supportata|[Reflection](../dotnet/reflection-cpp-cli.md)|  
  
## Vedere anche  
 [Codice pure e verificabile](../dotnet/pure-and-verifiable-code-cpp-cli.md)
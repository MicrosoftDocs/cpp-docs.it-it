---
title: "Compilazione di applicazioni isolate C/C++ | Microsoft Docs"
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
  - "applicazioni isolate [C++]"
ms.assetid: 8a2fe4fa-0489-433e-bfc6-495844d8d73a
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compilazione di applicazioni isolate C/C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'applicazione isolata dipende esclusivamente da assembly side\-by\-side ed è associata alle relative dipendenze tramite un manifesto.  Non è necessario che l'applicazione sia completamente isolata per essere eseguita correttamente in Windows. Tuttavia, rendendo l'applicazione completamente isolata, sarà possibile risparmiare tempo nel caso siano necessarie in futuro operazioni di manutenzione sull'applicazione.   Per ulteriori informazioni sui vantaggi derivanti dal rendere l'applicazione completamente isolata, vedere [Applicazioni isolate](http://msdn.microsoft.com/library/aa375190).  
  
 Quando si compila un'applicazione C\/C\+\+ nativa tramite Visual C\+\+, per impostazione predefinita il sistema del progetto di Visual Studio genera un file manifesto in cui vengono descritte le dipendenze dell'applicazione dalle librerie di Visual C\+\+.  Se tali dipendenze sono le uniche di cui l'applicazione dispone, diventerà un'applicazione isolata non appena verrà ricompilata con Visual Studio.  Se l'applicazione utilizza altre librerie in fase di esecuzione, potrebbe essere necessario ricompilare tali librerie come assembly side\-by\-side eseguendo i passaggi illustrati in [Compilazione di assembly side\-by\-side C\/C\+\+](../build/building-c-cpp-side-by-side-assemblies.md).  
  
## Vedere anche  
 [Concetti di applicazioni isolate e assembly side\-by\-side](../build/concepts-of-isolated-applications-and-side-by-side-assemblies.md)   
 [Compilazione di applicazioni isolate C\/C\+\+ e di assembly side\-by\-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
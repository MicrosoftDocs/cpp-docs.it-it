---
title: "Panoramica della libreria di Visual Studio | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Libreria di Visual Studio, panoramica"
ms.assetid: 48910975-7202-462f-a656-de67a4f8b14d
caps.latest.revision: 9
caps.handback.revision: 9
manager: "douge"
---
# Panoramica della libreria di Visual Studio
La raccolta di Visual Studio è un insieme di classi C\+\+ basate su modelli per a semplificare la creazione di package VS in C\+\+ nativo.  La raccolta di Visual Studio include il codice sorgente completo, come set di file di intestazione C\+\+.  i file di intestazione sono installati in *percorso di installazione di Visual Studio SDK*\\VisualStudioIntegration \\Common\\Source\\CPP\\VSL\\Include \\.  
  
> [!NOTE]
>  La raccolta di Visual Studio si basa su Active \(ATL\) Template Library per il supporto degli oggetti COM.  Per ulteriori informazioni, vedere [Introduzione a ATL](../atl/introduction-to-atl.md).  
  
 Supporto di librerie di Visual Studio di unit test, sia per il codice che per il codice.  alcuni unit test sono inclusi, come segue:  
  
-   Gli unit test di Visual Studio vengono installati in *percorso di installazione di Visual Studio SDK*\\VisualStudioIntegration\\Common\\Source\\CPP\\VSL\\UnitTest \\.  
  
-   Le classi base degli unit test per il codice sono in *percorso di installazione di Visual Studio SDK*\\VisualStudioIntegration\\Common\\Source\\CPP\\VSL\\Include\\VSLUnitTest h.  
  
 Mock implementations of commonly\-used COM and Visual Studio interfaces are in the header files, VSLMockSystemInterfaces.h and VSLMockVisualStudioInterfaces.h, which are installed in *Visual Studio SDK installation path*\\VisualStudioIntegration\\Common\\Source\\CPP\\VSL\\Include\\.  
  
## Vedere anche  
 [Sviluppo di VSPackages con la libreria di Visual Studio](../misc/developing-vspackages-by-using-the-visual-studio-library.md)
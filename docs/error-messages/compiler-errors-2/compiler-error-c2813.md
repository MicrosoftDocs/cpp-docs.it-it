---
title: "Errore del compilatore C2813 | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2813"
ms.assetid: 6cf2135f-7b82-42d1-909a-5e864308a09c
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2813
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\#import non supportato con \/MP  
  
 L'errore C2813 viene generato se in un comando del compilatore vengono specificati l'opzione **\/MP** e due o più file da compilare e uno o più file contengono la direttiva per il preprocessore [\#import](../../preprocessor/hash-import-directive-cpp.md). La direttiva [\#import](../../preprocessor/hash-import-directive-cpp.md) genera classi C\+\+ dai tipi contenuti nella libreria dei tipi specificata e quindi scrive tali classi in due file di intestazione. La direttiva [\#import](../../preprocessor/hash-import-directive-cpp.md) non è supportata nel caso in cui più unità di compilazione importano la stessa libreria dei tipi, dal momento che, quando provano a scrivere contemporaneamente gli stessi file di intestazione, viene generato un conflitto.  
  
 Questo errore del compilatore e l'opzione del compilatore **\/MP** sono nuove in [!INCLUDE[vs_orcas_long](../../atl/reference/includes/vs_orcas_long_md.md)].  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2813. La riga di comando nel commento "compile with:" indica al compilatore di usare le opzioni **\/MP** e **\/c** per compilare diversi file. Almeno uno dei file contiene la direttiva [\#import](../../preprocessor/hash-import-directive-cpp.md). A scopo di verifica, nell'esempio viene usato due volte lo stesso file.  
  
```  
// C2813.cpp // compile with: /MP /c C2813.cpp C2813.cpp #import "C:\windows\system32\stdole2.tlb"   // C2813 int main() { }  
```
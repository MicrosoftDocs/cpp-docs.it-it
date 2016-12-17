---
title: "Evitare eccezioni all&#39;arresto di CLR quando si utilizzano oggetti COM compilati con /clr | Microsoft Docs"
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
  - "/clr (opzione del compilatore) [C++], eccezioni di chiusura CLR"
  - "/clr (opzione del compilatore) [C++], oggetti COM"
  - "CLR (eccezioni di chiusura) [C++]"
  - "interoperabilità [C++], eccezioni di chiusura CLR"
  - "interoperabilità [C++], eccezioni di chiusura CLR"
  - "assembly misti [C++], eccezioni di chiusura CLR"
ms.assetid: 41249d83-4b51-4e46-866f-27f475f2498c
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Evitare eccezioni all&#39;arresto di CLR quando si utilizzano oggetti COM compilati con /clr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando viene attivata la modalità arresto di CLR \(Common Language Runtime\), le funzioni native dispongono di accesso limitato ai servizi CLR.  Quando si tenta di chiamare Release su un oggetto COM compilato con **\/clr**, CLR esegue la transizione al codice nativo e quindi nuovamente al codice gestito per gestire la chiamata di IUnknown::Release, definita in codice gestito.  La modalità arresto di CLR impedisce la richiamata nel codice gestito.  
  
 Per risolvere il problema, assicurarsi che i distruttori chiamati dai metodi Release contengano soltanto codice nativo.  
  
## Vedere anche  
 [Assembly misti \(nativi e gestiti\)](../dotnet/mixed-native-and-managed-assemblies.md)
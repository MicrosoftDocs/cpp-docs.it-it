---
title: "Sequenze di caratteri | Microsoft Docs"
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
  - "C"
ms.assetid: 1e6961a9-150e-4c13-b427-9af4b6a1fb7a
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Sequenze di caratteri
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 3.8.2** Mapping delle sequenze di caratteri dei file di origine  
  
 Le istruzioni del preprocessore utilizzano lo stesso set di caratteri delle istruzioni del file di origine, con l'eccezione che le sequenze di escape non sono supportate.  
  
 Di conseguenza, per specificare un percorso di un file di inclusione, utilizzare solo una barra rovesciata:  
  
```  
#include "path1\path2\myfile"  
```  
  
 Nel codice sorgente sono necessarie due barre rovesciate:  
  
```  
fil = fopen( "path1\\path2\\myfile", "rt" );  
```  
  
## Vedere anche  
 [Direttive di pre\-elaborazione](../c-language/preprocessing-directives.md)
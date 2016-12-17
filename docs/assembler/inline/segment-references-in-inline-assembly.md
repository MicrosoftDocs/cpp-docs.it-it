---
title: "Riferimenti ai segmenti nell&#39;assembly inline | Microsoft Docs"
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
  - "assembly inline, registri"
  - "assembly inline, riferimenti ai segmenti"
  - "riferimenti, assembly inline"
  - "registri"
  - "registri, assembly inline"
  - "riferimenti ai segmenti nell'assembly inline"
ms.assetid: c63e6bb4-49d9-4fa1-bb22-eea21b5cbc0f
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Riferimenti ai segmenti nell&#39;assembly inline
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 È necessario fare riferimento ai segmenti in base al registro anziché al nome \(ad esempio, il nome segmento `_TEXT` non è valido\).  Gli override del segmento devono utilizzare il registro in modo esplicito, come in ES:\[BX\].  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Utilizzo di linguaggio assembly in blocchi \_\_asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)
---
title: "Inclusione di nomi di file tra virgolette | Microsoft Docs"
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
ms.assetid: 789a047e-ea38-4c99-b71d-a2ad9c81daee
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Inclusione di nomi di file tra virgolette
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 3.8.2** Supporto di nomi tra virgolette per i file di origine inclusi  
  
 Se si specifica un percorso completo e non ambiguo per il file di inclusione tra due set di virgolette doppie \(" "\), il preprocessore esegue la ricerca solo in tale specifica del percorso e ignora le directory standard.  
  
 Per i file di inclusione specificati come [\#include](../preprocessor/hash-include-directive-c-cpp.md) "path\-spec", la ricerca della directory inizia con le directory del file padre e quindi procede nelle directory dei file padre del padre.  Pertanto, la ricerca inizia in base alla directory che contiene il file di origine attualmente in fase di elaborazione.  Se non è presente un file padre del padre e il file non è stato trovato, la ricerca prosegue come se il nome file fosse stato racchiuso tra parentesi angolari.  
  
## Vedere anche  
 [Direttive di pre\-elaborazione](../c-language/preprocessing-directives.md)
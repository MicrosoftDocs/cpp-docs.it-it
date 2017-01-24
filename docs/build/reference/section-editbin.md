---
title: "/SECTION (EDITBIN) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/section"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/SECTION EDITBIN (opzione)"
  - "allineamento di caratteri nelle sezioni"
  - "SECTION (opzione editbin)"
  - "-SECTION (opzione editbin)"
ms.assetid: 4680ab4e-c984-4251-8241-93440cad7615
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /SECTION (EDITBIN)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/SECTION:name[=newname][,attributes][alignment]  
```  
  
## Note  
 Questa opzione consente di modificare gli attributi di una sezione, ignorando quelli impostati al momento della compilazione e del collegamento del file oggetto della sezione.  
  
 Dopo i due punti \(**:**\) specificare il nome della sezione.  Per modificare tale nome, dopo *name* inserire un segno di uguale \(\=\) e il nuovo nome \(*newname*\) da assegnare alla sezione.  
  
 Per impostare o modificare gli attributi della sezione \(`attributes`\), specificare una virgola \(**,**\) seguita da uno o più caratteri di attributo.  Per negare un attributo, anteporre un punto esclamativo \(\!\) al corrispondente carattere.  I caratteri che seguono consentono di specificare attributi di memoria:  
  
|Attribute|Impostazione|  
|---------------|------------------|  
|c|codice|  
|d|scaricabile|  
|e|executable|  
|i|dati inizializzati|  
|k|memoria virtuale nella cache|  
|m|rimozione del collegamento|  
|o|informazioni sul collegamento|  
|p|memoria virtuale di paging|  
|r|read|  
|s|condiviso|  
|u|dati non inizializzati|  
|w|write|  
  
 Per controllare l'allineamento \(*alignment*\), specificare il carattere **A** seguito da uno dei caratteri seguenti in modo da impostare la dimensione dell'allineamento in byte, come indicato di seguito:  
  
|Carattere|Dimensione di allineamento in byte|  
|---------------|----------------------------------------|  
|1|1|  
|2|2|  
|4|4|  
|8|8|  
|p|16|  
|t|32|  
|s|64|  
|x|nessun allineamento|  
  
 Specificare i caratteri per `attributes` e *alignment* sotto forma di stringa senza spazi.  Per tali caratteri non viene rilevata la distinzione tra maiuscole e minuscole.  
  
## Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)
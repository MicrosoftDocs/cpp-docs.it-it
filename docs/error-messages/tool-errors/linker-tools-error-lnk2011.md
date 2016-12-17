---
title: "Errore degli strumenti del linker LNK2011 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2011"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2011"
ms.assetid: 04991ef5-49d5-46c7-8eee-a9d1d3fc541e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK2011
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

oggetto precompilato non collegato; l'immagine potrebbe non essere eseguita  
  
 Se si utilizzano intestazioni precompilate, LINK richiede che tutti i file oggetto creati con le intestazioni precompilate siano collegati.  Se si dispone di un file di origine utilizzato per generare un'intestazione precompilata da utilizzare con altri file di origine, è necessario includere il file oggetto creato insieme all'intestazione precompilata.  
  
 Ad esempio, se si compila un file denominato STUB.cpp per creare un'intestazione precompilata da utilizzare con altri file di origine, è necessario collegare STUB.obj per evitare questo errore.  Nelle seguenti righe di comandi, la prima riga è utilizzata per creare un'intestazione precompilata, COMMON.pch, utilizzata con PROG1.cpp e PROG2.cpp nella seconda e nella terza riga.  Il file STUB.cpp contiene solo righe `#include`, uguali a quelle dei file PROG1.cpp e PROG2.cpp, e viene utilizzato esclusivamente per generare le intestazioni precompilate.  Nell'ultima riga è necessario collegare STUB.obj per evitare l'errore LNK2011.  
  
```  
cl /c /Yccommon.h stub.cpp  
cl /c /Yucommon.h prog1.cpp  
cl /c /Yucommon.h prog2.cpp  
link /out:prog.exe stub.obj prog1.obj prog2.obj  
```
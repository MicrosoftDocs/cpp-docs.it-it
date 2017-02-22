---
title: "Avviso del compilatore C4335 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4335"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4335"
ms.assetid: e66467ad-a10b-4438-8c7c-e8e8d11d39bb
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Avviso del compilatore C4335
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rilevato formato di file Mac: convertire il file di origine in formato DOS o UNIX  
  
 Il carattere di terminazione della prima riga di un file di origine è in formato Macintosh \(‘\\r’\) anziché in formato UNIX \(‘\\n’\) o DOS \(‘\\r\\n’\).  
  
 Questo avviso viene sempre generato come errore.  Per informazioni sulla disabilitazione dell'avviso, vedere il pragma [warning](../../preprocessor/warning.md).  Questo avviso viene visualizzato una sola volta per modulo.  Pertanto, se ci sono più direttive `#include` che specificano file in formato di Macintosh, l'avviso C4335 sarà pubblicato solo una volta.  
  
 Uno dei modi per generare file in formato Macintosh consiste nell'utilizzare la finestra di dialogo **Opzioni di salvataggio avanzate**, disponibile nel menu **File** di Visual Studio.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4335:  
  
```  
// C4335 expected  
#include "c4335.h"   // assume both include files are in Macintosh format  
#include "c4335_2.h"  
```
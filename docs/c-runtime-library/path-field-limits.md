---
title: "Limiti dei campi percorso | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_MAX_EXT"
  - "_MAX_DIR"
  - "_MAX_PATH"
  - "_MAX_FNAME"
  - "_MAX_DRIVE"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_MAX_DIR (costante)"
  - "_MAX_DRIVE (costante)"
  - "_MAX_EXT (costante)"
  - "_MAX_FNAME (costante)"
  - "_MAX_PATH (costante)"
  - "MAX_DIR (costante)"
  - "MAX_DRIVE (costante)"
  - "MAX_EXT (costante)"
  - "MAX_FNAME (costante)"
  - "costanti nei campi dei percorsi"
  - "percorsi, limite massimo"
ms.assetid: 2b5d0e43-1347-45b4-8397-24a8a45c444e
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Limiti dei campi percorso
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
#include <stdlib.h>  
```  
  
## Note  
 Queste costanti definiscono la lunghezza massima del percorso e dei singoli campi nel percorso.  
  
|Costante|Significato|  
|--------------|-----------------|  
|`_MAX_DIR`|Lunghezza massima del componente della directory.|  
|`_MAX_DRIVE`|Lunghezza massima del componente di unità|  
|`_MAX_EXT`|Lunghezza massima del componente di estensione|  
|`_MAX_FNAME`|Lunghezza massima del componente nome del file|  
|`_MAX_PATH`|Lunghezza massima del percorso completo|  
  
> [!NOTE]
>  Il runtime C supporta una lunghezza dei percorsi fino a 32768 caratteri di lunghezza, ma spetta al sistema operativo, in particolare al file system, supportare questi percorsi più lunghi.  La somma dei campi non deve superare `_MAX_PATH` per garantire una retrocompatibilità completa con i file system FAT32.  I file system NTFS di [!INCLUDE[win2kfamily](../c-runtime-library/includes/win2kfamily_md.md)], [!INCLUDE[WinXpFamily](../c-runtime-library/includes/winxpfamily_md.md)], [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)] e Windows Vista, supportano percorsi fino a 32768 caratteri di lunghezza, ma solo quando si utilizzano le API Unicode.  Quando si utilizzano nomi lunghi per i percorsi, aggiungere al percorso il prefisso \\\\?\\ e utilizzare le versioni Unicode delle funzioni di runtime C.  
  
## Vedere anche  
 [Costanti globali](../c-runtime-library/global-constants.md)
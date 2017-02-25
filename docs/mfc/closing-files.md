---
title: "Chiusura dei file | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file [C++], chiusura"
  - "MFC [C++], operazioni sui file"
ms.assetid: 8415a3a8-3c75-45b0-ac2a-d5385f49bdb3
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Chiusura dei file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come di consueto le operazioni dei\/O, una volta completata un file, è necessario chiuderlo.  
  
#### Per chiudere un file  
  
1.  Utilizzare la funzione membro di **Chiudi**.  Questa funzione chiude il file del file system e i buffer di vampate se necessario.  
  
 Se allocaste l'oggetto di [File C](../mfc/reference/cfile-class.md) sul frame \(come nell'esempio illustrato in [Aprire i file](../mfc/opening-files.md)\), l'oggetto automaticamente verrà chiuso e quindi viene distrutto quando esce dall'ambito.  Si noti che elimina l'oggetto di `CFile` non elimina il file fisico del file system.  
  
## Vedere anche  
 [File](../mfc/files-in-mfc.md)
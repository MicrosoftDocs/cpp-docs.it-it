---
title: "Aggiornamento di una colonna quando un&#39;altra tabella contiene un riferimento alla riga | Microsoft Docs"
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
  - "rowset, aggiornamento colonne"
ms.assetid: abb5db69-055d-431f-b12d-ad2940a661ba
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Aggiornamento di una colonna quando un&#39;altra tabella contiene un riferimento alla riga
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Solo alcuni provider sono in grado di individuare quali colonne di una riga cambiano.  Di conseguenza, se si aggiorna una colonna, è possibile che si verifichi un errore quando esiste un riferimento alla riga che si sta tentando di aggiornare.  Per risolvere questo problema, creare una funzione di accesso distinta contenente solo le colonne che si desidera modificare.  Passare il numero di tale funzione di accesso a `SetData`.  
  
## Vedere anche  
 [Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)
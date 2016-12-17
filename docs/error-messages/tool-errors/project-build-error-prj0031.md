---
title: "Errore di compilazione progetto PRJ0031 | Microsoft Docs"
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
  - "PRJ0031"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0031"
ms.assetid: b42435c6-e570-4f8e-9ad5-12a7ea69ccb2
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore di compilazione progetto PRJ0031
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La proprietà "Outputs" per l'istruzione di compilazione personalizzata del file "file" contiene "macro" che restituisce "espansione\_macro".  
  
 L'output di un'istruzione di compilazione personalizzata di un file non è valido probabilmente a causa di un problema di valutazione della macro.  Questo errore potrebbe anche indicare che il percorso non è corretto e che in esso sono presenti caratteri o combinazioni di caratteri non consentiti in un percorso di file.  
  
 Per risolvere questo errore, correggere la macro oppure la specifica del percorso.  Il percorso valutato rappresenta un percorso assoluto dalla directory del progetto.
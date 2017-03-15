---
title: "Errore di compilazione progetto PRJ0032 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0032"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0032"
ms.assetid: bc6acbea-4041-4237-8b5a-f0434705d89f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore di compilazione progetto PRJ0032
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La proprietà "Outputs" per l'istruzione di compilazione personalizzata a livello di progetto contiene "macro" che restituisce "espansione\_macro".  
  
 L'output di un'istruzione di compilazione personalizzata di un progetto non è valido probabilmente a causa di un problema di valutazione della macro.  Questo errore potrebbe anche indicare che il percorso non è corretto e che in esso sono presenti caratteri o combinazioni di caratteri non consentiti in un percorso di file.  
  
 Per risolvere questo errore, correggere la macro oppure la specifica del percorso.  Il percorso valutato rappresenta un percorso assoluto dalla directory del progetto.
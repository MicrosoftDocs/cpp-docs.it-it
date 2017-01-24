---
title: "Identificatore di classi di archiviazione register | Microsoft Docs"
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
helpviewer_keywords: 
  - "classe di archiviazione registro"
  - "variabili registro"
ms.assetid: 7577bf48-88ec-4191-873c-ef4217a4034e
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Identificatore di classi di archiviazione register
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Il compilatore Microsoft C\/C\+\+ non soddisfa le richieste degli utenti relative alle variabili di registro.  Tuttavia, per motivi di portabilità qualsiasi altra semantica associata alla parola chiave **registro** viene rispettata dal compilatore.  Non è ad esempio possibile applicare l'operatore unario address\-of \(**&**\) a un oggetto del registro né utilizzare la parola chiave **register** nelle matrici.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Identificatori di classi di archiviazione per dichiarazioni di livello interno](../c-language/storage-class-specifiers-for-internal-level-declarations.md)
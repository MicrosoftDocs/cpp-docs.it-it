---
title: "Elenchi di inizializzatori | Microsoft Docs"
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
  - "elenchi di inizializzatori"
ms.assetid: b3e53442-9809-4105-9226-ae845bd20cae
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Elenchi di inizializzatori
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli elenchi di inizializzatori nei costruttori vengono ora chiamati prima del costruttore della classe base.  
  
## Osservazioni  
 Prima di Visual C\+\+ 2005, il costruttore della classe di base veniva chiamato prima dell'elenco di inizializzatori durante la compilazione con le estensioni gestite di C\+\+.  Ora, durante la compilazione con **\/clr**, l'elenco di inizializzatori viene chiamato per primo.  
  
## Vedere anche  
 [Modifica generale del linguaggio](../dotnet/general-language-changes-cpp-cli.md)
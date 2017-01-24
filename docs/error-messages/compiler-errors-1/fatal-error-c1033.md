---
title: "Errore irreversibile C1033 | Microsoft Docs"
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
  - "C1033"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1033"
ms.assetid: 09976c03-8450-4cf7-8b43-1b91c2c2b9f9
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1033
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile aprire database di programma 'pdb'  
  
 Questo errore può essere causato da un errore del disco.  
  
 In Visual C\+\+ .NET 2002 è necessario che le impostazioni locali dell'utente siano selezionate correttamente quando il nome o il percorso di directory del file contiene caratteri MBCS.  La selezione delle impostazioni locali del sistema non è sufficiente, in quanto è necessario che tali impostazioni supportino l'elaborazione dei caratteri MBCS.  
  
 Per ulteriori informazioni, vedere [http:\/\/support.microsoft.com\/default.aspx?scid\=kb;it\-it;246007](http://support.microsoft.com/default.aspx?scid=kb;en-us;246007).
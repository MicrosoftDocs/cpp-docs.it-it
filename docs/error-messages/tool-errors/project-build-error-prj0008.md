---
title: "Errore di compilazione progetto PRJ0008 | Microsoft Docs"
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
  - "PRJ0008"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0008"
ms.assetid: 6bf7f17a-d2a8-4826-99c7-d600d846952f
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore di compilazione progetto PRJ0008
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile eliminare il file "file".  
  
 **Accertarsi che il file non sia aperto da un altro processo e che non sia protetto da scrittura.**  
  
 Durante un'operazione di ricompilazione o pulizia, vengono eliminati tutti i file intermedi e di output utilizzati per la compilazione, nonché i file che soddisfano le specifiche sui caratteri jolly elencati in **Estensioni da eliminare durante la pulizia** nella [pagina delle proprietà Impostazioni di configurazione\/Generale](../../ide/general-property-page-project.md).  
  
 Questo errore viene visualizzato quando non è possibile eliminare un file in Visual C\+\+.  Per risolvere il problema, rendere il file e la relativa directory accessibili in scrittura per l'utente che effettua la compilazione.
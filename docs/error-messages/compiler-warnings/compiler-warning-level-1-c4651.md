---
title: "Avviso del compilatore (livello 1) C4651 | Microsoft Docs"
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
  - "C4651"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4651"
ms.assetid: f1ea82aa-4dc1-4972-b55a-57fdb962f0dd
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4651
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'definizione' specificato per l'intestazione precompilata ma non per la compilazione corrente  
  
 La definizione è stata specificata quando è stata generata l'intestazione precompilata, ma non in questa compilazione.  
  
 La definizione sarà valida all'interno dell'intestazione precompilata, ma non nel resto del codice.  
  
 Questo avviso viene visualizzato se l'intestazione precompilata è stata generata mediante \/DSYMBOL, ma la compilazione \/Yu non dispone di \/DSYMBOL.  Per correggere l'errore, aggiungere \/DSYMBOL alla riga di comando di \/Yu.
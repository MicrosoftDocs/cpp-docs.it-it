---
title: "Avviso degli strumenti del linker LNK4096 | Microsoft Docs"
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
  - "LNK4096"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4096"
ms.assetid: ef6fba38-59a1-4d86-bcac-cadf44d87a36
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4096
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il valore di \/BASE 'numero' non è valido per Windows 95 e Windows 98; l'immagine potrebbe non essere eseguita  
  
 L'indirizzo di base specificato non è valido.  I file eseguibili di Windows 95 e Windows 98 devono avere un indirizzo di base superiore a 0x400000.  Per ulteriori informazioni sugli indirizzi di base, vedere l'opzione del linker [\/BASE](../../build/reference/base-base-address.md).
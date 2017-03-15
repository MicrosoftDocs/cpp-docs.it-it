---
title: "Avviso degli strumenti del linker LNK4086 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4086"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4086"
ms.assetid: ea1eecbb-ba2c-41bb-9a4f-fa0808a4b92d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso degli strumenti del linker LNK4086
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il punto di ingresso 'funzione' non è \_\_stdcall con 12 byte di argomenti; l'immagine potrebbe non essere eseguita  
  
 Il punto di ingresso per una DLL deve essere `__stdcall`.  Ricompilare la funzione con l'opzione [\/Gz](../../build/reference/gd-gr-gv-gz-calling-convention.md) oppure specificare `__stdcall` o WINAPI nella definizione della funzione.
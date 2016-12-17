---
title: "Ordine delle opzioni CL | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "cl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilatore cl.exe, impostazione delle opzioni"
ms.assetid: 300908ce-ae00-4b45-964b-e4e69ff6777b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Ordine delle opzioni CL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le opzioni possono apparire in qualsiasi punto nella riga di comando CL, ad eccezione dell'opzione \/link che deve essere specificata per ultima.  Il compilatore analizza le opzioni specificate nella [variabile di ambiente CL](../../build/reference/cl-environment-variables.md), quindi legge la riga di comando da sinistra a destra, elaborando i file di comando nell'ordine in cui vengono rilevati.  Ogni opzione si applica a tutti i file indicati nella riga di comando.  Qualora venga rilevato un conflitto di opzioni, CL utilizzerà quella all'estrema destra.  
  
## Vedere anche  
 [Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md)
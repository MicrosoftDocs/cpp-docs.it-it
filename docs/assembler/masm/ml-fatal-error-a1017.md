---
title: "ML Fatal Error A1017 | Microsoft Docs"
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
  - "A1017"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A1017"
ms.assetid: bef0b312-5431-4e5a-b637-c19919acf01b
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Fatal Error A1017
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**nome file di origine mancante**  
  
 Il ML impossibile trovare un file per assemblare o passare al linker.  
  
 Questo errore viene generato quando si specificano le opzioni della riga di comando di ML senza specificare un nome file all'atto su.  Per assemblare i file con estensione ASM, utilizzare **\/Ta** opzione della riga di comando.  
  
 Questo errore può anche venire generato mediante l'utilizzo di ML senza parametri se la variabile di ambiente ML contiene le opzioni della riga di comando.  
  
## Vedere anche  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)
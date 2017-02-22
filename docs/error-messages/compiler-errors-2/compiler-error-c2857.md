---
title: "Errore del compilatore C2857 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2857"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2857"
ms.assetid: b57302bd-58ec-45ae-992a-1e282d5eeccc
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2857
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

istruzione '\#include' specificata con l'opzione della riga di comando \/Yc'nomefile' non trovata nel file di origine  
  
 L'opzione [\/Yc](../../build/reference/yc-create-precompiled-header-file.md) specifica il nome di un file di inclusione non presente nel file di origine in fase di compilazione.  
  
 Questo errore può essere causato da un'istruzione `#include` in un blocco di compilazioni condizionali non compilato.
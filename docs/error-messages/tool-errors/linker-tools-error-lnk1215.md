---
title: "Errore degli strumenti del linker LNK1215 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1215"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1215"
ms.assetid: 0774d8e6-f0c1-4efb-8723-7e1be6863d81
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore degli strumenti del linker LNK1215
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

operazione sui metadati non riuscita \(HRESULT\): errore  
  
 Il linker ha ricevuto un errore dai servizi di runtime .NET durante il tentativo di aggiornare i metadati tramite tali servizi.  
  
 `HRESULT` corrisponde a HRESULT del metodo di runtime di .NET.  Il parametro `error` corrisponde al testo fornito da .NET.  
  
 È probabile che un linker e i servizi di runtime .NET non siano corrispondenti. Reinstallare Visual C\+\+.
---
title: "Errore R6030 del linguaggio C in fase di esecuzione  | Microsoft Docs"
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
  - "R6030"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6030"
ms.assetid: 0238a6c3-a033-4046-8adc-f8f99d961153
caps.latest.revision: 9
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore R6030 del linguaggio C in fase di esecuzione 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

CRT non inizializzata  
  
 Questo errore si verifica quando si utilizza la CRT senza che sia stato eseguito il relativo codice di avvio.  È possibile che venga visualizzato questo errore se si utilizza l'opzione [\/ENTRY](../../build/reference/entry-entry-point-symbol.md) del linker per eseguire l'override dell'indirizzo di avvio predefinito, in genere **mainCRTStartup**, **wmainCRTStartup** per un eseguibile da console, **WinMainCRTStartup** o **wWinMainCRTStartup** per un eseguibile Windows oppure **\_DllMainCRTStartup** per una DLL.  Il runtime C non verrà inizializzato a meno che all'avvio non venga chiamata una delle funzioni sopra riportate.
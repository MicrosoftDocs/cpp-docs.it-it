---
title: "Avviso del compilatore (livello 1) C4124 | Microsoft Docs"
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
  - "C4124"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4124"
ms.assetid: c08c3a65-9584-47a1-a147-44f00c4b230e
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4124
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\_\_fastcall è inefficiente con il controllo dello stack  
  
 La parola chiave `__fastcall` è stata utilizzata con il controllo dello stack attivato.  
  
 La convenzione `__fastcall` genera codice più veloce, ma il controllo dello stack rende il codice più lento.  Quando si utilizza `__fastcall`, disattivare il controllo dello stack con il pragma **check\_stack** o \/Gs.  
  
 Questo avviso viene generato solo per la prima funzione dichiarata in queste condizioni.
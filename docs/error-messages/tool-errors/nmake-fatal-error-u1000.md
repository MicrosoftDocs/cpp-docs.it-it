---
title: "Errore irreversibile U1000 di NMAKE  | Microsoft Docs"
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
  - "U1000"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1000"
ms.assetid: 49b9bd9e-f1bc-4b55-a171-c748e40b195e
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile U1000 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore di sintassi: manca il segno "\)" nella chiamata della macro  
  
 In una chiamata di macro è presente una parentesi aperta, **\(** priva della corrispondete chiusa **\)**.  La forma corretta è **$\(***nome***\)**; la forma `$`*n* è consentita per i nomi di un solo carattere.
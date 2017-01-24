---
title: "Errore irreversibile CVT1100 di CVTRES | Microsoft Docs"
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
  - "CVT1100"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CVT1100"
ms.assetid: 886e88dd-5818-4b5f-84f2-d2a3d75f0aaf
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile CVT1100 di CVTRES
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Risorsa duplicata \- tipo:tipo, nome:nome, linguaggio:linguaggio, flag:flag, dimensione:dimensione.  
  
 La risorsa è stata specificata più volte.  
  
 L'errore può verificarsi durante la creazione di una libreria dei tipi da parte del linker se non è stata specificata l'opzione [\/TLBID](../../build/reference/tlbid-specify-resource-id-for-typelib.md) e una risorsa del progetto utilizza già 1.  In questo caso, specificare l'opzione \/TLBID e un altro numero fino a 65535.
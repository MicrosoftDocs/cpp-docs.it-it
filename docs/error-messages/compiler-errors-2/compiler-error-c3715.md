---
title: "Errore del compilatore C3715 | Microsoft Docs"
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
  - "C3715"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3715"
ms.assetid: ee5dce88-ddc4-4bdb-9464-47467ce1674f
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3715
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'puntatore': deve essere un puntatore a 'classe'  
  
 È stato specificato un puntatore in [\_\_hook](../../cpp/hook.md) o [\_\_unhook](../../cpp/unhook.md) che non punta a una classe valida.  Per correggere questo errore, verificare che le chiamate a `__hook` e `__unhook` specifichino puntatori a classi valide.
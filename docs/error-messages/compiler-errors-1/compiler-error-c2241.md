---
title: "Errore del compilatore C2241 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2241"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2241"
ms.assetid: 2f4e2c2c-b95c-4afe-bbe0-4214cd39d140
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2241
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': restrizioni sull'accesso ai membri  
  
 Il codice tenta di accedere a un membro privato o protetto.  
  
### Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Cambiare il livello di accesso del membro.  
  
2.  Dichiarare il membro come `friend` della funzione di accesso.
---
title: "Errore del compilatore C3888 | Microsoft Docs"
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
  - "C3888"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3888"
ms.assetid: 40820812-79c5-4dcd-a19d-b4164d25fc8a
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3888
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'name': l'espressione const associata a questo membro dati literal non è supportata da C\+\+\/CLI  
  
 Il membro dati *nome* dichiarato con la parola chiave [literal](../../windows/literal-cpp-component-extensions.md) viene inizializzato con un valore non supportato dal compilatore. Il compilatore supporta solo tipi integrali, enum o string costanti. È probabile che l'errore **C3888** sia causato dall'inizializzazione del membro dati con una matrice di byte.  
  
### Per correggere l'errore  
  
1.  Verificare che il membro dati literal dichiarato sia di un tipo supportato.  
  
## Vedere anche  
 [literal](../../windows/literal-cpp-component-extensions.md)
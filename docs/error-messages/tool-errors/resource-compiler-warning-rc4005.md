---
title: "Avviso del compilatore di risorse RC4005 | Microsoft Docs"
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
  - "RC4005"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC4005"
ms.assetid: 71f03b4a-c9a9-415d-920f-bf2e58507f93
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore di risorse RC4005
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': ridefinizione macro  
  
 L'identificatore è stato definito due volte.  Il compilatore ha utilizzato la seconda definizione di macro.  
  
 L'avviso può essere generato dalla definizione di una macro nella riga di comando e nel codice con una direttiva `#define`.  Può inoltre essere causato dall'importazione di macro da file di inclusione.  
  
 Per non visualizzare l'avviso, eliminare una delle definizioni o utilizzare una direttiva `#undef` prima della seconda definizione.
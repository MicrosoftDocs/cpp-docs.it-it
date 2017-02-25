---
title: "Errore del compilatore C2834 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2834"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2834"
ms.assetid: 28f9f6eb-ab2a-4e64-aaaa-9d14f955de41
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2834
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator operatore' deve essere qualificato a livello globale  
  
 Gli operatori `new` e `delete` sono associati alla classe in cui si trovano.  Non è possibile utilizzare la risoluzione dell'ambito per selezionare una versione di `new` o `delete` da una classe diversa.  Per implementare più forme dell'operatore `new` o `delete`, creare una versione dell'operatore con parametri formali aggiuntivi.
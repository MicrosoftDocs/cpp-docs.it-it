---
title: "Errore irreversibile C1047 | Microsoft Docs"
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
  - "C1047"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1047"
ms.assetid: e1bbbc6b-a5bc-4c23-8203-488120a0ec78
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1047
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'oggetto o il file di libreria 'file' è stato creato con un compilatore precedente rispetto a quello utilizzato per altri oggetti. Ricompilare i vecchi oggetti e librerie  
  
 L'errore C1047 si verifica quando si collegano tra loro librerie o file oggetto compilati con **\/LTCG**, ma mediante versioni diverse del set di strumenti di Visual C\+\+.  
  
 Ciò può verificarsi quando si inizia a usare una nuova versione del compilatore senza eseguire una ricompilazione pulita dei file oggetto o delle librerie esistenti.  
  
 Per correggere l'errore C1047, ricompilare tutti i file oggetto o le librerie.
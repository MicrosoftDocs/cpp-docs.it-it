---
title: "Utilizzo di librerie di importazione e file di esportazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file di esportazione"
  - "librerie di importazione"
  - "librerie di importazione, creazione"
  - "LIB [C++], /DEF (opzione)"
  - "LIB [C++], librerie di importazione e file di esportazione"
ms.assetid: d8175596-9773-4c2f-959d-b05b065a5161
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Utilizzo di librerie di importazione e file di esportazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare LIB con l'opzione \/DEF per creare una libreria di importazione e un file di esportazione.  In LINK il file di esportazione viene utilizzato per compilare un programma che contiene esportazioni, generalmente una DLL, mentre la libreria di importazione viene utilizzata per risolvere i riferimenti a queste esportazioni presenti in altri programmi.  
  
 Se la libreria di importazione viene creata nel corso di un'operazione preliminare precedente alla creazione della dll, l'insieme di file oggetto da passare durante la compilazione della dll deve corrispondere a quello passato durante la compilazione della libreria di importazione.  
  
 Nella maggior parte dei casi, non è necessario utilizzare LIB per creare la libreria di importazione.  Quando si collega un programma \(un file eseguibile o una DLL\) che contiene esportazioni, viene creata automaticamente una libreria di importazione che descrive le esportazioni.  In seguito, quando si collega un programma che fa riferimento a queste esportazioni, si specificherà la libreria di importazione.  
  
 Tuttavia, quando mediante una DLL vengono eseguite esportazioni in un programma da cui vengono effettuate anche importazioni, sia direttamente che indirettamente, è necessario utilizzare LIB per creare una delle librerie di importazione.  La creazione di una libreria di importazione comporta anche la creazione di un file di esportazione.  Tale file deve essere utilizzato per il collegamento di una delle DLL.  
  
## Vedere anche  
 [Riferimenti a LIB](../../build/reference/lib-reference.md)
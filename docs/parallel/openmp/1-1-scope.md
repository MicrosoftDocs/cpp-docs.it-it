---
title: "1.1 Scope | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: a8570a3c-1dd6-4c3d-b368-a10fcb3534a6
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 1.1 Scope
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa specifica riguarda solo la parallelizzazione utente\-diretto, in cui l'utente specifica in modo esplicito le azioni da intraprendere dal compilatore e dal sistema di runtime per eseguire il programma in parallelo.  Le implementazioni di OpenMP C\# e C\+\+ non sono necessarie per controllare la disponibilità delle dipendenze, i conflitti, i deadlock, le race condition, o altri problemi che comportano l'errata esecuzione del programma.  L'utente deve garantire che l'applicazione utilizzando i costrutti di OpenMP c e C\+\+ API viene eseguita correttamente.  La parallelizzazione automatico generato dal compilatore e le direttive per il compilatore per soddisfare tale la parallelizzazione non vengono illustrate in questo documento.
---
title: "Compilazione e collegamento di programmi multithread | Microsoft Docs"
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
helpviewer_keywords: 
  - "compilazione di programmi multithread"
  - "compilazione di codice sorgente [C++], programmi multithread"
  - "collegamento [C++], programmi multithread"
  - "multithreading [C++], programmi compilati"
  - "multithreading [C++], collegamento di programmi"
  - "threading [C++], programmi compilati"
  - "threading [C++], collegamento di programmi"
ms.assetid: 27589afc-daf2-4f26-b868-a99de5c9dfec
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Compilazione e collegamento di programmi multithread
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il programma Bounce.c è illustrato nella sezione [Programma multithread di esempio in linguaggio C](../../parallel/sample-multithread-c-program.md).  
  
 La compilazione dei programmi è multithreading per impostazione predefinita.  
  
#### Per compilare e collegare il programma multithread Bounce.c dall'interno dell'ambiente di sviluppo  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
2.  Nel riquadro **Tipi progetto** fare clic su **Win32**.  
  
3.  Nel riquadro **Modelli** fare clic su **Applicazione console Win32**, quindi assegnare un nome al progetto.  
  
4.  Aggiungere al progetto il file contenente il codice sorgente C.  
  
5.  Scegliere **Compila** dal menu **Compila** per compilare il progetto.  
  
#### Per compilare e collegare il programma multithread Bounce.c dalla riga di comando  
  
1.  Compilare e collegare il programma:  
  
    ```  
    CL BOUNCE.C  
    ```  
  
## Vedere anche  
 [Multithreading con C e Win32](../../parallel/multithreading-with-c-and-win32.md)
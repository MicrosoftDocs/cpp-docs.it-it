---
title: "Errore R6025 del linguaggio C in fase di esecuzione  | Microsoft Docs"
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
  - "R6025"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6025"
ms.assetid: afa06d98-9c36-445b-b3e7-b6409bc8e779
caps.latest.revision: 8
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore R6025 del linguaggio C in fase di esecuzione 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiamata di funzione virtuale pure.  
  
 Non è stata creata alcuna istanza di oggetti per gestire la chiamata di funzione virtuale pure.  
  
 Se viene visualizzato questo errore in un'applicazione, contattare l'assistenza tecnica per l'applicazione.  
  
 L'errore è provocato da una chiamata a una funzione virtuale in una classe base astratta mediante un puntatore che è stato creato da un cast al tipo della classe derivata, ma è in realtà un puntatore alla classe base.  Ciò può verificarsi in occasione di un cast da un **void\*** a un puntatore a una classe quando il **void\*** è stato creato durante la costruzione della classe base.  
  
 Per ulteriori informazioni, vedere il sito Web [Supporto Microsoft](http://go.microsoft.com/fwlink/?LinkId=75220).
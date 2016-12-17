---
title: "Espansione di caratteri jolly | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_setargv"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_setargv (funzione)"
  - "carattere jolly asterisco"
  - "riga di comando, elaborazione argomenti"
  - "riga di comando, caratteri jolly"
  - "caratteri jolly da riga di comando"
  - "punto interrogativo, carattere jolly"
ms.assetid: 1a543398-607b-4404-93d1-45d290bde638
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Espansione di caratteri jolly
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 È possibile utilizzare caratteri jolly, ovvero il punto interrogativo \(?\) e l'asterisco \(\*\), per specificare gli argomenti del percorso e del nome del file nella riga di comando.  
  
 Gli argomenti della riga di comando vengono gestiti da una routine denominata **\_setargv** \(o **\_wsetargv** nell'ambiente con caratteri "wide"\), che per impostazione predefinita non consente di espandere i caratteri jolly in stringhe separate nella matrice di stringhe `argv`.  Per ulteriori informazioni sull'abilitazione dell'espansione dei caratteri jolly, vedere [Espansione di argomenti con caratteri jolly](../c-language/expanding-wildcard-arguments.md).  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)
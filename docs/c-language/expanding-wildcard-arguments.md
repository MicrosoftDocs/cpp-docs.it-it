---
title: "Espansione di argomenti con caratteri jolly | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "carattere jolly asterisco"
  - "espansione di argomenti con caratteri jolly"
  - "punto interrogativo, carattere jolly"
  - "caratteri jolly, espansione"
ms.assetid: 80a11c4b-0199-420e-a342-cf1d803be5bc
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Espansione di argomenti con caratteri jolly
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Quando si esegue un programma C, è possibile usare uno dei due caratteri jolly, il punto interrogativo \(?\) e l'asterisco \(\*\), per specificare gli argomenti del percorso e del nome del file nella riga di comando.  
  
 Per impostazione predefinita, i caratteri jolly non vengono espansi negli argomenti della riga di comando. È possibile sostituire la normale routine di caricamento `argv` del vettore dell'argomento con una versione in grado di espandere i caratteri jolly mediante il collegamento al file setargv.obj o wsetargv.obj. Se il programma usa una funzione `main`, effettuare il collegamento a setargv.obj. Se il programma usa una funzione `wmain`, effettuare il collegamento a wsetargv.obj. Il comportamento dei due file è equivalente.  
  
 Per effettuare il collegamento a setargv.obj o wsetargv.obj, usare l'opzione **\/link**. Ad esempio:  
  
 **cl example.c \/link setargv.obj**  
  
 I caratteri jolly vengono espansi nello stesso modo dei comandi del sistema operativo. Se non si ha familiarità con i caratteri jolly, vedere il manuale del sistema operativo.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Opzioni collegamento](../c-runtime-library/link-options.md)   
 [Funzione main ed esecuzione di programmi](../c-language/main-function-and-program-execution.md)
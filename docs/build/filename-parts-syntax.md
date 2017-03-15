---
title: "Sintassi relativa ai nomi file | Microsoft Docs"
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
  - "sintassi di nomi file in NMAKE"
  - "NMAKE (programma), sintassi"
  - "sintassi, nomi file"
ms.assetid: 48fe38e0-3f3b-40e6-894c-330ee775a656
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Sintassi relativa ai nomi file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sintassi relativa ai nomi file nei comandi rappresenta i componenti del primo nome file dipendente, che può essere un dipendente implicito.  I componenti dei nomi file sono l'unità, il percorso, il nome di base e l'estensione del file specificati e non quelli presenti sul disco.  Utilizzare **%s** per rappresentare il nome file completo  Utilizzare **%&#124;**\[*parti*\]**F** \(un simbolo di percentuale seguito da un carattere di barra verticale\) per rappresentare le varie parti del nome file, dove *partsi* può corrispondere a nessuna lettera o a più lettere tra quelle riportate di seguito, in qualsiasi ordine.  
  
|Lettera|Descrizione|  
|-------------|-----------------|  
|Nessuna lettera|Nome completo \(identico a **%s**\)|  
|**d**|Unità|  
|**P**|Percorso|  
|**f**|Nome di base del file|  
|**e**|Estensione di file|  
  
 Se, ad esempio, il nome file è C:\\prog.exe:  
  
-   %s sarà c:\\prog.exe  
  
-   %&#124;F sarà c:\\prog.exe  
  
-   %&#124;dF sarà c  
  
-   %&#124;pF sarà c:\\  
  
-   %&#124;fF sarà prog  
  
-   %&#124;eF sarà exe  
  
## Vedere anche  
 [Comandi di un makefile](../build/commands-in-a-makefile.md)
---
title: "/BIND | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/bind"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/BIND (opzione editbin)"
  - "BIND (opzione editbin)"
  - "-BIND (opzione editbin)"
  - "punti di ingresso"
  - "punti di ingresso, indirizzi"
  - "importazione della tabella indirizzi"
ms.assetid: 3772b330-1868-4c90-857d-c31faa867982
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /BIND
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/BIND[:PATH=path]  
```  
  
## Note  
 Questa opzione consente di impostare gli indirizzi dei punti di ingresso nella tabella degli indirizzi di importazione di un file eseguibile o di una DLL.  È utile per ridurre il tempo di caricamento di un programma.  
  
 Specificare il file eseguibile e le DLL del programma nell'argomento *files* sulla riga di comando di EDITBIN.  L'argomento facoltativo *path* di \/BIND indica la posizione delle DLL utilizzate dai file specificati.  Separare più directory mediante punti e virgola \(**;**\).  Se *path* non è specificato, la ricerca verrà effettuata nelle directory specificate nella variabile di ambiente PATH.  Se invece è specificato, la variabile PATH verrà ignorata.  
  
 Per impostazione predefinita, nel caricatore del programma gli indirizzi dei punti di ingresso vengono impostati durante il caricamento di un programma.  Il tempo necessario per questo processo può variare a seconda del numero delle DLL e dei punti di ingresso a cui viene fatto riferimento nel programma.  Se un programma è stato modificato con \/BIND e gli indirizzi di base del file eseguibile e delle corrispondenti DLL non sono in conflitto con DLL già caricate, non sarà necessario impostare questi indirizzi nel sistema operativo.  Nelle situazioni in cui gli indirizzi di base dei file non sono corretti, il sistema operativo consente di rilocare le DLL del programma e ricalcolare gli indirizzi dei punti di ingresso, prolungando il tempo di caricamento del programma.  
  
## Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)
---
title: "Avviso degli strumenti del linker LNK4075 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4075"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4075"
ms.assetid: f39ad3f9-c263-4cf0-9d70-259fc56ac96d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso degli strumenti del linker LNK4075
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'opzione1' ignorato a causa della specifica di 'opzione2'  
  
 La seconda opzione esegue l'override della prima.  
  
 Sono state specificate opzioni del linker che si escludono a vicenda.  Esaminare tali opzioni  per individuare la posizione in cui vengono specificate, che varia a seconda dalla modalità di compilazione del progetto.  
  
-   Se la compilazione viene eseguita nell'ambiente di sviluppo, individuare la posizione in cui vengono specificate entrambe le opzioni nelle pagine delle proprietà per il linker relative al progetto.  Per ulteriori informazioni, vedere [Procedura: specificare le proprietà del progetto tramite le pagine delle proprietà](../../misc/how-to-specify-project-properties-with-property-pages.md).  
  
-   Se la compilazione viene eseguita dalla riga di comando, individuare le opzioni del linker specificate su di essa.  
  
-   Se la compilazione viene eseguita con script di compilazione, individuare la posizione in cui vengono specificate le opzioni del linker all'interno di tali script.  
  
 Una volta individuata la posizione in cui sono specificate le opzioni del linker che si escludono a vicenda, rimuoverne una.  
  
 Alcuni esempi specifici:  
  
-   Se si collega un modulo compilato con **\/ZI**, che implica un'opzione del linker interna denominata \/EDITANDCONTINUE, a un modulo compilato con \/OPT:REF, \/OPT:ICF o \/INCREMENTAL:NO, che non implicano l'opzione \/EDITANDCONTINUE, verrà generato l'errore LNK4075.  Per ulteriori informazioni, vedere [\/Z7, \/Zi, \/ZI \(Formato informazioni di debug\)](../../build/reference/z7-zi-zi-debug-information-format.md).
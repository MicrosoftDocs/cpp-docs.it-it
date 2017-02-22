---
title: "Avviso della riga di comando D9025 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "D9025"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D9025"
ms.assetid: 6edff72c-1508-46c2-99f4-0e4b3c5e60c9
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso della riga di comando D9025
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

override di 'opzione1' con 'opzione2'  
  
 L'opzione *opzione1* è stata specificata ma in seguito è stata sottoposta a override da *opzione2*.  È stata utilizzata l'opzione *opzione2*.  
  
 Se due opzioni specificano direttive contraddittorie o incompatibili, viene utilizzata la direttiva specificata o implicita nell'ultima opzione presente alla destra della riga di comando.  
  
 Se questo messaggio viene visualizzato durante la compilazione dall'ambiente di sviluppo e non si è certi della provenienza delle opzioni in conflitto, considerare le seguenti indicazioni:  
  
-   Un'opzione può essere specificata nel codice o nelle impostazioni del progetto.  Se sono presenti nel campo **Tutte le opzioni** delle pagine delle proprietà [Riga di comando](../../ide/command-line-property-pages.md) del compilatore, le opzioni sono impostate nelle pagine delle proprietà del progetto. In caso contrario, sono impostate nel codice sorgente.  
  
     Se le opzioni sono impostate nelle pagine delle proprietà del progetto, esaminare la pagina delle proprietà Preprocessore del compilatore con il nodo di progetto selezionato in Esplora soluzioni.  Se le opzioni non sono impostate in questo punto, controllare le impostazioni della pagina delle proprietà Preprocessore per ogni file del codice sorgente in Esplora soluzioni, in modo da accertarsi che non vi siano state aggiunte le opzioni.  
  
     Se le opzioni sono impostate nel codice, è possibile che siano impostate nel codice stesso o nelle intestazioni delle finestre.  È possibile tentare di individuare le opzioni creando un file pre\-elaborato \([\/P](../../build/reference/p-preprocess-to-a-file.md)\) in cui eseguire la ricerca del simbolo.
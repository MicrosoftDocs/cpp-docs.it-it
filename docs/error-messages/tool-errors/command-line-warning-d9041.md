---
title: "Avviso della riga di comando D9041 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "D9041"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D9040"
ms.assetid: ada8815f-4246-4e25-b57d-a7f16fa107cc
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 3
---
# Avviso della riga di comando D9041
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

valore 'valore' non valido per '\/opzione'; verrà utilizzato 'valore'; quando si specifica questo avviso, aggiungere '\/analyze' alle opzioni della riga di comando  
  
 È stato aggiunto un numero di avviso dell'analisi codice all'opzione della riga di comando **\/wd**, **\/we**, **\/wo** o **\/wl** senza specificare l'opzione della riga di comando **\/analyze**.  Per risolvere questo errore, aggiungere l'opzione della riga di comando **\/analyze** o rimuovere il numero di avviso non valido dall'opzione della riga di comando **\/w** appropriata.  
  
## Esempio  
 L'esempio della riga di comando seguente genera l'avviso D9041:  
  
```  
cl /EHsc /LD /wd6001 filename.cpp  
```  
  
 Per risolvere il problema, aggiungere l'opzione della riga di comando **\/analyze**.  Se **\/analyze** non è supportato nella versione del compilatore in uso, rimuovere il numero di avviso non valido dall'opzione **\/wd**.  
  
## Vedere anche  
 [Errori della riga di comando da D8000 a D9999](../../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)
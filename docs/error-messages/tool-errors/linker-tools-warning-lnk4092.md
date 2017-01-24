---
title: "Avviso degli strumenti del linker LNK4092 | Microsoft Docs"
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
  - "LNK4092"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4092"
ms.assetid: d569ec47-a338-40e1-940b-8a8061459acb
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4092
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la sezione scrivibile condivisa 'sezione' contiene rilocazioni; l'immagine potrebbe non essere eseguita correttamente  
  
 Questo avviso viene generato dal linker ogni volta che è presente una sezione condivisa per segnalare un potenziale problema grave.  
  
 Per condividere i dati tra più processi, è possibile contrassegnare una sezione come condivisa. Questa operazione può tuttavia causare problemi.  Si supponga, ad esempio, che una DLL contenga dichiarazioni come la seguente in una sezione di dati condivisi:  
  
```  
int var = 1;  
int *pvar = &var;  
```  
  
 `pvar` non può essere risolto dal linker poiché il valore varia a seconda della posizione in cui la DLL è caricata in memoria, pertanto nella DLL viene inserito un record di rilocazione.  Quando la DLL viene caricata in memoria, è possibile risolvere l'indirizzo di `var` e assegnare `pvar`.  Se la stessa DLL viene caricata da un altro processo in un indirizzo diverso, la rilocazione per l'indirizzo di `var` sarà aggiornata per il secondo processo e lo spazio degli indirizzi del primo processo risulterà errato.
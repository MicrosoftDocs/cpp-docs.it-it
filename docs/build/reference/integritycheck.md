---
title: "/INTEGRITYCHECK | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/INTEGRITYCHECK"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/INTEGRITYCHECK (opzione editbin)"
  - "INTEGRITYCHECK (opzione editbin)"
  - "-INTEGRITYCHECK (opzione editbin)"
ms.assetid: 2a293705-4396-421b-a5a5-693b4b867a85
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# /INTEGRITYCHECK
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica che la firma digitale di un'immagine binaria deve essere controllata in fase di caricamento.  
  
```  
  
/INTEGRITYCHECK[:NO]  
  
```  
  
## Note  
 Nell'intestazione del file DLL o del file eseguibile, questa opzione imposta un flag che richiede il controllo della firma digitale da parte del gestore della memoria per caricare l'immagine in Windows.  Le versioni di Windows precedenti a Windows Vista ignorano questo flag.  Questa opzione deve essere impostata per le DLL a 64 bit, che implementano il codice in modalità kernel ed è consigliata per tutti i driver dei dispositivi.  Per ulteriori informazioni, vedere [Procedura dettagliata per la firma del codice in modalità kernel](http://go.microsoft.com/fwlink/?linkid=237093) nel sito Web MSDN.  
  
## Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)
---
title: "Errore della riga di comando D8016 | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "D8016"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D8016"
ms.assetid: eec51312-7471-4f92-94b2-d517cafc8ef5
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore della riga di comando D8016
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

le opzioni della riga di comando 'opzione1' e 'opzione2' non sono compatibili  
  
 Non è possibile specificare congiuntamente le due opzioni della riga di comando.  
  
 Controllare le specifiche delle opzioni nelle variabili di ambiente, ad esempio CL.  
  
 **\/clr** implica **\/EHa** e non è possibile specificare nessun'altra opzione del compilatore **\/EH** con **\/clr**.  Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 L'errore D8016 può verificarsi in seguito all'aggiornamento di un progetto di [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] 6.0. È infatti possibile che il processo di aggiornamento guidato del progetto attivi la proprietà **\/RTC** per ciascun file di codice sorgente del progetto, determinando così l'override dell'impostazione di **\/RTC** per il progetto.  Per risolverlo, ripristinare l'impostazione predefinita di **\/RTC** per tutti i file di codice sorgente del progetto. Così facendo, l'impostazione di progetto di **\/RTC** sarà attiva in tutti i file.  
  
 Per informazioni sulla modifica dell'impostazione della proprietà **\/RTC**, vedere [\/RTC \(Controlli di runtime\)](../../build/reference/rtc-run-time-error-checks.md).
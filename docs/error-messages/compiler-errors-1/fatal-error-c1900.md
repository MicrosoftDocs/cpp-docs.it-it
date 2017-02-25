---
title: "Errore irreversibile C1900 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1900"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1900"
ms.assetid: 3aaa583b-4c1a-45de-aa34-527d806f2cb5
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore irreversibile C1900
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errata corrispondenza tra 'strumento1' versione 'numero1' e 'strumento2' versione 'numero2'  
  
 Gli strumenti eseguiti nei vari passaggi del compilatore non corrispondono.  ***numero1*** e ***numero2*** fanno riferimento alle date nei file.  Nella fase 1, ad esempio, viene eseguito il front end del compilatore \(c1.dll\) mentre nella fase 2 viene eseguito il back end \(c2.dll\).  È necessario che le date dei file corrispondano.  
  
 Per risolvere questo problema, assicurarsi che tutti gli aggiornamenti siano stati applicati a Visual Studio.  Se il problema persiste, usare **Programmi e funzionalità** nel Pannello di controllo di Windows per ripristinare o reinstallare Visual Studio.
---
title: "Avviso del compilatore (livello 4) C4710 | Microsoft Docs"
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
  - "C4710"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4710"
ms.assetid: 76381ec7-3fc1-4bee-9a0a-c2c8307b92e2
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4710
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': funzione non resa inline  
  
 La funzione specificata è stata selezionata per l'espansione inline, ma l'operazione non è stata eseguita.  
  
 L'operazione di inline viene eseguita a discrezione del compilatore.  La parola chiave **inline**, come **register**, ha la funzione di suggerimento per il compilatore,  che utilizza i sistemi euristici per determinare se rendere inline una particolare funzione per velocizzare il codice, in una compilazione mirata alla velocità, o per ridurre le dimensioni del codice, in una compilazione mirata allo spazio.  In quest'ultimo tipo di compilazione vengono rese inline solo le funzioni molto piccole.  
  
 In alcuni casi, una particolare funzione non viene resa inline per motivi meccanici.  Vedere l'avviso [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) per un elenco dei motivi che non consentono di rendere inline una funzione.  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).
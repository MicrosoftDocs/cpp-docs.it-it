---
title: "Errore del compilatore C2099 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2099"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2099"
ms.assetid: 30e151ee-d458-4901-b0c0-d45054a913f5
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2099
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'inizializzatore non è una costante  
  
 Questo errore viene generato unicamente dal compilatore C e si verifica solo per variabili non automatiche.  Il compilatore inizializza le variabili non automatiche all'avvio del programma e i valori di inizializzazione devono essere costanti.  
  
## Esempio  
 L'esempio seguente genera l'errore C2099.  
  
```  
// C2099.c int j; int *p; j = *p;   // C2099 *p is not a constant  
```  
  
## Esempio  
 L'errore C2099 può verificarsi anche perché il compilatore non riesce a eseguire la riduzione delle costanti su un'espressione in **\/fp:strict**. Le impostazioni di ambiente relative alla precisione della virgola mobile, infatti, possono variare dalla fase di compilazione a quella di compilazione. Per altre informazioni, vedere [\_controlfp\_s](../../c-runtime-library/reference/controlfp-s.md).  
  
 Se la riduzione di costanti non riesce, il compilatore richiama l'inizializzazione dinamica, non consentita in C.  
  
 Per correggere questo errore, compilare il modulo come file cpp o semplificare l'espressione.  
  
 Per altre informazioni, vedere [\/fp \(Specifica il comportamento della virgola mobile\)](../../build/reference/fp-specify-floating-point-behavior.md).  
  
 L'esempio seguente genera l'errore C2099.  
  
```  
// C2099_2.c // compile with: /fp:strict /c float X = 2.0 - 1.0;   // C2099 float X2 = 1.0;   // OK  
```
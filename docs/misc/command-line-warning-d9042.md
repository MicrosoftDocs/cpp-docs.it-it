---
title: "Avviso della riga di comando D9042 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "D9042"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D9042"
ms.assetid: d710693b-e422-40b2-b2dd-79e1b163b9e6
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso della riga di comando D9042
valore 'value' non valido per '\/option'; verrà utilizzato 'value'; gli avvisi dell'analisi codice non sono disponibili in questa edizione del compilatore  
  
 È stato aggiunto un numero di avviso dell'analisi codice all'opzione della riga di comando **\/wd**, **\/we**, **\/wo** o **\/wl** e l'opzione della riga di comando **\/analyze** è stata specificata in una piattaforma che non supporta l'analisi codice. Per risolvere questo problema, passare alla versione x86 di Visual Studio Team System o rimuovere l'opzione della riga di comando **\/analyze**.  
  
## Esempio  
 L'esempio della riga di comando seguente genera l'avviso D9042 in un sistema x64 o Itanium:  
  
```  
cl /EHsc /LD /wd6001 /analyze filename.cpp  
```  
  
 Per risolvere questo problema, passare alla versione x86 di Visual Studio Team System o rimuovere le opzioni della riga di comando **\/analyze** e **\/wd6001**.  
  
## Vedere anche  
 [Errori della riga di comando da D8000 a D9999](../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)   
 [Opzioni del compilatore](../build/reference/compiler-options.md)
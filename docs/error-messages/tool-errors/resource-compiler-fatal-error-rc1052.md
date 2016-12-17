---
title: "Errore irreversibile del compilatore di risorse RC1052 | Microsoft Docs"
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
  - "RC1052"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC1052"
ms.assetid: 59803673-492b-44fa-80fa-df93b8aaf9fb
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile del compilatore di risorse RC1052
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

limite del compilatore: blocchi \#if o \#ifdef eccessivamente annidati  
  
 Il programma ha superato il livello massimo di annidamento consentito per le direttive `#if` e `#ifdef`.  
  
 L'errore può essere causato da file di inclusione che usano tali direttive per il preprocessore.  
  
 Per risolvere il problema, ridurre il numero direttive `#if` e `#ifdef` annidate nel file di risorse.  Se il problema è causato da file di intestazione inclusi nel file di risorse, ridurre il numero di direttive `#if` e `#ifdef` nei file di intestazione.  Se ciò non è possibile, considerare la creazione e l'inclusione di un nuovo file di intestazione nel file di risorse, eseguendo il preprocessore nei file di intestazione inclusi esistenti.  Per altre informazioni, vedere l'opzione del compilatore [\/P \(Pre\-elabora in un file\)](../../build/reference/p-preprocess-to-a-file.md).
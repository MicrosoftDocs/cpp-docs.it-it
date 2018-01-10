---
title: Errore irreversibile del compilatore di risorse RC1052 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: RC1052
dev_langs: C++
helpviewer_keywords: RC1052
ms.assetid: 59803673-492b-44fa-80fa-df93b8aaf9fb
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0546441022d8e2b487d83e291574020665cdaf4c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="resource-compiler-fatal-error-rc1052"></a>Errore irreversibile del compilatore di risorse RC1052
limite del compilatore: blocchi #if o #ifdef eccessivamente annidati  
  
 Il programma ha superato il livello massimo di annidamento consentito per le direttive `#if` e `#ifdef`.  
  
 L'errore può essere causato da file di inclusione che usano tali direttive per il preprocessore.  
  
 Per risolvere il problema, ridurre il numero direttive `#if` e `#ifdef` annidate nel file di risorse. Se il problema è causato da file di intestazione inclusi nel file di risorse, ridurre il numero di direttive `#if` e `#ifdef` nei file di intestazione. Se ciò non è possibile, considerare la creazione e l'inclusione di un nuovo file di intestazione nel file di risorse, eseguendo il preprocessore nei file di intestazione inclusi esistenti. Per ulteriori informazioni, vedere il [/P (pre-elabora in un File)](../../build/reference/p-preprocess-to-a-file.md) l'opzione del compilatore.
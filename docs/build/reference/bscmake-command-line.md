---
title: "Riga di comando di BSCMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BSCMAKE, riga di comando"
ms.assetid: 8006e8cf-8bfe-4c23-868a-b0a25e6bbf0f
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Riga di comando di BSCMAKE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per eseguire BSCMAKE, utilizzare la seguente sintassi della riga di comando:  
  
```  
BSCMAKE [options] sbrfiles  
```  
  
 Le opzioni possono essere visualizzate solo nel campo `options` della riga di comando.  
  
 Nel campo *sbrfiles* è possibile specificare uno o più file sbr creati mediante un compilatore o un assembler.  Separare i nomi dei vari file sbr mediante spazi o tabulazioni.  Specificare le estensioni, in quanto non vi è estensione predefinita.  È possibile specificare un percorso con il nome del file e utilizzare i caratteri jolly del sistema operativo \(\* e ?\).  
  
 In una compilazione incrementale è possibile specificare file sbr nuovi, non inclusi nella compilazione originale.  Se si desidera che tutti i contributi rimangano nel file di informazioni di visualizzazione, specificare tutti i file sbr utilizzati in origine per la creazione del file bsc, compresi i file troncati.  Se uno dei file sbr viene omesso, i relativi contributi al file di informazioni di visualizzazione vengono rimossi.  
  
 Per una compilazione completa non devono essere specificati file sbr troncati.  La compilazione completa richiede i contributi di tutti i file sbr specificati.  Prima di eseguire una compilazione completa è necessario ricompilare il progetto e creare un nuovo file sbr per ogni file vuoto.  
  
 Il seguente comando esegue BSCMAKE per compilare un file chiamato MAIN.bsc da tre file sbr:  
  
```  
BSCMAKE main.sbr file1.sbr file2.sbr  
```  
  
 Per informazioni correlate, vedere [File di comando di BSCMAKE](../../build/reference/bscmake-command-file-response-file.md) e [Opzioni di BSCMAKE](../../build/reference/bscmake-options.md).  
  
## Vedere anche  
 [Riferimenti a BSCMAKE](../../build/reference/bscmake-reference.md)
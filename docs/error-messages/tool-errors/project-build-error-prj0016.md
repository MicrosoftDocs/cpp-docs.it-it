---
title: "Errore di compilazione progetto PRJ0016 | Microsoft Docs"
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
  - "PRJ0016"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0016"
ms.assetid: e9745336-883a-4c70-9c40-7753e02f0325
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore di compilazione progetto PRJ0016
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le impostazioni di sicurezza dell'utente impediscono la creazione del processo.Tali impostazioni sono necessarie per la compilazione.  
  
 Si è connessi come utente senza autorizzazioni per creare processi utilizzando un processo.  È necessario modificare i livelli di autorizzazione per questo account utente o contattare l'amministratore dell'account.  
  
 Questo errore si verifica inoltre se si imposta la seguente chiave del Registro di sistema:  
  
 \\\\HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer\\RestrictRun  
  
 Per risolvere l'errore, eliminare la chiave RestrictRun.  Se questa chiave del Registro di sistema è necessaria, aggiungere **vcspawn.exe** all'elenco delle voci nella chiave.  
  
 Questo errore può anche essere causato dal fatto che l'impostazione relativa ai criteri non include VCSpawn.exe nella chiave del Registro di sistema HKEY\_CURRENT\_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\RestrictRun come programma Windows consentito per questo account utente.  
  
 Per ulteriori informazioni, vedere:  
  
-   Articolo della Knowledge Base 324153, disponibile su .  
  
-   [Adesione alle impostazioni dei criteri di sistema](http://msdn.microsoft.com/library/aa372139), sezione relativa all'esecuzione delle sole applicazioni Windows consentite.
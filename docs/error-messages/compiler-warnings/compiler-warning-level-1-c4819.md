---
title: "Avviso del compilatore (livello 1) C4819 | Microsoft Docs"
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
  - "C4819"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4819"
ms.assetid: c0316e85-249c-414d-9df0-622d077c6bc2
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4819
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il file contiene un carattere che non può essere rappresentato nella tabella codici corrente \(numero\).Salvare il file in formato Unicode per evitare perdite di dati.  
  
 C4819 si verifica quando un file di origine ANSI viene compilato in un sistema con una tabella codici che non può rappresentare tutti i caratteri nel file.  
  
 Per risolvere C4819, salvare il file in formato Unicode.  In Visual Studio, scegliere **File**, **Opzioni di salvataggio avanzate**.  Nella finestra di dialogo **Opzioni di salvataggio avanzate** selezionare una codifica che può rappresentare tutti i caratteri nel file, ad esempio UTF\-8, quindi scegliere **OK**.
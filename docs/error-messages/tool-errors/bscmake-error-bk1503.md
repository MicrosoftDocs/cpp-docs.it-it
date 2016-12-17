---
title: "Errore BK1503 di BSCMAKE | Microsoft Docs"
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
  - "BK1503"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK1503"
ms.assetid: e6582344-b91e-486f-baf3-4f9028d83c3b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore BK1503 di BSCMAKE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile scrivere nel file "nomefile" \[: motivo\]  
  
 BSCMAKE unisce i file SBR generati durante la compilazione in un unico database.  Se il database risultante supera i 64 MB o se il numero dei file di input \(SBR\) è maggiore di 4092, verrà generato questo errore.  
  
 Se la causa è un numero di file SBR maggiore di 4092, sarà necessario ridurre il numero dei file di input.  In Visual Studio è possibile eseguire tale operazione utilizzando l'opzione [\/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) sull'intero progetto, quindi verificando ogni singolo file.  
  
 Se la causa è un file BSC maggiore di 64 MB, riducendo il numero dei file SBR di input si otterrà una riduzione delle dimensioni del risultante file BSC.  La quantità delle informazioni di visualizzazione può essere inoltre ridotta mediante l'utilizzo di \/Em \(Exclude Macro Expanded Symbols\), \/El \(Exclude Local Variables\) e \/Es \(Exclude System Files\).  
  
## Vedere anche  
 [Opzioni di BSCMAKE](../../build/reference/bscmake-options.md)
---
title: "Precompilazione del codice automatica e manuale | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".pch (file)"
  - ".pch (file), opzioni di precompilazione"
  - "precompilazione automatica"
  - "codice, precompilazione"
  - "compilazione di codice sorgente, precompilazione"
  - "PCH (file)"
  - "PCH (file), opzioni di precompilazione"
  - "file di intestazione precompilata"
  - "file di intestazione precompilata, opzioni di precompilazione"
  - "precompilazione di codice"
ms.assetid: f50ac76f-e2a2-462d-bda5-0e2ab7cccdeb
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Precompilazione del codice automatica e manuale
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Con Visual C\+\+ è possibile precompilare qualsiasi codice C o C\+\+; la precompilazione non è limitata ai soli file di intestazione.  
  
 La precompilazione richiede una pianificazione, ma consente di eseguire compilazioni molto più rapide se si precompila codice sorgente anziché semplici file di intestazione.  
  
 È possibile precompilare il codice quando i file di origine utilizzano insiemi comuni di file di intestazione ma non li includono nello stesso ordine o quando si desidera includere codice sorgente nella precompilazione.  
  
 Le opzioni dell'intestazione precompilata sono [\/Yc \(Crea il file di intestazione precompilato\)](../../build/reference/yc-create-precompiled-header-file.md) e [\/Yu \(Utilizza il file di intestazione precompilato\)](../../build/reference/yu-use-precompiled-header-file.md).  Utilizzare **\/Yc** per creare un'intestazione precompilata.  Se utilizzato con il pragma `hdrstop` facoltativo, **\/Yc** consente di precompilare sia i file di intestazione sia il codice sorgente.  Selezionare **\/Yu** per utilizzare un'intestazione precompilata esistente nella compilazione corrente.  È inoltre possibile utilizzare **\/Fp** con le opzioni **\/Yc** e **\/Yu** per indicare un nome alternativo per l'intestazione precompilata.  
  
 Negli argomenti di riferimento delle opzioni del compilatore relativi a **\/Yu** e **\/Yc** viene illustrato come accedere a questa funzionalità nell'ambiente di sviluppo.  
  
## Ulteriori informazioni  
  
-   [Condizioni per la precompilazione del codice sorgente](../../build/reference/when-to-precompile-source-code.md)  
  
-   [Regole di uniformità per le intestazioni precompilate](../../build/reference/precompiled-header-consistency-rules.md)  
  
-   [Utilizzo di intestazioni precompilate in un progetto](../../build/reference/using-precompiled-headers-in-a-project.md)  
  
 Per ulteriori esempi di utilizzo delle intestazioni precompilate, vedere i makefile utilizzati per compilare i programmi di esempio forniti con la libreria MFC.  
  
## Vedere anche  
 [Creazione di file di intestazione precompilati](../../build/reference/creating-precompiled-header-files.md)
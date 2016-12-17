---
title: "Procedura: Creare un file con estensione vsct da un file CTO esistente | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "File VSCT, creazione basata su un file con estensione cto"
ms.assetid: 847717c9-477d-4ac9-8b2c-2da878912478
caps.latest.revision: 11
caps.handback.revision: 11
manager: "douge"
---
# Procedura: Creare un file con estensione vsct da un file CTO esistente
È possibile creare un file con estensione vsct basato su XML da un file CTO binario esistente. Questa operazione consente di sfruttare il nuovo formato di compilatore della tabella comandi. Questo processo funziona anche se il file CTO è stato compilato da un file CTC. È possibile modificare e compilare il file VSCT in un altro file CTO.  
  
### Per creare un file con estensione vsct da un file CTO  
  
1.  Ottenere copie del file CTO e del corrispondente file CTSYM.  
  
2.  Inserire i file nella stessa directory del compilatore vsct.exe.  
  
3.  Nel prompt dei comandi di Visual Studio, passare alla directory che contiene i file con estensione cto e ctsym.  
  
4.  Digitare **vsct.exe** *ctofilename***.cto** *vsctfilename***.vsct \-S***symfilename***.ctsym**.  
  
     `ctofilename` è il nome del file CTO, `vsctfilename` è il nome del file VSCT che si vuole creare e `symfilename` è il nome del file CTSYM.  
  
     Questo processo crea un nuovo file del compilatore della tabella comandi XML con estensione vsct. È possibile modificare e compilare il file con vsct.exe, il compilatore vsct, come si farebbe con qualsiasi altro file VSCT.  
  
## Vedere anche  
 [Procedura: creare una. File Vsct](../Topic/How%20to:%20Create%20a%20.Vsct%20File.md)   
 [Tabella di comandi di Visual Studio \(. File Vsct\)](../Topic/Visual%20Studio%20Command%20Table%20\(.Vsct\)%20Files.md)
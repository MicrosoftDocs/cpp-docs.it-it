---
title: "Procedura: Creare un file con estensione vsct da un file CTC esistente | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "File VSCT, creazione basata su un file con estensione ctc"
ms.assetid: 700e80a4-c1e1-4178-af53-45e86dd2c08b
caps.latest.revision: 9
caps.handback.revision: 9
manager: "douge"
---
# Procedura: Creare un file con estensione vsct da un file CTC esistente
È possibile creare un file con estensione vsct basato su XML da un file di origine CTC esistente della tabella comandi. In questo modo, si può sfruttare il nuovo formato basato su XML del compilatore della tabella comandi di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] \(VSCT\).  
  
### Per creare un file con estensione vsct da un file CTC  
  
1.  Ottenere una copia del linguaggio Perl.  
  
2.  Ottenere una copia dello script Perl ConvertCTCToVSCT.pl, in genere situata nella cartella *\<Percorso di installazione Visual Studio SDK\>*\\VisualStudioIntegration\\Tools\\bin.  
  
3.  Ottenere una copia del file di origine CTC da convertire.  
  
4.  Inserire i file nella stessa directory.  
  
5.  Nella finestra del prompt dei comandi di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] spostarsi nella directory.  
  
6.  Digitare  
  
    ```  
    perl.exe ConvertCTCtoVSCT.pl PkgCmd.ctc PkgCmd.vsct  
    ```  
  
     dove PkgCmd.ctc è il nome del file CTC e PkgCmd.vsct è il nome del file con estensione vsct da creare.  
  
     Verrà creato un nuovo file di origine XML della tabella comandi con estensione vsct. È possibile compilare il file con Vsct.exe, il compilatore VSCT, come si farebbe con qualsiasi altro file con estensione vsct.  
  
    > [!NOTE]
    >  È possibile migliorare la leggibilità del file con estensione vsct riformattando i commenti XML.  
  
## Vedere anche  
 [Procedura: creare una. File Vsct](../Topic/How%20to:%20Create%20a%20.Vsct%20File.md)   
 [Tabella di comandi di Visual Studio \(. File Vsct\)](../Topic/Visual%20Studio%20Command%20Table%20\(.Vsct\)%20Files.md)
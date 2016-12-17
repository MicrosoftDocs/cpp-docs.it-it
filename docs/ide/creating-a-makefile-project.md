---
title: "Creazione di un progetto makefile | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.makefile.project"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "progetti Makefile, creazione"
  - "file di progetto [C++], progetti Makefile"
ms.assetid: dd077af3-97a8-48fb-baaa-cf7e07ddef61
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione di un progetto makefile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I progetti compilati dalla riga di comando con un makefile non vengono riconosciuti dall'ambiente di sviluppo di Visual Studio.  Per aprire e compilare il progetto mediante [!INCLUDE[vsUltShort](../ide/includes/vsultshort_md.md)], [!INCLUDE[vsPro](../ide/includes/vspro_md.md)] o Visual Studio Express per Windows Desktop, creare innanzitutto un progetto vuoto selezionando il modello di progetto MakeFile.  Sarà quindi possibile utilizzare questo progetto per compilare il progetto desiderato nell'ambiente di sviluppo di Visual Studio.  
  
 In Esplora soluzioni non vengono visualizzati file.  Le impostazioni di compilazione, riportate nella relativa pagina delle proprietà, vengono specificate dal progetto.  
  
 Il file di output specificato nel progetto non influisce sul nome creato dallo script di compilazione, ma fornisce soltanto un'indicazione.  
  
### Per creare un progetto makefile  
  
1.  Attenersi alla procedura illustrata nell'argomento della Guida [Creazione di un progetto con una creazione guidata applicazione Visual C\+\+](../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
2.  Nel riquadro Modelli della finestra di dialogo **Nuovo progetto** selezionare **Progetto makefile** per aprire la procedura guidata.  
  
3.  Nella schermata [Impostazioni applicazione](../ide/application-settings-makefile-project-wizard.md) fornire le informazioni relative a ricompilazione, comandi, output e pulitura.  
  
4.  Scegliere **Fine** per uscire dalla procedura guidata. Il progetto appena creato verrà aperto in **Esplora soluzioni**.  
  
 È possibile visualizzare e modificare le proprietà del progetto nella relativa pagina delle proprietà.  Per informazioni sulla visualizzazione di questa pagina delle proprietà, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../ide/working-with-project-properties.md).  
  
## Vedere anche  
 [Creazione guidata progetto MakeFile](../ide/makefile-project-wizard.md)   
 [Caratteri speciali in un makefile](../build/special-characters-in-a-makefile.md)   
 [Contenuto di un makefile](../build/contents-of-a-makefile.md)
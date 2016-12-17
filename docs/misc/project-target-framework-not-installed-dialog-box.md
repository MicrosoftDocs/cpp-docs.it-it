---
title: "Finestra di dialogo Framework di destinazione del progetto non installato | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.TargetFrameworkNotFound"
ms.assetid: 64ce8743-d5bd-447e-ba10-54b2aafe109e
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Finestra di dialogo Framework di destinazione del progetto non installato
È stato aperto un progetto destinato a un framework non installato nel computer. Per continuare è necessario selezionare una delle opzioni nella finestra di dialogo.  
  
> [!NOTE]
>  Ogni volta che si scarica e si installa un nuovo framework, è necessario riavviare Visual Studio.  
  
## Visual Basic e Visual C\#  
 Se è stato aperto un progetto Visual Basic o Visual C\#, selezionare una delle opzioni seguenti.  
  
 **Cambiare la destinazione in .NET Framework 4.5. È possibile modificarla di nuovo in .NET Framework** *Versione*  **in un secondo momento.**  
 Ridestina il progetto a .NET Framework 4.5. In seguito sarà possibile reinstallare la versione precedente e ridestinare il progetto.  
  
 **Scaricare il pacchetto di destinazione per .NET Framework \<Versione\>. Il progetto non verrà modificato.**  
 Apre il sito Web Area download Microsoft, in cui è possibile scaricare la versione desiderata di .NET Framework. Il progetto viene scaricato dalla soluzione. Dopo aver scaricato e installato il framework desiderato, è necessario riavviare Visual Studio e riaprire il progetto.  
  
 **Non caricare il progetto.**  
 Lascia il progetto scaricato dalla soluzione. In seguito sarà possibile installare il framework desiderato e ricaricare il progetto.  
  
## Visual C\+\+  
 Se è stato aperto un progetto Visual C\+\+, selezionare una delle opzioni seguenti.  
  
 **Scaricare il pacchetto di destinazione per .NET Framework** *Versione***. Il progetto non verrà modificato.**  
 Apre il sito Web Area download Microsoft, in cui è possibile scaricare la versione desiderata di .NET Framework. Al termine del download, il progetto viene ridestinato a tale versione. Il progetto viene scaricato dalla soluzione. Dopo aver scaricato e installato il framework desiderato, è necessario riavviare [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] e riaprire il progetto.  
  
 **Non caricare il progetto.**  
 Lascia il progetto scaricato dalla soluzione. In seguito sarà possibile installare il framework desiderato e ricaricare il progetto.  
  
## Vedere anche  
 [Procedura: destinare una versione di .NET Framework](../Topic/How%20to:%20Target%20a%20Version%20of%20the%20.NET%20Framework.md)   
 [Troubleshooting .NET Framework Targeting Errors](../Topic/Troubleshooting%20.NET%20Framework%20Targeting%20Errors.md)   
 [Aggiunta di riferimenti](../ide/adding-references-in-visual-cpp-projects.md)
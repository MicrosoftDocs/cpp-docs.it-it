---
title: "Procedura: Configurare i progetti Visual C++ per piattaforme a 64 bit | Microsoft Docs"
ms.custom: ""
ms.date: "12/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "piattaforme [C++], 64 bit"
  - "programmazione a 64 bit [C++], configurazione di progetti"
  - "configurazioni di progetto [C++]"
ms.assetid: 2b9ae001-df36-4750-83b2-982145d632ad
caps.latest.revision: 22
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura: Configurare i progetti Visual C++ per piattaforme a 64 bit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile usare le configurazioni di progetto in Visual Studio per configurare le applicazioni C\+\+ per le piattaforme a 64 bit. È anche possibile eseguire la migrazione di impostazioni di progetto Win32 in una configurazione di progetto a 64 bit.  
  
### Per configurare le applicazioni C\+\+ per le piattaforme a 64 bit  
  
1.  Aprire il progetto C\+\+ da configurare.  
  
2.  Aprire le pagine delle proprietà per il progetto. Per altre informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../misc/how-to-open-project-property-pages.md).  
  
    > [!NOTE]
    >  Per i progetti .NET, assicurarsi che il nodo **Proprietà di configurazione**, o uno dei relativi nodi figlio, sia selezionato nella finestra di dialogo **Pagine delle proprietà di \<NomeProgetto\>**; in caso contrario, il pulsante **Gestione configurazione** rimarrà non disponibile.  
  
3.  Scegliere il pulsante **Gestione configurazione** per aprire la finestra di dialogo **Gestione configurazione**.  
  
4.  Nell'elenco **Piattaforma soluzione attiva** selezionare l'opzione **\<Nuovo...\>** per aprire la finestra di dialogo **Nuova piattaforma soluzione**.  
  
5.  Nell'elenco a discesa **Digitare o selezionare la nuova piattaforma** selezionare una piattaforma a 64 bit.  
  
    > [!NOTE]
    >  Nella finestra di dialogo **Nuova piattaforma soluzione** è possibile usare l'opzione **Copia impostazioni da** per copiare impostazioni di progetto esistenti nella nuova configurazione di progetto a 64 bit.  
  
6.  Fare clic su **OK**. La piattaforma selezionata nel passaggio precedente viene visualizzata in **Piattaforma soluzione attiva** nella finestra di dialogo **Gestione configurazione**.  
  
7.  Fare clic sul pulsante **Chiudi** nella finestra di dialogo **Gestione configurazione**, quindi fare clic su **OK** nella finestra di dialogo **Pagine delle proprietà di \<NomeProgetto\>**.  
  
### Per copiare impostazioni di progetto Win32 in una configurazione di progetto a 64 bit  
  
-   Quando è aperta la finestra di dialogo **Nuova piattaforma soluzione** durante l'impostazione in un progetto per una piattaforma a 64 bit, nell'elenco a discesa **Copia impostazioni da** selezionare **Win32**. Queste impostazioni di progetto vengono aggiornate automaticamente a livello di progetto:  
  
    -   L'opzione del linker [\/MACHINE](../build/reference/machine-specify-target-platform.md) viene impostata su **\/MACHINE:X64**.  
  
    -   **Registra output** viene disattivata. Per altre informazioni, vedere [Pagine delle proprietà Linker](../ide/linker-property-pages.md).  
  
    -   **Ambiente di destinazione** viene impostata su **\/env x64**. Per altre informazioni, vedere [Pagine delle proprietà MIDL: Generale](../ide/midl-property-pages-general.md).  
  
    -   **Convalida parametri** viene deselezionata e viene ripristinato il valore predefinito. Per altre informazioni, vedere [Pagine delle proprietà MIDL: Avanzate](../ide/midl-property-pages-advanced.md).  
  
    -   Se l'opzione **Formato informazioni di debug** è stata impostata su **\/ZI** nella configurazione del progetto Win32, viene impostata su **\/Zi** nella configurazione del progetto a 64 bit. Per altre informazioni, vedere [\/Z7, \/Zi, \/ZI \(Formato informazioni di debug\)](../build/reference/z7-zi-zi-debug-information-format.md).  
  
    > [!NOTE]
    >  Nessuna di queste proprietà di progetto viene modificata se ne viene eseguito l'override a livello di file.  
  
## Vedere anche  
 [Applicazioni a 64 bit](../Topic/64-bit%20Applications.md)   
 [Configurazione di programmi per processori a 64 bit](../build/configuring-programs-for-64-bit-visual-cpp.md)   
 [Eseguire il debug di applicazioni a 64 bit](../Topic/Debug%2064-Bit%20Applications.md)
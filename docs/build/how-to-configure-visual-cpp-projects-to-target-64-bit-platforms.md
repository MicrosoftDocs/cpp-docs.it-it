---
title: 'Procedura: configurare progetti di Visual C++ a 64 Bit, x64 piattaforme | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- platforms [C++], 64-bit
- 64-bit programming [C++], configuring projects
- project configurations [C++]
ms.assetid: 2b9ae001-df36-4750-83b2-982145d632ad
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3f1a4c9a27d4fdbbd57348c1fc2ce27301a1a95e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="how-to-configure-visual-c-projects-to-target-64-bit-x64-platforms"></a>Procedura: configurare progetti di Visual C++ a 64 Bit, x64 piattaforme

È possibile utilizzare le configurazioni di progetto nell'IDE di Visual Studio per configurare le applicazioni C++ di destinazione a 64 bit x64 piattaforme. È anche possibile eseguire la migrazione di impostazioni di progetto Win32 in una configurazione di progetto a 64 bit.  
  
### <a name="to-set-up-c-applications-to-target-64-bit-platforms"></a>Per configurare le applicazioni C++ per le piattaforme a 64 bit  
  
1.  Aprire il progetto C++ da configurare.  
  
2.  Aprire le pagine delle proprietà per il progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).  
  
    > [!NOTE]
    >  Per i progetti .NET, assicurarsi che il **le proprietà di configurazione** nodo o uno dei relativi nodi figlio, viene selezionato nel  **\<Projectname > pagine delle proprietà** la finestra di dialogo; in caso contrario, il  **Configuration Manager** pulsante rimane non disponibile.  
  
3.  Scegliere il pulsante **Gestione configurazione** per aprire la finestra di dialogo **Gestione configurazione** .  
  
4.  Nel **piattaforma soluzione attiva** elenco a discesa, seleziona il  **\<nuovo … >** opzione per aprire la **nuova piattaforma soluzione** la finestra di dialogo.  
  
5.  Nel **digitare o selezionare la nuova piattaforma** elenco a discesa, la piattaforma di destinazione selezionare 64 bit.  
  
    > [!NOTE]
    >  Nella finestra di dialogo **Nuova piattaforma soluzione** è possibile usare l'opzione **Copia impostazioni da** per copiare impostazioni di progetto esistenti nella nuova configurazione di progetto a 64 bit.  
  
6.  Fare clic su **OK** . La piattaforma selezionata nel passaggio precedente viene visualizzata in **Piattaforma soluzione attiva** nella finestra di dialogo **Gestione configurazione** .  
  
7.  Scegliere il **Chiudi** pulsante il **Configuration Manager** finestra di dialogo, quindi scegliere il **OK** pulsante il  **\<Projectname > Pagine delle proprietà** la finestra di dialogo.  
  
### <a name="to-copy-win32-project-settings-into-a-64-bit-project-configuration"></a>Per copiare impostazioni di progetto Win32 in una configurazione di progetto a 64 bit  
  
-   Quando è aperta la finestra di dialogo **Nuova piattaforma soluzione** durante l'impostazione in un progetto per una piattaforma a 64 bit, nell'elenco a discesa **Copia impostazioni da** selezionare **Win32**. Queste impostazioni di progetto vengono aggiornate automaticamente a livello di progetto:  
  
    -   L'opzione del linker [/MACHINE](../build/reference/machine-specify-target-platform.md) viene impostata su **/MACHINE:X64**.  
  
    -   **Registra output** viene disattivata. Per altre informazioni, vedere [Linker Property Pages](../ide/linker-property-pages.md).  
  
    -   **Ambiente di destinazione** viene impostata su **/env x64**. Per altre informazioni, vedere [MIDL Property Pages: General](../ide/midl-property-pages-general.md).  
  
    -   **Convalida parametri** viene deselezionata e viene ripristinato il valore predefinito. Per altre informazioni, vedere [MIDL Property Pages: Advanced](../ide/midl-property-pages-advanced.md).  
  
    -   Se l'opzione **Formato informazioni di debug** è stata impostata su **/ZI** nella configurazione del progetto Win32, viene impostata su **/Zi** nella configurazione del progetto a 64 bit. Per altre informazioni, vedere [/Z7, /Zd, /Zi, /ZI (Formato informazioni di debug)](../build/reference/z7-zi-zi-debug-information-format.md).  
  
    > [!NOTE]
    >  Nessuna di queste proprietà di progetto viene modificata se ne viene eseguito l'override a livello di file.  
  
## <a name="see-also"></a>Vedere anche  

[Applicazioni a 64 bit di .NET framework](/dotnet/framework/64-bit-apps)   
[Visual C++ per x64 a 64 bit, configurare le destinazioni](../build/configuring-programs-for-64-bit-visual-cpp.md)   
[Eseguire il debug di applicazioni a 64 Bit](/visualstudio/debugger/debug-64-bit-applications)
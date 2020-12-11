---
description: 'Altre informazioni su: procedura: configurare i progetti Visual Studio C++ per piattaforme x64 a 64 bit'
title: 'Procedura: configurare progetti Visual Studio C++ per piattaforme x64 a 64 bit'
ms.date: 11/04/2016
helpviewer_keywords:
- platforms [C++], 64-bit
- 64-bit programming [C++], configuring projects
- project configurations [C++]
ms.assetid: 2b9ae001-df36-4750-83b2-982145d632ad
ms.openlocfilehash: 717f9db302f4a7bfef12d30830336b22f9fc5169
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97156372"
---
# <a name="how-to-configure-visual-studio-c-projects-to-target-64-bit-x64-platforms"></a>Procedura: configurare progetti Visual Studio C++ per piattaforme x64 a 64 bit

È possibile usare le configurazioni di progetto nell'IDE di Visual Studio per configurare le applicazioni C++ per piattaforme x64 a 64 bit. È anche possibile eseguire la migrazione di impostazioni di progetto Win32 in una configurazione di progetto a 64 bit.

### <a name="to-set-up-c-applications-to-target-64-bit-platforms"></a>Per configurare le applicazioni C++ per le piattaforme a 64 bit

1. Aprire il progetto C++ da configurare.

1. Aprire le pagine delle proprietà per il progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](working-with-project-properties.md).

   > [!NOTE]
   > Per i progetti .NET, verificare che il nodo **proprietà di configurazione** , o uno dei relativi nodi figlio, sia selezionato nella finestra di dialogo Pagine delle **\<Projectname> proprietà** . in caso contrario, il pulsante **Configuration Manager** rimane non disponibile.

1. Scegliere il pulsante **Gestione configurazione** per aprire la finestra di dialogo **Gestione configurazione** .

1. Nell'elenco a discesa **piattaforma soluzione attiva** selezionare l' **\<New...>** opzione per aprire la finestra di dialogo **nuova piattaforma soluzione** .

1. Nell'elenco a discesa **digitare o selezionare la nuova piattaforma** selezionare una piattaforma di destinazione a 64 bit.

   > [!NOTE]
   > Nella finestra di dialogo **Nuova piattaforma soluzione** è possibile usare l'opzione **Copia impostazioni da** per copiare impostazioni di progetto esistenti nella nuova configurazione di progetto a 64 bit.

1. Fare clic su **OK** . La piattaforma selezionata nel passaggio precedente viene visualizzata in **Piattaforma soluzione attiva** nella finestra di dialogo **Gestione configurazione** .

1. Scegliere il pulsante **Chiudi** nella finestra di dialogo **Configuration Manager** , quindi scegliere il pulsante **OK** nella finestra di dialogo **\<Projectname> pagine delle proprietà** .

### <a name="to-copy-win32-project-settings-into-a-64-bit-project-configuration"></a>Per copiare impostazioni di progetto Win32 in una configurazione di progetto a 64 bit

- Quando è aperta la finestra di dialogo **Nuova piattaforma soluzione** durante l'impostazione in un progetto per una piattaforma a 64 bit, nell'elenco a discesa **Copia impostazioni da** selezionare **Win32**. Queste impostazioni di progetto vengono aggiornate automaticamente a livello di progetto:

  - L'opzione del linker [/MACHINE](reference/machine-specify-target-platform.md) viene impostata su **/MACHINE:X64**.

  - **Registra output** viene disattivata. Per altre informazioni, vedere [pagine delle proprietà del linker](reference/linker-property-pages.md).

  - **Ambiente di destinazione** viene impostata su **/env x64**. Per altre informazioni, vedere [pagine delle proprietà MIDL](reference/midl-property-pages.md).

  - **Convalida parametri** viene deselezionata e viene ripristinato il valore predefinito. Per altre informazioni, vedere [pagine delle proprietà MIDL](reference/midl-property-pages.md).

  - Se l'opzione **Formato informazioni di debug** è stata impostata su **/ZI** nella configurazione del progetto Win32, viene impostata su **/Zi** nella configurazione del progetto a 64 bit. Per altre informazioni, vedere [/Z7, /Zd, /Zi, /ZI (Formato informazioni di debug)](reference/z7-zi-zi-debug-information-format.md).

  > [!NOTE]
  > Nessuna di queste proprietà di progetto viene modificata se ne viene eseguito l'override a livello di file.

## <a name="see-also"></a>Vedi anche

[Configurare progetti C++ per destinazioni x64 a 64 bit](configuring-programs-for-64-bit-visual-cpp.md)<br/>
[Eseguire il debug di applicazioni a 64 bit](/visualstudio/debugger/debug-64-bit-applications)

---
title: 'Procedura: Configurare Visual Studio C++ progetti di piattaforme di destinazione a 64 bit, x64'
ms.date: 11/04/2016
helpviewer_keywords:
- platforms [C++], 64-bit
- 64-bit programming [C++], configuring projects
- project configurations [C++]
ms.assetid: 2b9ae001-df36-4750-83b2-982145d632ad
ms.openlocfilehash: a063c2f333a755ab86a4f91c9d14d0c65a6d1414
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65446400"
---
# <a name="how-to-configure-visual-studio-c-projects-to-target-64-bit-x64-platforms"></a>Procedura: Configurare Visual Studio C++ progetti di piattaforme di destinazione a 64 bit, x64

È possibile utilizzare le configurazioni di progetto nell'IDE di Visual Studio per configurare le applicazioni C++ di destinazione a 64 bit x64 piattaforme. È anche possibile eseguire la migrazione di impostazioni di progetto Win32 in una configurazione di progetto a 64 bit.

### <a name="to-set-up-c-applications-to-target-64-bit-platforms"></a>Per configurare le applicazioni C++ per le piattaforme a 64 bit

1. Aprire il progetto C++ da configurare.

1. Aprire le pagine delle proprietà per il progetto. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](working-with-project-properties.md).

   > [!NOTE]
   > Per i progetti .NET, assicurarsi che il **le proprietà di configurazione** nodo, o uno dei relativi nodi figlio, viene selezionato nel  **\<Projectname > pagine delle proprietà** nella finestra di dialogo; in caso contrario, il  **Configuration Manager** pulsante rimane non disponibile.

1. Scegliere il pulsante **Gestione configurazione** per aprire la finestra di dialogo **Gestione configurazione** .

1. Nel **piattaforma soluzione attiva** elenco a discesa, seleziona la  **\<nuovo... >** opzione per aprire la **nuova piattaforma soluzione** nella finestra di dialogo.

1. Nel **digitare o selezionare la nuova piattaforma** riepilogo, piattaforma di destinazione selezionare 64 bit.

   > [!NOTE]
   > Nella finestra di dialogo **Nuova piattaforma soluzione** è possibile usare l'opzione **Copia impostazioni da** per copiare impostazioni di progetto esistenti nella nuova configurazione di progetto a 64 bit.

1. Fare clic su **OK** . La piattaforma selezionata nel passaggio precedente viene visualizzata in **Piattaforma soluzione attiva** nella finestra di dialogo **Gestione configurazione** .

1. Scegliere il **Chiudi** pulsante il **Configuration Manager** finestra di dialogo casella e quindi scegliere il **OK** pulsante nel  **\<NomeProgetto > Pagine delle proprietà** nella finestra di dialogo.

### <a name="to-copy-win32-project-settings-into-a-64-bit-project-configuration"></a>Per copiare impostazioni di progetto Win32 in una configurazione di progetto a 64 bit

- Quando è aperta la finestra di dialogo **Nuova piattaforma soluzione** durante l'impostazione in un progetto per una piattaforma a 64 bit, nell'elenco a discesa **Copia impostazioni da** selezionare **Win32**. Queste impostazioni di progetto vengono aggiornate automaticamente a livello di progetto:

  - L'opzione del linker [/MACHINE](reference/machine-specify-target-platform.md) viene impostata su **/MACHINE:X64**.

  - **Registra output** viene disattivata. Per altre informazioni, vedere [Linker Property Pages](reference/linker-property-pages.md).

  - **Ambiente di destinazione** viene impostata su **/env x64**. Per altre informazioni, vedere [pagine delle proprietà MIDL: Generale](reference/midl-property-pages-general.md).

  - **Convalida parametri** viene deselezionata e viene ripristinato il valore predefinito. Per altre informazioni, vedere [pagine delle proprietà MIDL: Advanced](reference/midl-property-pages-advanced.md).

  - Se l'opzione **Formato informazioni di debug** è stata impostata su **/ZI** nella configurazione del progetto Win32, viene impostata su **/Zi** nella configurazione del progetto a 64 bit. Per altre informazioni, vedere [/Z7, /Zd, /Zi, /ZI (Formato informazioni di debug)](reference/z7-zi-zi-debug-information-format.md).

  > [!NOTE]
  > Nessuna di queste proprietà di progetto viene modificata se ne viene eseguito l'override a livello di file.

## <a name="see-also"></a>Vedere anche

[Configurare i progetti C++ a 64 bit x64 destinazioni](configuring-programs-for-64-bit-visual-cpp.md)<br/>
[Eseguire il debug di applicazioni a 64 Bit](/visualstudio/debugger/debug-64-bit-applications)

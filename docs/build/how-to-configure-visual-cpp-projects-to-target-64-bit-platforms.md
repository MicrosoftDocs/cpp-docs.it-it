---
title: 'Procedura: Configurare i progetti di Visual C++ a 64 Bit, come destinazione x64 piattaforme'
ms.date: 11/04/2016
helpviewer_keywords:
- platforms [C++], 64-bit
- 64-bit programming [C++], configuring projects
- project configurations [C++]
ms.assetid: 2b9ae001-df36-4750-83b2-982145d632ad
ms.openlocfilehash: 17255a5671880063f030ed0087c1fa839c5a14ef
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57421373"
---
# <a name="how-to-configure-visual-c-projects-to-target-64-bit-x64-platforms"></a>Procedura: Configurare i progetti di Visual C++ a 64 Bit, come destinazione x64 piattaforme

È possibile utilizzare le configurazioni di progetto nell'IDE di Visual Studio per configurare le applicazioni C++ di destinazione a 64 bit x64 piattaforme. È anche possibile eseguire la migrazione di impostazioni di progetto Win32 in una configurazione di progetto a 64 bit.

### <a name="to-set-up-c-applications-to-target-64-bit-platforms"></a>Per configurare le applicazioni C++ per le piattaforme a 64 bit

1. Aprire il progetto C++ da configurare.

1. Aprire le pagine delle proprietà per il progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../ide/working-with-project-properties.md).

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

  - L'opzione del linker [/MACHINE](../build/reference/machine-specify-target-platform.md) viene impostata su **/MACHINE:X64**.

  - **Registra output** viene disattivata. Per altre informazioni, vedere [Linker Property Pages](../ide/linker-property-pages.md).

  - **Ambiente di destinazione** viene impostata su **/env x64**. Per altre informazioni, vedere [pagine delle proprietà MIDL: Generale](../ide/midl-property-pages-general.md).

  - **Convalida parametri** viene deselezionata e viene ripristinato il valore predefinito. Per altre informazioni, vedere [pagine delle proprietà MIDL: Advanced](../ide/midl-property-pages-advanced.md).

  - Se l'opzione **Formato informazioni di debug** è stata impostata su **/ZI** nella configurazione del progetto Win32, viene impostata su **/Zi** nella configurazione del progetto a 64 bit. Per altre informazioni, vedere [/Z7, /Zd, /Zi, /ZI (Formato informazioni di debug)](../build/reference/z7-zi-zi-debug-information-format.md).

  > [!NOTE]
  > Nessuna di queste proprietà di progetto viene modificata se ne viene eseguito l'override a livello di file.

## <a name="see-also"></a>Vedere anche

[Applicazioni a 64 bit di .NET framework](/dotnet/framework/64-bit-apps)<br/>
[Configurare Visual C++ per destinazioni x64 a 64 bit](../build/configuring-programs-for-64-bit-visual-cpp.md)<br/>
[Eseguire il debug di applicazioni a 64 Bit](/visualstudio/debugger/debug-64-bit-applications)

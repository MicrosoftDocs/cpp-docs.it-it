---
title: Configurare le sessioni di debug di CMake in Visual Studio
ms.date: 03/21/2019
helpviewer_keywords:
- CMake debugging
ms.openlocfilehash: 41f53c0c3ea46a8a1aa11215968aaee6c13c2dea
ms.sourcegitcommit: e33126222c418daf977533ea9e2819d99e0d7b8d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/17/2019
ms.locfileid: "72534112"
---
# <a name="configure-cmake-debugging-sessions"></a>Configurare le sessioni di debug di CMake

Tutte le destinazioni CMake eseguibili sono visualizzate nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale**. Per avviare una sessione di debug, selezionarne una e avviare il debugger.

![Elenco a discesa di elementi di avvio CMake](media/cmake-startup-item-dropdown.png "Elenco a discesa di elementi di avvio CMake")

È anche possibile avviare una sessione di debug da Esplora soluzioni. Per prima cosa, passare alla **visualizzazione destinazioni CMake** nella finestra **Esplora soluzioni** .

![Pulsante visualizzazione destinazioni CMake](media/cmake-targets-view.png  "Voce di menu visualizzazione destinazioni CMake")

Quindi, fare clic con il pulsante destro del mouse su qualsiasi eseguibile e selezionare **debug** **, debug e avvia Impostazioni**. **Debug** avvia automaticamente il debug della destinazione selezionata, in base alla configurazione attiva. Le **impostazioni di debug e avvio** aprono il file *Launch. vs. JSON* e aggiungono una nuova configurazione di debug per la destinazione selezionata.

## <a name="customize-debugger-settings"></a>Personalizzare le impostazioni del debugger

Per personalizzare le impostazioni del debugger per qualsiasi destinazione CMake eseguibile nel progetto, fare clic con il pulsante destro del mouse sul file CMakeLists.txt specifico e selezionare **Impostazioni per debug e avvio**. (Oppure selezionare una destinazione nella **visualizzazione destinazioni** in **Esplora soluzioni**). Quando si seleziona una destinazione CMake nel sottomenu, viene creato un file denominato **Launch. vs. JSON** . Questo file viene prepopolato con informazioni sulla destinazione CMake selezionata e consente di specificare parametri aggiuntivi, come argomenti del programma o tipo di debugger. Per fare riferimento a qualsiasi chiave in un file **CMakeSettings. JSON** , anteporre `cmake.` in **Launch. vs. JSON**. Nell'esempio seguente viene illustrato un semplice file **Launch. vs. JSON** che esegue il pull del valore della chiave `remoteCopySources` nel file **CMakeSettings. JSON** per la configurazione attualmente selezionata:

```json
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
    {
      "type": "default",
      "project": "CMakeLists.txt",
      "projectTarget": "CMakeHelloWorld.exe (Debug\\CMakeHelloWorld.exe)",
      "name": "CMakeHelloWorld.exe (Debug\\CMakeHelloWorld.exe)",
      "args": ["${cmake.remoteCopySources}"]
    }
  ]
}
```

Non appena si salva il file **Launch. vs. JSON** , viene creata una voce nell'elenco a discesa **elemento di avvio** con il nuovo nome. Modificando il file **Launch. vs. JSON** , è possibile creare tutte le configurazioni di debug desiderate per qualsiasi numero di destinazioni CMake.

## <a name="support-for-cmakesettings-variables"></a>Supporto delle variabili CMakeSettings

 **Launch. vs. JSON** supporta le variabili dichiarate in **CMakeSettings. JSON** (vedere di seguito) e applicabili alla configurazione attualmente selezionata. Dispone inoltre di una chiave denominata `currentDir`, che imposta la directory corrente dell'app di avvio per un progetto locale:

```json
{
  "type": "default",
  "project": "CMakeLists.txt",
  "projectTarget": "CMakeHelloWorld1.exe (C:\\Users\\satyan\\CMakeBuilds\\Test\\Debug\\CMakeHelloWorld1.exe)",
  "name": "CMakeHelloWorld1.exe (C:\\Users\\satyan\\CMakeBuilds\\Test\\Debug\\CMakeHelloWorld1.exe)",
  "currentDir": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}"
}
```

Quando si esegue l'app, il valore di `currentDir` è simile a

```cmd
C:\Users\satyan\7f14809a-2626-873e-952e-cdf038211175\
```

La chiave "CWD" imposta la directory corrente dell'app di avvio per un progetto remoto. Il valore predefinito è' $ {debugInfo. defaultWorkingDirectory}' che restituisce 

```cmd
/var/tmp/src/bfc6f7f4-4f0f-8b35-80d7-9198fa973fb9/Linux-Debug
```

## <a name="see-also"></a>Vedere anche

[Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md)<br/>
[Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md)<br/>
[Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)<br/>
[Personalizzare le impostazioni di compilazione di CMake](customize-cmake-settings.md)<br/>
[Configurare le sessioni di debug di CMake](configure-cmake-debugging-sessions.md)<br/>
[Distribuire, eseguire e sottoporre a debug il progetto Linux](../linux/deploy-run-and-debug-your-linux-project.md)<br/>
[Informazioni di riferimento sulle configurazioni predefinite CMake](cmake-predefined-configuration-reference.md)<br/>

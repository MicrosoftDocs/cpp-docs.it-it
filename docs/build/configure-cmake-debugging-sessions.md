---
title: Configurare CMake in Visual Studio sessioni di debug
ms.date: 03/05/2019
helpviewer_keywords:
- CMake debugging
ms.openlocfilehash: 9a4dd009544a4590c336697ba2162eec45718869
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827929"
---
# <a name="configure-cmake-debugging-sessions"></a>Configurare le sessioni di debug di CMake

Tutte le destinazioni CMake eseguibili sono visualizzate nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale**. Per avviare una sessione di debug, selezionarne una e avviare il debugger.

![Elenco a discesa elemento di avvio di CMake](media/cmake-startup-item-dropdown.png "Elemento di avvio di CMake, elenco a discesa")

È anche possibile avviare una sessione di debug dai menu di CMake.

## <a name="customize-debugger-settings"></a>Personalizzare le impostazioni del debugger

Per personalizzare le impostazioni del debugger per qualsiasi destinazione CMake eseguibile nel progetto, fare clic con il pulsante destro del mouse sul file CMakeLists.txt specifico e selezionare **Impostazioni per debug e avvio**. Quando si seleziona una destinazione CMake nel sottomenu, un file denominato `launch.vs.json` viene creato. Questo file viene prepopolato con informazioni sulla destinazione CMake selezionata e consente di specificare parametri aggiuntivi, come argomenti del programma o tipo di debugger. Fare riferimento a qualsiasi chiave in un `CMakeSettings.json` file, con anteporre `cmake.` in `launch.vs.json`. L'esempio seguente illustra un semplice `launch.vs.json` file che esegue il pull nel valore della `remoteCopySources` chiave nel `CMakeSettings.json` file per la configurazione attualmente selezionata:

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

Non appena si salva il `launch.vs.json` file, in cui viene creata una voce di **elemento di avvio** elenco a discesa con il nuovo nome. Modificando il `launch.vs.json` file, è possibile creare molte configurazioni di debug nel modo desiderato per qualsiasi numero di destinazioni CMake.

## <a name="support-for-cmakesettings-variables"></a>Supporto per le variabili CMakeSettings

 `Launch.vs.json` supporta le variabili dichiarate in `CMakeSettings.json` (vedere sotto) e che sono applicabili per la configurazione attualmente selezionato. Include anche una chiave denominata `currentDir`, che imposta la directory corrente dell'app che avvia l'operazione:

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
## <a name="see-also"></a>Vedere anche

[Progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md)<br/>
[Configurare un progetto CMake per Linux](../linux/cmake-linux-project.md)<br/>
[Connettersi al computer Linux remoto](../linux/connect-to-your-remote-linux-computer.md)<br/>
[Personalizzare le impostazioni di compilazione di CMake](customize-cmake-settings.md)<br/>
[Configurare le sessioni di debug di CMake](configure-cmake-debugging-sessions.md)<br/>
[Distribuire, eseguire e sottoporre a debug il progetto Linux](../linux/deploy-run-and-debug-your-linux-project.md)<br/>
[Riferimento di configurazione CMake predefinite](cmake-predefined-configuration-reference.md)<br/>
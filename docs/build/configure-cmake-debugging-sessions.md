---
title: Configurare le sessioni di debug di CMake in Visual Studio
ms.date: 03/21/2019
helpviewer_keywords:
- CMake debugging
ms.openlocfilehash: 9899f99994935ec419fff400670644b7d78a190a
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59035348"
---
# <a name="configure-cmake-debugging-sessions"></a>Configurare le sessioni di debug di CMake

Tutte le destinazioni CMake eseguibili sono visualizzate nell'elenco a discesa **Elemento di avvio** nella barra degli strumenti **Generale**. Per avviare una sessione di debug, selezionarne una e avviare il debugger.

![Elenco a discesa elemento di avvio di CMake](media/cmake-startup-item-dropdown.png "Elemento di avvio di CMake, elenco a discesa")

È anche possibile avviare una sessione di debug dai menu di CMake.

## <a name="customize-debugger-settings"></a>Personalizzare le impostazioni del debugger

Per personalizzare le impostazioni del debugger per qualsiasi destinazione CMake eseguibile nel progetto, fare clic con il pulsante destro del mouse sul file CMakeLists.txt specifico e selezionare **Impostazioni per debug e avvio**. (Oppure selezionare una destinazione nel **visualizzazione di destinazioni** nelle **Esplora soluzioni**.) Quando si seleziona una destinazione CMake nel sottomenu, un file denominato **Launch** viene creato. Questo file viene prepopolato con informazioni sulla destinazione CMake selezionata e consente di specificare parametri aggiuntivi, come argomenti del programma o tipo di debugger. Fare riferimento a qualsiasi chiave in un **Cmakesettings** file, anteporre con `cmake.` nelle **Launch**. L'esempio seguente illustra un semplice **Launch** file che estrae il valore del `remoteCopySources` chiave nel **Cmakesettings** file per la configurazione attualmente selezionata:

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

Non appena si salva il **Launch** file, in cui viene creata una voce il **elemento di avvio** elenco a discesa con il nuovo nome. Modificando la **Launch** file, è possibile creare molte configurazioni di debug nel modo desiderato per qualsiasi numero di destinazioni CMake.

## <a name="support-for-cmakesettings-variables"></a>Supporto delle variabili CMakeSettings

 **Launch** supporta le variabili dichiarate in **Cmakesettings** (vedere sotto) e che sono applicabili per la configurazione attualmente selezionato. Include anche una chiave denominata `currentDir`, che imposta la directory corrente dell'app che esegue l'applicazione per un progetto locale:

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

La chiave 'cwd' imposta la directory corrente dell'app per un progetto remoto che esegue l'applicazione. Il valore predefinito è '${debugInfo.defaultWorkingDirectory}' che restituisce 

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

---
title: Configurare un progetto CMake per Linux in Visual Studio | Microsoft Docs
ms.custom: ''
ms.date: 04/28/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-linux
ms.tgt_pltfrm: Linux
ms.topic: conceptual
ms.assetid: f8707b32-f90d-494d-ae0b-1d44425fdc25
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
- linux
ms.openlocfilehash: a49d9364b7b39dfddd982519416c9a12b7adf9e6
ms.sourcegitcommit: 5e932a0e110e80bc241e5f69e3a1a7504bfab1f3
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/21/2018
---
# <a name="configure-a-linux-cmake-project"></a>Configurare un progetto CMake per Linux
  
**Visual Studio 2017 versione 15.4** Quando si installa il carico di lavoro Linux C++, il supporto CMake per Linux è selezionato per impostazione predefinita. È ora possibile lavorare sulla base di codice esistente che usa CMake senza la necessità di convertirlo in un progetto di Visual Studio. Se il codebase è multipiattaforma, è possibile scegliere sia Windows che Linux da Visual Studio. 

Questo argomento presuppone una familiarità di base con il supporto CMake in Visual Studio. Per altre informazioni, vedere [CMake Tools for Visual C++](../ide/cmake-tools-for-visual-cpp.md) (Strumenti CMake per Visual C++). Per altre informazioni su CMake, vedere [Build, Test and Package Your Software With CMake](https://cmake.org/) (Compilare e testare il software e includerlo in un pacchetto con CMake).

> [!NOTE] 
> Il supporto CMake in Visual Studio richiede il supporto della modalità server introdotta in CMake 3.8. Se la gestione pacchetti fornisce una versione meno recente di CMake, è possibile ovviare al problema compilando CMake 3.8 da zero.



## <a name="open-a-folder"></a>Aprire una cartella
Per iniziare, scegliere **File | Apri | Cartella** dal menu principale o digitare `devenv.exe <foldername>` nella riga di comando. La cartella aperta conterrà un file CMakeLists.txt, oltre al codice sorgente.
L'esempio seguente illustra un semplice file CMakeLists.txt e un file CPP:

```cpp
// Hello.cpp

#include <iostream>;
 
int main(int argc, char* argv[])
{
    std::cout << "Hello" << std::endl;
}
```

CMakeLists.txt:

```cmd
project (hello-cmake)
add_executable(hello-cmake hello.cpp)
```

## <a name="choose-a-linux-target"></a>Scegliere una destinazione Linux
Non appena si apre la cartella, Visual Studio analizza il file CMakeLists.txt e specifica la destinazione Windows x86-Debug. Per specificare come destinazione Linux, modificare le impostazioni del progetto scegliendo Linux-Debug o Linux-Release.

Per impostazione predefinita, Visual Studio sceglie il primo sistema remoto nell'elenco (in **Strumenti | Opzioni | Multipiattaforma | Gestione connessione**). Se non sono disponibili connessioni remote, viene chiesto di crearne una.

Dopo avere specificato una destinazione Linux, l'origine viene copiata nel computer Linux. CMake viene quindi eseguito nel computer Linux per generare la cache CMake per il progetto.  

![Generare la cache CMake in Linux](media/cmake-linux-1.png "Generare la cache CMake in Linux")  

**Visual Studio 2017 versione 15.7 e successive:** per rendere disponibile il supporto IntelliSense per le intestazioni remote, Visual Studio le copia automaticamente in una directory nel computer Windows locale. Per altre informazioni, vedere [IntelliSense per le intestazioni remote](configure-a-linux-project.md#remote_intellisense).

## <a name="debug-the-project"></a>Eseguire il debug del progetto  
Per eseguire il debug del codice nel sistema remoto, impostare un punto di interruzione, scegliere la destinazione CMake come elemento di avvio dal menu della barra degli strumenti accanto all'impostazione del progetto e fare clic su Esegui (o premere F5).

## <a name="configure-cmake-settings-for-linux"></a>Configurare le impostazioni di CMake per Linux
Per modificare le impostazioni di CMake predefinite, scegliere **CMake | Modifica impostazioni di CMake | CMakeLists.txt** dal menu principale o fare clic con il pulsante destro del mouse su CMakeSettings.txt in **Esplora soluzioni** e scegliere **Modifica impostazioni di CMake**. Visual Studio crea quindi nella cartella un nuovo file denominato `CMakeSettings.json` che viene popolato con le configurazioni predefinite elencate nella voce di menu delle impostazioni del progetto. L'esempio seguente illustra la configurazione predefinita per Linux-Debug basata sull'esempio di codice precedente:

```json
{
      "name": "Linux-Debug",
      "generator": "Unix Makefiles",
      "remoteMachineName": "${defaultRemoteMachineName}",
      "configurationType": "Debug",
      "remoteCMakeListsRoot": "/var/tmp/src/${workspaceHash}/${name}",
      "cmakeExecutable": "/usr/local/bin/cmake",
      "buildRoot": "${env.LOCALAPPDATA}\\CMakeBuilds\\${workspaceHash}\\build\\${name}",
      "remoteBuildRoot": "/var/tmp/build/${workspaceHash}/build/${name}",
      "remoteCopySources": true,
      "remoteCopySourcesOutputVerbosity": "Normal",
      "remoteCopySourcesConcurrentCopies": "10",
      "cmakeCommandArgs": "",
      "buildCommandArgs": "",
      "ctestCommandArgs": "",
      "inheritEnvironments": [ "linux-x64" ]
}
```

Per `name` è possibile usare qualsiasi valore. Il valore `remoteMachineName` specifica il sistema remoto di destinazione, nel caso se ne abbia più di uno. Per poter selezionare il sistema appropriato, per questo campo è abilitato IntelliSense. Il campo `remoteCMakeListsRoot` specifica dove verranno copiate le origini del progetto nel sistema remoto. Il campo `remoteBuildRoot` indica dove verrà generato l'output di compilazione nel sistema remoto. Tale output viene copiato anche in locale nel percorso specificato da `buildRoot`.

## <a name="building-a-supported-cmake-release-from-source"></a>Compilazione di una versione di CMake supportata dall'origine
La versione minima di CMake necessaria nel computer Linux è la 3.8 e deve anche supportare la modalità server. Per verificare la versione, eseguire questo comando:

```cmd
cmake --version
```

Per verificare che la modalità server sia abilitata, eseguire:

```cmd
cmake -E capabilities
```

Nell'output cercare "serverMode":true. Si noti che, anche quando si compila CMake dall'origine come illustrato sotto, è consigliabile controllare le funzionalità al termine. Il sistema Linux può avere limitazioni che impediscono l'abilitazione della modalità server.

Per iniziare la compilazione dall'origine nella shell per il sistema Linux, verificare che la gestione pacchetti sia aggiornata e che git e cmake siano disponibili. Clonare prima di tutto le origini CMake dal repository Microsoft usato per il supporto di CMake di Visual Studio:

```cmd
sudo apt-get update
sudo apt-get install -y git cmake
git clone https://github.com/Microsoft/CMake.git
cd CMake
```

Eseguire quindi i comandi seguenti:

```cmd
mkdir out
cd out
cmake ../
make
sudo make install
```

I comandi precedenti compilano e installano la versione corrente di CMake in /usr/local/bin. Eseguire questo comando per verificare che la versione sia >= 3.8 e che la modalità server sia abilitata:

```cmd
/usr/local/bin/cmake –version
cmake -E capabilities
```

## <a name="see-also"></a>Vedere anche
[Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)  
[CMake Tools for Visual C++](../ide/cmake-tools-for-visual-cpp.md) (Strumenti di CMake per Visual C++)

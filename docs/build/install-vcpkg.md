---
title: Installare vcpkg in Windows, Linux e macOS
description: Informazioni su come installare e aggiornare vcpkg in Windows, macOS e Linux.
ms.date: 12/17/2020
ms.topic: reference
ms.technology: cpp-ide
ms.openlocfilehash: aee9561dc94164c08e4d69ec49f60961392c1854
ms.sourcegitcommit: 2b2c3fa9244e31db35ea33554dea0efcab490f3c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/18/2020
ms.locfileid: "97684264"
---
# <a name="install-vcpkg-on-windows-linux-and-macos"></a>Installare vcpkg in Windows, Linux e macOS

Per installare vcpkg, eseguire un clone locale (Copy) dal repository GitHub vcpkg.

## <a name="install-vcpkg"></a>Installare vcpkg

Scegliere la piattaforma per istruzioni specifiche:

### <a name="linux"></a>[Linux](#tab/linux)

Prerequisiti per Linux:

- [Git](https://git-scm.com/downloads)
- g + + versione 6 o successiva

#### <a name="to-install-linux-development-tools"></a>Per installare gli strumenti di sviluppo Linux

Diverse distribuzioni Linux possono richiedere l'installazione di pacchetti diversi. Seguire queste istruzioni su Debian, Ubuntu, popOS e altre distribuzioni basate su Debian:

1. In una finestra della shell eseguire questo comando:

   **`sudo apt-get update`**

1. Al termine dell'aggiornamento, eseguire il comando seguente:

   **`sudo apt-get install build-essential tar curl zip unzip`**

Seguire queste istruzioni su CentOS:

1. In una finestra della shell eseguire questo comando:

   **`sudo yum install centos-release-scl`**

1. Quindi, installare e abilitare gli strumenti di sviluppo eseguendo i comandi seguenti:

   **`sudo yum install devtoolset-7`**

   **`scl enable devtoolset-7 bash`**

Per qualsiasi altra distribuzione, verificare che sia in corso l'installazione di g + + 6 o versione successiva.

#### <a name="to-copy-and-set-up-vcpkg-on-linux"></a>Per copiare e configurare vcpkg in Linux

1. In una finestra della shell creare una directory per l'istanza clonata di vcpkg. Se si prevede di installare le librerie per destinazioni di compilazione diverse, è consigliabile includere la destinazione nel nome della directory. Si consiglia di utilizzare nomi di percorsi brevi senza spazi, *`./x64`* ad esempio o *`./iot`* , poiché altrimenti potrebbero verificarsi problemi di percorso per alcuni sistemi di compilazione delle porte. Nella finestra della shell passare alla directory appena creata.

1. Clonare il repository vcpkg da GitHub: [https://github.com/Microsoft/vcpkg](https://github.com/Microsoft/vcpkg) .

   > **`git clone https://github.com/microsoft/vcpkg`**

   Questo comando crea una copia locale del repository in una *`vcpkg`* sottodirectory. Questo percorso è la *directory radice* vcpkg per questo clone di vcpkg.

1. Passare quindi alla directory radice vcpkg ed eseguire il comando del programma di avvio automatico vcpkg:

   > **`./bootstrap-vcpkg.sh`**

   Il programma di avvio automatico configura vcpkg con le posizioni del compilatore, degli strumenti e delle librerie standard.

### <a name="macos"></a>[macOS](#tab/macos)

Prerequisiti per macOS:

- strumenti di sviluppo macOS
- In macOS 10,14 o versioni precedenti sono necessari anche:
  - Homebrew
  - g + + versione 6 o successiva

#### <a name="to-install-macos-developer-tools"></a>Per installare gli strumenti di sviluppo macOS

1. In macOS 10,15 eseguire questo comando nel terminale:

   **`xcode-select --install`**

   Quindi, seguire le istruzioni visualizzate nella finestra che viene visualizzata.

In macOS 10,14 e precedenti è anche necessario installare g + + da homebrew. Questa procedura è necessaria solo se si usa una versione di macOS precedente alla 10,15.

#### <a name="to-install-gcc-for-macos-before-1015"></a>Per installare GCC per macOS prima del 10,15

1. Per installare homebrew, aprire il terminale e quindi eseguire il comando seguente:

   **`/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install.sh)"`**

1. Per installare una versione aggiornata di GCC, eseguire questo comando nel terminale:

   **`brew install gcc`**

#### <a name="to-copy-and-set-up-vcpkg-on-macos"></a>Per copiare e configurare vcpkg in macOS

1. In terminale creare una directory per l'istanza clonata di vcpkg. Se si prevede di installare le librerie per destinazioni di compilazione diverse, è consigliabile includere la destinazione nel nome della directory. Si consiglia di utilizzare nomi di percorsi brevi senza spazi, *`./macos`* ad esempio o *`./iot`* , poiché altrimenti potrebbero verificarsi problemi di percorso per alcuni sistemi di compilazione delle porte. Nel terminale passare alla directory appena creata.

1. Clonare il repository vcpkg da GitHub: [https://github.com/Microsoft/vcpkg](https://github.com/Microsoft/vcpkg) .

   > **`git clone https://github.com/microsoft/vcpkg`**

   Questo comando crea una copia locale del repository in una *`vcpkg`* sottodirectory. Questo percorso è la *directory radice* vcpkg per questo clone di vcpkg.

1. Passare quindi alla directory radice vcpkg ed eseguire il comando del programma di avvio automatico vcpkg:

   > **`./bootstrap-vcpkg.sh`**

   Il programma di avvio automatico configura vcpkg con le posizioni del compilatore, degli strumenti e delle librerie standard.

### <a name="windows"></a>[Windows](#tab/windows)

Prerequisiti:

- Windows 7 o versioni successive
- [Git per Windows](https://git-scm.com/downloads)
- [Visual Studio](https://visualstudio.microsoft.com/) 2015 Update 3 o versione successiva con il Language Pack per la lingua inglese

#### <a name="to-copy-and-set-up-vcpkg-on-windows"></a>Per copiare e configurare vcpkg in Windows

1. In una finestra del prompt dei comandi creare una directory per l'istanza clonata di vcpkg. Se si prevede di installare le librerie per destinazioni di compilazione diverse, è consigliabile includere la destinazione nel nome della directory. Si consiglia di utilizzare nomi di percorsi brevi senza spazi, *`C:\src\win32\`* ad esempio o *`C:\dev\iot\`* , poiché altrimenti potrebbero verificarsi problemi di percorso per alcuni sistemi di compilazione delle porte. Nella finestra di comando passare alla directory appena creata.

1. Clonare il repository vcpkg da GitHub: [https://github.com/Microsoft/vcpkg](https://github.com/Microsoft/vcpkg) .

   > **`git clone https://github.com/microsoft/vcpkg`**

   Questo comando crea una copia locale del repository in una *`vcpkg`* sottodirectory. Questo percorso è la *directory radice* vcpkg per questo clone di vcpkg.

1. Al termine del download, passare alla *`vcpkg`* directory nella finestra del prompt dei comandi.

1. Nella directory radice di vcpkg eseguire il comando del programma di avvio automatico vcpkg:

   > **`bootstrap-vcpkg.bat`**

   Il programma di avvio automatico configura vcpkg con i percorsi degli strumenti di Microsoft C/C++, delle librerie e dei Windows SDK.

---

Dopo aver configurato vcpkg, è possibile installare le librerie. Per altre informazioni, vedere [Manage Libraries with vcpkg](manage-libraries-with-vcpkg.md). vcpkg può anche essere integrato con Visual Studio in Windows o con Visual Studio Code su qualsiasi piattaforma. Per altre informazioni, vedere [integrare vcpkg](integrate-vcpkg.md).

## <a name="update-vcpkg"></a>Aggiornare vcpkg

Gestione pacchetti vcpkg viene aggiornato regolarmente su GitHub. Per aggiornare il clone di vcpkg alla versione più recente, dalla directory radice di vcpkg, eseguire **`git pull`** . Questo comando Sincronizza la copia di vcpkg con la versione su GitHub. Al termine del download, eseguire di nuovo il programma di avvio automatico. Il programma di avvio automatico ricompila il programma vcpkg, ma lascia invariate le librerie installate.

## <a name="uninstall-vcpkg"></a>Disinstallare vcpkg

Per disinstallare vcpkg, è sufficiente eliminare la *`vcpkg`* Directory. L'eliminazione di questa directory Disinstalla la distribuzione di vcpkg e tutte le librerie installate da vcpkg.

Tuttavia, se è stato eseguito **`vcpkg integrate install`** , è necessario eseguire **`vcpkg integrate remove`** per assicurarsi che l'integrazione venga pulita, prima che la cartella venga rimossa. Per altre informazioni, vedere [integrare vcpkg](integrate-vcpkg.md).

## <a name="see-also"></a>Vedere anche

[vcpkg: Gestione pacchetti C++ per Windows, Linux e macOS](./vcpkg.md)\
[vcpkg su GitHub](https://github.com/Microsoft/vcpkg)\
[Integrare vcpkg](integrate-vcpkg.md)\
[Gestire le librerie con vcpkg](manage-libraries-with-vcpkg.md)\
[informazioni di riferimento sulla riga di comando vcpkg](vcpkg-command-line-reference.md)\
[Guida introduttiva](https://github.com/microsoft/vcpkg/blob/master/docs/index.md)\
[Domande frequenti](https://github.com/microsoft/vcpkg/blob/master/docs/about/faq.md)

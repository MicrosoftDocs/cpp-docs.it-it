---
title: Creare un progetto CMake Linux in Visual Studio
description: Come creare un progetto CMake per Linux in Visual Studio
ms.date: 08/06/2020
ms.assetid: f8707b32-f90d-494d-ae0b-1d44425fdc25
ms.openlocfilehash: 8a960f89274fbbf235b88fdcd787ee6de8ab988b
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92921802"
---
# <a name="create-a-cmake-linux-project-in-visual-studio"></a>Creare un progetto CMake Linux in Visual Studio

::: moniker range="msvc-140"
Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare **l'elenco a discesa delle versioni posizionato** sopra il sommario per **Visual Studio 2017** o **Visual Studio 2019** .
::: moniker-end

::: moniker range=">=msvc-150"

Si consiglia di usare CMake per i progetti multipiattaforma o che verranno resi open source. È possibile usare i progetti CMake per compilare ed eseguire il debug dello stesso codice sorgente in Windows, nel sottosistema Windows per Linux (WSL) e nei sistemi remoti.

## <a name="before-you-begin"></a>Prima di iniziare

Assicurarsi prima di tutto che sia installato il carico di lavoro di Visual Studio Linux, incluso il componente CMake. Questo è il carico di lavoro di **sviluppo Linux con C++** nel programma di installazione di Visual Studio. Vedere [installare il carico di lavoro C++ Linux in Visual Studio](download-install-and-setup-the-linux-development-workload.md) se non si è certi che sia installato.

Verificare inoltre che nel computer remoto siano installati gli elementi seguenti:

- gcc
- gdb
- rsync
- zip
- Ninja-Build (Visual Studio 2019 o versione successiva)
::: moniker-end

::: moniker range="msvc-150"
Il supporto di CMake in Visual Studio richiede il supporto della modalità server introdotta in CMake 3,8. Per una variante CMake fornita da Microsoft, scaricare i file binari predefiniti più recenti all'indirizzo [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases) .

I file binari vengono installati in `~/.vs/cmake` . Dopo la distribuzione dei file binari, il progetto viene rigenerato automaticamente. Se la CMake specificata dal `cmakeExecutable` campo in *CMakeSettings.json* non è valida (non esiste o è una versione non supportata) e i file binari predefiniti sono presenti, Visual Studio Ignora `cmakeExecutable` e usa i file binari predefiniti.

Visual Studio 2017 non può creare un progetto CMake da zero, ma è possibile aprire una cartella che contiene un progetto CMake esistente, come descritto nella sezione successiva.
::: moniker-end

::: moniker range=">=msvc-160"
È possibile usare Visual Studio 2019 per compilare ed eseguire il debug in un sistema Linux remoto o in un WSL e CMake verrà richiamato nel sistema. È necessario installare CMake 3,14 o versione successiva nel computer di destinazione.

Verificare che il computer di destinazione disponga di una versione recente di CMake. Spesso, la versione offerta da Gestione pacchetti predefinita di una distribuzione non è abbastanza recente per supportare tutte le funzionalità richieste da Visual Studio. Visual Studio 2019 rileva se nel sistema Linux è installata una versione recente di CMake. Se non viene trovato alcun valore, Visual Studio Visualizza una barra informazioni nella parte superiore del riquadro dell'editor. Consente di installare CMake da [https://github.com/Microsoft/CMake/releases](https://github.com/Microsoft/CMake/releases) .

Con Visual Studio 2019, è possibile creare un progetto CMake da zero o aprire un progetto CMake esistente. Per creare un nuovo progetto CMake, seguire le istruzioni riportate di seguito. In alternativa, andare avanti per [aprire una cartella del progetto CMake](#open-a-cmake-project-folder) se si dispone già di un progetto CMake.

## <a name="create-a-new-linux-cmake-project"></a>Creare un nuovo progetto CMake per Linux

Per creare un nuovo progetto CMake per Linux in Visual Studio 2019:

1. Selezionare **File > Nuovo progetto** in Visual Studio o premere **CTRL + MAIUSC + N** .
1. Impostare **Linguaggio** su **C++** e cercare "CMake". Scegliere quindi **Avanti** . Immettere un **nome** e una **posizione** e scegliere **Crea** .

In alternativa, è possibile aprire il proprio progetto CMake in Visual Studio 2019. Nella sezione seguente viene illustrato come.

Visual Studio crea un file di *CMakeLists.txt* minimo con solo il nome del file eseguibile e la versione minima di CMake richiesta. È possibile modificare manualmente questo file come si preferisce. Visual Studio non sovrascriverà mai le modifiche.

Per comprendere, modificare e creare gli script CMake in Visual Studio 2019, vedere le risorse seguenti:

- [Documentazione in-Editor per CMake in Visual Studio](https://devblogs.microsoft.com/cppblog/in-editor-documentation-for-cmake-in-visual-studio/)
- [Esplorazione del codice per gli script CMake](https://devblogs.microsoft.com/cppblog/code-navigation-for-cmake-scripts/)
- [Aggiungi, Rimuovi e Rinomina con facilità i file e le destinazioni nei progetti CMake](https://devblogs.microsoft.com/cppblog/easily-add-remove-and-rename-files-and-targets-in-cmake-projects/)
::: moniker-end

::: moniker range=">=msvc-150"

## <a name="open-a-cmake-project-folder"></a>Aprire una cartella del progetto CMake

Quando si apre una cartella che contiene un progetto CMake esistente, Visual Studio usa le variabili nella cache CMake per configurare automaticamente IntelliSense e le compilazioni. Le impostazioni di configurazione e debug locali vengono archiviate in file JSON. Facoltativamente, è possibile condividere questi file con altri utenti che usano Visual Studio.

Visual Studio non modifica i file di *CMakeLists.txt* . Ciò consente ad altri utenti che lavorano sullo stesso progetto di continuare a usare gli strumenti esistenti. Visual Studio rigenera la cache quando si salvano le modifiche in *CMakeLists.txt* , o in alcuni casi, per *CMakeSettings.jssu* . Se si usa una configurazione **della cache esistente** , Visual Studio non modifica la cache.

Per informazioni generali sul supporto di CMake in Visual Studio, vedere [Progetti CMake in Visual Studio](../build/cmake-projects-in-visual-studio.md). Leggere questo articolo prima di continuare.

Per iniziare, scegliere **file**  >  **Apri**  >  **cartella** dal menu principale oppure digitare `devenv.exe <foldername>` in una finestra del [prompt dei comandi](../build/building-on-the-command-line.md) per gli sviluppatori. La cartella aperta dovrebbe contenere un file di *CMakeLists.txt* , insieme al codice sorgente.

Nell'esempio seguente vengono illustrati un semplice file di *CMakeLists.txt* e un file con estensione cpp:

```cpp
// hello.cpp

#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hello from Linux CMake" << std::endl;
}
```

*CMakeLists.txt* :

```txt
cmake_minimum_required(VERSION 3.8)
project (hello-cmake)
add_executable(hello-cmake hello.cpp)
```

## <a name="next-steps"></a>Passaggi successivi

[Configurare un progetto CMake per Linux](cmake-linux-configure.md)

## <a name="see-also"></a>Vedere anche

[Progetti CMake in Visual Studio](../build/cmake-projects-in-visual-studio.md)<br/>
::: moniker-end

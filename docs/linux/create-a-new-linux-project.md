---
title: Creare un nuovo progetto C++ Linux in Visual Studio
ms.date: 10/24/2019
description: Creare un nuovo progetto Linux basato su MSBuild in Visual Studio.Create a new MSBuild-based Linux project in Visual Studio.
ms.assetid: 5d7c1d67-bc31-4f96-8622-2b4cf91372fd
ms.openlocfilehash: 1e79dd50756b71aabae7ccec75e57178898e7720
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364345"
---
# <a name="create-a-new-linux-project"></a>Creare un nuovo progetto Linux

::: moniker range="vs-2015"

I progetti Linux sono disponibili in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range="vs-2017"

Verificare prima che sia installato il **carico di lavoro per lo sviluppo di applicazioni Linux** per Visual Studio. Per altre informazioni, vedere [Scaricare, installare e configurare il carico di lavoro Linux](download-install-and-setup-the-linux-development-workload.md).

Per la compilazione multipiattaforma, si consiglia di utilizzare CMake.For cross-platform compilation, we recommend using CMake. CMake supporto è più completo in Visual Studio 2019. Se CMake non è un'opzione e si dispone di una soluzione di Windows Visual Studio esistente che si desidera estendere per la compilazione per Linux, è possibile aggiungere un progetto Linux di Visual Studio alla soluzione Windows, insieme a un progetto **elementi condivisi.** Inserire il codice condiviso tra entrambe le piattaforme nel progetto Elementi condivisi e aggiungere un riferimento a tale progetto dai progetti Windows e Linux.Put the code that is shared between both platforms in the Shared Items project, and add a reference to that project from the Windows and Linux projects.

## <a name="to-create-a-new-linux-project"></a>Per creare un nuovo progetto Linux

Per creare un nuovo progetto Linux in Visual Studio 2017, attenersi alla seguente procedura:

1. Selezionare **File > Nuovo progetto** in Visual Studio o premere **CTRL + MAIUSC + N**.
1. Selezionare il nodo **Visual C++ > Multipiattaforma > Linux**, quindi selezionare il tipo di progetto che si vuole creare. Immettere un **nome** e una **posizione**, quindi scegliere **OK**.

   ![Nuovo progetto Linux](media/newproject.png)

   | Tipo progetto | Descrizione |
   | ------------ | --- |
   | **Intermittente (Raspberry)**           | Progetto destinato a un dispositivo Raspberry Pi con codice di esempio per rendere un LED intermittente |
   | **Applicazione Console (Linux)** | Progetto destinato a tutti i computer Linux con codice di esempio per inviare testo alla console |
   | **Progetto vuoto (Linux)**       | Progetto destinato a tutti i computer Linux senza codice di esempio |
   | **Progetto makefile (Linux)**    | Progetto destinato a tutti i computer Linux compilato tramite un sistema di compilazione makefile standard |

## <a name="next-steps"></a>Passaggi successivi

[Configurare un progetto Linux](configure-a-linux-project.md)

::: moniker-end

::: moniker range="vs-2019"

Verificare prima che sia installato il **carico di lavoro per lo sviluppo di applicazioni Linux** per Visual Studio. Per ulteriori informazioni, consultate [Scaricare, installare e configurare il carico](download-install-and-setup-the-linux-development-workload.md)di lavoro Linux.

Quando si crea un nuovo progetto C++ per Linux in Visual Studio, è possibile scegliere di creare un progetto di Visual Studio o un progetto CMake. Questo articolo descrive come creare un progetto di Visual Studio. In general, for new projects that might include open-source code or that you intend to compile for cross-platform development, we recommend that you use CMake with Visual Studio. Con un progetto CMake è possibile compilare ed eseguire il debug dello stesso progetto sia su Windows che su Linux. Per ulteriori informazioni, consultate [Creare e configurare un progetto Linux CMake.](cmake-linux-project.md)

Se si dispone di una soluzione di Windows Visual Studio esistente che si desidera estendere per compilare per Linux e CMake non è un'opzione, è possibile aggiungere un progetto Linux di Visual Studio alla soluzione Windows, insieme a un progetto **elementi condivisi.** Inserire il codice condiviso tra entrambe le piattaforme nel progetto Elementi condivisi e aggiungere un riferimento a tale progetto dai progetti Windows e Linux.Put the code that is shared between both platforms in the Shared Items project, and add a reference to that project from the Windows and Linux projects.

## <a name="to-create-a-new-linux-project"></a>Per creare un nuovo progetto Linux

Per creare un nuovo progetto Linux in Visual Studio 2019, attenersi alla seguente procedura:

1. Selezionare **File > Nuovo progetto** in Visual Studio o premere **CTRL + MAIUSC + N**.
1. Impostare **Linguaggio** su **C++** e cercare "Linux". Selezionare il tipo di progetto da creare, quindi scegliere **Avanti**. Immettere un **nome** e una **posizione** e scegliere **Crea**.

   ![Nuovo progetto Linux](media/newproject-vs2019.png)

   | Tipo progetto | Descrizione |
   | ------------ | --- |
   | **Intermittente (Raspberry)**           | Progetto destinato a un dispositivo Raspberry Pi con codice di esempio per rendere un LED intermittente |
   | **Applicazione Console (Linux)** | Progetto destinato a tutti i computer Linux con codice di esempio per inviare testo alla console |
   | **Progetto vuoto (Linux)**       | Progetto destinato a tutti i computer Linux senza codice di esempio |
   | **Progetto makefile (Linux)**    | Progetto destinato a tutti i computer Linux compilato tramite un sistema di compilazione makefile standard |

## <a name="next-steps"></a>Passaggi successivi

[Configurare un progetto Linux](configure-a-linux-project.md)

::: moniker-end

---
title: Creare un nuovo progetto C++ Linux in Visual Studio
ms.date: 06/11/2019
ms.assetid: 5d7c1d67-bc31-4f96-8622-2b4cf91372fd
ms.openlocfilehash: 0377e21177b29d998fc3e66bb1863dbc127c1fbe
ms.sourcegitcommit: fde637f823494532314790602c2819f889706ff6
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/13/2019
ms.locfileid: "67042703"
---
# <a name="create-a-new-linux-project"></a>Creare un nuovo progetto Linux

::: moniker range="vs-2015"

I progetti Linux sono disponibili in Visual Studio 2017 e versioni successive.

::: moniker-end

Verificare prima che sia installato il **carico di lavoro per lo sviluppo di applicazioni Linux** per Visual Studio. Per altre informazioni, vedere [Scaricare, installare e configurare il carico di lavoro Linux](download-install-and-setup-the-linux-development-workload.md).

Quando si crea un nuovo progetto C++ per Linux in Visual Studio, è possibile scegliere di creare un progetto di Visual Studio o un progetto CMake. Questo articolo descrive come creare un progetto di Visual Studio. Per informazioni su come creare e usare progetti CMake esistenti, vedere [Creare e configurare un progetto CMake per Linux](cmake-linux-project.md).

## <a name="to-create-a-new-linux-project"></a>Per creare un nuovo progetto Linux

Per creare un nuovo progetto Linux in Visual Studio, seguire questa procedura:

::: moniker range="vs-2019"

1. Selezionare **File > Nuovo progetto** in Visual Studio o premere **CTRL + MAIUSC + N**.
1. Impostare **Linguaggio** su **C++** e cercare "Linux". Selezionare il tipo di progetto da creare, quindi scegliere **Avanti**. Immettere un **nome** e una **posizione** e scegliere **Crea**.

   ![Nuovo progetto Linux](media/newproject-vs2019.png)

::: moniker-end

::: moniker range="vs-2017"

1. Selezionare **File > Nuovo progetto** in Visual Studio o premere **CTRL + MAIUSC + N**.
1. Selezionare il nodo **Visual C++ > Multipiattaforma > Linux**, quindi selezionare il tipo di progetto che si vuole creare. Immettere un **nome** e una **posizione**, quindi scegliere **OK**.

   ![Nuovo progetto Linux](media/newproject.png)

::: moniker-end

   | Tipo progetto | DESCRIZIONE |
   | ------------ | --- |
   | **Intermittente (Raspberry)**           | Progetto destinato a un dispositivo Raspberry Pi con codice di esempio per rendere un LED intermittente |
   | **Applicazione Console (Linux)** | Progetto destinato a tutti i computer Linux con codice di esempio per inviare testo alla console |
   | **Progetto vuoto (Linux)**       | Progetto destinato a tutti i computer Linux senza codice di esempio |
   | **Progetto makefile (Linux)**    | Progetto destinato a tutti i computer Linux compilato tramite un sistema di compilazione makefile standard |

   ::: moniker range="vs-2019"

   Visual Studio 2019 consente di creare un nuovo progetto CMake. Per altre informazioni, vedere [Creare e configurare un progetto CMake per Linux](cmake-linux-project.md).
   
   ::: moniker-end

## <a name="next-steps"></a>Passaggi successivi

[Configurare un progetto Linux](configure-a-linux-project.md)

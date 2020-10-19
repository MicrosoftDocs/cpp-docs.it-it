---
title: Creare un progetto C++ MSBuild per Linux in Visual Studio
ms.date: 10/15/2020
description: Creare un nuovo progetto Linux basato su MSBuild in Visual Studio.
ms.assetid: 5d7c1d67-bc31-4f96-8622-2b4cf91372fd
ms.openlocfilehash: dddb9dbdee4cefc58a2bd5ccefa493b25e1c9f24
ms.sourcegitcommit: f19f02f217b80804ab321d463c76ce6f681abcc6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/19/2020
ms.locfileid: "92176291"
---
# <a name="create-a-linux-msbuild-c-project-in-visual-studio"></a>Creare un progetto C++ MSBuild per Linux in Visual Studio

::: moniker range="vs-2015"

I progetti Linux sono disponibili in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range="vs-2017"

Verificare prima che sia installato il **carico di lavoro per lo sviluppo di applicazioni Linux** per Visual Studio. Per altre informazioni, vedere [Scaricare, installare e configurare il carico di lavoro Linux](download-install-and-setup-the-linux-development-workload.md).

Per la compilazione multipiattaforma, è consigliabile usare CMake. Il supporto di CMake è più completo in Visual Studio 2019. Se CMake non è un'opzione e si ha una soluzione Windows di Visual Studio esistente che si vuole estendere per la compilazione per Linux, è possibile aggiungere un progetto Linux di Visual Studio alla soluzione Windows, insieme a un progetto **elementi condivisi** . Inserire il codice condiviso tra entrambe le piattaforme nel progetto elementi condivisi e aggiungere un riferimento a tale progetto dai progetti Windows e Linux.

## <a name="to-create-a-new-linux-project"></a>Per creare un nuovo progetto Linux

Per creare un nuovo progetto Linux in Visual Studio 2017, seguire questa procedura:

1. Selezionare **File > Nuovo progetto** in Visual Studio o premere **CTRL + MAIUSC + N**.
1. Selezionare il nodo **Visual C++ > Multipiattaforma > Linux**, quindi selezionare il tipo di progetto che si vuole creare. Immettere un **nome** e una **posizione**, quindi scegliere **OK**.

   ![Screenshot che mostra la finestra di dialogo nuovo progetto con Visual C Plus Plus > multipiattaforma > Linux selezionata, tutti i tipi di progetto indicati e le caselle di testo nome e percorso.](media/newproject.png)

   | Tipo progetto | Descrizione |
   | ------------ | --- |
   | **Intermittente (Raspberry)** | Progetto destinato a un dispositivo Raspberry Pi con codice di esempio per rendere un LED intermittente |
   | **Applicazione Console (Linux)** | Progetto destinato a tutti i computer Linux con codice di esempio per inviare testo alla console |
   | **Progetto vuoto (Linux)** | Progetto destinato a tutti i computer Linux senza codice di esempio |
   | **Progetto makefile (Linux)** | Progetto destinato a tutti i computer Linux compilato tramite un sistema di compilazione makefile standard |

## <a name="next-steps"></a>Passaggi successivi

[Configurare un progetto Linux MSBuild](configure-a-linux-project.md)

::: moniker-end

::: moniker range="vs-2019"

Verificare prima che sia installato il **carico di lavoro per lo sviluppo di applicazioni Linux** per Visual Studio. Per altre informazioni, vedere [scaricare, installare e configurare il carico di lavoro Linux](download-install-and-setup-the-linux-development-workload.md).

Quando si crea un nuovo progetto C++ per Linux in Visual Studio, è possibile scegliere di creare un progetto di Visual Studio o un progetto CMake. Questo articolo descrive come creare un progetto di Visual Studio. In generale, per i nuovi progetti che possono includere codice open source o che si intende compilare per lo sviluppo multipiattaforma, è consigliabile usare CMake con Visual Studio. Con un progetto CMake è possibile compilare ed eseguire il debug dello stesso progetto sia in Windows che in Linux. Per altre informazioni, vedere [creare e configurare un progetto CMake per Linux](cmake-linux-project.md).

Se si dispone di una soluzione Windows di Visual Studio esistente che si desidera estendere per la compilazione per Linux e CMake non è un'opzione, è possibile aggiungere un progetto di Visual Studio Linux alla soluzione Windows, insieme a un progetto di **elementi condivisi** . Inserire il codice condiviso tra entrambe le piattaforme nel progetto elementi condivisi e aggiungere un riferimento a tale progetto dai progetti Windows e Linux.

## <a name="create-a-new-linux-project"></a>Creare un nuovo progetto Linux

Per creare un nuovo progetto Linux in Visual Studio 2019, seguire questa procedura:

1. Selezionare **File > nuovo progetto** in Visual Studio oppure premere **CTRL + MAIUSC + N**. Viene visualizzata la finestra di dialogo Crea un nuovo progetto.
1. Nella casella di testo **Cerca modelli** immettere **Linux** per elencare i modelli disponibili per i progetti Linux.
1. Selezionare il tipo di progetto da creare, ad esempio **applicazione console**, quindi scegliere **Avanti**. Immettere un **nome** e una **posizione** e scegliere **Crea**.

   ![Screenshot della finestra di dialogo nuovo progetto con l'elenco a discesa lingua impostato su C++ e l'elenco a discesa piattaforma impostato su Linux.](media/newproject-vs2019.png)

   | Tipo progetto | Descrizione |
   | ------------ | --- |
   | **Progetto Raspberry Pi** | Progetto destinato a un dispositivo Raspberry Pi con codice di esempio per rendere un LED intermittente |
   | **Applicazione console** | Progetto destinato a tutti i computer Linux con codice di esempio per inviare testo alla console |
   | **Progetto vuoto** | Progetto destinato a tutti i computer Linux senza codice di esempio |
   | **Progetto Makefile** | Progetto destinato a tutti i computer Linux compilato tramite un sistema di compilazione makefile standard |
   | **Progetto CMake** | Progetto destinato a tutti i computer Linux, compilati con il sistema di compilazione CMake |

## <a name="next-steps"></a>Passaggi successivi

[Configurare un progetto MSBuild Linux](configure-a-linux-project.md)

::: moniker-end

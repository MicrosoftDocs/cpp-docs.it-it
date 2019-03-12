---
title: Creare un nuovo progetto C++ Linux in Visual Studio
ms.date: 09/12/2018
ms.assetid: 5d7c1d67-bc31-4f96-8622-2b4cf91372fd
ms.openlocfilehash: bd5ab1d2bc1077f366082bf8767f8f690173ac8b
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57745156"
---
# <a name="create-a-new-linux-project"></a>Creare un nuovo progetto Linux

Verificare prima che sia installato il **carico di lavoro per lo sviluppo di applicazioni Linux** per Visual Studio. Per altre informazioni, vedere [Scaricare, installare e configurare il carico di lavoro Linux](download-install-and-setup-the-linux-development-workload.md).

Quando si crea un nuovo progetto C++ in Visual Studio per Linux, è possibile creare un progetto di Visual Studio o un progetto CMake. Questo argomento illustra come creare un progetto di Visual Studio. Per informazioni sulla creazione e l'utilizzo di progetti CMake esistenti, vedere [Configurare un progetto CMake per Linux](cmake-linux-project.md).

Per creare un nuovo progetto Linux in Visual Studio, seguire questa procedura:

1. Selezionare **File > Nuovo progetto** in Visual Studio o premere **CTRL + MAIUSC + N**.
1. Selezionare il nodo **Visual C++ > Multipiattaforma > Linux**, quindi selezionare il tipo di progetto che si vuole creare, immettere un nome e un percorso e fare clic su OK.

   ![Nuovo progetto Linux](media/newproject.png)

   | Tipo progetto | Description
   | ------------ | ---
   | **Intermittente (Raspberry)**           | Progetto destinato a un dispositivo Raspberry Pi con codice di esempio scritto per rendere un LED intermittente
   | **Applicazione Console (Linux)** | Progetto destinato a tutti i computer Linux con codice di esempio scritto per inviare testo alla console
   | **Progetto vuoto (Linux)**       | Progetto destinato a tutti i computer Linux senza codice di esempio scritto
   | **Progetto makefile (Linux)**    | Progetto destinato a tutti i computer Linux che verrà compilato tramite un sistema di compilazione makefile standard

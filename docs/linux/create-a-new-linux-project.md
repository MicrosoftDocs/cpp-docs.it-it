---
title: Creare un nuovo progetto C++ Linux in Visual Studio | Microsoft Docs
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-linux
ms.tgt_pltfrm: Linux
ms.topic: conceptual
ms.assetid: 5d7c1d67-bc31-4f96-8622-2b4cf91372fd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- linux
ms.openlocfilehash: 71faf00e5acb980b9ab6f5cafa6a81bb360e7ea2
ms.sourcegitcommit: 8c2de32e96c84d0147af3cce1e89e4f28707ff12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/26/2018
ms.locfileid: "50143640"
---
# <a name="create-a-new-linux-project"></a>Creare un nuovo progetto Linux

Verificare prima che sia installato il **carico di lavoro per lo sviluppo di applicazioni Linux** per Visual Studio. Per altre informazioni, vedere [Scaricare, installare e configurare il carico di lavoro Linux](download-install-and-setup-the-linux-development-workload.md).

Quando si crea un nuovo progetto C++ in Visual Studio per Linux, è possibile creare un progetto di Visual Studio o un progetto CMake. Questo argomento illustra come creare un progetto di Visual Studio. Per informazioni sulla creazione e l'utilizzo di progetti CMake esistenti, vedere [Configurare un progetto CMake per Linux](cmake-linux-project.md).

Per creare un nuovo progetto Linux in Visual Studio, seguire questa procedura:

1. Selezionare **File > Nuovo progetto** in Visual Studio o premere **CTRL + MAIUSC + N**.
1. Selezionare il nodo **Visual C++ > Multipiattaforma > Linux**, quindi selezionare il tipo di progetto che si vuole creare, immettere un nome e un percorso e fare clic su OK.

   ![Nuovo progetto Linux](media/newproject.png)

   | Tipo progetto | Descrizione
   | ------------ | ---
   | **Intermittente (Raspberry)**           | Progetto destinato a un dispositivo Raspberry Pi con codice di esempio scritto per rendere un LED intermittente
   | **Applicazione Console (Linux)** | Progetto destinato a tutti i computer Linux con codice di esempio scritto per inviare testo alla console
   | **Progetto vuoto (Linux)**       | Progetto destinato a tutti i computer Linux senza codice di esempio scritto
   | **Progetto makefile (Linux)**    | Progetto destinato a tutti i computer Linux che verrà compilato tramite un sistema di compilazione makefile standard


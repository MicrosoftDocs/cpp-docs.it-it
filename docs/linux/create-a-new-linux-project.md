---
title: Creare un nuovo progetto C++ Linux in Visual Studio | Microsoft Docs
ms.custom: ''
ms.date: 07/20/2018
ms.technology:
- cpp-linux
ms.tgt_pltfrm: Linux
ms.topic: conceptual
ms.assetid: 5d7c1d67-bc31-4f96-8622-2b4cf91372fd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
- linux
ms.openlocfilehash: f64f8eaf09e92df3dd776180db5904af039d6ad7
ms.sourcegitcommit: 7eadb968405bcb92ffa505e3ad8ac73483e59685
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 07/23/2018
ms.locfileid: "39207970"
---
# <a name="create-a-new-linux-project"></a>Creare un nuovo progetto Linux
Quando si scrive codice C++ in Visual Studio per Linux, è possibile creare un progetto di Visual Studio o un progetto CMake. Questo argomento illustra come creare un progetto di Visual Studio. Per informazioni sui progetti CMake, vedere [Configurare un progetto CMake per Linux](cmake-linux-project.md).

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


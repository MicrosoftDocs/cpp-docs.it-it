---
title: Creare un nuovo progetto Linux | Microsoft Docs
ms.custom: 
ms.date: 11/16/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-linux
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 5d7c1d67-bc31-4f96-8622-2b4cf91372fd
author: BrianPeek
ms.author: brpeek
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: dff1e9e03911f65dfcffcd078e0739224f73f4aa
ms.openlocfilehash: e0a92f82413702c639af4a2cd4c4cc62abcce2b2
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---

# <a name="create-a-new-linux-project"></a>Creare un nuovo progetto Linux

Per creare un nuovo progetto Linux in Visual Studio, seguire questa procedura:

1. Selezionare **File > Nuovo progetto** in Visual Studio o premere **CTRL + MAIUSC + N**.
1. Selezionare il nodo **Modelli > Altri linguaggi > Visual C++ > Multipiattaforma > Linux**, quindi selezionare il tipo di progetto che si vuole creare, immettere un nome e un percorso e fare clic su OK.

   ![Nuovo progetto Linux](media/newproject.png)

   | Tipo progetto | Descrizione
   | ------------ | ---
   | **Intermittente (Raspberry)**           | Progetto destinato a un dispositivo Raspberry Pi con codice di esempio scritto per rendere un LED intermittente
   | **Applicazione Console (Linux)** | Progetto destinato a tutti i computer Linux con codice di esempio scritto per inviare testo alla console
   | **Progetto vuoto (Linux)**       | Progetto destinato a tutti i computer Linux senza codice di esempio scritto
   | **Progetto makefile (Linux)**    | Progetto destinato a tutti i computer Linux che verrà compilato tramite un sistema di compilazione makefile standard



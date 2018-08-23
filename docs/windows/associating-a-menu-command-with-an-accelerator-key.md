---
title: Associazione di un comando di Menu con un tasto di scelta rapida | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- keyboard shortcuts, menu association
- commands, associating menu commands with accelerator keys
- menu commands, associating with keyboard shortcuts
ms.assetid: ad2de43f-b20a-4c9f-bda8-0420179da48c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5b1411617df3736300536e84e07da0bb5df3a856
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599950"
---
# <a name="associating-a-menu-command-with-an-accelerator-key"></a>Associazione di un comando di menu a un tasto di scelta rapida

Spesso è utile che una voce di menu e una combinazione di tasti eseguano lo stesso comando del programma. Eseguire questa operazione usando il **Menu** editor assegnare lo stesso identificatore di risorsa per il comando di menu e una voce nella tabella di tasti di scelta rapida dell'applicazione. Quindi si modifica la [Didascalia](../windows/menu-command-properties.md) del comando di menu per visualizzare il nome del tasto di scelta rapida.

### <a name="to-associate-a-menu-command-with-an-accelerator-key"></a>Per associare un comando di menu a un tasto di scelta rapida

1. Nell'editor **Menu** selezionare il comando di menu desiderato.

2. Nella [Finestra Proprietà](/visualstudio/ide/reference/properties-window)aggiungere il nome del tasto di scelta rapida alla proprietà **Caption** :

   - Dopo la didascalia di menu, digitare la sequenza di escape relativa a un carattere di tabulazione (\t), in modo che tutti che i tasti di scelta rapida del menu vengano allineati a sinistra.

   - Digitare il nome del tasto di modifica (**Ctrl**, **Alt**, o **MAIUSC**) seguito da un segno più (**+**) e il nome, una lettera, o simbolo del tasto aggiuntivo.

       Ad esempio, per assegnare **Ctrl**+**O** per il **Open** comando la **File** menu è modificare il comando di menu  **Didascalia** in modo che risulti simile al seguente:

        ```
        &Open...\tCtrl+O
        ```

       Il comando di menu nel **Menu** editor viene aggiornato per riflettere la nuova didascalia durante la digitazione.

3. [Creare la voce della tabella dei tasti di scelta rapida](../windows/adding-an-entry-to-an-accelerator-table.md) nell'editor **tasti di scelta rapida** , assegnando lo stesso identificatore del comando di menu. Usare una combinazione di tasti che sia facile da ricordare.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Aggiunta di comandi a un menu](../windows/adding-commands-to-a-menu.md)  
[Editor dei menu](../windows/menu-editor.md)
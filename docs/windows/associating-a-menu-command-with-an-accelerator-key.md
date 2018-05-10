---
title: Associazione di un comando di Menu con un tasto di scelta rapida | Documenti Microsoft
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
ms.openlocfilehash: c4f1aa4b80aec2e7c16485c08d2505695b21f4d5
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="associating-a-menu-command-with-an-accelerator-key"></a>Associazione di un comando di menu a un tasto di scelta rapida
Spesso è utile che una voce di menu e una combinazione di tasti eseguano lo stesso comando del programma. A questo scopo, è possibile usare l'editor di menu per assegnare lo stesso identificatore di risorsa al comando di menu e a una voce nella tabella dei tasti di scelta rapida dell'applicazione. Quindi si modifica la [Didascalia](../windows/menu-command-properties.md) del comando di menu per visualizzare il nome del tasto di scelta rapida.  
  
### <a name="to-associate-a-menu-command-with-an-accelerator-key"></a>Per associare un comando di menu a un tasto di scelta rapida  
  
1.  Nell'editor **Menu** selezionare il comando di menu desiderato.  
  
2.  Nella [Finestra Proprietà](/visualstudio/ide/reference/properties-window)aggiungere il nome del tasto di scelta rapida alla proprietà **Caption** :  
  
    -   Dopo la didascalia di menu, digitare la sequenza di escape relativa a un carattere di tabulazione (\t), in modo che tutti che i tasti di scelta rapida del menu vengano allineati a sinistra.  
  
    -   Digitare il nome del tasto di modifica (**CTRL**, **ALT**o **MAIUSC**) seguito da un segno più (**+**) e dal nome, dalla lettera o dal simbolo del tasto aggiuntivo.  
  
         Ad esempio, per assegnare **CTRL+O** al comando **Apri** nel menu **File** , è possibile modificare la proprietà **Caption** nel modo seguente:  
  
        ```  
        &Open...\tCtrl+O   
        ```  
  
         Nell'editor di menu il comando di menu viene aggiornato in modo da riflettere la nuova didascalia mentre viene digitata.  
  
3.  [Creare la voce della tabella dei tasti di scelta rapida](../windows/adding-an-entry-to-an-accelerator-table.md) nell'editor **tasti di scelta rapida** , assegnando lo stesso identificatore del comando di menu. Usare una combinazione di tasti che sia facile da ricordare.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 **Requisiti**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di comandi a un Menu](../windows/adding-commands-to-a-menu.md)   
 [Editor dei menu](../windows/menu-editor.md)
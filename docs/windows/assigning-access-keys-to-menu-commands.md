---
title: L'assegnazione di tasti di scelta ai comandi di Menu | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- access keys [C++], checking
- menus, shortcut keys
- keyboard shortcuts [C++], command assignments
- access keys [C++], assigning
- mnemonics, adding to menus
- keyboard shortcuts [C++], uniqueness checking
- mnemonics, uniqueness checking
- Check Mnemonics command
ms.assetid: fbcf1a00-af6a-4171-805a-0ac01d4e8b0d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 44a21e5930d0d8f2fcaad79cc5cef5bc984ad8b5
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33857899"
---
# <a name="assigning-access-keys-to-menu-commands"></a>Assegnazione di tasti di scelta ai comandi di menu
È possibile assegnare un tasto di scelta (che consente all'utente di selezionare il menu con la tastiera) ai menu e comandi di menu.  
  
### <a name="to-assign-an-access-shortcut-key-to-a-menu-command"></a>Per assegnare un tasto di scelta (scelta rapida) a un comando di menu  
  
1.  Digitare una e commerciale (**&**) davanti a una lettera nel nome di menu o nel nome del comando per specificare tale lettera come tasto di scelta corrispondente. Ad esempio "&File" imposta ALT+F come tasto di scelta rapida per il menu File nelle applicazioni scritte per Microsoft Windows.  
  
     La voce di menu visualizzerà un segnale visivo che indica che a una delle lettere è assegnato un tasto di scelta rapida. La lettera che segue la e commerciale verrà visualizzata con una sottolineatura (a seconda del sistema operativo).  
  
    > [!NOTE]
    >  Verificare che tutti i tasti di scelta di un menu siano univoci facendo clic con il pulsante destro del mouse sul menu e scegliendo **Tasti di scelta** dal menu di scelta rapida.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Editor dei menu](../windows/menu-editor.md)
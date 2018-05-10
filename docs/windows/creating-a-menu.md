---
title: Creazione di un Menu | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.menu
dev_langs:
- C++
helpviewer_keywords:
- mnemonics, associating menu items
- menus, associating commands with mnemonic keys
- menus, creating
ms.assetid: 66f94448-9b97-4b73-bf97-10d4bf87cc65
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 95d9051e44216de9a64b68fc112fe8f17de112e3
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="creating-a-menu"></a>Creazione di un menu
> [!NOTE]
>  La finestra delle risorse non è disponibile nelle edizioni Express.  
  
### <a name="to-create-a-standard-menu"></a>Per creare un menu standard  
  
1.  Scegliere **Visualizzazione risorse** nel menu **Visualizza** , quindi fare clic con il pulsante destro del mouse sull'intestazione **Menu** e scegliere **Aggiungi risorsa**. Scegliere **Menu**.  
  
2.  Selezionare la casella **Nuovo elemento** (il rettangolo che contiene "Digitare qui") nella barra dei menu.  
  
     ![Casella nuovo elemento nell'editor dei menu](../windows/media/vcmenueditornewitembox.gif "vcMenuEditorNewItemBox")  
Casella Nuovo elemento  
  
3.  Digitare un nome per il nuovo menu, ad esempio "File".  
  
     Il testo immesso verrà visualizzato nell'editor di **menu** e nella casella **Didascalia** della [finestra Proprietà](/visualstudio/ide/reference/properties-window). È possibile modificare le proprietà per il nuovo menu in questa posizione.  
  
     Dopo aver assegnato al nuovo menu un nome nella barra dei menu, la casella del nuovo elemento viene spostata verso destra (per consentire l'aggiunta di un altro menu) e un'altra casella del nuovo elemento viene visualizzata sotto il primo menu in modo da poter aggiungere i comandi di menu.  
  
     ![Casella nuovo elemento espansa](../windows/media/vcmenueditornewitemboxexpanded.gif "vcMenuEditorNewItemBoxExpanded")  
Casella del nuovo elemento con stato attivo spostato dopo aver digitato il nome del menu  
  
    > [!NOTE]
    >  Per creare un menu con un singolo elemento nella barra dei menu, impostare la proprietà Popup su False.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 **Requisiti**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Editor dei menu](../windows/menu-editor.md)
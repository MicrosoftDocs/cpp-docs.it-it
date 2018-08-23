---
title: Creazione di un Menu | Microsoft Docs
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
ms.openlocfilehash: 93788240ae90463c430a2d53df7e3e7f087b2c97
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42596734"
---
# <a name="creating-a-menu"></a>Creazione di un menu

> [!NOTE]
> Il **finestra risorse** non è disponibile nelle edizioni Express.

### <a name="to-create-a-standard-menu"></a>Per creare un menu standard

1. Scegliere **Visualizzazione risorse** nel menu **Visualizza** , quindi fare clic con il pulsante destro del mouse sull'intestazione **Menu** e scegliere **Aggiungi risorsa**. Scegliere **Menu**.

2. Selezionare la casella **Nuovo elemento** (il rettangolo che contiene "Digitare qui") nella barra dei menu.

   ![Casella nuovo elemento nell'editor di menu](../windows/media/vcmenueditornewitembox.gif "vcMenuEditorNewItemBox")  
Casella Nuovo elemento

3. Digitare un nome per il nuovo menu, ad esempio "File".

   Il testo immesso verrà visualizzato nell'editor di **menu** e nella casella **Didascalia** della [finestra Proprietà](/visualstudio/ide/reference/properties-window). È possibile modificare le proprietà per il nuovo menu in questa posizione.

   Dopo aver assegnato al nuovo menu un nome nella barra dei menu, la casella del nuovo elemento viene spostata verso destra (per consentire l'aggiunta di un altro menu) e un'altra casella del nuovo elemento viene visualizzata sotto il primo menu in modo da poter aggiungere i comandi di menu.

   ![Casella nuovo elemento espansa](../windows/media/vcmenueditornewitemboxexpanded.gif "vcMenuEditorNewItemBoxExpanded")  
Casella del nuovo elemento con stato attivo spostato dopo aver digitato il nome del menu

   > [!NOTE]
   > Per creare un singolo elemento menu sulla barra dei menu, impostare il **Popup** proprietà **False**.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor dei menu](../windows/menu-editor.md)
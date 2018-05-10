---
title: Aggiunta di comandi a un Menu | Documenti Microsoft
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
- menu items, adding to menus
- menus, adding items
- commands, adding to menus
- commands
- menu items
ms.assetid: 1523a755-0ab5-42f8-9e98-bb9881564431
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e3564a808d39aa81ed3b45a1bc5812b285199e04
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="adding-commands-to-a-menu"></a>Aggiunta di comandi a un menu
### <a name="to-add-commands-to-a-menu"></a>Per aggiungere comandi a un menu  
  
1.  [Creare un menu](../windows/creating-a-menu.md).  
  
2.  Fare clic sul nome del menu, ad esempio, File.  
  
     Ciascuna voce di menu espanderà ed esporrà una casella nuovo elemento per i comandi. Ad esempio, è possibile aggiungere i comandi Nuovo, Apri e Chiudi a un menu File.  
  
3.  Nella casella del nuovo elemento, digitare un nome per il nuovo comando di menu.  
  
    > [!NOTE]
    >  Il testo immesso verrà visualizzato nell'editor dei Menu e nella **didascalia** casella il [finestra proprietà](/visualstudio/ide/reference/properties-window). È possibile modificare le proprietà per il nuovo menu in questa posizione.  
  
    > [!TIP]
    >  È possibile definire un tasto di scelta rapida che consente all'utente di selezionare il comando di menu. Digitare una e commerciale (&) davanti a una lettera per specificarla come tasto di scelta. L'utente può selezionare il comando di menu digitando quella lettera.  
  
4.  Nella finestra Proprietà selezionare le proprietà di comando di menu che si applicano. Per informazioni dettagliate, vedere [proprietà dei comandi di Menu](../windows/menu-command-properties.md).  
  
5.  Nel **Prompt** nella finestra Proprietà, digitare la stringa di richiesta che si desidera visualizzare nella barra di stato dell'applicazione.  
  
     In questo modo viene creata una voce nella tabella di stringhe con lo stesso identificatore di risorsa del comando di menu creato.  
  
    > [!NOTE]
    >  È possibile applicare solo alle voci di menu con un **Popup** proprietà di **True**. Ad esempio, gli elementi del menu di primo livello possono avere richieste se dispongono di voci di menu secondario. Lo scopo di richiesta è per indicare che cosa accade se un utente fa clic sulla voce di menu.  
  
6.  Premere **invio** per completare il comando di menu.  
  
     La casella del nuovo elemento è selezionata, pertanto è possibile creare comandi di menu aggiuntivi.  
  

  
 **Requisiti**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Editor dei menu](../windows/menu-editor.md)   

---
title: Creazione di menu a comparsa | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- context menus, Menu Editor
- pop-up menus, creating
- menus, pop-up
- menus, creating
- shortcut menus, creating
- pop-up menus, displaying
ms.assetid: dff4dddf-2e8d-4c34-b755-90baae426b58
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 218ed28a8b44100beead46ab13e04ad07d86c7e5
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="creating-pop-up-menus"></a>Creazione di menu di scelta rapida
I[menu a comparsa](../mfc/menus-mfc.md) visualizzano i comandi usati frequentemente. Possono essere sensibili al contesto per la posizione del puntatore. Quando si usa il menu a comparsa nell'applicazione è necessario compilare il menu e quindi connetterlo al codice dell'applicazione.  
  
 Dopo aver creato la risorsa di menu, il codice dell'applicazione deve caricare la risorsa di menu e usare [TrackPopupMenu](http://msdn.microsoft.com/library/windows/desktop/ms648002) per visualizzare il menu. Una volta che l'utente ha chiuso il menu di scelta rapida facendo clic all'esterno o ha fatto clic su un comando, questa funzione verrà restituita. Se l'utente sceglie un comando, tale messaggio di comando verrà inviato alla finestra di cui è stato passato l'handle.  
  
### <a name="to-create-a-pop-up-menu"></a>Per creare un menu a comparsa  
  
1.  [Creare un menu](../windows/creating-a-menu.md) con un titolo vuoto (non viene fornito un titolo **Didascalia**).  
  
2.  [Aggiungere un comando di menu al nuovo menu](../windows/adding-commands-to-a-menu.md). Spostare il primo comando di menu al di sotto del titolo del menu vuoto che (la didascalia temporanea indica Digitare qui). Digitare una **Didascalia** e qualsiasi altra informazione.  
  
     Ripetere questo processo per tutti gli altri comandi di menu a comparsa.  
  
3.  Salvare la risorsa di menu.  
  
    > [!TIP]
    >  Per altre informazioni sulla visualizzazione del menu a comparsa, vedere [Visualizzazione di un menu come menu a comparsa](../windows/viewing-a-menu-as-a-pop-up-menu.md).  
  

  
 **Requisiti**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [La connessione a un Menu a comparsa all'applicazione](../windows/connecting-a-pop-up-menu-to-your-application.md)   
 [Editor dei menu](../windows/menu-editor.md)
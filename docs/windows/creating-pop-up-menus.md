---
title: Creazione di menu di scelta rapida | Microsoft Docs
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
ms.openlocfilehash: 6b06fa02420b70538faa70b24137df634420dd8d
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43222644"
---
# <a name="creating-pop-up-menus"></a>Creazione di menu di scelta rapida

I[menu a comparsa](../mfc/menus-mfc.md) visualizzano i comandi usati frequentemente. Possono essere sensibili al contesto per la posizione del puntatore. Quando si usa il menu a comparsa nell'applicazione è necessario compilare il menu e quindi connetterlo al codice dell'applicazione.

Dopo aver creato la risorsa di menu, il codice dell'applicazione deve caricare la risorsa di menu e usare [TrackPopupMenu](/windows/desktop/api/winuser/nf-winuser-trackpopupmenu) per visualizzare il menu. Una volta che l'utente ha chiuso il menu di scelta rapida facendo clic all'esterno o ha fatto clic su un comando, questa funzione verrà restituita. Se l'utente sceglie un comando, tale messaggio di comando verrà inviato alla finestra di cui è stato passato l'handle.

### <a name="to-create-a-pop-up-menu"></a>Per creare un menu a comparsa

1. [Creare un menu](../windows/creating-a-menu.md) con un titolo vuoto (non viene fornito un titolo **Didascalia**).

2. [Aggiungere un comando di menu al nuovo menu](../windows/adding-commands-to-a-menu.md). Spostare il primo comando di menu di scelta sotto il titolo del menu vuoto (la didascalia temporanea indica `Type Here`). Digitare una **Didascalia** e qualsiasi altra informazione.

   Ripetere questo processo per tutti gli altri comandi di menu a comparsa.

3. Salvare la risorsa di menu.

   > [!TIP]
   > Per altre informazioni sulla visualizzazione del menu a comparsa, vedere [Visualizzazione di un menu come menu a comparsa](../windows/viewing-a-menu-as-a-pop-up-menu.md).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Connessione di un menu di scelta rapida all'applicazione](../windows/connecting-a-pop-up-menu-to-your-application.md)  
[Editor dei menu](../windows/menu-editor.md)
---
title: Creazione di menu a comparsa (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- context menus [C++], Menu Editor
- pop-up menus [C++], creating
- menus [C++], pop-up
- menus [C++], creating
- shortcut menus [C++], creating
- pop-up menus [C++], displaying
ms.assetid: dff4dddf-2e8d-4c34-b755-90baae426b58
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6c66f7074269e99b35785299800665be48cebef9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46415720"
---
# <a name="creating-pop-up-menus-c"></a>Creazione di menu a comparsa (C++)

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

[Connessione di un menu di scelta rapida all'applicazione](../windows/connecting-a-pop-up-menu-to-your-application.md)<br/>
[Editor dei menu](../windows/menu-editor.md)
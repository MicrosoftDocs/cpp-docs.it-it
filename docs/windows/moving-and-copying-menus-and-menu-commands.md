---
title: Spostare e copiare menu e comandi di Menu (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- commands [C++], copying on menus
- menu items, moving
- commands [C++], moving on menus
- menu items, copying
ms.assetid: 1d8df535-9922-4579-a9c2-37aeac1856eb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b12d9d09cd2e4b35c458c2acbefa48eee8c4b0a9
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44312757"
---
# <a name="moving-and-copying-menus-and-menu-commands"></a>Spostamento e copia di menu e comandi di menu

È possibile spostare o copiare menu e comandi di menu usando il metodo di trascinamento e rilascio o usando i comandi nel menu di scelta rapida (attivato con il clic destro del mouse).

### <a name="to-move-or-copy-menus-or-menu-commands-using-the-drag-and-drop-method"></a>Per spostare o copiare menu o comandi di menu usando il metodo di trascinamento e rilascio

1. Trascinare o copiare l'elemento che si vuole spostare in:

   - La nuova posizione del menu corrente.

   - Un altro menu. È possibile passare agli altri menu trascinandovi sopra il puntatore del mouse.

2. Trascinare il comando di menu quando la guida di inserimento mostra la posizione desiderata.

### <a name="to-move-or-copy-menus-or-menu-commands-using-shortcut-menu-commands"></a>Per spostare o copiare menu o comandi di menu usando i comandi di menu di scelta rapida

1. Fare clic con il pulsante destro del mouse su uno o più menu o comandi di menu.

2. Dal menu di scelta rapida scegliere **Taglia** (per spostare) o **Copia**.

3. Se si spostano gli elementi in un altro menu risorse o file script di risorsa [aprirli in un'altra finestra](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

4. Selezionare la posizione del menu o del comando di menu che si vuole spostare o copiare.

5. Dal menu di scelta rapida scegliere **Incolla**. L'elemento spostato o copiato viene inserito prima dell'elemento selezionato.

   > [!NOTE]
   > È anche possibile trascinare, copiare e incollare in altre finestre dai menu.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e assegnazione di risorse stringhe alle proprietà.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor dei menu](../windows/menu-editor.md)
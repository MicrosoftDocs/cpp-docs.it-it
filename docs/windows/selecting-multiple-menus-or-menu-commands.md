---
title: Modifica di più menu o comandi di Menu (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- menu commands [C++], selecting
- menus [C++], selecting
- commands [C++], menu commands
- commands [C++], copying on menus
- menu items, moving
- commands [C++], moving on menus
- menu items, copying
- menu items, deleting
- commands [C++], deleting from menus
- menus [C++], deleting
ms.assetid: b6f17897-2a40-4afd-97d4-a38b7661680b
ms.openlocfilehash: 45e2c4e97dc850b4d6fb13a5526911e4bd5caec2
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55703220"
---
# <a name="editing-multiple-menus-or-menu-commands"></a>Modifica di più menu o comandi di Menu

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="to-select-multiple-menu-commands"></a>Per selezionare più comandi di menu

È possibile selezionare più nomi di menu o comandi di menu per l'esecuzione delle operazioni bulk, ad esempio l'eliminazione o modifica delle proprietà.

Mentre si tiene premuto il **Ctrl** della chiave, selezionare il menu o comandi del sottomenu desiderato.

## <a name="to-move-and-copy-menus-and-menu-commands"></a>Per spostare e copiare menu e comandi di menu

È possibile spostare o copiare menu e comandi di menu usando il metodo di trascinamento e rilascio o usando i comandi nel menu di scelta rapida (attivato con il clic destro del mouse).

### <a name="to-move-or-copy-menus-or-menu-commands-using-the-drag-and-drop-method"></a>Per spostare o copiare menu o comandi di menu usando il metodo di trascinamento e rilascio

1. Trascinare o copiare l'elemento che si vuole spostare in:

   - La nuova posizione del menu corrente.

   - Un altro menu. È possibile passare agli altri menu trascinandovi sopra il puntatore del mouse.

1. Trascinare il comando di menu quando la guida di inserimento mostra la posizione desiderata.

### <a name="to-move-or-copy-menus-or-menu-commands-using-shortcut-menu-commands"></a>Per spostare o copiare menu o comandi di menu usando i comandi di menu di scelta rapida

1. Fare clic con il pulsante destro del mouse su uno o più menu o comandi di menu.

1. Dal menu di scelta rapida scegliere **Taglia** (per spostare) o **Copia**.

1. Se stai spostando gli elementi in un altro menu risorse o file script di risorsa [aprirlo in un'altra finestra](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

1. Selezionare la posizione del menu o del comando di menu che si vuole spostare o copiare.

1. Dal menu di scelta rapida scegliere **Incolla**. L'elemento spostato o copiato viene inserito prima dell'elemento selezionato.

   > [!NOTE]
   > È anche possibile trascinare, copiare e incollare in altre finestre dai menu.

## <a name="to-delete-a-menu-or-menu-command"></a>Per eliminare un menu o un comando di menu

1. Fare clic con il pulsante destro del mouse sul nome del menu o sul comando di menu.

1. Scegliere **Elimina** dal menu di scelta rapida.

   > [!NOTE]
   > Analogamente, è possibile usare il menu di scelta rapida per eseguire altre azioni quali Copia, Taglia, Incolla, Inserisci nuovo, Inserisci separatore, Modifica ID, Visualizza come popup, tasti di scelta e così via.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor dei menu](../windows/menu-editor.md)
---
title: Aggiunta di comandi a un menu di scelta (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.menu
helpviewer_keywords:
- menu items, adding to menus
- menus [C++], adding items
- commands [C++], adding to menus
ms.assetid: 1523a755-0ab5-42f8-9e98-bb9881564431
ms.openlocfilehash: 71a3a13b3c86fa4a4238fd9a42dd45b48ef318de
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50571418"
---
# <a name="adding-commands-to-a-menu-c"></a>Aggiunta di comandi a un menu di scelta (C++)

### <a name="to-add-commands-to-a-menu"></a>Per aggiungere comandi a un menu

1. [Creare un menu](../windows/creating-a-menu.md).

2. Fare clic sul nome del menu, ad esempio, **File**.

   Ciascuna voce di menu espanderà ed esporrà una casella nuovo elemento per i comandi. Ad esempio, è possibile aggiungere i comandi **New**, **Open**, e **Chiudi** da un **File** menu.

3. Nella casella del nuovo elemento, digitare un nome per il nuovo comando di menu.

   > [!NOTE]
   > Il testo immesso verrà visualizzato nell'editor di **menu** e nella casella **Didascalia** della [finestra Proprietà](/visualstudio/ide/reference/properties-window). È possibile modificare le proprietà per il nuovo menu in questa posizione.

   > [!TIP]
   > È possibile definire un tasto di scelta rapida che consente all'utente di selezionare il comando di menu. Digitare una e commerciale (`&`) davanti a una lettera per specificarla come tasto di scelta. L'utente può selezionare il comando di menu digitando quella lettera.

4. Nel **proprietà** finestra, seleziona il menu comando proprietà che si applicano. Per informazioni dettagliate, vedere [proprietà dei comandi di Menu](../windows/menu-command-properties.md).

5. Nel **prompt dei comandi** nella casella il **proprietà** finestra, digitare la stringa di messaggio di richiesta da visualizzare nella barra di stato dell'applicazione.

   In questo modo viene creata una voce nella tabella di stringhe con lo stesso identificatore di risorsa del comando di menu creato.

   > [!NOTE]
   > È possibile applicare solo alle voci di menu con un **Popup** proprietà di **True**. Ad esempio, gli elementi del menu di primo livello possono avere richieste se dispongono di voci di menu secondario. Lo scopo di un **dei messaggi di richiesta** consiste nell'indicare cosa succede se un utente fa clic sulla voce di menu.

6. Premere **invio** per completare il comando di menu.

   La casella del nuovo elemento è selezionata, pertanto è possibile creare comandi di menu aggiuntivi.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor dei menu](../windows/menu-editor.md)
---
title: Macro ON_UPDATE_COMMAND_UI
ms.date: 09/06/2019
f1_keywords:
- ON_UPDATE_COMMAND_UI
helpviewer_keywords:
- ON_UPDATE_COMMAND_UI macro [MFC]
- update handlers [MFC]
- command-handler macros
- updating user-interface objects [MFC]
ms.assetid: 3e72b50f-4119-4c82-81cf-6e09b132de05
ms.openlocfilehash: 467e130f3e6518cc4ec554f6574fb9fcbabaf1f3
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907946"
---
# <a name="on_update_command_ui-macro"></a>Macro ON_UPDATE_COMMAND_UI

Per connettere un oggetto dell'interfaccia utente a un gestore di aggiornamento del comando in un oggetto di destinazione comando, aprire **Visualizzazione classi**, quindi fare clic con il pulsante destro del mouse sulla classe alla quale verrà aggiunto il gestore, quindi scegliere **creazione guidata classe**. Individuare l'ID dell'oggetto dell'interfaccia utente nell'elenco a sinistra, quindi scegliere **UPDATE_COMMAND_UI** nel riquadro destro e fare clic su **Aggiungi gestore**. In questo modo viene creata una funzione del gestore nella classe e viene aggiunta la voce appropriata nella mappa messaggi. Per ulteriori informazioni, vedere [mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md) . È possibile specificare messaggi aggiuntivi da gestire nel riquadro **messaggi** . 

Ad esempio, per aggiornare un comando Clear All nel menu Edit del programma, utilizzare la **creazione guidata classe** per aggiungere una voce della mappa messaggi nella classe selezionata, una dichiarazione di funzione per un gestore di aggiornamento del comando `OnUpdateEditClearAll` chiamato nella dichiarazione di classe e un oggetto vuoto modello di funzione nel file di implementazione della classe. Il prototipo di funzione ha un aspetto simile al seguente:

[!code-cpp[NVC_MFCDocView#2](../mfc/codesnippet/cpp/on-update-command-ui-macro_1.h)]

Come tutti i gestori, la dichiarazione di funzione Mostra la parola chiave **afx_msg** . Come tutti i gestori di aggiornamento, accetta un argomento, un puntatore a un `CCmdUI` oggetto.

## <a name="see-also"></a>Vedere anche

[Procedura: Aggiornare oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)

---
description: 'Altre informazioni su: ON_UPDATE_COMMAND_UI macro'
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
ms.openlocfilehash: 394ee2679e84c09223f61d485fac3e628dec7145
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97112167"
---
# <a name="on_update_command_ui-macro"></a>Macro ON_UPDATE_COMMAND_UI

Per connettere un oggetto dell'interfaccia utente a un gestore di aggiornamento del comando in un oggetto di destinazione comando, aprire **Visualizzazione classi**, quindi fare clic con il pulsante destro del mouse sulla classe alla quale verrà aggiunto il gestore, quindi scegliere **creazione guidata classe**. Individuare l'ID dell'oggetto dell'interfaccia utente nell'elenco a sinistra, quindi scegliere **UPDATE_COMMAND_UI** nel riquadro destro e fare clic su **Aggiungi gestore**. In questo modo viene creata una funzione del gestore nella classe e viene aggiunta la voce appropriata nella mappa messaggi. Per ulteriori informazioni, vedere [mapping di messaggi a funzioni](reference/mapping-messages-to-functions.md) . È possibile specificare messaggi aggiuntivi da gestire nel riquadro **messaggi** .

Ad esempio, per aggiornare un comando Clear All nel menu Edit del programma, utilizzare la **creazione guidata classe** per aggiungere una voce della mappa messaggi nella classe selezionata, una dichiarazione di funzione per un gestore di aggiornamento del comando chiamato `OnUpdateEditClearAll` nella dichiarazione di classe e un modello di funzione vuoto nel file di implementazione della classe. Il prototipo di funzione ha un aspetto simile al seguente:

[!code-cpp[NVC_MFCDocView#2](codesnippet/cpp/on-update-command-ui-macro_1.h)]

Come tutti i gestori, la dichiarazione di funzione Mostra la parola chiave **afx_msg** . Come tutti i gestori di aggiornamento, accetta un argomento, un puntatore a un `CCmdUI` oggetto.

## <a name="see-also"></a>Vedi anche

[Procedura: aggiornare oggetti User-Interface](how-to-update-user-interface-objects.md)

---
title: Macro ON_UPDATE_COMMAND_UI | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- ON_UPDATE_COMMAND_UI
dev_langs:
- C++
helpviewer_keywords:
- ON_UPDATE_COMMAND_UI macro [MFC]
- update handlers [MFC]
- command-handler macros
- updating user-interface objects [MFC]
ms.assetid: 3e72b50f-4119-4c82-81cf-6e09b132de05
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 17111e24a63d527996eadd82c804e5147ad78552
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46433465"
---
# <a name="onupdatecommandui-macro"></a>Macro ON_UPDATE_COMMAND_UI

Usare la **proprietà** finestra per la connessione di un oggetto dell'interfaccia utente a un gestore aggiornamento comandi in un oggetto destinazione comando. Verrà automaticamente ID dell'oggetto dell'interfaccia utente di connessione per la macro ON_UPDATE_COMMAND_UI e creare un gestore dell'oggetto che gestirà l'aggiornamento. Visualizzare [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md) per altre informazioni.

Ad esempio, per aggiornare un comando Cancella tutti i menu di modifica del programma, usare il **delle proprietà** finestra per aggiungere una voce della mappa messaggi nella classe selezionata, una dichiarazione di funzione per un gestore comando-aggiornamento denominata `OnUpdateEditClearAll` nella classe dichiarazione e un modello di funzione vuoti nel file di implementazione della classe. Il prototipo di funzione è simile alla seguente:

[!code-cpp[NVC_MFCDocView#2](../mfc/codesnippet/cpp/on-update-command-ui-macro_1.h)]

Come tutti i gestori, la funzione Mostra le **afx_msg** (parola chiave). Come tutti i gestori di aggiornamento, accetta un solo argomento, un puntatore a un `CCmdUI` oggetto.

## <a name="see-also"></a>Vedere anche

[Procedura: Aggiornare oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)


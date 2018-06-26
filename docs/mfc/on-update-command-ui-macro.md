---
title: ON_UPDATE_COMMAND_UI (macro) | Documenti Microsoft
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
ms.openlocfilehash: 43caffe53be180221b4145a03df7cfc41c31828e
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928638"
---
# <a name="onupdatecommandui-macro"></a>Macro ON_UPDATE_COMMAND_UI
Usare la **proprietà** finestra per connettere un oggetto dell'interfaccia utente a un gestore di aggiornamento di comandi in un oggetto di destinazione di comando. Verrà automaticamente connettersi ID dell'oggetto dell'interfaccia utente per la macro ON_UPDATE_COMMAND_UI e creare un gestore dell'oggetto che gestirà l'aggiornamento. Vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md) per altre informazioni.  
  
 Ad esempio, per aggiornare un comando Cancella tutto nel menu di modifica del programma, utilizzare il **delle proprietà** finestra per aggiungere una voce della mappa messaggi nella classe selezionata, una dichiarazione di funzione per un gestore di aggiornamento di comando denominata `OnUpdateEditClearAll` nella classe dichiarazione e un modello di funzione vuoti nel file di implementazione della classe. Il prototipo di funzione è simile al seguente:  
  
 [!code-cpp[NVC_MFCDocView#2](../mfc/codesnippet/cpp/on-update-command-ui-macro_1.h)]  
  
 Come tutti i gestori, la funzione Mostra il **afx_msg** (parola chiave). Come tutti i gestori di aggiornamento, accetta un solo argomento, un puntatore a un `CCmdUI` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: Aggiornare oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)


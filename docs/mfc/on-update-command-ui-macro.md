---
title: Macro ON_UPDATE_COMMAND_UI | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: ON_UPDATE_COMMAND_UI
dev_langs: C++
helpviewer_keywords:
- ON_UPDATE_COMMAND_UI macro [MFC]
- update handlers [MFC]
- command-handler macros
- updating user-interface objects [MFC]
ms.assetid: 3e72b50f-4119-4c82-81cf-6e09b132de05
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3de873cf70bafa77d7c8f4b05c70ce211b2c2258
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="onupdatecommandui-macro"></a>Macro ON_UPDATE_COMMAND_UI
Utilizzare il **proprietà** finestra per la connessione a un oggetto dell'interfaccia utente a un gestore di aggiornamento di comandi in un oggetto di destinazione di comando. ID dell'oggetto dell'interfaccia utente verrà automaticamente connesso il `ON_UPDATE_COMMAND_UI` macro e creare un gestore dell'oggetto che gestirà l'aggiornamento. Vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md) per ulteriori informazioni.  
  
 Per aggiornare un comando Cancella tutto nel menu di modifica del programma, ad esempio, è consigliabile utilizzare il **proprietà** finestra per aggiungere una voce della mappa messaggi nella classe selezionata, una dichiarazione di funzione per un gestore di aggiornamento di comando denominata `OnUpdateEditClearAll` nella classe dichiarazione e un modello di funzione vuoto nel file di implementazione della classe. Il prototipo di funzione è simile al seguente:  
  
 [!code-cpp[NVC_MFCDocView#2](../mfc/codesnippet/cpp/on-update-command-ui-macro_1.h)]  
  
 Come tutti i gestori, mostrato nella funzione di **afx_msg** (parola chiave). Come tutti i gestori di aggiornamento, accetta un solo argomento, un puntatore a un `CCmdUI` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: Aggiornare oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)


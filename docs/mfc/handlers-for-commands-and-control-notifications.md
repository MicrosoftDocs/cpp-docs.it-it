---
title: Gestori per comandi e notifiche dei controlli | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- commands [MFC], handlers for
- functions [MFC], handler
- handlers [MFC]
- controls [MFC], notifications
- handlers [MFC], control notification [MFC]
- notifications [MFC], handlers for control
- handlers [MFC], command
ms.assetid: 20f57f4a-f577-4c09-80a2-43faf32a1c2e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7e6492c6ecc4c21c5c978ad031fed7182f2acee4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="handlers-for-commands-and-control-notifications"></a>Gestori per comandi e notifiche dei controlli
Non esistono gestori predefiniti per i comandi o i messaggi di notifica del controllo. Pertanto, i gestori per queste categorie di messaggi vengono associati solo per convenzione di denominazione. Quando si esegue il mapping del comando o della notifica di controllo a un gestore, la finestra Proprietà propone un nome basato sull'ID di comando o sul codice di notifica del controllo. È possibile accettare il nome proposto, modificarlo oppure sostituirlo.  
  
 La convenzione suggerisce di denominare i gestori in entrambe le categorie per l'oggetto dell'interfaccia utente che rappresentano. Pertanto un gestore per il comando Taglia del menu Modifica potrebbe essere denominato  
  
 [!code-cpp[NVC_MFCMessageHandling#4](../mfc/codesnippet/cpp/handlers-for-commands-and-control-notifications_1.h)]  
  
 Poiché il comando Taglia viene comunemente implementato nelle applicazioni, il framework sono disponibili l'ID di comando per il comando Taglia come **ID_EDIT_CUT**. Per un elenco degli ID di comando predefiniti, vedere il file AFXRES.H. Per ulteriori informazioni, vedere [comandi Standard](../mfc/standard-commands.md).  
  
 Inoltre, in genere un gestore per il **BN_CLICKED** messaggio di notifica da un pulsante con etichettato "Mio pulsante" può essere denominato  
  
 [!code-cpp[NVC_MFCMessageHandling#5](../mfc/codesnippet/cpp/handlers-for-commands-and-control-notifications_2.h)]  
  
 È possibile assegnare a questo comando un ID di `IDC_MY_BUTTON` perché è equivalente a un oggetto dell'interfaccia utente specifico dell'applicazione.  
  
 Entrambe le categorie di messaggi non accettano argomenti e non restituiscono valori.  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)

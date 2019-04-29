---
title: Gestori per comandi e notifiche dei controlli
ms.date: 11/04/2016
helpviewer_keywords:
- commands [MFC], handlers for
- functions [MFC], handler
- handlers [MFC]
- controls [MFC], notifications
- handlers [MFC], control notification [MFC]
- notifications [MFC], handlers for control
- handlers [MFC], command
ms.assetid: 20f57f4a-f577-4c09-80a2-43faf32a1c2e
ms.openlocfilehash: 6c92660c67fa91c27bb094111cebfef57904cdc7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62358994"
---
# <a name="handlers-for-commands-and-control-notifications"></a>Gestori per comandi e notifiche dei controlli

Non esistono gestori predefiniti per i comandi o i messaggi di notifica del controllo. Pertanto, i gestori per queste categorie di messaggi vengono associati solo per convenzione di denominazione. Quando si esegue il mapping del comando o della notifica di controllo a un gestore, la finestra Proprietà propone un nome basato sull'ID di comando o sul codice di notifica del controllo. È possibile accettare il nome proposto, modificarlo oppure sostituirlo.

La convenzione suggerisce di denominare i gestori in entrambe le categorie per l'oggetto dell'interfaccia utente che rappresentano. Pertanto un gestore per il comando Taglia del menu Modifica potrebbe essere denominato

[!code-cpp[NVC_MFCMessageHandling#4](../mfc/codesnippet/cpp/handlers-for-commands-and-control-notifications_1.h)]

Poiché il comando Taglia viene comunemente implementato nelle applicazioni, framework sono disponibili l'ID di comando per il comando Taglia come **ID_EDIT_CUT**. Per un elenco degli ID di comando predefiniti, vedere il file AFXRES.H. Per altre informazioni, vedere [comandi Standard](../mfc/standard-commands.md).

Inoltre, convenzione suggerisce che un gestore per il **BN_CLICKED** messaggio di notifica da un pulsante con etichettato "Mio pulsante" potrebbe essere denominato

[!code-cpp[NVC_MFCMessageHandling#5](../mfc/codesnippet/cpp/handlers-for-commands-and-control-notifications_2.h)]

È possibile assegnare un ID di questo comando **IDC_MY_BUTTON** perché è equivalente a un oggetto di interfaccia utente specifico dell'applicazione.

Entrambe le categorie di messaggi non accettano argomenti e non restituiscono valori.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)

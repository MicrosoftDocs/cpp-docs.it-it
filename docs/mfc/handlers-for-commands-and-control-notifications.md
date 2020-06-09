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
ms.openlocfilehash: cc89cbfde0a1eba5dc736b40c178d4a4fde37a4d
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625776"
---
# <a name="handlers-for-commands-and-control-notifications"></a>Gestori per comandi e notifiche dei controlli

Non esistono gestori predefiniti per i comandi o i messaggi di notifica del controllo. Pertanto, i gestori per queste categorie di messaggi vengono associati solo per convenzione di denominazione. Quando si esegue il mapping della notifica del comando o del controllo a un gestore, la [creazione guidata classe](reference/mfc-class-wizard.md) propone un nome basato sull'ID comando o sul codice di notifica del controllo. È possibile accettare il nome proposto, modificarlo oppure sostituirlo.

La convenzione suggerisce di denominare i gestori in entrambe le categorie per l'oggetto dell'interfaccia utente che rappresentano. Pertanto un gestore per il comando Taglia del menu Modifica potrebbe essere denominato

[!code-cpp[NVC_MFCMessageHandling#4](codesnippet/cpp/handlers-for-commands-and-control-notifications_1.h)]

Poiché il comando taglia viene implementato in modo comune nelle applicazioni, il Framework definisce l'ID del comando Cut come **ID_EDIT_CUT**. Per un elenco degli ID di comando predefiniti, vedere il file AFXRES.H. Per ulteriori informazioni, vedere [comandi standard](standard-commands.md).

Inoltre, la Convenzione suggerisce che un gestore per il messaggio di notifica **BN_CLICKED** da un pulsante con etichetta "My Button" potrebbe essere denominato

[!code-cpp[NVC_MFCMessageHandling#5](codesnippet/cpp/handlers-for-commands-and-control-notifications_2.h)]

È possibile assegnare questo comando a un ID di **IDC_MY_BUTTON** perché è equivalente a un oggetto dell'interfaccia utente specifico dell'applicazione.

Entrambe le categorie di messaggi non accettano argomenti e non restituiscono valori.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di funzioni gestore messaggi](declaring-message-handler-functions.md)

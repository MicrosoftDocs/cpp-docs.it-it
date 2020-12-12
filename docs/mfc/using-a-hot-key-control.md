---
description: 'Altre informazioni su: uso di un controllo tasto di scelta'
title: Utilizzo di un controllo tasto di scelta
ms.date: 11/04/2016
helpviewer_keywords:
- CHotKeyCtrl class [MFC], using
- hot key controls
ms.assetid: cdd6524b-cc43-447f-b151-164273559685
ms.openlocfilehash: 078cd4b3d4746723d5996959edad20dd44e9abec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202704"
---
# <a name="using-a-hot-key-control"></a>Utilizzo di un controllo tasto di scelta

L'utilizzo tipico di un controllo tasto di scelta segue il modello seguente:

- Viene creato il controllo. Se il controllo è specificato nel modello di una finestra di dialogo, la creazione avviene automaticamente quando viene creata la finestra di dialogo. È necessario disporre di un membro [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md) nella classe della finestra di dialogo che corrisponde al controllo tasto di scelta. In alternativa, è possibile usare la funzione membro [create](../mfc/reference/chotkeyctrl-class.md#create) per creare il controllo come finestra figlio di qualsiasi finestra.

- Se si desidera impostare un valore predefinito per il controllo, chiamare la funzione membro [sehotkey](../mfc/reference/chotkeyctrl-class.md#sethotkey) . Se si desidera impedire determinati stati di spostamento, chiamare [Serules](../mfc/reference/chotkeyctrl-class.md#setrules). Per i controlli in una finestra di dialogo, è opportuno eseguire questa operazione nella funzione [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) della finestra di dialogo.

- L'utente interagisce con il controllo premendo una combinazione di tasti di scelta rapida quando il controllo tasto di scelta ha lo stato attivo. L'utente indica in qualche modo che questa attività è stata completata, forse facendo clic su un pulsante nella finestra di dialogo.

- Quando il programma riceve una notifica indicante che l'utente ha selezionato un tasto di scelta, deve usare la funzione membro [GetHotKey](../mfc/reference/chotkeyctrl-class.md#gethotkey) per recuperare la chiave virtuale e spostare i valori di stato dal controllo tasto di scelta.

- Quando si conosce la chiave selezionata dall'utente, è possibile impostare il tasto di scelta utilizzando uno dei metodi descritti in [impostazione di un tasto di scelta](../mfc/setting-a-hot-key.md).

- Se il controllo tasto di scelta si trova in una finestra di dialogo, e l' `CHotKeyCtrl` oggetto verrà eliminato automaticamente. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CHotKeyCtrl` vengono eliminati correttamente.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

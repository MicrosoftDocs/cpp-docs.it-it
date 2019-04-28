---
title: Utilizzo di un controllo tasto di scelta
ms.date: 11/04/2016
helpviewer_keywords:
- CHotKeyCtrl class [MFC], using
- hot key controls
ms.assetid: cdd6524b-cc43-447f-b151-164273559685
ms.openlocfilehash: d9178fe989e476111a3da55861642e9aa6311872
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62180531"
---
# <a name="using-a-hot-key-control"></a>Utilizzo di un controllo tasto di scelta

Uso tipico di un controllo tasto di scelta segue il modello seguente:

- Viene creato il controllo. Se il controllo è specificato nel modello di una finestra di dialogo, la creazione avviene automaticamente quando viene creata la finestra di dialogo. (È necessario disporre di un [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md) membro nella classe della finestra che corrisponde al controllo tasto di scelta.) In alternativa, è possibile usare la [Create](../mfc/reference/chotkeyctrl-class.md#create) funzione membro per creare il controllo come finestra figlio di tutte le finestre.

- Se si desidera impostare un valore predefinito per il controllo, chiamare il [SetHotKey](../mfc/reference/chotkeyctrl-class.md#sethotkey) funzione membro. Se si vuole impedire determinati stati MAIUSC, chiamare [SetRules](../mfc/reference/chotkeyctrl-class.md#setrules). Per i controlli in una finestra di dialogo, è il momento giusto per eseguire questa operazione nella finestra di dialogo [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) (funzione).

- L'utente interagisce con il controllo premendo una combinazione di tasti quando il controllo tasto di scelta ha lo stato attivo. L'utente in qualche modo indicherà che questa attività viene completata, ad esempio, fare clic su un pulsante nella finestra di dialogo.

- Quando il programma riceve una notifica che l'utente ha selezionato un tasto di scelta rapida, consigliabile usare la funzione membro [GetHotKey](../mfc/reference/chotkeyctrl-class.md#gethotkey) per recuperare i valori di stato key- and -shift virtuali dal controllo tasto di scelta.

- Quando si conosce ciò che l'utente ha selezionato della chiave, è possibile impostare il tasto di scelta rapida utilizzando uno dei metodi descritti in [impostazione di un tasto di scelta rapida](../mfc/setting-a-hot-key.md).

- Se il controllo tasto di scelta è in una finestra di dialogo e il `CHotKeyCtrl` oggetto verrà eliminato automaticamente. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CHotKeyCtrl` vengono eliminati correttamente.

## <a name="see-also"></a>Vedere anche

[Uso di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

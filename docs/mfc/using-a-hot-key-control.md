---
title: Utilizzo di un controllo tasto di scelta | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CHotKeyCtrl class [MFC], using
- hot key controls
ms.assetid: cdd6524b-cc43-447f-b151-164273559685
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d4442d45cffdae63600fa3a405e29a139b149175
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33382944"
---
# <a name="using-a-hot-key-control"></a>Utilizzo di un controllo tasto di scelta
L'utilizzo tipico di un controllo tasto di scelta segue il modello seguente:  
  
-   Viene creato il controllo. Se il controllo è specificato nel modello di una finestra di dialogo, la creazione avviene automaticamente quando viene creata la finestra di dialogo. (È necessario disporre di un [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md) membro nella classe della finestra che corrisponde al controllo tasto di scelta.) In alternativa, è possibile utilizzare il [crea](../mfc/reference/chotkeyctrl-class.md#create) funzione membro per creare il controllo come finestra figlio di qualsiasi finestra.  
  
-   Se si desidera impostare un valore predefinito per il controllo, chiamare il [SetHotKey](../mfc/reference/chotkeyctrl-class.md#sethotkey) funzione membro. Se si desidera impedire a determinati stati MAIUSC, chiamare [SetRules](../mfc/reference/chotkeyctrl-class.md#setrules). Per i controlli in una finestra di dialogo, il momento migliore per eseguire questa operazione è la finestra di dialogo [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) (funzione).  
  
-   L'utente interagisce con il controllo premendo una combinazione di tasti quando il controllo tasto di scelta ha lo stato attivo. L'utente quindi indica che questa attività è stata completata, ad esempio facendo clic su un pulsante nella finestra di dialogo.  
  
-   Quando il programma viene informato che l'utente ha selezionato un tasto di scelta rapida, è necessario utilizzare la funzione membro [GetHotKey](../mfc/reference/chotkeyctrl-class.md#gethotkey) per recuperare i valori di stato di chiave e MAIUSC virtuali dal controllo tasto di scelta.  
  
-   Quando si è certi di quale tasto selezionati dall'utente, è possibile impostare il tasto di scelta rapida utilizzando uno dei metodi descritti [l'impostazione di un tasto di scelta rapida](../mfc/setting-a-hot-key.md).  
  
-   Se in una finestra di dialogo controllo tasto di scelta e `CHotKeyCtrl` oggetto verrà eliminato automaticamente. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CHotKeyCtrl` vengono eliminati correttamente.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controlli](../mfc/controls-mfc.md)


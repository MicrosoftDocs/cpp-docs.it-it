---
title: Utilizzo di un controllo comune come finestra figlio
ms.date: 11/04/2016
helpviewer_keywords:
- controls [MFC], using as child windows
- windows [MFC], common controls as
- child windows [MFC], common controls as
- common controls [MFC], child windows
- Windows common controls [MFC], child windows
ms.assetid: 608f7d47-7854-4fce-bde9-856c51e76753
ms.openlocfilehash: 827690f273852dee8f9461aa9af51f1cf7f4ce6e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62180570"
---
# <a name="using-a-common-control-as-a-child-window"></a>Utilizzo di un controllo comune come finestra figlio

Uno qualsiasi dei controlli comuni di Windows può essere utilizzato come finestra figlio di un'altra finestra. La procedura seguente descrive come creare un controllo comune in modo dinamico e quindi utilizzarli.

### <a name="to-use-a-common-control-as-a-child-window"></a>Usare un controllo comune come finestra figlio

1. Definire il controllo nella classe correlata o del gestore.

1. Usare l'override del metodo di [CWnd:: Create](../mfc/reference/cwnd-class.md#create) metodo per creare il controllo di Windows.

1. Dopo aver creato il controllo (fin il `OnCreate` gestore se si crea una sottoclasse del controllo), è possibile modificare il controllo tramite le funzioni membro. Vedere le descrizioni dei singoli controlli [controlli](../mfc/controls-mfc.md) per informazioni dettagliate sui metodi.

1. Quando si è terminato con il controllo, usare [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow) da eliminare definitivamente il controllo.

## <a name="see-also"></a>Vedere anche

[Creazione e uso di controlli](../mfc/making-and-using-controls.md)<br/>
[Controlli](../mfc/controls-mfc.md)

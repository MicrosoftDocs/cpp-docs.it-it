---
description: 'Altre informazioni su: uso di un controllo comune come finestra figlio'
title: Utilizzo di un controllo comune come finestra figlio
ms.date: 11/04/2016
helpviewer_keywords:
- controls [MFC], using as child windows
- windows [MFC], common controls as
- child windows [MFC], common controls as
- common controls [MFC], child windows
- Windows common controls [MFC], child windows
ms.assetid: 608f7d47-7854-4fce-bde9-856c51e76753
ms.openlocfilehash: 5a5fda2cbf8d0bf16ccb17f2766b31d24e5c0c67
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263556"
---
# <a name="using-a-common-control-as-a-child-window"></a>Utilizzo di un controllo comune come finestra figlio

Uno dei controlli comuni di Windows può essere utilizzato come finestra figlio di qualsiasi altra finestra. Nella procedura seguente viene descritto come creare un controllo comune in modo dinamico e quindi come utilizzarlo.

### <a name="to-use-a-common-control-as-a-child-window"></a>Per utilizzare un controllo comune come finestra figlio

1. Definire il controllo nella classe o nel gestore correlato.

1. Usare l'override del controllo del metodo [CWnd:: create](../mfc/reference/cwnd-class.md#create) per creare il controllo di Windows.

1. Dopo che il controllo è stato creato (prima del `OnCreate` gestore se si crea una sottoclasse del controllo), è possibile modificare il controllo usando le funzioni membro. Vedere le descrizioni dei singoli controlli nei [controlli](../mfc/controls-mfc.md) per informazioni dettagliate sui metodi.

1. Al termine del controllo, utilizzare [CWnd::D estroywindow](../mfc/reference/cwnd-class.md#destroywindow) per eliminare definitivamente il controllo.

## <a name="see-also"></a>Vedi anche

[Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)<br/>
[Controlli](../mfc/controls-mfc.md)

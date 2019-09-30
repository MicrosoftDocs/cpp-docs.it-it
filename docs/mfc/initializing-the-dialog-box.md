---
title: Inizializzazione della finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- initializing dialog boxes [MFC]
- OnInitDialog method [MFC]
- modal dialog boxes [MFC], initializing
- modeless dialog boxes [MFC], initializing
- MFC dialog boxes [MFC], initializing
ms.assetid: 968142f5-19f9-4b34-a1d4-8e6412d4379b
ms.openlocfilehash: 14cdf94bef79f254b4aaa2c1c0dfba6c88b7498b
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685619"
---
# <a name="initializing-the-dialog-box"></a>Inizializzazione della finestra di dialogo

Dopo la creazione della finestra di dialogo e di tutti i relativi controlli, ma appena prima della finestra di dialogo (di uno dei due tipi) viene visualizzato sullo schermo, viene chiamata la funzione membro [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) dell'oggetto finestra di dialogo. Per una finestra di dialogo modale, questo errore si verifica durante la chiamata `DoModal`. Per una finestra di dialogo non modale, viene chiamato `OnInitDialog` quando viene chiamato `Create`. In genere si esegue l'override di `OnInitDialog` per inizializzare i controlli della finestra di dialogo, ad esempio impostando il testo iniziale di una casella di modifica. È necessario chiamare la funzione membro `OnInitDialog` della classe base, `CDialog`, dall'override `OnInitDialog`.

Se si desidera impostare il colore di sfondo della finestra di dialogo e quella di tutte le altre finestre di dialogo nell'applicazione, vedere [impostazione del colore di sfondo](../mfc/setting-the-dialog-boxs-background-color.md)della finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)

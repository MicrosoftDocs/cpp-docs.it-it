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
ms.openlocfilehash: 1f8f8f7e40b1c873c4428542c628d02e250f14b4
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84626345"
---
# <a name="initializing-the-dialog-box"></a>Inizializzazione della finestra di dialogo

Dopo la creazione della finestra di dialogo e di tutti i relativi controlli, ma appena prima della finestra di dialogo (di uno dei due tipi) viene visualizzato sullo schermo, viene chiamata la funzione membro [OnInitDialog](reference/cdialog-class.md#oninitdialog) dell'oggetto finestra di dialogo. Per una finestra di dialogo modale, questo errore si verifica durante la `DoModal` chiamata a. Per una finestra di dialogo non modale, `OnInitDialog` viene chiamato quando `Create` viene chiamato il metodo. In genere si esegue l'override `OnInitDialog` di per inizializzare i controlli della finestra di dialogo, ad esempio impostando il testo iniziale di una casella di modifica. È necessario chiamare la `OnInitDialog` funzione membro della classe di base, `CDialog` , dalla `OnInitDialog` sostituzione.

Se si desidera impostare il colore di sfondo della finestra di dialogo e quella di tutte le altre finestre di dialogo nell'applicazione, vedere [impostazione del colore di sfondo](setting-the-dialog-boxs-background-color.md)della finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)

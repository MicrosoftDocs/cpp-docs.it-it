---
description: 'Altre informazioni su: inizializzazione della finestra di dialogo'
title: Inizializzazione della finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- initializing dialog boxes [MFC]
- OnInitDialog method [MFC]
- modal dialog boxes [MFC], initializing
- modeless dialog boxes [MFC], initializing
- MFC dialog boxes [MFC], initializing
ms.assetid: 968142f5-19f9-4b34-a1d4-8e6412d4379b
ms.openlocfilehash: 317098a8c0cc745bbd4c94b9ed02401774cb0df9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97197621"
---
# <a name="initializing-the-dialog-box"></a>Inizializzazione della finestra di dialogo

Dopo la creazione della finestra di dialogo e di tutti i relativi controlli, ma appena prima della finestra di dialogo (di uno dei due tipi) viene visualizzato sullo schermo, viene chiamata la funzione membro [OnInitDialog](reference/cdialog-class.md#oninitdialog) dell'oggetto finestra di dialogo. Per una finestra di dialogo modale, questo errore si verifica durante la `DoModal` chiamata a. Per una finestra di dialogo non modale, `OnInitDialog` viene chiamato quando `Create` viene chiamato il metodo. In genere si esegue l'override `OnInitDialog` di per inizializzare i controlli della finestra di dialogo, ad esempio impostando il testo iniziale di una casella di modifica. È necessario chiamare la `OnInitDialog` funzione membro della classe di base, `CDialog` , dalla `OnInitDialog` sostituzione.

Se si desidera impostare il colore di sfondo della finestra di dialogo e quella di tutte le altre finestre di dialogo nell'applicazione, vedere [impostazione del colore di sfondo](setting-the-dialog-boxs-background-color.md)della finestra di dialogo.

## <a name="see-also"></a>Vedi anche

[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)

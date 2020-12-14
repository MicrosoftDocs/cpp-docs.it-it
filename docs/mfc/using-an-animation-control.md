---
description: 'Altre informazioni su: uso di un controllo Animation'
title: Utilizzo di un controllo Animation
ms.date: 11/04/2016
helpviewer_keywords:
- controls [MFC], animation
- CAnimateCtrl class [MFC], animation controls
- animation controls [MFC]
ms.assetid: a009a464-e12d-4112-bf52-04a09b28dd88
ms.openlocfilehash: 7ef4a7b5eb005569ac2a3e3cb66cc0ed785e9299
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202717"
---
# <a name="using-an-animation-control"></a>Utilizzo di un controllo Animation

L'utilizzo tipico di un controllo di animazione segue il modello seguente:

- Viene creato il controllo. Se il controllo è specificato nel modello di una finestra di dialogo, la creazione avviene automaticamente quando viene creata la finestra di dialogo. È necessario disporre di un membro [CAnimateCtrl](../mfc/reference/canimatectrl-class.md) nella classe della finestra di dialogo che corrisponde al controllo dell'animazione. In alternativa, è possibile usare la funzione membro [create](../mfc/reference/canimatectrl-class.md#create) per creare il controllo come finestra figlio di qualsiasi finestra.

- Caricare una clip AVI nel controllo dell'animazione chiamando la funzione membro [Open](../mfc/reference/canimatectrl-class.md#open) . Se il controllo dell'animazione si trova in una finestra di dialogo, è possibile eseguire questa operazione nella funzione [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) della classe della finestra di dialogo.

- Riprodurre il clip chiamando la funzione membro [Play](../mfc/reference/canimatectrl-class.md#play) . Se il controllo dell'animazione si trova in una finestra di dialogo, è opportuno eseguire questa operazione nella funzione della classe della finestra di dialogo `OnInitDialog` . La chiamata a `Play` non è necessaria se il controllo di animazione dispone del set di stili ACS_AUTOPLAY.

- Se si desidera visualizzare parti del clip o riprodurre frame per frame, utilizzare la `Seek` funzione membro. Per arrestare una clip in riproduzione, utilizzare la `Stop` funzione membro.

- Se non si intende eliminare immediatamente il controllo, rimuovere il clip dalla memoria chiamando la `Close` funzione membro.

- Se il controllo animazione si trova in una finestra di dialogo, l' `CAnimateCtrl` oggetto e l'oggetto verranno eliminati automaticamente. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CAnimateCtrl` vengono eliminati correttamente. L'eliminazione definitiva del controllo chiude automaticamente il clip AVI.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CAnimateCtrl](../mfc/using-canimatectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

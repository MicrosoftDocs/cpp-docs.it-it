---
title: Utilizzo di un controllo Animation | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- controls [MFC], animation
- CAnimateCtrl class [MFC], animation controls
- animation controls [MFC]
ms.assetid: a009a464-e12d-4112-bf52-04a09b28dd88
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3da9684d0218c631cbd745475d48f1cf23addde5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46404566"
---
# <a name="using-an-animation-control"></a>Utilizzo di un controllo Animation

Uso tipico di un controllo animation segue il modello seguente:

- Viene creato il controllo. Se il controllo è specificato nel modello di una finestra di dialogo, la creazione avviene automaticamente quando viene creata la finestra di dialogo. (È necessario disporre di un [CAnimateCtrl](../mfc/reference/canimatectrl-class.md) membro nella classe della finestra che corrisponde al controllo animazione.) In alternativa, è possibile usare la [Create](../mfc/reference/canimatectrl-class.md#create) funzione membro per creare il controllo come finestra figlio di tutte le finestre.

- Caricare un clip AVI nel controllo animazione chiamando il [aperto](../mfc/reference/canimatectrl-class.md#open) funzione membro. Se il controllo animazione si trova in una finestra di dialogo, a tale scopo, è della classe di finestra di dialogo [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) (funzione).

- Riprodurre il clip chiamando il [riprodurre](../mfc/reference/canimatectrl-class.md#play) funzione membro. Se il controllo animazione si trova in una finestra di dialogo, a tale scopo, è della classe di finestra di dialogo `OnInitDialog` (funzione). La chiamata a `Play` non è necessaria se il controllo animazione è lo stile ACS_AUTOPLAY impostato.

- Se si desidera visualizzare alcune parti della clip o riprodurlo ciascun frame singolarmente, usare il `Seek` funzione membro. Per arrestare un clip riprodotto da, usare il `Stop` funzione membro.

- Se non si intende eliminare definitivamente il controllo immediatamente, rimuovere la clip dalla memoria chiamando la `Close` funzione membro.

- Se il controllo animazione si trova in una finestra di dialogo e il `CAnimateCtrl` oggetto verrà eliminato automaticamente. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CAnimateCtrl` vengono eliminati correttamente. Eliminazione definitiva del controllo automaticamente chiude del clip AVI.

## <a name="see-also"></a>Vedere anche

[Uso di CAnimateCtrl](../mfc/using-canimatectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)


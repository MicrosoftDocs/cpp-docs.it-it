---
description: 'Altre informazioni su: uso di un elenco di immagini'
title: Utilizzo di un elenco di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- lists [MFC], image
- CImageList class [MFC], using
- image lists [MFC]
ms.assetid: e0aed188-a1e6-400e-9f51-033d61c5541f
ms.openlocfilehash: 92587bd80a4f613a04cae22322ab258e9869d247
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202691"
---
# <a name="using-an-image-list"></a>Utilizzo di un elenco di immagini

L'utilizzo tipico di un elenco di immagini segue il modello seguente:

- Costruire un oggetto [CImageList](../mfc/reference/cimagelist-class.md) e chiamare uno degli overload della relativa funzione [create](../mfc/reference/cimagelist-class.md#create) per creare un elenco di immagini e collegarlo all' `CImageList` oggetto.

- Se non sono state aggiunte immagini quando è stato creato l'elenco di immagini, aggiungere immagini all'elenco di immagini chiamando la funzione membro [Add](../mfc/reference/cimagelist-class.md#add) o [Read](../mfc/reference/cimagelist-class.md#read) .

- Associare l'elenco di immagini a un controllo chiamando la funzione membro appropriata del controllo oppure creare immagini dall'elenco di immagini utilizzando la [funzione membro di](../mfc/reference/cimagelist-class.md#draw) creazione dell'elenco immagini.

- Potrebbe consentire all'utente di trascinare un'immagine, usando il supporto incorporato dell'elenco immagini per il trascinamento.

> [!NOTE]
> Se l'elenco immagini è stato creato con l' **`new`** operatore, è necessario eliminare definitivamente l' `CImageList` oggetto al termine dell'operazione.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CImageList](../mfc/using-cimagelist.md)<br/>
[Controlli](../mfc/controls-mfc.md)

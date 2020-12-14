---
description: 'Altre informazioni su: tipi di elenchi di immagini'
title: Tipi di elenchi immagini
ms.date: 11/04/2016
helpviewer_keywords:
- lists [MFC], image
- image lists [MFC], types of
- CImageList class [MFC], types
ms.assetid: bee5e7c3-78f5-4037-a136-9c50d67cdee5
ms.openlocfilehash: be18a523db366813a236fd4fd94bbb001345f0d1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263738"
---
# <a name="types-of-image-lists"></a>Tipi di elenchi immagini

Esistono due tipi di elenchi di immagini ([CImageList](../mfc/reference/cimagelist-class.md)): non mascherati e mascherati. Un "elenco di immagini non mascherate" è costituito da una bitmap di colore che contiene una o più immagini. Un "elenco di immagini mascherate" è costituito da due bitmap di uguale dimensione. Il primo è una mappa di bit di colore che contiene le immagini e la seconda è una bitmap monocromatica che contiene una serie di maschere, una per ogni immagine nella prima bitmap.

Uno degli overload della `Create` funzione membro accetta un flag per indicare se l'elenco di immagini è mascherato o meno. Gli altri overload creano elenchi di immagini mascherati.

Quando viene disegnata un'immagine non mascherata, viene semplicemente copiata nel contesto del dispositivo di destinazione. ovvero viene disegnato sul colore di sfondo esistente del contesto di dispositivo. Quando viene disegnata un'immagine mascherata, i bit dell'immagine vengono combinati con i bit della maschera, in genere producendo aree trasparenti nella bitmap in cui viene visualizzato il colore di sfondo del contesto di dispositivo di destinazione. È possibile specificare diversi stili di disegno durante il disegno di un'immagine mascherata. Ad esempio, è possibile specificare che l'immagine deve essere dimostrata per indicare un oggetto selezionato.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CImageList](../mfc/using-cimagelist.md)<br/>
[Controlli](../mfc/controls-mfc.md)

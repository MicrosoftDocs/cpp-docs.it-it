---
title: Pulizia di documenti e visualizzazioni
ms.date: 11/04/2016
helpviewer_keywords:
- views [MFC], cleaning up
- documents [MFC], cleaning up
- documents [MFC], closing
ms.assetid: 0c454db2-3644-434d-9e53-8108a7aedfe1
ms.openlocfilehash: 06ff60a2cf6245f64e80d899c13a8444558fcf0b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374614"
---
# <a name="cleaning-up-documents-and-views"></a>Pulizia di documenti e visualizzazioni

Quando un documento viene chiuso, il framework chiama innanzitutto la funzione membro [DeleteContents.When](../mfc/reference/cdocument-class.md#deletecontents) a document is closing, the framework first calls its DeleteContents member function. Se è stata allocata memoria nell'heap durante l'operazione del documento, la chiamata a `DeleteContents` è il momento migliore per rilasciarla.

> [!NOTE]
> Non è necessario rilasciare i dati del documento nel distruttore del documento. Nel caso di un'applicazione SDI, l'oggetto documento può essere riutilizzato.

È possibile eseguire l'override del distruttore di una visualizzazione per liberare la memoria allocata nell'heap.

## <a name="see-also"></a>Vedere anche

[Inizializzazione e pulizia di documenti e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)

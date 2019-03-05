---
title: Pulizia di documenti e visualizzazioni
ms.date: 11/04/2016
helpviewer_keywords:
- views [MFC], cleaning up
- documents [MFC], cleaning up
- documents [MFC], closing
ms.assetid: 0c454db2-3644-434d-9e53-8108a7aedfe1
ms.openlocfilehash: 940c768823d26950d9710fb1d1a52e6a1955fead
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57258814"
---
# <a name="cleaning-up-documents-and-views"></a>Pulizia di documenti e visualizzazioni

Quando viene chiuso un documento, il framework chiama innanzitutto relativi [DeleteContents](../mfc/reference/cdocument-class.md#deletecontents) funzione membro. Se è stata allocata memoria nell'heap durante l'operazione del documento, la chiamata a `DeleteContents` è il momento migliore per rilasciarla.

> [!NOTE]
>  Non è necessario rilasciare i dati del documento nel distruttore del documento. Nel caso di un'applicazione SDI, l'oggetto documento può essere riutilizzato.

È possibile eseguire l'override del distruttore di una visualizzazione per liberare la memoria allocata nell'heap.

## <a name="see-also"></a>Vedere anche

[Inizializzazione e pulizia di documenti e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)

---
title: Pulizia di documenti e visualizzazioni
ms.date: 11/04/2016
helpviewer_keywords:
- views [MFC], cleaning up
- documents [MFC], cleaning up
- documents [MFC], closing
ms.assetid: 0c454db2-3644-434d-9e53-8108a7aedfe1
ms.openlocfilehash: 8cb6e9337b69daf78286f57898c9badf513c7921
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84626518"
---
# <a name="cleaning-up-documents-and-views"></a>Pulizia di documenti e visualizzazioni

Quando un documento viene chiuso, il Framework chiama prima la funzione membro [DeleteContents](reference/cdocument-class.md#deletecontents) . Se è stata allocata memoria nell'heap durante l'operazione del documento, la chiamata a `DeleteContents` è il momento migliore per rilasciarla.

> [!NOTE]
> Non è necessario rilasciare i dati del documento nel distruttore del documento. Nel caso di un'applicazione SDI, l'oggetto documento può essere riutilizzato.

È possibile eseguire l'override del distruttore di una visualizzazione per liberare la memoria allocata nell'heap.

## <a name="see-also"></a>Vedere anche

[Inizializzazione e pulizia di documenti e visualizzazioni](initializing-and-cleaning-up-documents-and-views.md)

---
description: 'Altre informazioni su: pulizia di documenti e visualizzazioni'
title: Pulizia di documenti e visualizzazioni
ms.date: 11/04/2016
helpviewer_keywords:
- views [MFC], cleaning up
- documents [MFC], cleaning up
- documents [MFC], closing
ms.assetid: 0c454db2-3644-434d-9e53-8108a7aedfe1
ms.openlocfilehash: 73d7dcb94068499998ac05d76dd023b7274c6588
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97176653"
---
# <a name="cleaning-up-documents-and-views"></a>Pulizia di documenti e visualizzazioni

Quando un documento viene chiuso, il Framework chiama prima la funzione membro [DeleteContents](reference/cdocument-class.md#deletecontents) . Se è stata allocata memoria nell'heap durante l'operazione del documento, la chiamata a `DeleteContents` è il momento migliore per rilasciarla.

> [!NOTE]
> Non è necessario rilasciare i dati del documento nel distruttore del documento. Nel caso di un'applicazione SDI, l'oggetto documento può essere riutilizzato.

È possibile eseguire l'override del distruttore di una visualizzazione per liberare la memoria allocata nell'heap.

## <a name="see-also"></a>Vedi anche

[Inizializzazione e pulizia di documenti e visualizzazioni](initializing-and-cleaning-up-documents-and-views.md)

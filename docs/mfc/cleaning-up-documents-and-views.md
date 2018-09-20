---
title: Pulizia di documenti e visualizzazioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- views [MFC], cleaning up
- documents [MFC], cleaning up
- documents [MFC], closing
ms.assetid: 0c454db2-3644-434d-9e53-8108a7aedfe1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f4325b0de10861fc76ee9ab816376f40ba0ba587
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46437417"
---
# <a name="cleaning-up-documents-and-views"></a>Pulizia di documenti e visualizzazioni

Quando viene chiuso un documento, il framework chiama innanzitutto relativi [DeleteContents](../mfc/reference/cdocument-class.md#deletecontents) funzione membro. Se è stata allocata memoria nell'heap durante l'operazione del documento, la chiamata a `DeleteContents` è il momento migliore per rilasciarla.

> [!NOTE]
>  Non è necessario rilasciare i dati del documento nel distruttore del documento. Nel caso di un'applicazione SDI, l'oggetto documento può essere riutilizzato.

È possibile eseguire l'override del distruttore di una visualizzazione per liberare la memoria allocata nell'heap.

## <a name="see-also"></a>Vedere anche

[Inizializzazione e pulizia di documenti e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)


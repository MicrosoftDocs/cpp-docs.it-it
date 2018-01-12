---
title: Pulizia di documenti e visualizzazioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- views [MFC], cleaning up
- documents [MFC], cleaning up
- documents [MFC], closing
ms.assetid: 0c454db2-3644-434d-9e53-8108a7aedfe1
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6a95193d5ca3df890c9c97f458b76413e588bc59
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cleaning-up-documents-and-views"></a>Pulizia di documenti e visualizzazioni
Quando viene chiuso un documento, il framework chiama innanzitutto il [DeleteContents](../mfc/reference/cdocument-class.md#deletecontents) funzione membro. Se è stata allocata memoria nell'heap durante l'operazione del documento, la chiamata a `DeleteContents` è il momento migliore per rilasciarla.  
  
> [!NOTE]
>  Non è necessario rilasciare i dati del documento nel distruttore del documento. Nel caso di un'applicazione SDI, l'oggetto documento può essere riutilizzato.  
  
 È possibile eseguire l'override del distruttore di una visualizzazione per liberare la memoria allocata nell'heap.  
  
## <a name="see-also"></a>Vedere anche  
 [Inizializzazione e pulizia di documenti e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)


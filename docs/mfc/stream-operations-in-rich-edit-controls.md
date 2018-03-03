---
title: Flusso delle operazioni nei controlli Rich Edit | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- CRichEditCtrl class [MFC], stream operations
- CRichEditCtrl class [MFC], stream storage
- rich edit controls [MFC], stream operations
- storage, stream in CRichEditCtrl
- stream operations in CRichEditCtrl
- stream storage and CRichEditCtrl
ms.assetid: 110b4684-1e76-4ca6-9ef0-5bc8b2d93c78
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c1a73790124adbc1ff8a89290bf4e1d7a4fa6824
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="stream-operations-in-rich-edit-controls"></a>Operazioni di flusso nei controlli Rich Edit
È possibile utilizzare i flussi per trasferire i dati in o da un controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). Un flusso è definito da un [EDITSTREAM](http://msdn.microsoft.com/library/windows/desktop/bb787891) struttura, che specifica un buffer e una funzione di callback definita dall'applicazione.  
  
 Per leggere i dati in un formato controllo edit (ovvero, trasmettere i dati in), utilizzare il [StreamIn](../mfc/reference/cricheditctrl-class.md#streamin) funzione membro. Il controllo chiama ripetutamente la funzione di callback definita dall'applicazione, che trasferisce ogni volta una parte dei dati nel buffer.  
  
 Per salvare il contenuto di un RTF controllo edit (ovvero, del flusso dei dati in uscita), è possibile utilizzare il [StreamOut](../mfc/reference/cricheditctrl-class.md#streamout) funzione membro. Il controllo scrive ripetutamente al buffer e quindi chiama la funzione di callback definita dall'applicazione. Per ogni chiamata, la funzione di callback salva il contenuto del buffer.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)


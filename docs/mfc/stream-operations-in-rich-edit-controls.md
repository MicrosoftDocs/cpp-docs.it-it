---
title: Flusso delle operazioni nei controlli Rich Edit | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 66afb05031b302877dfd34f64e6076f882a256d4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33379925"
---
# <a name="stream-operations-in-rich-edit-controls"></a>Operazioni di flusso nei controlli Rich Edit
È possibile utilizzare i flussi per trasferire i dati in o da un controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). Un flusso è definito da un [EDITSTREAM](http://msdn.microsoft.com/library/windows/desktop/bb787891) struttura, che specifica un buffer e una funzione di callback definita dall'applicazione.  
  
 Per leggere i dati in un formato controllo edit (ovvero, trasmettere i dati in), utilizzare il [StreamIn](../mfc/reference/cricheditctrl-class.md#streamin) funzione membro. Il controllo chiama ripetutamente la funzione di callback definita dall'applicazione, che trasferisce ogni volta una parte dei dati nel buffer.  
  
 Per salvare il contenuto di un RTF controllo edit (ovvero, del flusso dei dati in uscita), è possibile utilizzare il [StreamOut](../mfc/reference/cricheditctrl-class.md#streamout) funzione membro. Il controllo scrive ripetutamente al buffer e quindi chiama la funzione di callback definita dall'applicazione. Per ogni chiamata, la funzione di callback salva il contenuto del buffer.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)


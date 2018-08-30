---
title: Stream operazioni nei controlli Rich Edit | Microsoft Docs
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
ms.openlocfilehash: f418156fb5be4837bc0dbe9b05b3ad26d7ac02dd
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43196858"
---
# <a name="stream-operations-in-rich-edit-controls"></a>Operazioni di flusso nei controlli Rich Edit
È possibile usare i flussi per trasferire i dati da e verso un controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). Un flusso è definito da un [EDITSTREAM](/windows/desktop/api/richedit/ns-richedit-_editstream) struttura, che consente di specificare un buffer e una funzione di richiamata definita dall'applicazione.  
  
 Per leggere i dati in un'avanzata di controllo di modifica (vale a dire, trasmettere i dati in), usare il [StreamIn](../mfc/reference/cricheditctrl-class.md#streamin) funzione membro. Il controllo chiama ripetutamente la funzione di callback definita dall'applicazione, che trasferisce ogni volta una parte dei dati nel buffer.  
  
 Per salvare il contenuto di un RTF controllo di modifica (vale a dire di flusso dei dati in uscita), è possibile usare la [StreamOut](../mfc/reference/cricheditctrl-class.md#streamout) funzione membro. Il controllo scrive ripetutamente al buffer e quindi chiama la funzione di callback definita dall'applicazione. Per ogni chiamata, la funzione di callback salva il contenuto del buffer.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)


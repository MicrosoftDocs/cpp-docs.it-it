---
title: 'Controlli ActiveX MFC: Restituzione di codici di errore da un metodo | Documenti Microsoft'
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
- MFC ActiveX controls [MFC], error codes
- SetNotSupported method, using
- errors [MFC], ActiveX control error codes
- GetNotSupported method [MFC]
- FireError method [MFC]
- SCODE, MFC ActiveX controls
- ThrowError method [MFC]
ms.assetid: 771fb9c9-2413-4dcc-b386-7bc4c4adeafd
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5563153cdc5d90bc522c1f0b4edf48a8cc280755
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-activex-controls-returning-error-codes-from-a-method"></a>Controlli ActiveX MFC: restituzione di codici di errore da un metodo
In questo articolo viene descritto come restituire i codici di errore da un metodo di controllo ActiveX.  
  
 Per indicare che si è verificato un errore interno di un metodo, è consigliabile utilizzare il [COleControl:: ThrowError](../mfc/reference/colecontrol-class.md#throwerror) funzione membro, che accetta un `SCODE` (codice di stato) come parametro. È possibile utilizzare un oggetto predefinito `SCODE` o definirne uno proprio.  
  
> [!NOTE]
>  `ThrowError`è destinato a essere utilizzato solo come la restituzione di un errore dall'interno Get di una proprietà o Set di funzione o un metodo di automazione. Queste sono le uniche volte in cui il gestore di eccezioni appropriato sarà presentano nello stack.  
  
 Esistono funzioni di supporto per più comuni predefinite `SCODE`s, ad esempio [COleControl:: SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported), [COleControl::GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported), e [COleControl:: SetNotPermitted](../mfc/reference/colecontrol-class.md#setnotpermitted).  
  
 Per un elenco di predefiniti `SCODE`s e istruzioni sulla definizione personalizzato `SCODE`s, vedere la sezione [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) in controlli ActiveX: argomenti avanzati.  
  
 Per ulteriori informazioni sulla segnalazione eccezioni in altre aree del codice, vedere [COleControl:: FireError](../mfc/reference/colecontrol-class.md#fireerror) e la sezione [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) in controlli ActiveX: argomenti avanzati.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)


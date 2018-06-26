---
title: 'Controlli ActiveX MFC: Restituzione di codici di errore da un metodo | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bdcd18a80b430a0a8576effaaa46215dd5eb9600
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36927919"
---
# <a name="mfc-activex-controls-returning-error-codes-from-a-method"></a>Controlli ActiveX MFC: restituzione di codici di errore da un metodo
In questo articolo viene descritto come restituire i codici di errore da un metodo di controllo ActiveX.  
  
 Per indicare che si è verificato un errore interno di un metodo, è consigliabile usare la [COleControl:: ThrowError](../mfc/reference/colecontrol-class.md#throwerror) funzione membro, che utilizza un SCODE (codice di stato) come parametro. È possibile utilizzare un SCODE predefinito o definirne uno proprio.  
  
> [!NOTE]
>  `ThrowError` deve essere utilizzata solo come mezzo per la restituzione di un errore dall'interno Get di una proprietà o Set di funzione o un metodo di automazione. Queste sono le uniche volte in cui il gestore di eccezioni appropriato sarà presentano nello stack.  
  
 Esistono funzioni di supporto per più comuni predefinite SCODEs, ad esempio [COleControl:: SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported), [COleControl::GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported), e [COleControl::SetNotPermitted](../mfc/reference/colecontrol-class.md#setnotpermitted).  
  
 Per un elenco di predefiniti SCODEs e istruzioni sulla definizione SCODEs personalizzati, vedere la sezione [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nei controlli ActiveX: argomenti avanzati.  
  
 Per ulteriori informazioni sulla segnalazione eccezioni in altre aree del codice, vedere [COleControl:: FireError](../mfc/reference/colecontrol-class.md#fireerror) e la sezione [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) nei controlli ActiveX: argomenti avanzati.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)


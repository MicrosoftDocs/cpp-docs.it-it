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
ms.openlocfilehash: 43bf6730cf1b914405f99af6572a0a53cd942ac6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mfc-activex-controls-returning-error-codes-from-a-method"></a>Controlli ActiveX MFC: restituzione di codici di errore da un metodo
In questo articolo viene descritto come restituire i codici di errore da un metodo di controllo ActiveX.  
  
 Per indicare che si è verificato un errore interno di un metodo, è consigliabile utilizzare il [COleControl:: ThrowError](../mfc/reference/colecontrol-class.md#throwerror) funzione membro, che accetta un `SCODE` (codice di stato) come parametro. È possibile utilizzare un oggetto predefinito `SCODE` o definirne uno proprio.  
  
> [!NOTE]
>  `ThrowError` deve essere utilizzata solo come mezzo per la restituzione di un errore dall'interno Get di una proprietà o Set di funzione o un metodo di automazione. Queste sono le uniche volte in cui il gestore di eccezioni appropriato sarà presentano nello stack.  
  
 Esistono funzioni di supporto per più comuni predefinite `SCODE`s, ad esempio [COleControl:: SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported), [COleControl::GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported), e [COleControl:: SetNotPermitted](../mfc/reference/colecontrol-class.md#setnotpermitted).  
  
 Per un elenco di predefiniti `SCODE`s e istruzioni sulla definizione personalizzato `SCODE`s, vedere la sezione [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) in controlli ActiveX: argomenti avanzati.  
  
 Per ulteriori informazioni sulla segnalazione eccezioni in altre aree del codice, vedere [COleControl:: FireError](../mfc/reference/colecontrol-class.md#fireerror) e la sezione [gestione degli errori nel controllo ActiveX](../mfc/mfc-activex-controls-advanced-topics.md) in controlli ActiveX: argomenti avanzati.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)


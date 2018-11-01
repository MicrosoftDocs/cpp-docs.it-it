---
title: Utilizzo del controllo RichEdit 1.0 con MFC
ms.date: 11/04/2016
helpviewer_keywords:
- RichEdit 1.0 control
- rich edit controls [C++], RichEdit 1.0
ms.assetid: 5a9060dd-44d8-4ef3-956e-16152f7e23d2
ms.openlocfilehash: 080ad995b9c7a041337d9b296d6ef8906e7f20ec
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50468315"
---
# <a name="using-the-richedit-10-control-with-mfc"></a>Utilizzo del controllo RichEdit 1.0 con MFC

Per usare un controllo RichEdit, è necessario chiamare innanzitutto [AfxInitRichEdit2](../mfc/reference/application-information-and-management.md#afxinitrichedit2) per caricare il controllo RichEdit 2.0 (RICHED20. DLL), o chiamare [AfxInitRichEdit](../mfc/reference/application-information-and-management.md#afxinitrichedit) per caricare il controllo RichEdit 1.0 precedente (RICHED32. DLL).

È possibile usare l'oggetto corrente [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md) classe con il controllo RichEdit 1.0 precedente, ma `CRichEditCtrl` solo è progettato per supportare il controllo RichEdit 2.0. Poiché sono molto simili RichEdit 1.0 e 2.0 RichEdit, funzionerà la maggior parte dei metodi; Si noti, tuttavia, esistono alcune differenze tra i controlli di 1.0 e 2.0, in modo che alcuni metodi potrebbero non funzionare correttamente o non funzionano affatto.

## <a name="requirements"></a>Requisiti

MFC

## <a name="see-also"></a>Vedere anche

[Risoluzione dei problemi relativi all'editor finestre](../windows/troubleshooting-the-dialog-editor.md)<br/>
[Editor finestre](../windows/dialog-editor.md)
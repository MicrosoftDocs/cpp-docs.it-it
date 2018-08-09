---
title: Uso del controllo RichEdit 1.0 con MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- RichEdit 1.0 control
- rich edit controls, RichEdit 1.0
ms.assetid: 5a9060dd-44d8-4ef3-956e-16152f7e23d2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a00642c1aefdce57c37723ef4daf23381cee3c13
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39650748"
---
# <a name="using-the-richedit-10-control-with-mfc"></a>Utilizzo del controllo RichEdit 1.0 con MFC
Per usare un controllo RichEdit, è necessario chiamare innanzitutto [AfxInitRichEdit2](../mfc/reference/application-information-and-management.md#afxinitrichedit2) per caricare il controllo RichEdit 2.0 (RICHED20. DLL), o chiamare [AfxInitRichEdit](../mfc/reference/application-information-and-management.md#afxinitrichedit) per caricare il controllo RichEdit 1.0 precedente (RICHED32. DLL).  
  
 È possibile usare l'oggetto corrente [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md) classe con il controllo RichEdit 1.0 precedente, ma `CRichEditCtrl` solo è progettato per supportare il controllo RichEdit 2.0. Poiché sono molto simili RichEdit 1.0 e 2.0 RichEdit, funzionerà la maggior parte dei metodi; Si noti, tuttavia, esistono alcune differenze tra i controlli di 1.0 e 2.0, in modo che alcuni metodi potrebbero non funzionare correttamente o non funzionano affatto.  
  
## <a name="requirements"></a>Requisiti  
 MFC  
  
## <a name="see-also"></a>Vedere anche  
 [Risoluzione dei problemi relativi all'Editor finestre](../windows/troubleshooting-the-dialog-editor.md)   
 [Editor finestre](../windows/dialog-editor.md)
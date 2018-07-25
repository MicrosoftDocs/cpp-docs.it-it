---
title: Utilizzo del controllo RichEdit 1.0 con MFC | Documenti Microsoft
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
ms.openlocfilehash: d2d45de1c6bd986c2bf509ce601f80fcd3721599
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890311"
---
# <a name="using-the-richedit-10-control-with-mfc"></a>Utilizzo del controllo RichEdit 1.0 con MFC
Per utilizzare un controllo RichEdit, è necessario chiamare [AfxInitRichEdit2](../mfc/reference/application-information-and-management.md#afxinitrichedit2) per caricare il controllo RichEdit 2.0 (RICHED20. DLL) o chiamare [AfxInitRichEdit](../mfc/reference/application-information-and-management.md#afxinitrichedit) per caricare il controllo RichEdit 1.0 precedente (RICHED32. DLL).  
  
 È possibile utilizzare corrente [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md) classe con il controllo RichEdit 1.0 precedente, ma **CRichEditCtrl** è progettata esclusivamente per supportare il controllo RichEdit 2.0. Poiché RichEdit 1.0 e 2.0 di RichEdit sono molto simili, la maggior parte dei metodi funzionerà; Si noti, tuttavia, esistono alcune differenze tra i controlli di 1.0 e 2.0, pertanto alcuni metodi potrebbero non funzionare correttamente o non funzionare.  
  
## <a name="requirements"></a>Requisiti  
 MFC  
  
## <a name="see-also"></a>Vedere anche  
 [Risoluzione dei problemi relativi all'Editor finestre](../windows/troubleshooting-the-dialog-editor.md)   
 [Editor finestre](../windows/dialog-editor.md)


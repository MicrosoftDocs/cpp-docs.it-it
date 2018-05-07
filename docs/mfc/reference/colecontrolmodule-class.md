---
title: Classe COleControlModule | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- OleControlModule
dev_langs:
- C++
helpviewer_keywords:
- OLE control modules [MFC]
- MFC ActiveX controls [MFC], OLE control modules
- COleControlModule class [MFC]
- control modules [MFC]
ms.assetid: 0721724d-d4af-4eda-ad34-5a2b27810dd4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 597639145385f4aabcba0e83fef855f7a0779f9b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="colecontrolmodule-class"></a>Classe COleControlModule
Classe di base da cui deriva un oggetto modulo di controllo OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleControlModule : public CWinApp  
```  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce funzioni membro per l'inizializzazione del modulo di controllo. Ogni modulo di controllo OLE che utilizza le classi Microsoft Foundation può contenere solo un oggetto derivato da `COleControlModule`. Questo oggetto viene costruito quando vengono costruite altri oggetti globali di C++. Dichiarare una classe derivata `COleControlModule` oggetto a livello globale.  
  
 Per ulteriori informazioni sull'utilizzo di `COleControlModule` classe, vedere il [CWinApp](../../mfc/reference/cwinapp-class.md) classe e l'articolo [controlli ActiveX](../../mfc/mfc-activex-controls.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWinThread](../../mfc/reference/cwinthread-class.md)  
  
 [CWinApp](../../mfc/reference/cwinapp-class.md)  
  
 `COleControlModule`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxctl. h  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC TESTHELP](../../visual-cpp-samples.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)




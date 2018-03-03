---
title: Classe COleControlModule | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 196b69a0d86c3809415e030adb567c8642051f40
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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




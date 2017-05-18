---
title: Classe COleControlModule | Documenti di Microsoft
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
- OLE control modules
- MFC ActiveX controls, OLE control modules
- COleControlModule class
- control modules
ms.assetid: 0721724d-d4af-4eda-ad34-5a2b27810dd4
caps.latest.revision: 23
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5c6fbfc8699d7d66c40b0458972d8b6ef0dcc705
ms.openlocfilehash: 2e77c386875d25f47f0cc07eb3b7d315f1678c56
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="colecontrolmodule-class"></a>Classe COleControlModule
Classe di base da cui deriva un oggetto modulo di controllo OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleControlModule : public CWinApp  
```  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce funzioni membro per inizializzare il modulo di controllo. Ogni modulo di controllo OLE che utilizza le classi Microsoft Foundation può contenere solo un oggetto derivato da `COleControlModule`. Questo oggetto viene costruito quando vengono costruiti altri oggetti globali di C++. Dichiarare una classe derivata `COleControlModule` oggetto a livello globale.  
  
 Per ulteriori informazioni sull'utilizzo di `COleControlModule` , vedere il [CWinApp](../../mfc/reference/cwinapp-class.md) classe e l'articolo [controlli ActiveX](../../mfc/mfc-activex-controls.md).  
  
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
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)





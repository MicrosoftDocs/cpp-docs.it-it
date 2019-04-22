---
title: Classe COleControlModule
ms.date: 11/04/2016
f1_keywords:
- OleControlModule
helpviewer_keywords:
- OLE control modules [MFC]
- MFC ActiveX controls [MFC], OLE control modules
- COleControlModule class [MFC]
- control modules [MFC]
ms.assetid: 0721724d-d4af-4eda-ad34-5a2b27810dd4
ms.openlocfilehash: f6d486c7bacb897d70d85414ac3d0bd0d13e447b
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58780288"
---
# <a name="colecontrolmodule-class"></a>Classe COleControlModule

Classe di base da cui deriva un oggetto modulo di controllo OLE.

## <a name="syntax"></a>Sintassi

```
class COleControlModule : public CWinApp
```

## <a name="remarks"></a>Note

Questa classe fornisce funzioni membro per l'inizializzazione del modulo di controllo. Ogni modulo di controllo OLE che usa le classi Microsoft Foundation può contenere solo un oggetto derivato da `COleControlModule`. Questo oggetto viene costruito quando vengono costruite altri oggetti globali C++. Dichiarare la derivata `COleControlModule` oggetto a livello globale.

Per altre informazioni sull'uso di `COleControlModule` classe, vedere la [CWinApp](../../mfc/reference/cwinapp-class.md) classe e l'articolo [controlli ActiveX](../../mfc/mfc-activex-controls.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWinThread](../../mfc/reference/cwinthread-class.md)

[CWinApp](../../mfc/reference/cwinapp-class.md)

`COleControlModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

## <a name="see-also"></a>Vedere anche

[Esempio MFC TESTHELP](../../overview/visual-cpp-samples.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)

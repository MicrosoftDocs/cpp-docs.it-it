---
description: 'Altre informazioni su: classe COleControlModule'
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
ms.openlocfilehash: f88296b7c0e897f82227343b31ca2f639902256e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227481"
---
# <a name="colecontrolmodule-class"></a>Classe COleControlModule

Classe di base da cui deriva un oggetto modulo di controllo OLE.

## <a name="syntax"></a>Sintassi

```
class COleControlModule : public CWinApp
```

## <a name="remarks"></a>Osservazioni

Questa classe fornisce funzioni membro per l'inizializzazione del modulo di controllo. Ogni modulo di controllo OLE che utilizza le classi Microsoft Foundation può contenere un solo oggetto derivato da `COleControlModule` . Questo oggetto viene costruito quando vengono costruiti altri oggetti globali di C++. Dichiarare l' `COleControlModule` oggetto derivato a livello globale.

Per ulteriori informazioni sull'utilizzo della `COleControlModule` classe, vedere la classe [CWinApp](../../mfc/reference/cwinapp-class.md) e l'articolo [controlli ActiveX](../../mfc/mfc-activex-controls.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWinThread](../../mfc/reference/cwinthread-class.md)

[CWinApp](../../mfc/reference/cwinapp-class.md)

`COleControlModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxctl. h

## <a name="see-also"></a>Vedi anche

[TESTHELP di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)

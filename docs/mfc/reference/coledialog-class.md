---
title: Classe COleDialog | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleDialog
- AFXODLGS/COleDialog
- AFXODLGS/COleDialog::GetLastError
dev_langs:
- C++
helpviewer_keywords:
- COleDialog [MFC], GetLastError
ms.assetid: b1ed0aca-3914-4b00-af34-4a4fb491aec7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a41aa479fd87c76dbf167d728ad2dbb830f6a24b
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37853621"
---
# <a name="coledialog-class"></a>Classe COleDialog
Fornisce la funzionalità comune alle finestre di dialogo per OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleDialog : public CCommonDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDialog:: GetLastError](#getlasterror)|Ottiene il codice di errore restituito dalla finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 La libreria Microsoft Foundation Class fornisce diverse classi derivate da `COleDialog`:  
  
- [Classe COleInsertDialog](../../mfc/reference/coleinsertdialog-class.md)  
  
- [COleConvertDialog](../../mfc/reference/coleconvertdialog-class.md)  
  
- [COleChangeIconDialog](../../mfc/reference/colechangeicondialog-class.md)  
  
- [COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)  
  
- [COleBusyDialog](../../mfc/reference/colebusydialog-class.md)  
  
- [Classe COleUpdateDialog](../../mfc/reference/coleupdatedialog-class.md)  
  
- [COlePasteSpecialDialog](../../mfc/reference/colepastespecialdialog-class.md)  
  
- [COlePropertiesDialog](../../mfc/reference/colepropertiesdialog-class.md)  
  
- [COleChangeSourceDialog](../../mfc/reference/colechangesourcedialog-class.md)  
  
 Per altre informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `COleDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxodlgs. h  
  
##  <a name="getlasterror"></a>  COleDialog:: GetLastError  
 Chiamare il `GetLastError` funzione di membro per ottenere informazioni aggiuntive sull'errore quando `DoModal` restituisce IDABORT.  
  
```  
UINT GetLastError() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 I codici di errore restituiti da `GetLastError` dipendono specifica finestra di dialogo visualizzata.  
  
### <a name="remarks"></a>Note  
 Vedere il `DoModal` funzione membro nelle classi derivate per informazioni sui messaggi di errore specifico.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)




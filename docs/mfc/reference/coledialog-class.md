---
title: Classe COleDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleDialog
- AFXODLGS/COleDialog
- AFXODLGS/COleDialog::GetLastError
dev_langs:
- C++
helpviewer_keywords:
- OLE dialog boxes, base class
- dialog boxes, OLE
- COleDialog class
ms.assetid: b1ed0aca-3914-4b00-af34-4a4fb491aec7
caps.latest.revision: 21
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 018d06ac167a8c352d9f1822b373126c4e615854
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
  
- [Classe COleConvertDialog](../../mfc/reference/coleconvertdialog-class.md)  
  
- [Classe COleChangeIconDialog](../../mfc/reference/colechangeicondialog-class.md)  
  
- [COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)  
  
- [Classe COleBusyDialog](../../mfc/reference/colebusydialog-class.md)  
  
- [Classe COleUpdateDialog](../../mfc/reference/coleupdatedialog-class.md)  
  
- [Classe COlePasteSpecialDialog](../../mfc/reference/colepastespecialdialog-class.md)  
  
- [COlePropertiesDialog](../../mfc/reference/colepropertiesdialog-class.md)  
  
- [COleChangeSourceDialog](../../mfc/reference/colechangesourcedialog-class.md)  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `COleDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxodlgs. h  
  
##  <a name="getlasterror"></a>COleDialog:: GetLastError  
 Chiamare il `GetLastError` funzione membro per ottenere informazioni aggiuntive sull'errore quando `DoModal` restituisce **IDABORT**.  
  
```  
UINT GetLastError() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 I codici di errore restituiti da `GetLastError` dipendono specifica finestra di dialogo visualizzata.  
  
### <a name="remarks"></a>Note  
 Vedere il `DoModal` funzione membro nelle classi derivate per informazioni sui messaggi di errore specifico.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)





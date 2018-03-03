---
title: Classe CHtmlEditDoc | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CHtmlEditDoc
- AFXHTML/CHtmlEditDoc
- AFXHTML/CHtmlEditDoc::CHtmlEditDoc
- AFXHTML/CHtmlEditDoc::GetView
- AFXHTML/CHtmlEditDoc::IsModified
- AFXHTML/CHtmlEditDoc::OpenURL
dev_langs:
- C++
helpviewer_keywords:
- CHtmlEditDoc [MFC], CHtmlEditDoc
- CHtmlEditDoc [MFC], GetView
- CHtmlEditDoc [MFC], IsModified
- CHtmlEditDoc [MFC], OpenURL
ms.assetid: b2cca61f-e5d6-4099-b0d1-46bf85f0bd64
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c1e60c3b175346268b2c6b755786adbd8eb86467
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="chtmleditdoc-class"></a>Classe CHtmlEditDoc
Con [CHtmlEditView](../../mfc/reference/chtmleditview-class.md), fornisce la funzionalità della piattaforma di modifica WebBrowser nel contesto dell'architettura documento / visualizzazione MFC.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class AFX_NOVTABLE CHtmlEditDoc : public CDocument  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHtmlEditDoc::CHtmlEditDoc](#chtmleditdoc)|Costruisce un oggetto `CHtmlEditDoc`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHtmlEditDoc::GetView](#getview)|Recupera il `CHtmlEditView` oggetto associato a questo documento.|  
|[CHtmlEditDoc::IsModified](#ismodified)|Restituisce se WebBrowser (controllo) della vista associata contiene un documento che è stato modificato dall'utente.|  
|[CHtmlEditDoc::OpenURL](#openurl)|Apre un URL.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocument](../../mfc/reference/cdocument-class.md)  
  
 `CHtmlEditDoc`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxhtml.h  
  
##  <a name="chtmleditdoc"></a>CHtmlEditDoc::CHtmlEditDoc  
 Costruisce un **CHtmlEditDoc** oggetto.  
  
```  
CHtmlEditDoc();
```  
  
##  <a name="getview"></a>CHtmlEditDoc::GetView  
 Recupera il [CHtmlEditView](../../mfc/reference/chtmleditview-class.md) oggetto associato a questo documento.  
  
```  
virtual CHtmlEditView* GetView() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore al documento **CHtmlEditView** oggetto.  
  
##  <a name="ismodified"></a>CHtmlEditDoc::IsModified  
 Restituisce se WebBrowser (controllo) della vista associata contiene un documento che è stato modificato dall'utente.  
  
```  
virtual BOOL IsModified();
```  
  
##  <a name="openurl"></a>CHtmlEditDoc::OpenURL  
 Apre un URL.  
  
```  
virtual BOOL OpenURL(LPCTSTR lpszURL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszURL`  
 URL da aprire.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HTMLEdit](../../visual-cpp-samples.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)


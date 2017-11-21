---
title: CRichEditDoc (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CRichEditDoc
- AFXRICH/CRichEditDoc
- AFXRICH/CRichEditDoc::CreateClientItem
- AFXRICH/CRichEditDoc::GetStreamFormat
- AFXRICH/CRichEditDoc::GetView
- AFXRICH/CRichEditDoc::m_bRTF
dev_langs: C++
helpviewer_keywords:
- CRichEditDoc [MFC], CreateClientItem
- CRichEditDoc [MFC], GetStreamFormat
- CRichEditDoc [MFC], GetView
- CRichEditDoc [MFC], m_bRTF
ms.assetid: c936ec18-d516-49d4-b7fb-c9aa0229eddc
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 5105a03b4db49eda1c2338cf85414c4bfc0c153d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cricheditdoc-class"></a>CRichEditDoc (classe)
Con [CRichEditView](../../mfc/reference/cricheditview-class.md) e [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md), fornisce la funzionalità del controllo rich edit nel contesto dell'architettura documento/visualizzazione MFC.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CRichEditDoc : public COleServerDoc  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRichEditDoc::CreateClientItem](#createclientitem)|Chiamato per eseguire la pulizia del documento.|  
|[CRichEditDoc::GetStreamFormat](#getstreamformat)|Indica se flusso di input e output deve includere informazioni di formattazione.|  
|[CRichEditDoc::GetView](#getview)|Recupera l'associati al [CRichEditView](../../mfc/reference/cricheditview-class.md) oggetto.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[M_brtf](#m_brtf)|Indica se i/o flusso devono includere la formattazione.|  
  
## <a name="remarks"></a>Note  
 Un "controllo rich edit" è una finestra in cui l'utente può immettere e modificare il testo. Il testo può essere assegnato formattazione di carattere e paragrafo e può includere oggetti OLE incorporati. I controlli rich edit forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare qualsiasi componenti dell'interfaccia utente necessari per rendere disponibili le operazioni di formattazione per l'utente.  
  
 `CRichEditView`gestisce il testo e la caratteristica di formattazione di testo. `CRichEditDoc`gestisce l'elenco degli elementi di client che sono nella vista. `CRichEditCntrItem`fornisce l'accesso lato contenitore per gli elementi client OLE.  
  
 Questo controllo comune di Windows (e pertanto il [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md) e le classi correlate) è disponibile solo per i programmi in esecuzione in Windows 95/98 e Windows NT versione 3.51 e successive.  
  
 Per un esempio dell'utilizzo di un documento rich edit in un'applicazione MFC, vedere il [WORDPAD](../../visual-cpp-samples.md) applicazione di esempio.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocument](../../mfc/reference/cdocument-class.md)  
  
 [COleDocument](../../mfc/reference/coledocument-class.md)  
  
 [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md)  
  
 [COleServerDoc](../../mfc/reference/coleserverdoc-class.md)  
  
 `CRichEditDoc`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrich.h  
  
##  <a name="createclientitem"></a>CRichEditDoc::CreateClientItem  
 Chiamare questa funzione per creare un `CRichEditCntrItem` dell'oggetto e aggiungerlo a questo documento.  
  
```  
virtual CRichEditCntrItem* CreateClientItem(REOBJECT* preo = NULL) const = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 *preo*  
 Puntatore a un [REOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787946) struttura che descrive un elemento OLE. Il nuovo `CRichEditCntrItem` intorno a questo elemento OLE viene costruito l'oggetto. Se *preo* è **NULL**, il nuovo elemento client è vuoto.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un nuovo [CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md) oggetto a cui è stato aggiunto a questo documento.  
  
### <a name="remarks"></a>Note  
 Questa funzione non esegue le operazioni di inizializzazione OLE.  
  
 Per ulteriori informazioni, vedere il [REOBJECT](http://msdn.microsoft.com/library/windows/desktop/bb787946) struttura in Windows SDK.  
  
##  <a name="getstreamformat"></a>CRichEditDoc::GetStreamFormat  
 Chiamare questa funzione per determinare il formato di testo per lo streaming il contenuto della modifica avanzata.  
  
```  
int GetStreamFormat() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei flag seguenti:  
  
- `SF_TEXT`Indica che il controllo rich edit non mantiene le informazioni di formattazione.  
  
- `SF_RTF`Indica che il controllo rich edit mantiene le informazioni di formattazione.  
  
### <a name="remarks"></a>Note  
 Il valore restituito è basato sul [m_bRTF](#m_brtf) (membro dati). Questa funzione restituisce `SF_RTF` se `m_bRTF` è **TRUE**; in caso contrario, `SF_TEXT`.  
  
##  <a name="getview"></a>CRichEditDoc::GetView  
 Chiamare questa funzione per accedere il [CRichEditView](../../mfc/reference/cricheditview-class.md) associato a questo oggetto `CRichEditDoc` oggetto.  
  
```  
virtual CRichEditView* GetView() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al `CRichEditView` oggetto associato al documento.  
  
### <a name="remarks"></a>Note  
 Il testo e le informazioni di formattazione sono contenuti all'interno di `CRichEditView` oggetto. Il `CRichEditDoc` gestisce gli elementi OLE per la serializzazione. Deve essere presente solo una `CRichEditView` per ogni `CRichEditDoc`.  
  
##  <a name="m_brtf"></a>M_brtf  
 Quando **TRUE**, indica che [CRichEditCtrl::StreamIn](../../mfc/reference/cricheditctrl-class.md#streamin) e [CRichEditCtrl::StreamOut](../../mfc/reference/cricheditctrl-class.md#streamout) deve archiviare caratteristiche di formattazione di carattere e paragrafo.  
  
```  
BOOL m_bRTF;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC WORDPAD](../../visual-cpp-samples.md)   
 [Classe COleServerDoc](../../mfc/reference/coleserverdoc-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRichEditView (classe)](../../mfc/reference/cricheditview-class.md)   
 [Classe CRichEditCntrItem](../../mfc/reference/cricheditcntritem-class.md)   
 [COleDocument (classe)](../../mfc/reference/coledocument-class.md)   
 [Classe CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md)

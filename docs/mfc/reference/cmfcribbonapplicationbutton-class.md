---
title: Classe CMFCRibbonApplicationButton | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCRibbonApplicationButton
- AFXRIBBONBAR/CMFCRibbonApplicationButton
- AFXRIBBONBAR/CMFCRibbonApplicationButton::CMFCRibbonApplicationButton
- AFXRIBBONBAR/CMFCRibbonApplicationButton::SetImage
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonApplicationButton [MFC], CMFCRibbonApplicationButton
- CMFCRibbonApplicationButton [MFC], SetImage
ms.assetid: beb81757-fabd-4641-9130-876ba8505b78
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c105938fbca6abf98f46ff5c62c27bfa2b83a38e
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37037421"
---
# <a name="cmfcribbonapplicationbutton-class"></a>Classe CMFCRibbonApplicationButton
Implementa un pulsante speciale posizionato nell'angolo superiore sinistro della finestra dell'applicazione. Quando si fa clic sul pulsante, questo visualizza un menu che in genere contiene i comuni comandi di **File** come **Apri**, **Salva**ed **Esci**.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonApplicationButton : public CMFCRibbonButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonApplicationButton::CMFCRibbonApplicationButton](#cmfcribbonapplicationbutton)|Costruisce e inizializza un oggetto `CMFCRibbonApplicationButton`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonApplicationButton::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|`CMFCRibbonApplicationButton::GetThisClass`|Usato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCRibbonApplicationButton::SetImage](#setimage)|Assegna un'immagine al pulsante della barra multifunzione dell'applicazione.|  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi nella `CMFCRibbonApplicationButton` classe. Nell'esempio viene illustrato come assegnare un'immagine per il pulsante dell'applicazione e come impostare la descrizione comandi. Questo frammento di codice fa parte dell' [esempio Draw Client](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient#4](../../mfc/reference/codesnippet/cpp/cmfcribbonapplicationbutton-class_1.h)]  
[!code-cpp[NVC_MFC_DrawClient#5](../../mfc/reference/codesnippet/cpp/cmfcribbonapplicationbutton-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonApplicationButton](../../mfc/reference/cmfcribbonapplicationbutton-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribbonbar. H  
  
##  <a name="cmfcribbonapplicationbutton"></a>  CMFCRibbonApplicationButton::CMFCRibbonApplicationButton  
 Costruisce e Inizializza un [CMFCRibbonApplicationButton](../../mfc/reference/cmfcribbonapplicationbutton-class.md) oggetto.  
  
```  
CMFCRibbonApplicationButton();  
CMFCRibbonApplicationButton(UINT uiBmpResID);  
  CMFCRibbonApplicationButton(HBITMAP hBmp);
```  
  
### <a name="parameters"></a>Parametri  
 `uiBmpResID`  
 L'ID risorsa dell'immagine da visualizzare sul pulsante dell'applicazione.  
  
 `hBmp`  
 Handle per una bitmap da visualizzare sul pulsante dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Pulsante della barra multifunzione dell'applicazione è un pulsante speciale posizionato nell'angolo superiore sinistro della finestra dell'applicazione. Quando un utente fa clic su questo pulsante, l'applicazione apre un menu che in genere contiene i comuni **File** comandi, ad esempio **Apri**, **salvare**, e **uscita**.  
  
##  <a name="setimage"></a>  CMFCRibbonApplicationButton::SetImage  
 Assegna un'immagine per il pulsante dell'applicazione.  
  
```  
void SetImage(UINT uiBmpResID);  
void SetImage(HBITMAP hBmp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *uiBmpResID*  
 L'ID risorsa dell'immagine da visualizzare sul pulsante dell'applicazione.  
  
 [in] *hBmp*  
 Handle per una bitmap da visualizzare sul pulsante dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per assegnare una nuova immagine al pulsante della barra multifunzione dell'applicazione dopo aver creato il pulsante. Il pulsante dell'applicazione si trova nell'angolo superiore sinistro della finestra dell'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

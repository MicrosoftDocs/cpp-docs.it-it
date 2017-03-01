---
title: Classe CMFCRibbonApplicationButton | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonApplicationButton
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonApplicationButton class
ms.assetid: beb81757-fabd-4641-9130-876ba8505b78
caps.latest.revision: 25
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: a6fc19c2af854f3cd4ee3dc3a3008abcb4714ba3
ms.lasthandoff: 02/24/2017

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
|`CMFCRibbonApplicationButton::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCRibbonApplicationButton::SetImage](#setimage)|Assegna un'immagine al pulsante applicazione della barra multifunzione.|  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare metodi diversi di `CMFCRibbonApplicationButton` (classe). Nell'esempio viene illustrato come assegnare un'immagine al pulsante dell'applicazione e come impostare la descrizione comandi. Questo frammento di codice fa parte di [esempio disegnare Client](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient n.&4;](../../mfc/reference/codesnippet/cpp/cmfcribbonapplicationbutton-class_1.h)]  
[!code-cpp[NVC_MFC_DrawClient n.&5;](../../mfc/reference/codesnippet/cpp/cmfcribbonapplicationbutton-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonApplicationButton](../../mfc/reference/cmfcribbonapplicationbutton-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribbonbar. H  
  
##  <a name="a-namecmfcribbonapplicationbuttona--cmfcribbonapplicationbuttoncmfcribbonapplicationbutton"></a><a name="cmfcribbonapplicationbutton"></a>CMFCRibbonApplicationButton::CMFCRibbonApplicationButton  
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
 Pulsante della barra multifunzione dell'applicazione è un pulsante speciale che si trova nell'angolo superiore sinistro della finestra dell'applicazione. Quando un utente fa clic su questo pulsante, l'applicazione apre un menu che in genere contiene i comuni **File** comandi, ad esempio **aprire**, **salvare**, e **uscita**.  
  
##  <a name="a-namesetimagea--cmfcribbonapplicationbuttonsetimage"></a><a name="setimage"></a>CMFCRibbonApplicationButton::SetImage  
 Assegna un'immagine al pulsante dell'applicazione.  
  
```  
void SetImage(UINT uiBmpResID);  
void SetImage(HBITMAP hBmp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiBmpResID`  
 L'ID risorsa dell'immagine da visualizzare sul pulsante dell'applicazione.  
  
 [in] `hBmp`  
 Handle per una bitmap da visualizzare sul pulsante dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per assegnare una nuova immagine al pulsante applicazione della barra multifunzione dopo aver creato il pulsante. Il pulsante dell'applicazione si trova nell'angolo superiore sinistro della finestra dell'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)


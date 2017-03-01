---
title: Classe CMFCRibbonMainPanel | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonMainPanel
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonMainPanel class
ms.assetid: 1af78798-5e75-4365-9c81-a54aa5679602
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 3fc37a953e62e6ea90de8402b7f2912b06967e13
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcribbonmainpanel-class"></a>Classe CMFCRibbonMainPanel
Implementa un pannello della barra multifunzione che viene visualizzato quando si sceglie il [CMFCRibbonApplicationButton](../../mfc/reference/cmfcribbonapplicationbutton-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonMainPanel : public CMFCRibbonPanel  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonMainPanel::CMFCRibbonMainPanel`|Costruttore predefinito.|  
|`CMFCRibbonMainPanel::~CMFCRibbonMainPanel`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonMainPanel::Add](#add)|Aggiunge un elemento della barra multifunzione nel riquadro sinistro del pannello del pulsante dell'applicazione. (Esegue l'override di [CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#add).)|  
|[CMFCRibbonMainPanel::AddRecentFilesList](#addrecentfileslist)|Aggiunge una stringa di testo per il menu elenco file recenti.|  
|[CMFCRibbonMainPanel::AddToBottom](#addtobottom)|Aggiunge un elemento della barra multifunzione a nel riquadro inferiore del Pannello di applicazione della barra multifunzione.|  
|[CMFCRibbonMainPanel::AddToRight](#addtoright)|Aggiunge un elemento della barra multifunzione nel riquadro a destra del pannello del pulsante dell'applicazione.|  
|`CMFCRibbonMainPanel::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCRibbonMainPanel::GetCommandsFrame](#getcommandsframe)|Restituisce un rettangolo che rappresenta l'area del pannello principale della barra multifunzione.|  
|`CMFCRibbonMainPanel::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
  
## <a name="remarks"></a>Note  
 Visualizza il framework di `CMFCRibbonMainPanel` quando si apre il pannello dell'applicazione. Contiene tre riquadri:  
  
-   Nel riquadro sinistro sono comandi associati a file, ad esempio **aprire**, **salvare**, **stampa**, e **Chiudi**. Per aggiungere un comando in questo riquadro, chiamare [CMFCRibbonMainPanel::Add](#add).  
  
-   Riquadro di destra contiene le opzioni che modificano il comando selezionato nel riquadro a sinistra. Ad esempio, se si fa clic su **Salva con nome** nel riquadro sinistro, riquadro destro visualizzare tipi di file disponibili. Per aggiungere un elemento in questo riquadro, chiamare [CMFCRibbonMainPanel::AddToRight](#addtoright).  
  
-   Nel riquadro inferiore contiene pulsanti che consentono di modificare le impostazioni dell'applicazione e di uscire dal programma. Per aggiungere un elemento in questo riquadro, chiamare [CMFCRibbonMainPanel::AddToBottom](#addtobottom).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)  
  
 [CMFCRibbonMainPanel](../../mfc/reference/cmfcribbonmainpanel-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxRibbonMainPanel.h  
  
##  <a name="a-nameadda--cmfcribbonmainpaneladd"></a><a name="add"></a>CMFCRibbonMainPanel::Add  
 Aggiunge un elemento della barra multifunzione nel riquadro sinistro del pannello del pulsante dell'applicazione.  
  
```  
virtual void Add(CMFCRibbonBaseElement* pElem);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out]`pElem`  
 Puntatore all'elemento della barra multifunzione da aggiungere al pannello principale.  
  
### <a name="remarks"></a>Note  
 Aggiunge un elemento della barra multifunzione al pannello. Gli elementi aggiunti tramite questo metodo si troverà nella colonna a sinistra del pannello principale.  
  
##  <a name="a-nameaddrecentfileslista--cmfcribbonmainpaneladdrecentfileslist"></a><a name="addrecentfileslist"></a>CMFCRibbonMainPanel::AddRecentFilesList  
 Aggiunge una stringa di testo per il menu elenco file recenti.  
  
```  
void AddRecentFilesList(
    LPCTSTR lpszLabel,  
    int nWidth = 300);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszLabel`  
 Specifica la stringa da aggiungere all'elenco di file recenti.  
  
 `nWidth`  
 Specifica la larghezza, in pixel, del pannello elenco file recenti.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddtobottoma--cmfcribbonmainpaneladdtobottom"></a><a name="addtobottom"></a>CMFCRibbonMainPanel::AddToBottom  
 Aggiunge un elemento della barra multifunzione a nel riquadro inferiore del Pannello di applicazione della barra multifunzione.  
  
```  
void AddToBottom(CMFCRibbonMainPanelButton* pElem);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out]`pElem`  
 Puntatore all'elemento della barra multifunzione da aggiungere alla parte inferiore del pannello principale.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddtorighta--cmfcribbonmainpaneladdtoright"></a><a name="addtoright"></a>CMFCRibbonMainPanel::AddToRight  
 Aggiunge un elemento della barra multifunzione nel riquadro a destra del pannello del pulsante dell'applicazione.  
  
```  
void AddToRight(
    CMFCRibbonBaseElement* pElem,  
    int nWidth = 300);
```  
  
### <a name="parameters"></a>Parametri  
 `pElem`  
 Un puntatore a un elemento della barra multifunzione da aggiungere alla parte destra del riquadro principale.  
  
 `nWidth`  
 Specifica la larghezza, in pixel, del riquadro di destra.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per aggiungere un elemento della barra multifunzione nel riquadro destro. Il pannello destro in genere viene visualizzato l'elenco di file recenti, ma è possibile aggiungere qualsiasi altro elemento della barra multifunzione di seguito.  
  
##  <a name="a-namegetcommandsframea--cmfcribbonmainpanelgetcommandsframe"></a><a name="getcommandsframe"></a>CMFCRibbonMainPanel::GetCommandsFrame  
 Restituisce un rettangolo che rappresenta l'area del pannello principale della barra multifunzione.  
  
```  
CRect GetCommandsFrame() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un rettangolo che rappresenta l'area del pannello principale della barra multifunzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)


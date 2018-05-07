---
title: Classe CMFCRibbonMainPanel | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCRibbonMainPanel
- AFXRIBBONMAINPANEL/CMFCRibbonMainPanel
- AFXRIBBONMAINPANEL/CMFCRibbonMainPanel::Add
- AFXRIBBONMAINPANEL/CMFCRibbonMainPanel::AddRecentFilesList
- AFXRIBBONMAINPANEL/CMFCRibbonMainPanel::AddToBottom
- AFXRIBBONMAINPANEL/CMFCRibbonMainPanel::AddToRight
- AFXRIBBONMAINPANEL/CMFCRibbonMainPanel::GetCommandsFrame
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonMainPanel [MFC], Add
- CMFCRibbonMainPanel [MFC], AddRecentFilesList
- CMFCRibbonMainPanel [MFC], AddToBottom
- CMFCRibbonMainPanel [MFC], AddToRight
- CMFCRibbonMainPanel [MFC], GetCommandsFrame
ms.assetid: 1af78798-5e75-4365-9c81-a54aa5679602
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 05257749c95b619c479538a1322746ae2b487b6a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cmfcribbonmainpanel-class"></a>Classe CMFCRibbonMainPanel
Implementa un pannello della barra multifunzione che viene visualizzato quando si fa clic il [CMFCRibbonApplicationButton](../../mfc/reference/cmfcribbonapplicationbutton-class.md).  
  
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
|[CMFCRibbonMainPanel::Add](#add)|Aggiunge un elemento della barra multifunzione al riquadro sinistro del pannello del pulsante dell'applicazione. (Esegue l'override [cmfcribbonpanel:: Add](../../mfc/reference/cmfcribbonpanel-class.md#add).)|  
|[CMFCRibbonMainPanel::AddRecentFilesList](#addrecentfileslist)|Aggiunge una stringa di testo al menu dell'elenco di file recenti.|  
|[CMFCRibbonMainPanel::AddToBottom](#addtobottom)|Aggiunge un elemento della barra multifunzione nel riquadro inferiore del pannello della barra multifunzione dell'applicazione.|  
|[CMFCRibbonMainPanel::AddToRight](#addtoright)|Aggiunge un elemento della barra multifunzione nel riquadro a destra del pannello del pulsante dell'applicazione.|  
|`CMFCRibbonMainPanel::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCRibbonMainPanel::GetCommandsFrame](#getcommandsframe)|Restituisce un rettangolo che rappresenta l'area del pannello principale della barra multifunzione.|  
|`CMFCRibbonMainPanel::GetThisClass`|Usato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
  
## <a name="remarks"></a>Note  
 Il framework Visualizza il `CMFCRibbonMainPanel` quando si apre il pannello di applicazione. Include tre riquadri:  
  
-   Nel riquadro sinistro sono comandi associati a file, ad esempio **aprire**, **salvare**, **stampa**, e **Chiudi**. Per aggiungere un comando in questo riquadro, chiamare [CMFCRibbonMainPanel::Add](#add).  
  
-   Riquadro di destra contiene le opzioni che modificano il comando che si fa clic su nel riquadro a sinistra. Ad esempio, se si fa clic su **Salva con nome** dal riquadro di sinistra, riquadro di destra è possibile visualizzare tipi di file disponibili. Per aggiungere un elemento in questo riquadro, chiamare [CMFCRibbonMainPanel::AddToRight](#addtoright).  
  
-   Nel riquadro inferiore contiene pulsanti che consentono di modificare le impostazioni dell'applicazione e di uscire dal programma. Per aggiungere un elemento in questo riquadro, chiamare [CMFCRibbonMainPanel::AddToBottom](#addtobottom).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)  
  
 [CMFCRibbonMainPanel](../../mfc/reference/cmfcribbonmainpanel-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxRibbonMainPanel.h  
  
##  <a name="add"></a>  CMFCRibbonMainPanel::Add  
 Aggiunge un elemento della barra multifunzione al riquadro sinistro del pannello del pulsante dell'applicazione.  
  
```  
virtual void Add(CMFCRibbonBaseElement* pElem);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out] `pElem`  
 Puntatore all'elemento della barra multifunzione per aggiungere al pannello principale.  
  
### <a name="remarks"></a>Note  
 Aggiunge un elemento della barra multifunzione al pannello. Elementi aggiunti utilizzando questo metodo si troverà nella colonna a sinistra del pannello principale.  
  
##  <a name="addrecentfileslist"></a>  CMFCRibbonMainPanel::AddRecentFilesList  
 Aggiunge una stringa di testo al menu dell'elenco di file recenti.  
  
```  
void AddRecentFilesList(
    LPCTSTR lpszLabel,  
    int nWidth = 300);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszLabel`  
 Specifica la stringa da aggiungere all'elenco dei file recenti.  
  
 `nWidth`  
 Specifica la larghezza, in pixel, del Pannello di elenco di file recenti.  
  
### <a name="remarks"></a>Note  
  
##  <a name="addtobottom"></a>  CMFCRibbonMainPanel::AddToBottom  
 Aggiunge un elemento della barra multifunzione nel riquadro inferiore del pannello della barra multifunzione dell'applicazione.  
  
```  
void AddToBottom(CMFCRibbonMainPanelButton* pElem);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out] `pElem`  
 Puntatore all'elemento della barra multifunzione per aggiungere nella parte inferiore del pannello principale.  
  
### <a name="remarks"></a>Note  
  
##  <a name="addtoright"></a>  CMFCRibbonMainPanel::AddToRight  
 Aggiunge un elemento della barra multifunzione nel riquadro a destra del pannello del pulsante dell'applicazione.  
  
```  
void AddToRight(
    CMFCRibbonBaseElement* pElem,  
    int nWidth = 300);
```  
  
### <a name="parameters"></a>Parametri  
 `pElem`  
 Puntatore a un elemento della barra multifunzione da aggiungere alla destra del riquadro principale.  
  
 `nWidth`  
 Specifica la larghezza, in pixel, del riquadro di destra.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per aggiungere un elemento della barra multifunzione al riquadro di destra. Riquadro di destra visualizza in genere l'elenco dei file recenti, ma è possibile aggiungere qualsiasi altro elemento della barra multifunzione qui.  
  
##  <a name="getcommandsframe"></a>  CMFCRibbonMainPanel::GetCommandsFrame  
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

---
title: Classe CMFCRibbonQuickAccessToolBarDefaultState | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCRibbonQuickAccessToolBarDefaultState
- AFXRIBBONQUICKACCESSTOOLBAR/CMFCRibbonQuickAccessToolBarDefaultState
- AFXRIBBONQUICKACCESSTOOLBAR/CMFCRibbonQuickAccessToolBarDefaultState::CMFCRibbonQuickAccessToolBarDefaultState
- AFXRIBBONQUICKACCESSTOOLBAR/CMFCRibbonQuickAccessToolBarDefaultState::AddCommand
- AFXRIBBONQUICKACCESSTOOLBAR/CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom
- AFXRIBBONQUICKACCESSTOOLBAR/CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonQuickAccessToolBarDefaultState [MFC], CMFCRibbonQuickAccessToolBarDefaultState
- CMFCRibbonQuickAccessToolBarDefaultState [MFC], AddCommand
- CMFCRibbonQuickAccessToolBarDefaultState [MFC], CopyFrom
- CMFCRibbonQuickAccessToolBarDefaultState [MFC], RemoveAll
ms.assetid: eca99200-b87b-47ba-b2e8-2f3f2444b176
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9baeb204234a6df50be062c5944e9b257cb2d2c9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cmfcribbonquickaccesstoolbardefaultstate-class"></a>Classe CMFCRibbonQuickAccessToolBarDefaultState
Una classe helper che gestisce lo stato predefinito per la barra di accesso rapido è posizionato sulla barra multifunzione ( [classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonQuickAccessToolBarDefaultState  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonQuickAccessToolBarDefaultState::CMFCRibbonQuickAccessToolBarDefaultState](#cmfcribbonquickaccesstoolbardefaultstate)|Costruisce un oggetto `CMFCRibbonQuickAccessToolbarDefaultState`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#addcommand)|Aggiunge un comando allo stato predefinito per la barra di accesso rapido. Ciò non modifica la barra degli strumenti se stesso.|  
|[CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom](#copyfrom)|Copia le proprietà di una barra di accesso rapido.|  
|[CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll](#removeall)|Rimuove tutti i comandi dalla barra di accesso rapido. Ciò non modifica la barra degli strumenti se stesso.|  
  
## <a name="remarks"></a>Note  
 Dopo aver creato la barra di accesso nell'applicazione, si consiglia di impostare lo stato predefinito chiamando [CMFCRibbonBar::SetQuickAccessDefaultState](../../mfc/reference/cmfcribbonbar-class.md#setquickaccessdefaultstate). Questo stato predefinito viene ripristinato quando un utente fa clic il **reimpostare** pulsante il **Personalizza** pagina dell'applicazione **opzioni** la finestra di dialogo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CMFCRibbonQuickAccessToolBarDefaultState](../../mfc/reference/cmfcribbonquickaccesstoolbardefaultstate-class.md)  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un oggetto della `CMFCRibbonQuickAccessToolbarDefaultState` classe e come aggiungere un comando allo stato predefinito per la barra di accesso rapido.  
  
 [!code-cpp[NVC_MFC_RibbonApp#21](../../mfc/reference/codesnippet/cpp/cmfcribbonquickaccesstoolbardefaultstate-class_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribbonquickaccesstoolbar.h  
  
##  <a name="addcommand"></a>  CMFCRibbonQuickAccessToolBarDefaultState::AddCommand  
 Aggiunge un comando allo stato predefinito per la barra di accesso rapido.  
  
```  
void AddCommand(
    UINT uiCmd,  
    BOOL bIsVisible=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] uiCmd`  
 Specifica l'ID di comando.  
  
 `[in] bIsVisible`  
 Imposta la visibilità del comando, quando la barra di accesso rapido è nello stato predefinito.  
  
### <a name="remarks"></a>Note  
 L'aggiunta di un comando per il CMFCRibbonQuickAccessToolBarDefaultState esegue tre risultati. In primo luogo, ogni comando aggiunto è elencato nell'elenco a discesa sul lato destro della barra di accesso rapido. In questo modo, un utente può facilmente aggiungere o rimuovere il comando dalla barra di accesso rapido. In secondo luogo, la barra di accesso rapido viene reimpostata per mostrare solo i comandi che sono elencati come visibile nello stato predefinito quando l'utente fa clic il **reimpostare** pulsante il **Personalizza** la finestra di dialogo. Terzo, se non è stato chiamato [CMFCRibbonBar::SetQuickAccessCommands](../../mfc/reference/cmfcribbonbar-class.md#setquickaccesscommands), barra di accesso rapido utilizza i comandi visibili nell'elenco dei comandi visibili predefinita la prima volta che un utente esegue l'applicazione. Dopo aver aggiunto tutti i comandi che si desidera, chiamare [CMFCRibbonBar::SetQuickAccessDefaultState](../../mfc/reference/cmfcribbonbar-class.md#setquickaccessdefaultstate) per impostare questa istanza come lo stato predefinito per la barra di accesso rapido di tale barra multifunzione.  
  
##  <a name="copyfrom"></a>  CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom  
 Copia le proprietà di una barra di accesso rapido.  
  
```  
void CopyFrom(const CMFCRibbonQuickAccessToolBarDefaultState& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
 Un riferimento all'origine `CMFCRibbonQuickAccessToolBarDefaultState` oggetto da copiare.  
  
### <a name="remarks"></a>Note  
 Questo metodo copia ogni comando dall'origine `CMFCRibbonQuickAccessToolBarDefaultState` oggetto a questo oggetto utilizzando il [CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#addcommand) metodo.  
  
##  <a name="cmfcribbonquickaccesstoolbardefaultstate"></a>  CMFCRibbonQuickAccessToolBarDefaultState::CMFCRibbonQuickAccessToolBarDefaultState  
 Costruisce l'oggetto di stato barra di accesso predefinito.  
  
```  
CMFCRibbonQuickAccessToolBarDefaultState();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, l'elenco di comandi che la nuova istanza di [CMFRibbonQuickAccessToolBarDefaultState](../../mfc/reference/cmfcribbonquickaccesstoolbardefaultstate-class.md) contiene è vuoto.  
  
##  <a name="removeall"></a>  CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll  
 Cancella l'elenco di comandi predefiniti nella barra di accesso rapido.  
  
```  
void RemoveAll();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione rimuove da questa istanza di tutti i comandi che precedenti chiamate a [CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#addcommand) aggiunto.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)

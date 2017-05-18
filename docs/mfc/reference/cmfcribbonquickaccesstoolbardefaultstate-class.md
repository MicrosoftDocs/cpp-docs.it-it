---
title: Classe CMFCRibbonQuickAccessToolBarDefaultState | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
- CMFCRibbonQuickAccessToolBarDefaultState class
ms.assetid: eca99200-b87b-47ba-b2e8-2f3f2444b176
caps.latest.revision: 28
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 211e8d897de923e7f07df389b0e9e7218cf45872
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcribbonquickaccesstoolbardefaultstate-class"></a>Classe CMFCRibbonQuickAccessToolBarDefaultState
Una classe helper che gestisce lo stato predefinito per la barra di accesso rapido che si trova nella barra multifunzione ( [classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)).  
  
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
|[CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom](#copyfrom)|Copia le proprietà di una barra di accesso rapido a un altro.|  
|[CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll](#removeall)|Rimuove tutti i comandi dalla barra di accesso rapido. Ciò non modifica la barra degli strumenti se stesso.|  
  
## <a name="remarks"></a>Note  
 Dopo aver creato la barra di accesso nell'applicazione, è consigliabile impostare lo stato predefinito chiamando [CMFCRibbonBar::SetQuickAccessDefaultState](../../mfc/reference/cmfcribbonbar-class.md#setquickaccessdefaultstate). Questo stato predefinito viene ripristinato quando un utente fa clic il **reimpostare** pulsante il **Personalizza** pagina dell'applicazione **opzioni** la finestra di dialogo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CMFCRibbonQuickAccessToolBarDefaultState](../../mfc/reference/cmfcribbonquickaccesstoolbardefaultstate-class.md)  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della `CMFCRibbonQuickAccessToolbarDefaultState` classe e come aggiungere un comando allo stato predefinito per la barra di accesso rapido.  
  
 [!code-cpp[NVC_MFC_RibbonApp numero&21;](../../mfc/reference/codesnippet/cpp/cmfcribbonquickaccesstoolbardefaultstate-class_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribbonquickaccesstoolbar.h  
  
##  <a name="addcommand"></a>CMFCRibbonQuickAccessToolBarDefaultState::AddCommand  
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
 Imposta la visibilità del comando quando la barra di accesso rapido è nello stato predefinito.  
  
### <a name="remarks"></a>Note  
 Aggiunta di un comando per il CMFCRibbonQuickAccessToolBarDefaultState esegue tre risultati. In primo luogo, ogni comando aggiunto è elencato nell'elenco a discesa sul lato destro della barra di accesso rapido. In questo modo, un utente può facilmente aggiungere o rimuovere il comando dalla barra di accesso rapido. In secondo luogo, la barra di accesso rapido viene reimpostata per mostrare come visibile solo per i comandi elencati nello stato predefinito quando l'utente sceglie il **reimpostare** pulsante il **Personalizza** la finestra di dialogo. Terzo, se non è stato chiamato [CMFCRibbonBar::SetQuickAccessCommands](../../mfc/reference/cmfcribbonbar-class.md#setquickaccesscommands), barra di accesso rapido utilizza i comandi visibili nell'elenco dei comandi visibili predefinita la prima volta che un utente esegue l'applicazione. Dopo aver aggiunto tutti i comandi che si desiderano, è necessario chiamare [CMFCRibbonBar::SetQuickAccessDefaultState](../../mfc/reference/cmfcribbonbar-class.md#setquickaccessdefaultstate) per impostare questa istanza come lo stato predefinito per la barra di accesso rapido di tale barra multifunzione.  
  
##  <a name="copyfrom"></a>CMFCRibbonQuickAccessToolBarDefaultState::CopyFrom  
 Copia le proprietà di una barra di accesso rapido a un altro.  
  
```  
void CopyFrom(const CMFCRibbonQuickAccessToolBarDefaultState& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
 Un riferimento all'origine `CMFCRibbonQuickAccessToolBarDefaultState` oggetto da copiare.  
  
### <a name="remarks"></a>Note  
 Questo metodo copia ogni comando dall'origine `CMFCRibbonQuickAccessToolBarDefaultState` oggetto a questo oggetto utilizzando il [CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#addcommand) metodo.  
  
##  <a name="cmfcribbonquickaccesstoolbardefaultstate"></a>CMFCRibbonQuickAccessToolBarDefaultState::CMFCRibbonQuickAccessToolBarDefaultState  
 Crea l'oggetto di stato barra di accesso predefinito.  
  
```  
CMFCRibbonQuickAccessToolBarDefaultState();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, l'elenco di comandi che la nuova istanza di [CMFRibbonQuickAccessToolBarDefaultState](../../mfc/reference/cmfcribbonquickaccesstoolbardefaultstate-class.md) contiene è vuoto.  
  
##  <a name="removeall"></a>CMFCRibbonQuickAccessToolBarDefaultState::RemoveAll  
 Cancella l'elenco di comandi predefiniti nella barra di accesso rapido.  
  
```  
void RemoveAll();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione rimuove da questa istanza di tutti i comandi che le chiamate precedenti per [CMFCRibbonQuickAccessToolBarDefaultState::AddCommand](#addcommand) aggiunto.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)


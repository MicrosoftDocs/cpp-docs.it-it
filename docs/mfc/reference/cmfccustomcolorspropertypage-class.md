---
title: Classe CMFCCustomColorsPropertyPage | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCCustomColorsPropertyPage
- AFXCUSTOMCOLORSPROPERTYPAGE/CMFCCustomColorsPropertyPage
- AFXCUSTOMCOLORSPROPERTYPAGE/CMFCCustomColorsPropertyPage::Setup
dev_langs:
- C++
helpviewer_keywords:
- CMFCCustomColorsPropertyPage class
ms.assetid: 46a45ba2-1fda-440d-8018-d4dcd44f5816
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: fa534f22438b7be37e7893e545c3e060df69384f
ms.lasthandoff: 02/24/2017

---
# <a name="cmfccustomcolorspropertypage-class"></a>Classe CMFCCustomColorsPropertyPage
Rappresenta una pagina delle proprietà che consente di selezionare colori personalizzati in una finestra di dialogo colore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCCustomColorsPropertyPage : public CPropertyPage  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCCustomColorsPropertyPage::CMFCCustomColorsPropertyPage`|Costruttore predefinito.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCCustomColorsPropertyPage::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|`CMFCCustomColorsPropertyPage::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCCustomColorsPropertyPage::Setup](#setup)|Imposta i componenti di colore della pagina delle proprietà.|  
  
### <a name="remarks"></a>Note  
 La `CMFCColorDialog` classe utilizza questa classe per visualizzare la pagina delle proprietà colore personalizzato. Per ulteriori informazioni su `CMFCColorDialog`, vedere [CMFCColorDialog classe](../../mfc/reference/cmfccolordialog-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un `CMFCCustomColorsPropertyPage` dell'oggetto e impostare i componenti di colore della pagina delle proprietà.  
  
 [!code-cpp[NVC_MFC_RibbonApp&#35;](../../mfc/reference/codesnippet/cpp/cmfccustomcolorspropertypage-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CPropertyPage](../../mfc/reference/cpropertypage-class.md)  
  
 [CMFCCustomColorsPropertyPage](../../mfc/reference/cmfccustomcolorspropertypage-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcustomcolorspropertypage.h  
  
##  <a name="setup"></a>CMFCCustomColorsPropertyPage::Setup  
 Imposta i componenti di colore della pagina delle proprietà.  
  
```  
void Setup(
    BYTE R,  
    BYTE G,  
    BYTE B);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `R`|Il componente rosso del valore RGB.|  
|[in] `G`|Il componente verde del valore RGB.|  
|[in] `B`|Il componente blu del valore RGB.|  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiorna RGB corrente e gli associato HLS (tonalità, luminosità e saturazione) valori di colore della pagina delle proprietà. Il [CMFCColorDialog::SetPageTwo](../../mfc/reference/cmfccolordialog-class.md#setpagetwo) metodo chiama questo metodo quando il framework Inizializza la finestra di dialogo colore o l'utente preme il pulsante sinistro del mouse. Per ulteriori informazioni su `CMFCColorDialog`, vedere [CMFCColorDialog classe](../../mfc/reference/cmfccolordialog-class.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md)   
 [Classe CMFCStandardColorsPropertyPage](../../mfc/reference/cmfcstandardcolorspropertypage-class.md)


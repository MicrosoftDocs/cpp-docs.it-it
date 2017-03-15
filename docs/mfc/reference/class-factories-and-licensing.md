---
title: Class factory e licenze | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros.classes
dev_langs:
- C++
helpviewer_keywords:
- class factories, and licensing
ms.assetid: 53c4856a-4062-46db-9f69-dd4339f746b3
caps.latest.revision: 13
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
ms.sourcegitcommit: 17a158366f94d27b7a46917282425d652e6b9042
ms.openlocfilehash: a8ef7ba19d2337e4e50f34d7cdd528024a1d90aa
ms.lasthandoff: 02/24/2017

---
# <a name="class-factories-and-licensing"></a>Class factory e licenze
Per creare un'istanza del controllo OLE, un'applicazione contenitore chiama una funzione membro della factory di classe del controllo. Poiché il controllo è un oggetto OLE effettivo, la class factory è responsabile della creazione di istanze del controllo. Ogni classe di controllo OLE deve disporre di una class factory.  
  
 Un'altra caratteristica importante di controlli OLE è la capacità di applicare una licenza. La creazione guidata controllo consente di incorporare licenze durante la creazione del progetto del controllo. Per ulteriori informazioni sulle licenze di controllo, vedere l'articolo [controlli ActiveX: gestione delle licenze di un controllo ActiveX](../../mfc/mfc-activex-controls-licensing-an-activex-control.md).  
  
 Nella tabella seguente sono elencati alcuni macro e funzioni utilizzate per dichiarare e implementare una factory di classe del controllo e di licenza del controllo.  
  
### <a name="class-factories-and-licensing"></a>Class factory e licenze  
  
|||  
|-|-|  
|[DECLARE_OLECREATE_EX](#declare_olecreate_ex)|Dichiara la class factory per una pagina di proprietà o controllo OLE.|  
|[IMPLEMENT_OLECREATE_EX](#implement_olecreate_ex)|Implementa il controllo `GetClassID` funzione e viene dichiarata un'istanza della class factory.|  
|[BEGIN_OLEFACTORY](#begin_olefactory)|Inizia la dichiarazione di funzioni di gestione delle licenze.|  
|[END_OLEFACTORY](#end_olefactory)|Termina la dichiarazione di funzioni di gestione delle licenze.|  
|[AfxVerifyLicFile](#afxverifylicfile)|Verifica se un controllo concesso in licenza per l'utilizzo di un particolare computer.|  
  
##  <a name="a-namedeclareolecreateexa--declareolecreateex"></a><a name="declare_olecreate_ex"></a>DECLARE_OLECREATE_EX  
 Dichiara una class factory e `GetClassID` funzione membro di classe del controllo.  
  
```   
DECLARE_OLECREATE_EX(class_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe del controllo.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa macro nel file di intestazione di classe del controllo per un controllo che non supporta la gestione delle licenze.  
  
 Si noti che questa macro viene utilizzato lo stesso scopo nell'esempio di codice seguente:  
  
 [!code-cpp[NVC_MFCAxCtl&#14;](../../mfc/reference/codesnippet/cpp/class-factories-and-licensing_1.h)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="a-nameimplementolecreateexa--implementolecreateex"></a><a name="implement_olecreate_ex"></a>IMPLEMENT_OLECREATE_EX  
 Implementa factory classe del controllo e il [GetClassID](../../mfc/reference/colecontrol-class.md#getclassid) funzione membro di classe del controllo.  
  
```   
IMPLEMENT_OLECREATE_EX(
   class_name,   
    external_name,    
    l,   
    w1,   
    w2,   
    b1,   
    b2,   
    b3,   
    b4,   
    b5,   
    b6,   
    b7,
    b8)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe di pagina proprietà del controllo.  
  
 *external_name*  
 Il nome dell'oggetto esposto alle applicazioni.  
  
 *l, s1, S2, b1, b2, b3, b4, b5, b6, b7, b8*  
 Componenti della classe **CLSID**. Per ulteriori informazioni su questi parametri, vedere la sezione Osservazioni per [IMPLEMENT_OLECREATE](run-time-object-model-services.md#implement_olecreate).  
  
### <a name="remarks"></a>Note  
 Questa macro deve essere presente nel file di implementazione per qualsiasi classe di controllo che utilizza il `DECLARE_OLECREATE_EX` macro o `BEGIN_OLEFACTORY` e `END_OLEFACTORY` macro. Il nome esterno è l'identificatore del controllo OLE che è esposto ad altre applicazioni. Contenitori di utilizzano questo nome per richiedere un oggetto di questa classe del controllo.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="a-namebeginolefactorya--beginolefactory"></a><a name="begin_olefactory"></a>BEGIN_OLEFACTORY  
 Inizia la dichiarazione della factory classe nel file di intestazione della classe di controlli.  
  
``` 
BEGIN_OLEFACTORY(class_name)  
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Specifica il nome della classe del controllo cui factory classe tratta.  
  
### <a name="remarks"></a>Note  
 Le dichiarazioni delle class factory del licenze funzioni devono iniziare immediatamente dopo `BEGIN_OLEFACTORY`.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="a-nameendolefactorya--endolefactory"></a><a name="end_olefactory"></a>END_OLEFACTORY  
 Termina la dichiarazione della factory di classe del controllo.  
  
```  
END_OLEFACTORY(class_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe del controllo cui factory classe tratta.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="a-nameafxverifylicfilea--afxverifylicfile"></a><a name="afxverifylicfile"></a>AfxVerifyLicFile  
 Chiamare questa funzione per verificare che il file di licenza denominato da `pszLicFileName` è valido per il controllo OLE.  
  
```   
BOOL AFXAPI AfxVerifyLicFile(
    HINSTANCE  hInstance,  
    LPCTSTR  pszLicFileName,  
    LPOLESTR  pszLicFileContents,  
    UINT cch = -1); 
```  
  
### <a name="parameters"></a>Parametri  
 `hInstance`  
 Handle di istanza della DLL associata al controllo con licenza.  
  
 `pszLicFileName`  
 Punta a una stringa di caratteri con terminazione null contenente il nome di file di licenza.  
  
 `pszLicFileContents`  
 Punta a una sequenza di byte che deve corrispondere al sequenza trovata all'inizio del file di licenza.  
  
 `cch`  
 Numero di caratteri in `pszLicFileContents`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il file di licenza esistente e inizia con la sequenza di caratteri in `pszLicFileContents`; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Se `cch` è â €"1, questa funzione utilizza:  
  
 [!code-cpp[NVC_MFC_Utilities&#36;](../../mfc/codesnippet/cpp/class-factories-and-licensing_2.cpp)]  

### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  

## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)


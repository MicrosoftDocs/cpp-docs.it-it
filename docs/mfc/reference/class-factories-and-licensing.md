---
title: Class factory e licenze | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.macros.classes
dev_langs:
- C++
helpviewer_keywords:
- class factories [MFC], and licensing
ms.assetid: 53c4856a-4062-46db-9f69-dd4339f746b3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: abb9d5ca169edf28bb3f72c26e644894c12ccb93
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37336227"
---
# <a name="class-factories-and-licensing"></a>Class factory e licenze
Per creare un'istanza del controllo OLE, un'applicazione contenitore chiama una funzione membro di produzione di classi del controllo. Poiché il controllo è un oggetto OLE effettivo, la class factory è responsabile per la creazione di istanze del controllo. Ogni classe di controllo OLE deve avere una class factory.  
  
 Un'altra caratteristica importante di controlli OLE è la capacità di applicare una licenza. La creazione guidata controllo consente di incorporare licenze durante la creazione del progetto di controllo. Per altre informazioni sulle licenze di controllo, vedere l'articolo [controlli ActiveX: gestione delle licenze di un controllo ActiveX](../../mfc/mfc-activex-controls-licensing-an-activex-control.md).  
  
 La tabella seguente elenca diverse macro e funzioni utilizzate per dichiarare e implementare la produzione di classi del controllo e alla licenza del controllo.  
  
### <a name="class-factories-and-licensing"></a>Class factory e licenze  
  
|||  
|-|-|  
|[DECLARE_OLECREATE_EX](#declare_olecreate_ex)|Dichiara la class factory per una pagina di controllo o di proprietà OLE.|  
|[IMPLEMENT_OLECREATE_EX](#implement_olecreate_ex)|Implementa il controllo `GetClassID` funzione e viene dichiarata un'istanza della class factory.|  
|[BEGIN_OLEFACTORY](#begin_olefactory)|Inizia la dichiarazione di tutte le funzioni di gestione delle licenze.|  
|[END_OLEFACTORY](#end_olefactory)|Termina la dichiarazione di tutte le funzioni di gestione delle licenze.|  
|[AfxVerifyLicFile](#afxverifylicfile)|Verifica se un controllo ha la licenza per l'uso di un determinato computer.|  
  
##  <a name="declare_olecreate_ex"></a>  DECLARE_OLECREATE_EX  
 Dichiara una class factory e `GetClassID` funzione membro di classe del controllo.  
  
```   
DECLARE_OLECREATE_EX(class_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe del controllo.  
  
### <a name="remarks"></a>Note  
 Usare questa macro in file intestazione classe del controllo per un controllo che non supporta le licenze.  
  
 Si noti che questa macro svolge la stessa funzione dell'esempio di codice seguente:  
  
 [!code-cpp[NVC_MFCAxCtl#14](../../mfc/reference/codesnippet/cpp/class-factories-and-licensing_1.h)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="implement_olecreate_ex"></a>  IMPLEMENT_OLECREATE_EX  
 Implementa la produzione di classi del controllo e il [il parametro GetClassID](../../mfc/reference/colecontrol-class.md#getclassid) funzione membro di classe del controllo.  
  
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
 Il nome della classe di pagina del controllo proprietà.  
  
 *external_name*  
 Il nome dell'oggetto esposto alle applicazioni.  
  
 *l, s1, S2, b1, b2, b3, b4, b5, b6, b7, b8*  
 Componenti di CLSID della classe. Per altre informazioni su questi parametri, vedere le note [IMPLEMENT_OLECREATE](run-time-object-model-services.md#implement_olecreate).  
  
### <a name="remarks"></a>Note  
 Questa macro deve essere presente nel file di implementazione per qualsiasi classe di controllo che usa le macro BEGIN_OLEFACTORY ed END_OLEFACTORY o declare_olecreate_ex (macro). Il nome esterno è l'identificatore del controllo OLE che sia esposta ad altre applicazioni. I contenitori di usano questo nome per richiedere un oggetto di questa classe del controllo.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="begin_olefactory"></a>  BEGIN_OLEFACTORY  
 Inizia la dichiarazione della factory classe nel file di intestazione della classe del controllo.  
  
``` 
BEGIN_OLEFACTORY(class_name)  
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Specifica il nome della classe del controllo cui si tratta di produzione di classi.  
  
### <a name="remarks"></a>Note  
 Le dichiarazioni di produzione di classi le funzioni di gestione licenze devono iniziare immediatamente dopo BEGIN_OLEFACTORY.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="end_olefactory"></a>  END_OLEFACTORY  
 Termina la dichiarazione di produzione di classi del controllo.  
  
```  
END_OLEFACTORY(class_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe del controllo cui si tratta di produzione di classi.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="afxverifylicfile"></a>  AfxVerifyLicFile  
 Chiamare questa funzione per verificare che il file di licenza denominata da `pszLicFileName` è valido per il controllo OLE.  
  
```   
BOOL AFXAPI AfxVerifyLicFile(
    HINSTANCE  hInstance,  
    LPCTSTR  pszLicFileName,  
    LPOLESTR  pszLicFileContents,  
    UINT cch = -1); 
```  
  
### <a name="parameters"></a>Parametri  
 *hInstance*  
 L'handle di istanza della DLL associata al controllo con licenza.  
  
 *pszLicFileName*  
 Punta a una stringa di caratteri con terminazione null che contiene il nome del file di licenza.  
  
 *pszLicFileContents*  
 Punta a una sequenza di byte che deve corrispondere la sequenza trovata all'inizio del file di licenza.  
  
 *cch*  
 Numero di caratteri in *pszLicFileContents*.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il file di licenza esistente che inizia con la sequenza di caratteri *pszLicFileContents*; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Se *cch* è -1, questa funzione Usa:  
  
 [!code-cpp[NVC_MFC_Utilities#36](../../mfc/codesnippet/cpp/class-factories-and-licensing_2.cpp)]  

### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  

## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

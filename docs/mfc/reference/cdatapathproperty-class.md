---
title: Classe CDataPathProperty | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDataPathProperty
dev_langs:
- C++
helpviewer_keywords:
- ActiveX controls [C++], asynchronous
- OLE controls [C++], asynchronous
- CDataPathProperty class
- asynchronous controls [C++]
ms.assetid: 1f96efdb-54e4-460b-862c-eba5d4103488
caps.latest.revision: 24
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
ms.openlocfilehash: d767cf950d8b86959aadc2fd4d77401134a6dc75
ms.lasthandoff: 02/24/2017

---
# <a name="cdatapathproperty-class"></a>Classe CDataPathProperty
Implementa una proprietà del controllo OLE che può essere caricata in modo asincrono.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDataPathProperty : public CAsyncMonikerFile  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDataPathProperty::CDataPathProperty](#cdatapathproperty)|Costruisce un oggetto `CDataPathProperty`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDataPathProperty::GetControl](#getcontrol)|Recupera il controllo OLE asincrono associato il `CDataPathProperty` oggetto.|  
|[CDataPathProperty::GetPath](#getpath)|Recupera il percorso della proprietà.|  
|[CDataPathProperty::Open](#open)|Avvia il caricamento della proprietà asincrona per il controllo ActiveX (OLE) associato.|  
|[CDataPathProperty::ResetData](#resetdata)|Chiamate `CAsyncMonikerFile::OnDataAvailable` per notificare al contenitore che sono state modificate le proprietà del controllo.|  
|[CDataPathProperty::SetControl](#setcontrol)|Imposta il controllo ActiveX (OLE) asincrona associato alla proprietà.|  
|[CDataPathProperty::SetPath](#setpath)|Imposta il percorso della proprietà.|  
  
## <a name="remarks"></a>Note  
 Le proprietà asincrone vengono caricate dopo l'inizializzazione sincrona.  
  
 La classe `CDataPathProperty` è derivato da **CAysncMonikerFile**. Per implementare le proprietà asincrone nei controlli OLE, derivare una classe da `CDataPathProperty`ed eseguire l'override [OnDataAvailable](../../mfc/reference/casyncmonikerfile-class.md#ondataavailable).  
  
 Per ulteriori informazioni sull'utilizzo di controlli ActiveX e moniker asincroni nelle applicazioni Internet, vedere gli articoli seguenti:  
  
- [Prime operazioni in Internet: Controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)  
  
- [Prime operazioni in Internet: Moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 [COleStreamFile](../../mfc/reference/colestreamfile-class.md)  
  
 [CMonikerFile](../../mfc/reference/cmonikerfile-class.md)  
  
 [CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)  
  
 `CDataPathProperty`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxctl. h  
  
##  <a name="a-namecdatapathpropertya--cdatapathpropertycdatapathproperty"></a><a name="cdatapathproperty"></a>CDataPathProperty::CDataPathProperty  
 Costruisce un oggetto `CDataPathProperty`.  
  
```  
CDataPathProperty(COleControl* pControl = NULL);  
CDataPathProperty(LPCTSTR lpszPath, COleControl* pControl = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pControl`  
 Un puntatore all'oggetto da associare a questo controllo OLE `CDataPathProperty` oggetto.  
  
 `lpszPath`  
 Il percorso, che può essere assoluto o relativo, utilizzato per creare un moniker asincroni che fa riferimento al percorso assoluto effettivo della proprietà. `CDataPathProperty`utilizza gli URL, non nomi di file. Se si desidera che un `CDataPathProperty` oggetto per un file, anteporre `file://` al percorso.  
  
### <a name="remarks"></a>Note  
 Il `COleControl` oggetto a cui puntava `pControl` viene utilizzato da **aprire** e recuperati dalle classi derivate. Se `pControl` è **NULL**, il controllo utilizzato con **aprire** deve essere impostato con `SetControl`. Se `lpszPath` è **NULL**, è possibile passare il percorso tramite **aprire** o impostarlo con `SetPath`.  
  
##  <a name="a-namegetcontrola--cdatapathpropertygetcontrol"></a><a name="getcontrol"></a>CDataPathProperty::GetControl  
 Chiamare questa funzione membro per recuperare il `COleControl` oggetto associato di `CDataPathProperty` oggetto.  
  
```  
COleControl* GetControl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore per il controllo OLE è associato il `CDataPathProperty` oggetto. **NULL** se non è associato.  
  
##  <a name="a-namegetpatha--cdatapathpropertygetpath"></a><a name="getpath"></a>CDataPathProperty::GetPath  
 Chiamare questa funzione membro per recuperare il percorso, impostata quando il `CDataPathProperty` oggetto è stato costruito, o specificato in **aprire**, o specificati in una precedente chiamata al `SetPath` funzione membro.  
  
```  
CString GetPath() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il percorso alla proprietà stessa. Può essere vuoto se non è stato specificato alcun percorso.  
  
##  <a name="a-nameopena--cdatapathpropertyopen"></a><a name="open"></a>CDataPathProperty::Open  
 Chiamare questa funzione membro per avviare il caricamento della proprietà asincrona per il controllo associato.  
  
```  
virtual BOOL Open(
    COleControl* pControl,  
    CFileException* pError = NULL);

 
virtual BOOL Open(
    LPCTSTR lpszPath,  
    COleControl* pControl,
    CFileException* pError = NULL);

 
virtual BOOL Open(
    LPCTSTR lpszPath,  
    CFileException* pError = NULL);  
  
virtual BOOL Open(CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pControl`  
 Un puntatore all'oggetto da associare a questo controllo OLE `CDataPathProperty` oggetto.  
  
 `pError`  
 Un puntatore a un'eccezione del file. In caso di errore, verrà impostata per la causa.  
  
 `lpszPath`  
 Il percorso, che può essere assoluto o relativo, utilizzato per creare un moniker asincroni che fa riferimento al percorso assoluto effettivo della proprietà. `CDataPathProperty`utilizza gli URL, non nomi di file. Se si desidera che un `CDataPathProperty` oggetto per un file, anteporre `file://` al percorso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La funzione tenta di ottenere il `IBindHost` interfaccia dal controllo.  
  
 Prima di chiamare **aprire** senza un percorso, è necessario impostare il valore del percorso della proprietà. Questo può essere eseguito quando l'oggetto viene costruito, o chiamando il `SetPath` funzione membro.  
  
 Prima di chiamare **aprire** senza un controllo, un controllo ActiveX (precedentemente noto come controllo OLE) può essere associato all'oggetto. Questo può essere eseguito quando l'oggetto viene costruito, o chiamando `SetControl`.  
  
 Tutti gli overload del [CAsyncMonikerFile::Open](../../mfc/reference/casyncmonikerfile-class.md#open) sono inoltre disponibili `CDataPathProperty`.  
  
##  <a name="a-nameresetdataa--cdatapathpropertyresetdata"></a><a name="resetdata"></a>CDataPathProperty::ResetData  
 Chiamare questa funzione per ottenere `CAsyncMonikerFile::OnDataAvailable` per notificare al contenitore che sono state modificate le proprietà del controllo e tutte le informazioni caricate in modo asincrono non sono più utile.  
  
```  
virtual void ResetData();
```  
  
### <a name="remarks"></a>Note  
 Apertura deve essere riavviato. Le classi derivate possono eseguire l'override di questa funzione per i valori predefiniti diversi.  
  
##  <a name="a-namesetcontrola--cdatapathpropertysetcontrol"></a><a name="setcontrol"></a>CDataPathProperty::SetControl  
 Chiamare questa funzione membro per associare un controllo OLE asincrono con il `CDataPathProperty` oggetto.  
  
```  
void SetControl(COleControl* pControl);
```  
  
### <a name="parameters"></a>Parametri  
 `pControl`  
 Un puntatore per il controllo OLE asincrono da associare con la proprietà.  
  
##  <a name="a-namesetpatha--cdatapathpropertysetpath"></a><a name="setpath"></a>CDataPathProperty::SetPath  
 Chiamare questa funzione membro per impostare il percorso della proprietà.  
  
```  
void SetPath(LPCTSTR lpszPath);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszPath`  
 Un percorso, che può essere assoluto o relativo alla proprietà viene caricata in modo asincrono. `CDataPathProperty`utilizza gli URL, non nomi di file. Se si desidera che un `CDataPathProperty` oggetto per un file, anteporre `file://` al percorso.  
  
## <a name="see-also"></a>Vedere anche  
 [Immagine di esempio MFC](../../visual-cpp-samples.md)   
 [Classe CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)


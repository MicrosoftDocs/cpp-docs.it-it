---
title: "Pagine delle proprietà (MFC) | Documenti di Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- property page data transfer functions in MFC
- property pages, global MFC functions
ms.assetid: 734f88bc-c776-4136-9b0e-f45c761a45c1
caps.latest.revision: 14
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
ms.sourcegitcommit: 17a158366f94d27b7a46917282425d652e6b9042
ms.openlocfilehash: 50888697fe01d3a84d9aa4c6f5f92926e4681535
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="property-pages-mfc"></a>Pagine delle proprietà (MFC)
Pagine delle proprietà di visualizzano i valori correnti delle proprietà del controllo OLE specifico in un'interfaccia grafica e personalizzabile per la visualizzazione e modifica supportando un meccanismo di mapping dei dati basato su dialog data exchange (DDX).  
  
 Questo meccanismo di mapping dei dati esegue il mapping di controlli di pagina delle proprietà per le singole proprietà del controllo OLE. Il valore della proprietà del controllo riflette lo stato o il contenuto del controllo pagina proprietà. Il mapping tra le proprietà e i controlli di pagina di proprietà specificato da **DDP** funzione chiama nella pagina delle proprietà `DoDataExchange` funzione membro. Di seguito è riportato un elenco di **DDP** funzioni che scambiano dati immessi utilizzando la pagina delle proprietà del controllo:  
  
### <a name="property-page-data-transfer"></a>Trasferimento di dati della pagina delle proprietà  
  
|||  
|-|-|  
|[DDP_CBIndex](#ddp_cbindex)|Collega l'indice della stringa selezionata in una casella combinata con una proprietà del controllo.|  
|[DDP_CBString](#ddp_cbstring)|Collega la stringa selezionata in una casella combinata con una proprietà del controllo. La stringa selezionata può iniziare con le stesse lettere come il valore della proprietà ma non è necessario individuare una corrispondenza completamente.|  
|[DDP_CBStringExact](#ddp_cbstringexact)|Collega la stringa selezionata in una casella combinata con una proprietà del controllo. La stringa selezionata e il valore della proprietà stringa deve corrispondere esattamente.|  
|[DDP_Check](#ddp_check)|Collega una casella di controllo nella pagina delle proprietà del controllo con una proprietà del controllo.|  
|[DDP_LBIndex](#ddp_lbindex)|Collega l'indice della stringa selezionata nella casella di riepilogo con una proprietà del controllo.|  
|[DDP_LBString](#ddp_lbstring)|Collega la stringa selezionata in una casella di riepilogo con una proprietà del controllo. La stringa selezionata può iniziare con le stesse lettere come il valore della proprietà ma non deve necessariamente corrispondere completamente.|  
|[DDP_LBStringExact](#ddp_lbstringexact)|Collega la stringa selezionata in una casella di riepilogo con una proprietà del controllo. La stringa selezionata e il valore della proprietà stringa deve corrispondere esattamente.|  
|[DDP_PostProcessing](#ddp_postprocessing)|Termina il trasferimento dei valori delle proprietà dal controllo.|  
|[DDP_Radio](#ddp_radio)|Collega un gruppo di pulsanti di opzione nella pagina delle proprietà del controllo con una proprietà del controllo.|  
|[DDP_TEXT](#ddp_text)|Un controllo nella pagina delle proprietà del controllo con una proprietà del controllo dei collegamenti. Questa funzione gestisce diversi tipi di proprietà, ad esempio **double**, **breve**, `BSTR`, e **lungo**.|  
  
 Per ulteriori informazioni sui `DoDataExchange` pagine funzione e la proprietà, vedere l'articolo [controlli ActiveX: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).  
  
 Di seguito è riportato un elenco di macro utilizzate per creare e gestire pagine delle proprietà per un controllo OLE:  
  
### <a name="property-pages"></a>Pagine delle proprietà  
  
|||  
|-|-|  
|[BEGIN_PROPPAGEIDS](#begin_proppageids)|Inizia l'elenco di ID di pagina delle proprietà.|  
|[END_PROPPAGEIDS](#end_proppageids)|Termina l'elenco di ID di pagina delle proprietà.|  
|[PROPPAGEID](#proppageid)|Dichiara una pagina delle proprietà della classe del controllo.|  
  
##  <a name="ddp_cbindex"></a>DDP_CBIndex  
 Chiamare questa funzione nella funzione `DoDataExchange` della pagina delle proprietà per sincronizzare il valore di una proprietà integer con l'indice della selezione corrente di una casella combinata nella pagina delle proprietà.  
  
```   
void AFXAPI DDP_CBIndex(
    CDataExchange* pDX,  
    int id,  
    int& member,  
    LPCTSTR pszPropName);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `id`  
 ID di risorsa del controllo casella combinata associato alla proprietà del controllo specificata da `pszPropName`.  
  
 `member`  
 Variabile membro associata al controllo della pagina delle proprietà specificato da `id` e alla proprietà specificata da `pszPropName`.  
  
 `pszPropName`  
 Nome proprietà della proprietà del controllo da scambiare con il controllo casella combinata specificato da `id`.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_CBIndex`.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="ddp_cbstring"></a>DDP_CBString  
 Chiamare questa funzione nella pagina delle proprietà `DoDataExchange` (funzione) per sincronizzare il valore di una proprietà stringa con la selezione corrente in una casella combinata nella pagina delle proprietà.  
  
```  
void AFXAPI DDP_CBString(
    CDataExchange* pDX,  
    int id,  
    CString& member,  
    LPCTSTR pszPropName);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `id`  
 ID di risorsa del controllo casella combinata associato alla proprietà del controllo specificata da `pszPropName`.  
  
 `member`  
 Variabile membro associata al controllo della pagina delle proprietà specificato da `id` e alla proprietà specificata da `pszPropName`.  
  
 `pszPropName`  
 Il nome della proprietà del controllo da scambiare con la stringa di casella combinata specificata dalla proprietà `id`.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_CBString`.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="ddp_cbstringexact"></a>DDP_CBStringExact  
 Chiamare questa funzione nella pagina delle proprietà `DoDataExchange` (funzione) per sincronizzare il valore di una proprietà stringa che corrisponde esattamente alla selezione corrente in una casella combinata nella pagina delle proprietà.  
  
```  
void AFXAPI DDP_CBStringExact(
    CDataExchange* pDX,  
    int id,  
    CString& member,  
    LPCTSTR pszPropName);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `id`  
 ID di risorsa del controllo casella combinata associato alla proprietà del controllo specificata da `pszPropName`.  
  
 `member`  
 Variabile membro associata al controllo della pagina delle proprietà specificato da `id` e alla proprietà specificata da `pszPropName`.  
  
 `pszPropName`  
 Il nome della proprietà del controllo da scambiare con la stringa di casella combinata specificata dalla proprietà `id`.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_CBStringExact`.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="ddp_check"></a>DDP_Check  
 Chiamare questa funzione nella pagina delle proprietà `DoDataExchange` (funzione) per sincronizzare il valore della proprietà con il controllo casella di controllo pagina di proprietà associata.  
  
```   
void AFXAPI DDP_Check(
    CDataExchange* pDX,  
    int id,  
    int & member,  
    LPCSTR pszPropName);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `id`  
 L'ID di risorsa del controllo casella di controllo associato alla proprietà del controllo specificata da `pszPropName`.  
  
 `member`  
 Variabile membro associata al controllo della pagina delle proprietà specificato da `id` e alla proprietà specificata da `pszPropName`.  
  
 `pszPropName`  
 Il nome della proprietà del controllo da scambiare con il controllo casella di controllo specificato dalla proprietà `id`.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_Check`.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="ddp_lbindex"></a>DDP_LBIndex  
 Chiamare questa funzione nella pagina delle proprietà `DoDataExchange` (funzione) per sincronizzare il valore di una proprietà integer con l'indice della selezione corrente in una casella di riepilogo nella pagina delle proprietà.  
  
```   
void AFXAPI DDP_LBIndex(
    CDataExchange* pDX,  
    int id,  
    int& member,  
    LPCTSTR pszPropName);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `id`  
 L'ID risorsa dell'elenco di controllo associato alla proprietà del controllo specificata dalla casella `pszPropName`.  
  
 `member`  
 Variabile membro associata al controllo della pagina delle proprietà specificato da `id` e alla proprietà specificata da `pszPropName`.  
  
 `pszPropName`  
 Il nome della proprietà del controllo da scambiare con la stringa di casella di elenco specificata dalla proprietà `id`.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_LBIndex`.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="ddp_lbstring"></a>DDP_LBString  
 Chiamare questa funzione nella pagina delle proprietà `DoDataExchange` (funzione) per sincronizzare il valore di una proprietà stringa con la selezione corrente in una casella di riepilogo nella pagina delle proprietà.  
  
```   
void AFXAPI DDP_LBString(
    CDataExchange* pDX,  
    int id,  
    CString& member,  
    LPCTSTR pszPropName);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `id`  
 L'ID risorsa dell'elenco di controllo associato alla proprietà del controllo specificata dalla casella `pszPropName`.  
  
 `member`  
 Variabile membro associata al controllo della pagina delle proprietà specificato da `id` e alla proprietà specificata da `pszPropName`.  
  
 `pszPropName`  
 Il nome della proprietà del controllo da scambiare con la stringa di casella di elenco specificata dalla proprietà `id`.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_LBString`.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="ddp_lbstringexact"></a>DDP_LBStringExact  
 Chiamare questa funzione nella pagina delle proprietà `DoDataExchange` (funzione) per sincronizzare il valore di una proprietà stringa che corrisponde esattamente alla selezione corrente in una casella di riepilogo nella pagina delle proprietà.  
  
```   
void AFXAPI DDP_LBStringExact(
    CDataExchange* pDX,  
    int id,  
    CString& member,  
    LPCTSTR pszPropName);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `id`  
 L'ID risorsa dell'elenco di controllo associato alla proprietà del controllo specificata dalla casella `pszPropName`.  
  
 `member`  
 Variabile membro associata al controllo della pagina delle proprietà specificato da `id` e alla proprietà specificata da `pszPropName`.  
  
 `pszPropName`  
 Il nome della proprietà del controllo da scambiare con la stringa di casella di elenco specificata dalla proprietà `id`.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_LBStringExact`.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="ddp_postprocessing"></a>DDP_PostProcessing  
 Chiamare questa funzione nella pagina delle proprietà `DoDataExchange` (funzione), per completare il trasferimento dei valori delle proprietà dalla pagina delle proprietà al controllo quando vengono salvati i valori delle proprietà.  
  
```   
void AFXAPI DDP_PostProcessing(CDataExchange * pDX);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata dopo il completamento di tutte le funzioni di scambio di dati. Ad esempio:  
  
 [!code-cpp[NVC_MFCAxCtl&#15;](../../mfc/reference/codesnippet/cpp/property-pages-mfc_1.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="ddp_radio"></a>DDP_Radio  
 Chiamare questa funzione del controllo `DoPropExchange` funzione per sincronizzare il valore della proprietà con il controllo pulsante di opzione pagina proprietà associata.  
  
```   
void AFXAPI DDP_Radio(
    CDataExchange* pDX,  
    int id,  
    int & member,  
    LPCTSTR pszPropName);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `id`  
 L'ID risorsa della radio controllo associato alla proprietà del controllo specificata dal pulsante `pszPropName`.  
  
 `member`  
 Variabile membro associata al controllo della pagina delle proprietà specificato da `id` e alla proprietà specificata da `pszPropName`.  
  
 `pszPropName`  
 Il nome della proprietà del controllo da scambiare con il controllo pulsante di opzione specificato dalla proprietà `id`.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_Radio`.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="ddp_text"></a>DDP_TEXT  
 Chiamare questa funzione del controllo `DoDataExchange` funzione per sincronizzare il valore della proprietà con il controllo della pagina proprietà associata.  
  
```   
void AFXAPI DDP_Text(
    CDataExchange* pDX,  
    int id,  
    BYTE & member,  
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,  
    int id,  
    int & member,  
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,  
    int id,  
    UINT & member,  
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,  
    int id,  
    long & member,  
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,  
    int id,  
    DWORD & member,  
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,  
    int id,  
    float & member,  
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,  
    int id,  
    double & member,  
    LPCTSTR pszPropName);

void AFXAPI DDP_Text(
    CDataExchange* pDX,  
    int id,  
    CString & member,  
    LPCTSTR pszPropName);
```  
  
### <a name="parameters"></a>Parametri  
 `pDX`  
 Puntatore a un oggetto `CDataExchange`. Il framework fornisce questo oggetto per stabilire il contesto dello scambio dei dati, inclusa la relativa direzione.  
  
 `id`  
 L'ID di risorsa del controllo associato alla proprietà del controllo specificata da `pszPropName`.  
  
 `member`  
 Variabile membro associata al controllo della pagina delle proprietà specificato da `id` e alla proprietà specificata da `pszPropName`.  
  
 `pszPropName`  
 Il nome della proprietà del controllo da scambiare con il controllo specificato dalla proprietà `id`.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata prima della corrispondente chiamata di funzione `DDX_Text`.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="begin_proppageids"></a>BEGIN_PROPPAGEIDS  
 Inizia la definizione di elenco delle ID di pagina delle proprietà del controllo.  
  
```   
BEGIN_PROPPAGEIDS(class_name,  count)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe del controllo per la cui proprietà vengono specificate le pagine.  
  
 *count*  
 Il numero di pagine delle proprietà utilizzate dalla classe control.  
  
### <a name="remarks"></a>Note  
 Nel file di implementazione (. cpp) che definisce le funzioni membro per la classe, avviare l'elenco di pagine di proprietà con il `BEGIN_PROPPAGEIDS` (macro), quindi aggiungere le voci di macro per ognuna delle pagine delle proprietà e completare l'elenco di pagine di proprietà con il `END_PROPPAGEIDS` (macro).  
  
 Per ulteriori informazioni sulle pagine delle proprietà, vedere l'articolo [controlli ActiveX: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="end_proppageids"></a>END_PROPPAGEIDS  
 Termina la definizione di elenco di ID di pagina proprietà.  
  
```   
END_PROPPAGEIDS(class_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe del controllo cui appartiene la pagina delle proprietà.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
  
##  <a name="proppageid"></a>PROPPAGEID  
 Aggiunge una pagina delle proprietà per l'utilizzo dal controllo OLE.  
  
```   
PROPPAGEID(clsid)   
```  
  
### <a name="parameters"></a>Parametri  
 `clsid`  
 L'ID univoco della classe una pagina delle proprietà.  
  
### <a name="remarks"></a>Note  
 Tutti `PROPPAGEID` macro devono essere collocate tra il `BEGIN_PROPPAGEIDS` e `END_PROPPAGEIDS` macro nel file di implementazione del controllo.  

### <a name="requirements"></a>Requisiti  
  **Intestazione** afxctl. h  
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)


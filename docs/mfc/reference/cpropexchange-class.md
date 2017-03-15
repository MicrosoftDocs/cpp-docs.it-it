---
title: Classe CPropExchange | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CPropExchange
dev_langs:
- C++
helpviewer_keywords:
- CPropExchange class
- OLE controls, persistence
- controls [MFC], OLE
ms.assetid: ed872180-e770-4942-892a-92139d501fab
caps.latest.revision: 22
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
ms.openlocfilehash: 655d8e2f074c3bd12b1b52ece74efb844c7a9904
ms.lasthandoff: 02/24/2017

---
# <a name="cpropexchange-class"></a>Classe CPropExchange
Supporta l'implementazione di persistenza per i controlli OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class AFX_NOVTABLE CPropExchange  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPropExchange::ExchangeBlobProp](#exchangeblobprop)|Scambia una proprietà di oggetto binario di grandi dimensioni (BLOB).|  
|[CPropExchange::ExchangeFontProp](#exchangefontprop)|Scambia una font (proprietà).|  
|[CPropExchange::ExchangePersistentProp](#exchangepersistentprop)|Scambia una proprietà tra un controllo e un file.|  
|[CPropExchange::ExchangeProp](#exchangeprop)|Scambia le proprietà di qualsiasi tipo predefinito.|  
|[CPropExchange::ExchangeVersion](#exchangeversion)|Scambia il numero di versione di un controllo OLE.|  
|[CPropExchange:: GetVersion](#getversion)|Recupera il numero di versione di un controllo OLE.|  
|[CPropExchange::IsAsynchronous](#isasynchronous)|Determina se gli scambi di proprietà vengono eseguiti in modo asincrono.|  
|[CPropExchange::IsLoading](#isloading)|Indica se le proprietà vengono caricati nel controllo o salvati da esso.|  
  
## <a name="remarks"></a>Note  
 `CPropExchange`non dispone di una classe di base.  
  
 Stabilisce il contesto e la direzione di un cambio di proprietà.  
  
 La persistenza è lo scambio di informazioni sullo stato del controllo, in genere rappresentati dalle proprietà tra il controllo stesso e un supporto.  
  
 Il framework crea un oggetto derivato da `CPropExchange` quando riceve la notifica che le proprietà del controllo OLE devono essere caricati da o stored procedure per permanente di archiviazione.  
  
 Il framework passa un puntatore all'oggetto `CPropExchange` oggetto del controllo `DoPropExchange` (funzione). Se viene utilizzata una procedura guidata per creare i file di avvio per il controllo, il controllo `DoPropExchange` chiamate di funzione `COleControl::DoPropExchange`. La versione della classe base Scambia proprietà predefinite del controllo; modificare una versione della classe derivata alle proprietà di exchange che aggiunti al controllo.  
  
 `CPropExchange`può essere utilizzato per serializzare le proprietà del controllo o inizializzare le proprietà del controllo dopo il caricamento o la creazione di un controllo. Il `ExchangeProp` e `ExchangeFontProp` funzioni membro di `CPropExchange` sono in grado di archiviare le proprietà e caricare tali da supporti diversi.  
  
 Per ulteriori informazioni sull'utilizzo di `CPropExchange`, vedere l'articolo [controlli ActiveX MFC: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CPropExchange`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxctl. h  
  
##  <a name="a-nameexchangeblobpropa--cpropexchangeexchangeblobprop"></a><a name="exchangeblobprop"></a>CPropExchange::ExchangeBlobProp  
 Serializza una proprietà che archivia i dati dell'oggetto binario di grandi dimensioni (BLOB).  
  
```  
virtual BOOL ExchangeBlobProp(
    LPCTSTR pszPropName,  
    HGLOBAL* phBlob,  
    HGLOBAL hBlobDefault = NULL) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `phBlob`  
 Puntatore a una variabile che punta in cui la proprietà viene archiviata (variabile in genere è un membro della classe).  
  
 `hBlobDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà è di lettura o scritto, come appropriato, la variabile a cui fa riferimento `phBlob`. Se `hBlobDefault` viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, la serializzazione del controllo ha esito negativo.  
  
 Le funzioni **CArchivePropExchange::ExchangeBlobProp**, **CResetPropExchange::ExchangeBlobProp**, e **CPropsetPropExchange::ExchangeBlobProp** l'override della funzione virtuale pura.  
  
##  <a name="a-nameexchangefontpropa--cpropexchangeexchangefontprop"></a><a name="exchangefontprop"></a>CPropExchange::ExchangeFontProp  
 Scambia una proprietà di tipo di carattere tra un supporto di archiviazione e il controllo.  
  
```  
virtual BOOL ExchangeFontProp(
    LPCTSTR pszPropName,  
    CFontHolder& font,  
    const FONTDESC* pFontDesc,  
    LPFONTDISP pFontDispAmbient) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `font`  
 Un riferimento a un [CFontHolder](../../mfc/reference/cfontholder-class.md) oggetto che contiene la proprietà font.  
  
 `pFontDesc`  
 Un puntatore a un [FONTDESC](http://msdn.microsoft.com/library/windows/desktop/ms692782) struttura che contiene valori per inizializzare lo stato predefinito della proprietà font quando `pFontDispAmbient` è **NULL**.  
  
 `pFontDispAmbient`  
 Un puntatore per il **IFontDisp** interfaccia del tipo di carattere da utilizzare per inizializzare lo stato predefinito della proprietà font.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Se la proprietà viene caricata dal supporto per il controllo, le caratteristiche del tipo di carattere vengono recuperate dal supporto e `CFontHolder` oggetto a cui fa riferimento `font` viene inizializzato con essi. Se la proprietà viene archiviata, le caratteristiche dell'oggetto di tipo di carattere vengono scritti sul supporto.  
  
 Le funzioni **CArchivePropExchange::ExchangeFontProp**, **CResetPropExchange::ExchangeFontProp**, e **CPropsetPropExchange::ExchangeFontProp** l'override della funzione virtuale pura.  
  
##  <a name="a-nameexchangepersistentpropa--cpropexchangeexchangepersistentprop"></a><a name="exchangepersistentprop"></a>CPropExchange::ExchangePersistentProp  
 Scambia una proprietà tra il controllo e un file.  
  
```  
virtual BOOL ExchangePersistentProp(
    LPCTSTR pszPropName,  
    LPUNKNOWN* ppUnk,  
    REFIID iid,  
    LPUNKNOWN pUnkDefault) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `ppUnk`  
 Un puntatore a una variabile che contiene un puntatore per la proprietà **IUnknown** interfaccia (questa variabile è in genere un membro della classe).  
  
 `iid`  
 ID di interfaccia dell'interfaccia sulla proprietà che verrà utilizzato il controllo.  
  
 `pUnkDefault`  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Se la proprietà viene caricata dal file al controllo, la proprietà viene creata e inizializzata dal file. Se la proprietà viene archiviata, il relativo valore viene scritto nel file.  
  
 Le funzioni **CArchivePropExchange::ExchangePersistentProp**, **CResetPropExchange::ExchangePersistentProp**, e **CPropsetPropExchange::ExchangePersistentProp** l'override della funzione virtuale pura.  
  
##  <a name="a-nameexchangepropa--cpropexchangeexchangeprop"></a><a name="exchangeprop"></a>CPropExchange::ExchangeProp  
 Scambia una proprietà tra un supporto di archiviazione e il controllo.  
  
```  
virtual BOOL ExchangeProp(
    LPCTSTR pszPropName,  
    VARTYPE vtProp,  
    void* pvProp,  
    const void* pvDefault = NULL) = 0 ;  
```  
  
### <a name="parameters"></a>Parametri  
 `pszPropName`  
 Il nome della proprietà scambiati.  
  
 `vtProp`  
 Un simbolo che specifica il tipo della proprietà scambiati. I possibili valori sono:  
  
|Simbolo|Tipo di proprietà|  
|------------|-------------------|  
|`VT_I2`|**short**|  
|`VT_I4`|**long**|  
|`VT_BOOL`|**BOOL**|  
|`VT_BSTR`|`CString`|  
|`VT_CY`|**CY**|  
|`VT_R4`|**float**|  
|`VT_R8`|**double**|  
  
 `pvProp`  
 Puntatore al valore della proprietà.  
  
 *pvDefault*  
 Puntatore a un valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se exchange è stata completata. 0 se ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Se la proprietà viene caricata dal supporto per il controllo, il valore della proprietà viene recuperato dal supporto di e archiviato nell'oggetto a cui puntata `pvProp`. Se la proprietà viene archiviata nel supporto di, il valore dell'oggetto a cui puntava `pvProp` viene scritto il supporto.  
  
 Le funzioni **CArchivePropExchange::ExchangeProp**, **CResetPropExchange::ExchangeProp**, e **CPropsetPropExchange::ExchangeProp** l'override della funzione virtuale pura.  
  
##  <a name="a-nameexchangeversiona--cpropexchangeexchangeversion"></a><a name="exchangeversion"></a>CPropExchange::ExchangeVersion  
 Chiamato dal framework per gestire la persistenza di un numero di versione.  
  
```  
virtual BOOL ExchangeVersion(
    DWORD& dwVersionLoaded,  
    DWORD dwVersionDefault,  
    BOOL bConvert);
```  
  
### <a name="parameters"></a>Parametri  
 *dwVersionLoaded*  
 Riferimento a una variabile in cui verrà archiviato il numero di versione dei dati persistenti da caricare.  
  
 `dwVersionDefault`  
 Il numero di versione corrente del controllo.  
  
 `bConvert`  
 Indica se convertire i dati persistenti alla versione corrente o lasciare la stessa versione che è stata caricata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario 0.  
  
##  <a name="a-namegetversiona--cpropexchangegetversion"></a><a name="getversion"></a>CPropExchange:: GetVersion  
 Chiamare questa funzione per recuperare il numero di versione del controllo.  
  
```  
DWORD GetVersion();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di versione del controllo.  
  
##  <a name="a-nameisasynchronousa--cpropexchangeisasynchronous"></a><a name="isasynchronous"></a>CPropExchange::IsAsynchronous  
 Determina se gli scambi di proprietà vengono eseguiti in modo asincrono.  
  
```  
BOOL IsAsynchronous();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se le proprietà vengono scambiati in modo asincrono, in caso contrario FALSE.  
  
##  <a name="a-nameisloadinga--cpropexchangeisloading"></a><a name="isloading"></a>CPropExchange::IsLoading  
 Chiamare questa funzione per determinare se le proprietà vengono caricati per il controllo o salvati da esso.  
  
```  
BOOL IsLoading();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il caricamento delle proprietà; in caso contrario 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [DoPropExchange](../../mfc/reference/colecontrol-class.md#dopropexchange)





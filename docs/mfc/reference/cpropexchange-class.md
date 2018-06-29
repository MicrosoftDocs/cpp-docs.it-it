---
title: Classe CPropExchange | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CPropExchange
- AFXCTL/CPropExchange
- AFXCTL/CPropExchange::ExchangeBlobProp
- AFXCTL/CPropExchange::ExchangeFontProp
- AFXCTL/CPropExchange::ExchangePersistentProp
- AFXCTL/CPropExchange::ExchangeProp
- AFXCTL/CPropExchange::ExchangeVersion
- AFXCTL/CPropExchange::GetVersion
- AFXCTL/CPropExchange::IsAsynchronous
- AFXCTL/CPropExchange::IsLoading
dev_langs:
- C++
helpviewer_keywords:
- CPropExchange [MFC], ExchangeBlobProp
- CPropExchange [MFC], ExchangeFontProp
- CPropExchange [MFC], ExchangePersistentProp
- CPropExchange [MFC], ExchangeProp
- CPropExchange [MFC], ExchangeVersion
- CPropExchange [MFC], GetVersion
- CPropExchange [MFC], IsAsynchronous
- CPropExchange [MFC], IsLoading
ms.assetid: ed872180-e770-4942-892a-92139d501fab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fef6d3e30791d2a08a82d1b152cd849cd4ebf24b
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37078408"
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
|[CPropExchange::ExchangeBlobProp](#exchangeblobprop)|Scambia una proprietà oggetto binario di grandi dimensioni (BLOB).|  
|[CPropExchange::ExchangeFontProp](#exchangefontprop)|Scambia una proprietà del tipo di carattere.|  
|[CPropExchange::ExchangePersistentProp](#exchangepersistentprop)|Scambia una proprietà tra un controllo e un file.|  
|[CPropExchange::ExchangeProp](#exchangeprop)|Scambia le proprietà di qualsiasi tipo predefinito.|  
|[CPropExchange::ExchangeVersion](#exchangeversion)|Scambia il numero di versione di un controllo OLE.|  
|[CPropExchange:: GetVersion](#getversion)|Recupera il numero di versione di un controllo OLE.|  
|[CPropExchange::IsAsynchronous](#isasynchronous)|Determina se gli scambi di proprietà vengono eseguiti in modo asincrono.|  
|[CPropExchange::IsLoading](#isloading)|Indica se le proprietà vengono caricati nel controllo o salvato da quest'ultimo.|  
  
## <a name="remarks"></a>Note  
 `CPropExchange` non dispone di una classe basa.  
  
 Consente di stabilire il contesto e la direzione di un cambio di proprietà.  
  
 La persistenza è lo scambio di informazioni sullo stato del controllo, in genere rappresentate dalle proprietà tra il controllo stesso e un supporto.  
  
 Il framework crea un oggetto derivato da `CPropExchange` quando riceve la notifica che devono essere caricati dalle proprietà del controllo OLE o archiviazione stored in persistente.  
  
 Il framework passa un puntatore a questo `CPropExchange` oggetto al controllo del codice `DoPropExchange` (funzione). Se è stata utilizzata una procedura guidata per creare i file di avvio per il controllo, il controllo `DoPropExchange` chiamate di funzione `COleControl::DoPropExchange`. La versione della classe base Scambia proprietà predefinite del controllo; è modificare versione della classe derivata alle proprietà di exchange che aggiunti al controllo del codice.  
  
 `CPropExchange` può essere utilizzato per serializzare le proprietà di un controllo o inizializzare le proprietà di un controllo in caso di carico o la creazione di un controllo. Il `ExchangeProp` e `ExchangeFontProp` funzioni membro di `CPropExchange` sono in grado di archiviare le proprietà e caricarli dai supporti diversi.  
  
 Per ulteriori informazioni sull'utilizzo `CPropExchange`, vedere l'articolo [controlli ActiveX MFC: pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CPropExchange`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxctl. h  
  
##  <a name="exchangeblobprop"></a>  CPropExchange::ExchangeBlobProp  
 Serializza una proprietà che archivia i dati oggetto binario di grandi dimensioni (BLOB).  
  
```  
virtual BOOL ExchangeBlobProp(
    LPCTSTR pszPropName,  
    HGLOBAL* phBlob,  
    HGLOBAL hBlobDefault = NULL) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 *pszPropName*  
 Il nome della proprietà scambiati.  
  
 *phBlob*  
 Puntatore a una variabile che punta a in cui la proprietà viene archiviata (variabile è in genere un membro della classe).  
  
 *hBlobDefault*  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha avuto esito positivo; lo scambio 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il valore della proprietà è di lettura o scritto a seconda dei casi, la variabile fa riferimento *phBlob*. Se *hBlobDefault* viene specificato, verrà considerato come valore predefinito della proprietà. Questo valore viene utilizzato se per qualsiasi motivo, la serializzazione del controllo ha esito negativo.  
  
 Le funzioni **CArchivePropExchange::ExchangeBlobProp**, **CResetPropExchange::ExchangeBlobProp**, e **CPropsetPropExchange::ExchangeBlobProp** eseguire l'override Questa funzione virtuale pura.  
  
##  <a name="exchangefontprop"></a>  CPropExchange::ExchangeFontProp  
 Scambia una proprietà del tipo di carattere tra un supporto di archiviazione e il controllo.  
  
```  
virtual BOOL ExchangeFontProp(
    LPCTSTR pszPropName,  
    CFontHolder& font,  
    const FONTDESC* pFontDesc,  
    LPFONTDISP pFontDispAmbient) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 *pszPropName*  
 Il nome della proprietà scambiati.  
  
 *Tipo di carattere*  
 Un riferimento a un [CFontHolder](../../mfc/reference/cfontholder-class.md) oggetto che contiene la proprietà del carattere.  
  
 *pFontDesc*  
 Un puntatore a un [FONTDESC](http://msdn.microsoft.com/library/windows/desktop/ms692782) struttura che contiene i valori per inizializzare lo stato predefinito della proprietà font quando *pFontDispAmbient* è **NULL**.  
  
 *pFontDispAmbient*  
 Un puntatore per il **IFontDisp** interfaccia di un tipo di carattere da utilizzare per inizializzare lo stato predefinito della proprietà del tipo di carattere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha avuto esito positivo; lo scambio 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Se la proprietà del tipo di carattere viene caricata dal supporto per il controllo, le caratteristiche del tipo di carattere vengono recuperate dal supporto e il `CFontHolder` oggetto fa riferimento *carattere* viene inizializzato con essi. Se la proprietà del carattere è stata archiviata, le caratteristiche dell'oggetto del tipo di carattere vengono scritti nel supporto di.  
  
 Le funzioni **CArchivePropExchange::ExchangeFontProp**, **CResetPropExchange::ExchangeFontProp**, e **CPropsetPropExchange::ExchangeFontProp** eseguire l'override Questa funzione virtuale pura.  
  
##  <a name="exchangepersistentprop"></a>  CPropExchange::ExchangePersistentProp  
 Scambia una proprietà tra il controllo e un file.  
  
```  
virtual BOOL ExchangePersistentProp(
    LPCTSTR pszPropName,  
    LPUNKNOWN* ppUnk,  
    REFIID iid,  
    LPUNKNOWN pUnkDefault) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 *pszPropName*  
 Il nome della proprietà scambiati.  
  
 *ppUnk*  
 Un puntatore a una variabile che contiene un puntatore per la proprietà **IUnknown** interfaccia (questa variabile è in genere un membro della classe).  
  
 *IID*  
 ID di interfaccia dell'interfaccia nella proprietà di cui verrà utilizzato il controllo.  
  
 *pUnkDefault*  
 Valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha avuto esito positivo; lo scambio 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Se la proprietà viene caricata dal file al controllo, la proprietà è creata e inizializzata dal file. Se la proprietà è stata archiviata, il relativo valore viene scritto nel file.  
  
 Le funzioni **CArchivePropExchange::ExchangePersistentProp**, **CResetPropExchange::ExchangePersistentProp**, e **CPropsetPropExchange::ExchangePersistentProp** eseguire l'override di questa funzione virtuale pura.  
  
##  <a name="exchangeprop"></a>  CPropExchange::ExchangeProp  
 Scambia una proprietà tra un supporto di archiviazione e il controllo.  
  
```  
virtual BOOL ExchangeProp(
    LPCTSTR pszPropName,  
    VARTYPE vtProp,  
    void* pvProp,  
    const void* pvDefault = NULL) = 0 ;  
```  
  
### <a name="parameters"></a>Parametri  
 *pszPropName*  
 Il nome della proprietà scambiati.  
  
 *vtProp*  
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
  
 *pvProp*  
 Puntatore al valore della proprietà.  
  
 *pvDefault*  
 Puntatore a un valore predefinito per la proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha avuto esito positivo; lo scambio 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Se la proprietà viene caricata dal supporto per il controllo, il valore della proprietà viene recuperato dal supporto e archiviato nell'oggetto a cui puntata *pvProp*. Se la proprietà è stata archiviata nel supporto di, il valore dell'oggetto a cui punta *pvProp* viene scritto nel supporto di.  
  
 Le funzioni **CArchivePropExchange::ExchangeProp**, **CResetPropExchange::ExchangeProp**, e **CPropsetPropExchange::ExchangeProp** override questo pura funzione virtuale.  
  
##  <a name="exchangeversion"></a>  CPropExchange::ExchangeVersion  
 Chiamato dal framework per gestire la persistenza di un numero di versione.  
  
```  
virtual BOOL ExchangeVersion(
    DWORD& dwVersionLoaded,  
    DWORD dwVersionDefault,  
    BOOL bConvert);
```  
  
### <a name="parameters"></a>Parametri  
 *dwVersionLoaded*  
 Riferimento a una variabile in cui verrà archiviato il numero di versione dei dati persistenti in fase di caricamento.  
  
 *dwVersionDefault*  
 Il numero di versione corrente del controllo.  
  
 *bConvert*  
 Indica se convertire i dati persistenti alla versione corrente o mantenere la stessa versione è stato caricato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario 0.  
  
##  <a name="getversion"></a>  CPropExchange:: GetVersion  
 Chiamare questa funzione per recuperare il numero di versione del controllo.  
  
```  
DWORD GetVersion();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di versione del controllo.  
  
##  <a name="isasynchronous"></a>  CPropExchange::IsAsynchronous  
 Determina se gli scambi di proprietà vengono eseguiti in modo asincrono.  
  
```  
BOOL IsAsynchronous();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se le proprietà vengono scambiati in modo asincrono, in caso contrario FALSE.  
  
##  <a name="isloading"></a>  CPropExchange::IsLoading  
 Chiamare questa funzione per determinare se le proprietà vengono caricati al controllo o salvato da quest'ultimo.  
  
```  
BOOL IsLoading();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le proprietà vengono caricate; in caso contrario 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleControl::DoPropExchange](../../mfc/reference/colecontrol-class.md#dopropexchange)




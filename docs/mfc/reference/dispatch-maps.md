---
title: Mappe di invio | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros.maps
dev_langs:
- C++
helpviewer_keywords:
- dispatch maps [MFC], macros
- dispatch maps [MFC]
- dispatch map macros [MFC]
ms.assetid: bef9d08b-ad35-4c3a-99d8-04150c7c04e2
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3112c092a4e1d6eb970fb50153c543baa98ee853
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dispatch-maps"></a>Mappe di invio
Automazione OLE fornisce metodi per chiamare i metodi e accedere alle proprietà di tutte le applicazioni. Il meccanismo fornito dalla libreria Microsoft Foundation Class per l'invio di tali richieste è "mappa di invio," che indica i nomi interni ed esterni di funzioni di oggetti e proprietà, nonché di alle stesse proprietà e i tipi di dati argomenti della funzione.  
  
### <a name="dispatch-maps"></a>Mappe di invio  
  
|||  
|-|-|  
|[DECLARE_DISPATCH_MAP](#declare_dispatch_map)|Dichiara una mappa di invio verrà utilizzata per esporre metodi e proprietà (deve essere utilizzato nella dichiarazione di classe) di una classe.|  
|[BEGIN_DISPATCH_MAP](#begin_dispatch_map)|Inizia la definizione di una mappa di invio.|  
|[END_DISPATCH_MAP](#end_dispatch_map)|Termina la definizione di una mappa di invio.|  
|[DISP_FUNCTION](#disp_function)|Utilizzato in una mappa di invio per definire una funzione di automazione OLE.|  
|[DISP_PROPERTY](#disp_property)|Definisce una proprietà di automazione OLE.|  
|[DISP_PROPERTY_EX](#disp_property_ex)|Definisce una proprietà di automazione OLE e le funzioni Get e Set di nomi.|  
|[DISP_PROPERTY_NOTIFY](#disp_property_notify)|Definisce una proprietà di automazione OLE con la notifica.|  
|[DISP_PROPERTY_PARAM](#disp_property_param)|Definisce una proprietà di automazione OLE che accetta parametri e i nomi delle funzioni Get e Set.|  
|[DISP_DEFVALUE](#disp_defvalue)|Imposta una proprietà esistente come il valore predefinito di un oggetto.|  
  
##  <a name="declare_dispatch_map"></a>DECLARE_DISPATCH_MAP  
 Se un `CCmdTarget`-classe derivata nel programma supporta l'automazione OLE, che classe deve fornire una mappa di invio per esporre i relativi metodi e proprietà.  
  
```   
DECLARE_DISPATCH_MAP()  
```  
  
### <a name="remarks"></a>Note  
 Utilizzare il `DECLARE_DISPATCH_MAP` (macro) alla fine della dichiarazione di classe. Quindi, di. I file CPP che definisce il membro funzioni per la classe, utilizzare il `BEGIN_DISPATCH_MAP` (macro). Quindi includere le voci di macro per ogni classe del esposto metodi e proprietà ( `DISP_FUNCTION`, `DISP_PROPERTY`e così via). Infine, utilizzare il `END_DISPATCH_MAP` (macro).  
  
> [!NOTE]
>  Se si dichiarano i membri dopo `DECLARE_DISPATCH_MAP`, è necessario specificare un nuovo tipo di accesso ( **pubblica**, `private`, o `protected`) per loro.  
  
 Le procedure guidate di creazione guidata applicazione e il codice assistere nella creazione di classi di automazione e gestione delle mappe di invio. Per ulteriori informazioni sulle mappe di invio, vedere [server di automazione](../../mfc/automation-servers.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAutomation#10](../../mfc/codesnippet/cpp/dispatch-maps_1.h)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  

##  <a name="begin_dispatch_map"></a>BEGIN_DISPATCH_MAP  
 Dichiara la definizione della mappa di invio.  
  
```  
BEGIN_DISPATCH_MAP(theClass, baseClass)   
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 Specifica il nome della classe cui appartiene questa mappa di invio.  
  
 `baseClass`  
 Specifica il nome della classe base `theClass`.  
  
### <a name="remarks"></a>Note  
 Nel file di implementazione (. cpp) che definisce le funzioni membro per la classe, avviare la mappa di invio con la `BEGIN_DISPATCH_MAP` (macro), aggiungere le voci di macro per ciascuna delle proprietà e funzioni di distribuzione e completare la mappa di invio con la `END_DISPATCH_MAP` macro.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  

##  <a name="end_dispatch_map"></a>END_DISPATCH_MAP  
 Termina la definizione della mappa del recapito.  
  
```   
END_DISPATCH_MAP()  
```  
  
### <a name="remarks"></a>Note  
 Deve essere utilizzato in combinazione con `BEGIN_DISPATCH_MAP`.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  

##  <a name="disp_function"></a>DISP_FUNCTION  
 Definisce una funzione di automazione OLE in una mappa di invio.  
  
```   
DISP_FUNCTION(
  theClass, 
  pszName, 
  pfnMember, 
  vtRetVal, 
  vtsParams)   
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 Nome della classe.  
  
 `pszName`  
 Nome esterno della funzione.  
  
 `pfnMember`  
 Nome della funzione membro.  
  
 `vtRetVal`  
 Valore che specifica il tipo restituito della funzione.  
  
 `vtsParams`  
 Un elenco separato da spazi di uno o più costanti specificando l'elenco di parametri della funzione.  
  
### <a name="remarks"></a>Note  
 Il `vtRetVal` argomento è di tipo **VARTYPE**. I valori possibili seguenti per questo argomento vengono prelevati i `VARENUM` enumerazione:  
  
|Simbolo|Tipo restituito|  
|------------|-----------------|  
|`VT_EMPTY`|`void`|  
|`VT_I2`|**short**|  
|`VT_I4`|**long**|  
|`VT_R4`|**float**|  
|`VT_R8`|**double**|  
|`VT_CY`|**CY**|  
|`VT_DATE`|**DATE**|  
|`VT_BSTR`|`BSTR`|  
|**VT_DISPATCH**|`LPDISPATCH`|  
|`VT_ERROR`|`SCODE`|  
|`VT_BOOL`|**BOOL**|  
|**VT_VARIANT**|**VARIANT**|  
|**VT_UNKNOWN**|`LPUNKNOWN`|  
  
 Il `vtsParams` argomento è un elenco separato da spazi dei valori di **VTS _** costanti. Uno o più di questi valori separati da spazi (non virgole) specifica l'elenco di parametri della funzione. Ad esempio, 
  
 [!code-cpp[NVC_MFCAutomation#14](../../mfc/codesnippet/cpp/dispatch-maps_2.cpp)]  
  
 Specifica un elenco contenente un valore short integer seguito da un puntatore a un valore short integer.  
  
 Il **VTS _** costanti e i relativi significati sono i seguenti:  
  
|Simbolo|Tipo di parametro|  
|------------|--------------------|  
|**VTS_I2**|`Short`|  
|**VTS_I4**|`Long`|  
|**VTS_R4**|**Float**|  
|**VTS_R8**|`Double`|  
|**VTS_CY**|**const CY** o **CY\***|  
|**VTS_DATE**|**DATE**|  
|**VTS_BSTR**|`LPCSTR`|  
|**VTS_DISPATCH**|`LPDISPATCH`|  
|**VTS_SCODE**|`SCODE`|  
|**VTS_BOOL**|**BOOL**|  
|**VTS_VARIANT**|**VARIANTE const\***  o **VARIANT &**|  
|**VTS_UNKNOWN**|`LPUNKNOWN`|  
|**VTS_PI2**|**breve\***|  
|**VTS_PI4**|**Long\***|  
|**VTS_PR4**|**float\***|  
|**VTS_PR8**|**Double\***|  
|**VTS_PCY**|**CY\***|  
|**VTS_PDATE**|**DATA\***|  
|**VTS_PBSTR**|**BSTR\***|  
|**VTS_PDISPATCH**|**LPDISPATCH\***|  
|**VTS_PSCODE**|**SCODE\***|  
|**VTS_PBOOL**|**BOOL\***|  
|**VTS_PVARIANT**|**VARIANT\***|  
|**VTS_PUNKNOWN**|**LPUNKNOWN\***|  
|**VTS_NONE**|Senza parametri|  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h 

##  <a name="disp_property"></a>DISP_PROPERTY  
 Definisce una proprietà di automazione OLE in una mappa di invio.  
  
```   
DISP_PROPERTY(
  theClass, 
  pszName, 
  memberName, 
  vtPropType)   
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 Nome della classe.  
  
 `pszName`  
 Nome esterno della proprietà.  
  
 `memberName`  
 Nome della variabile membro in cui la proprietà viene archiviata.  
  
 `vtPropType`  
 Valore che specifica il tipo della proprietà.  
  
### <a name="remarks"></a>Note  
 Il `vtPropType` argomento è di tipo **VARTYPE**. I valori possibili per questo argomento vengono prelevati i `VARENUM` enumerazione:  
  
|Simbolo|**Tipo di proprietà**|  
|------------|-----------------------|  
|`VT_I2`|**short**|  
|`VT_I4`|**long**|  
|`VT_R4`|**float**|  
|`VT_R8`|**double**|  
|`VT_CY`|**CY**|  
|`VT_DATE`|**DATE**|  
|`VT_BSTR`|`CString`|  
|**VT_DISPATCH**|`LPDISPATCH`|  
|`VT_ERROR`|`SCODE`|  
|`VT_BOOL`|**BOOL**|  
|**VT_VARIANT**|**VARIANT**|  
|**VT_UNKNOWN**|`LPUNKNOWN`|  
  
 Quando un client esterno viene modificata la proprietà, il valore della variabile membro specificato da `memberName` cambia; non è presente alcuna notifica della modifica.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h 

##  <a name="disp_property_ex"></a>DISP_PROPERTY_EX  
 Definisce le funzioni utilizzate per ottenere e impostare il valore della proprietà in una mappa di invio di un nome e una proprietà di automazione OLE.  
  
```   
DISP_PROPERTY_EX(
  theClass, 
  pszName, 
  memberGet, 
  memberSet, 
  vtPropType)   
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 Nome della classe.  
  
 `pszName`  
 Nome esterno della proprietà.  
  
 `memberGet`  
 Nome della funzione membro utilizzata per ottenere la proprietà.  
  
 `memberSet`  
 Nome della funzione membro utilizzata per impostare la proprietà.  
  
 `vtPropType`  
 Valore che specifica il tipo della proprietà.  
  
### <a name="remarks"></a>Note  
 Il `memberGet` e `memberSet` funzioni hanno firme varia a seconda di `vtPropType` argomento. Il `memberGet` funzione non accetta argomenti e restituisce un valore del tipo specificato dal `vtPropType`. Il `memberSet` funzione accetta un argomento di tipo specificato dal `vtPropType` e non restituisce nulla.  
  
 Il `vtPropType` argomento è di tipo **VARTYPE**. I valori possibili per questo argomento vengono prelevati i `VARENUM` enumerazione. Per un elenco di questi valori, vedere la sezione Osservazioni per il `vtRetVal` parametro [DISP_FUNCTION](#disp_function). Si noti che `VT_EMPTY`, elencati nel `DISP_FUNCTION` osservazioni, non è consentito come tipo di dati di proprietà.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h 

##  <a name="disp_property_notify"></a>DISP_PROPERTY_NOTIFY  
 Definisce una proprietà di automazione OLE con la notifica in una mappa di invio.  
  
```   
DISP_PROPERTY_NOTIFY(
  theClass, 
  szExternalName, 
  memberName, 
  pfnAfterSet, 
  vtPropType)   
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 Nome della classe.  
  
 `szExternalName`  
 Nome esterno della proprietà.  
  
 `memberName`  
 Nome della variabile membro in cui la proprietà viene archiviata.  
  
 `pfnAfterSet`  
 Nome della funzione di notifica per `szExternalName`.  
  
 `vtPropType`  
 Valore che specifica il tipo della proprietà.  
  
### <a name="remarks"></a>Note  
 A differenza delle proprietà definite con `DISP_PROPERTY`, una proprietà definita con `DISP_PROPERTY_NOTIFY` chiama automaticamente la funzione specificata da `pfnAfterSet` quando la proprietà viene modificata.  
  
 Il `vtPropType` argomento è di tipo **VARTYPE**. I valori possibili per questo argomento vengono prelevati i `VARENUM` enumerazione:  
  
|Simbolo|**Tipo di proprietà**|  
|------------|-----------------------|  
|`VT_I2`|**short**|  
|`VT_I4`|**long**|  
|`VT_R4`|**float**|  
|`VT_R8`|**double**|  
|`VT_CY`|**CY**|  
|`VT_DATE`|**DATE**|  
|`VT_BSTR`|`CString`|  
|**VT_DISPATCH**|`LPDISPATCH`|  
|`VT_ERROR`|`SCODE`|  
|`VT_BOOL`|**BOOL**|  
|**VT_VARIANT**|**VARIANT**|  
|**VT_UNKNOWN**|`LPUNKNOWN`|  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h 

##  <a name="disp_property_param"></a>DISP_PROPERTY_PARAM  
 Definisce una proprietà accessibile con separato **ottenere** e `Set` funzioni membro.  
  
```   
DISP_PROPERTY_PARAM(
  theClass, 
  pszExternalName, 
  pfnGet, 
  pfnSet, 
  vtPropType,
  vtsParams)   
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 Nome della classe.  
  
 *pszExternalName*  
 Nome esterno della proprietà.  
  
 `pfnGet`  
 Nome della funzione membro utilizzata per ottenere la proprietà.  
  
 `pfnSet`  
 Nome della funzione membro utilizzata per impostare la proprietà.  
  
 `vtPropType`  
 Valore che specifica il tipo della proprietà.  
  
 `vtsParams`  
 Una stringa di separati da spazi **VTS _** tipi di parametro variant, uno per ogni parametro.  
  
### <a name="remarks"></a>Note  
 A differenza di `DISP_PROPERTY_EX` (macro), questa macro consente di specificare un elenco di parametri per la proprietà. Ciò è utile per l'implementazione di proprietà indicizzate o con parametri.  
  
### <a name="example"></a>Esempio  
 Si consideri la seguente dichiarazione di get e set di funzioni che consentono all'utente di richiedere una riga e colonna specifiche durante l'accesso alla proprietà membro:  
  
 [!code-cpp[NVC_MFCActiveXControl#9](../../mfc/codesnippet/cpp/dispatch-maps_3.h)]  
  
 Questi corrispondono al seguente `DISP_PROPERTY_PARAM` macro nella mappa di invio del controllo:  
  
 [!code-cpp[NVC_MFCActiveXControl#10](../../mfc/codesnippet/cpp/dispatch-maps_4.cpp)]  
  
 Ad esempio, si consideri il seguente get e membro del set di funzioni:  
  
 [!code-cpp[NVC_MFCActiveXControl#11](../../mfc/codesnippet/cpp/dispatch-maps_5.h)]  
  
 Questi corrispondono al seguente `DISP_PROPERTY_PARAM` macro nella mappa di invio del controllo:  
  
 [!code-cpp[NVC_MFCActiveXControl#12](../../mfc/codesnippet/cpp/dispatch-maps_6.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h 

##  <a name="disp_defvalue"></a>DISP_DEFVALUE  
 Imposta una proprietà esistente come il valore predefinito di un oggetto.  
  
```   
DISP_DEFVALUE(theClass, pszName)   
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 Nome della classe.  
  
 `pszName`  
 Nome esterno della proprietà che rappresentata il "valore" dell'oggetto.  
  
### <a name="remarks"></a>Note  
 L'utilizzo di un valore predefinito può rendere più facile la programmazione dell'oggetto di automazione per le applicazioni Visual Basic.  
  
 Il "valore predefinito" dell'oggetto è la proprietà che viene recuperata o impostata quando un riferimento a un oggetto non specifica una proprietà o una funzione membro.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h 

## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

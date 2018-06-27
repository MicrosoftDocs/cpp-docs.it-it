---
title: Classe CGdiObject | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CGdiObject
- AFXWIN/CGdiObject
- AFXWIN/CGdiObject::CGdiObject
- AFXWIN/CGdiObject::Attach
- AFXWIN/CGdiObject::CreateStockObject
- AFXWIN/CGdiObject::DeleteObject
- AFXWIN/CGdiObject::DeleteTempMap
- AFXWIN/CGdiObject::Detach
- AFXWIN/CGdiObject::FromHandle
- AFXWIN/CGdiObject::GetObject
- AFXWIN/CGdiObject::GetObjectType
- AFXWIN/CGdiObject::GetSafeHandle
- AFXWIN/CGdiObject::UnrealizeObject
- AFXWIN/CGdiObject::m_hObject
dev_langs:
- C++
helpviewer_keywords:
- CGdiObject [MFC], CGdiObject
- CGdiObject [MFC], Attach
- CGdiObject [MFC], CreateStockObject
- CGdiObject [MFC], DeleteObject
- CGdiObject [MFC], DeleteTempMap
- CGdiObject [MFC], Detach
- CGdiObject [MFC], FromHandle
- CGdiObject [MFC], GetObject
- CGdiObject [MFC], GetObjectType
- CGdiObject [MFC], GetSafeHandle
- CGdiObject [MFC], UnrealizeObject
- CGdiObject [MFC], m_hObject
ms.assetid: 1cba3ba5-3d49-4e43-8293-209299f2f6f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: eb8cc37396069dc7e0ea53506436b536100bdbb4
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956129"
---
# <a name="cgdiobject-class"></a>Classe CGdiObject
Fornisce una classe di base per diversi generi di oggetti GDI (Graphics Device Interface) di Windows, quali bitmap, aree, pennelli, penne, tavolozze e tipi di carattere.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CGdiObject : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGdiObject::CGdiObject](#cgdiobject)|Costruisce un oggetto `CGdiObject`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGdiObject::Attach](#attach)|Connette un oggetto GDI di Windows a un `CGdiObject` oggetto.|  
|[CGdiObject::CreateStockObject](#createstockobject)|Recupera un handle per uno degli penne di azioni predefinite di Windows, pennelli o di tipi di carattere.|  
|[CGdiObject::DeleteObject](#deleteobject)|Elimina l'oggetto GDI di Windows associato al `CGdiObject` oggetto dalla memoria liberando tutti gli archivi di sistema associato all'oggetto.|  
|[CGdiObject::DeleteTempMap](#deletetempmap)|Elimina qualsiasi temporaneo `CGdiObject` degli oggetti creati da `FromHandle`.|  
|[CGdiObject::Detach](#detach)|Scollega un oggetto GDI di Windows da un `CGdiObject` dell'oggetto e restituisce un handle all'oggetto GDI di Windows.|  
|[CGdiObject::FromHandle](#fromhandle)|Restituisce un puntatore a un `CGdiObject` oggetto fornito da un handle a un oggetto GDI di Windows.|  
|[CGdiObject::GetObject](#getobject)|Compila un buffer con dati che descrive l'oggetto GDI di Windows collegata la `CGdiObject` oggetto.|  
|[CGdiObject::GetObjectType](#getobjecttype)|Recupera il tipo dell'oggetto GDI.|  
|[CGdiObject::GetSafeHandle](#getsafehandle)|Restituisce `m_hObject` a meno che non `this` viene `NULL`, nel qual caso `NULL` viene restituito.|  
|[CGdiObject:: UnrealizeObject](#unrealizeobject)|Reimposta l'origine di un pennello o reimposta una tavolozza logica.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGdiObject::operator! =](#operator_neq)|Determina se due oggetti GDI logicamente non sono uguali.|  
|[CGdiObject::operator = =](#operator_eq_eq)|Determina se due oggetti GDI sono uguali.|  
|[CGdiObject::operator HGDIOBJ](#operator_hgdiobj)|Recupera un `HANDLE` all'oggetto GDI di Windows associata.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGdiObject::m_hObject](#m_hobject)|Un `HANDLE` che contiene il `HBITMAP`, `HPALETTE`, `HRGN`, `HBRUSH`, `HPEN`, o `HFONT` collegato a questo oggetto.|  
  
## <a name="remarks"></a>Note  
 È non creare mai un `CGdiObject` direttamente. Invece, si crea un oggetto da una delle relative classi derivate, ad esempio `CPen` o `CBrush`.  
  
 Per ulteriori informazioni sul `CGdiObject`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CGdiObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="attach"></a>  CGdiObject::Attach  
 Connette un oggetto GDI di Windows a un `CGdiObject` oggetto.  
  
```  
BOOL Attach(HGDIOBJ hObject);
```  
  
### <a name="parameters"></a>Parametri  
 *hObject*  
 Un `HANDLE` a un oggetto GDI di Windows (ad esempio `HPEN` o `HBRUSH`).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; allegato in caso contrario 0.  
  
##  <a name="cgdiobject"></a>  CGdiObject::CGdiObject  
 Costruisce un oggetto `CGdiObject`.  
  
```  
CGdiObject();
```  
  
### <a name="remarks"></a>Note  
 È non creare mai un `CGdiObject` direttamente. Invece, si crea un oggetto da una delle relative classi derivate, ad esempio `CPen` o `Cbrush`.  
  
##  <a name="createstockobject"></a>  CGdiObject::CreateStockObject  
 Recupera un handle a una delle predefiniti penne GDI di Windows predefinite, pennelli, tipi di carattere e collega l'oggetto GDI per la `CGdiObject` oggetto.  
  
```  
BOOL CreateStockObject(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Costante che specifica il tipo di oggetto azionario desiderato. Vedere il parametro *fnObject* per [GetStockObject](http://msdn.microsoft.com/library/windows/desktop/dd144925) in Windows SDK per una descrizione dei valori appropriati.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Chiamata di questa funzione con uno della classe derivata classi che corrisponde al tipo di oggetto GDI di Windows, ad esempio `CPen` per un oggetto pen azionario.  
  
##  <a name="deleteobject"></a>  CGdiObject::DeleteObject  
 Elimina l'oggetto GDI di Windows associata dalla memoria liberando tutti gli archivi di sistema associato all'oggetto GDI di Windows.  
  
```  
BOOL DeleteObject();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto GDI è stato eliminato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Lo spazio di archiviazione associato di `CGdiObject` oggetto non è interessato da questa chiamata. Un'applicazione non deve chiamare `DeleteObject` su un `CGdiObject` oggetto attualmente selezionato in un contesto di dispositivo.  
  
 Quando viene eliminato un pennello pattern, la bitmap associata al pennello non viene eliminata. La mappa di bit deve essere eliminato in modo indipendente.  
  
##  <a name="deletetempmap"></a>  CGdiObject::DeleteTempMap  
 Chiamato automaticamente dal `CWinApp` gestore, tempo di inattività `DeleteTempMap` elimina qualsiasi temporaneo `CGdiObject` degli oggetti creati da `FromHandle`.  
  
```  
static void PASCAL DeleteTempMap();
```  
  
### <a name="remarks"></a>Note  
 `DeleteTempMap` Scollega l'oggetto GDI di Windows associato a un elemento temporaneo `CGdiObject` oggetto prima di eliminare il `CGdiObject` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#175](../../mfc/codesnippet/cpp/cgdiobject-class_1.cpp)]  
  
##  <a name="detach"></a>  CGdiObject::Detach  
 Scollega un oggetto GDI di Windows da un `CGdiObject` dell'oggetto e restituisce un handle all'oggetto GDI di Windows.  
  
```  
HGDIOBJ Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un `HANDLE` GDI di Windows oggetto disconnesso; in caso contrario **NULL** se non è collegato alcun oggetto GDI.  
  
##  <a name="fromhandle"></a>  CGdiObject::FromHandle  
 Restituisce un puntatore a un `CGdiObject` oggetto fornito da un handle a un oggetto GDI di Windows.  
  
```  
static CGdiObject* PASCAL FromHandle(HGDIOBJ hObject);
```  
  
### <a name="parameters"></a>Parametri  
 *hObject*  
 Oggetto `HANDLE` a un oggetto GDI di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CGdiObject` che potrebbe essere temporaneo o permanente.  
  
### <a name="remarks"></a>Note  
 Se un `CGdiObject` oggetto non è già collegato all'oggetto GDI di Windows, una password temporanea `CGdiObject` oggetto viene creato e collegato.  
  
 Questa memoria temporanea `CGdiObject` oggetto è valido solo fino alla successiva esecuzione l'applicazione dispone di tempo di inattività nel relativo ciclo di eventi, momento in cui vengono eliminati tutti gli oggetti grafici temporanei. Un altro modo di ciò è che l'oggetto temporaneo è valido solo durante l'elaborazione di una finestra di messaggio.  
  
##  <a name="getobject"></a>  CGdiObject::GetObject  
 Inserisce un buffer dei dati che definisce un oggetto specificato.  
  
```  
int GetObject(
    int nCount,  
    LPVOID lpObject) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nCount*  
 Specifica il numero di byte da copiare nel *lpObject* buffer.  
  
 *lpObject*  
 Punta a un buffer fornito dall'utente che sta per ricevere le informazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Numero di byte recuperati; in caso contrario, 0 se un errore si verifica.  
  
### <a name="remarks"></a>Note  
 La funzione recupera una struttura di dati il cui tipo dipende dal tipo dell'oggetto grafico, come illustrato nell'elenco seguente:  
  
|Object|Tipo di buffer|  
|------------|-----------------|  
|`CPen`|[LOGPEN](../../mfc/reference/logpen-structure.md)|  
|`CBrush`|[LOGBRUSH](../../mfc/reference/logbrush-structure.md)|  
|`CFont`|[LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037)|  
|`CBitmap`|[MAPPA DI BIT](../../mfc/reference/bitmap-structure.md)|  
|`CPalette`|**WORD**|  
|`CRgn`|Non supportato|  
  
 Se l'oggetto è un `CBitmap` oggetto, `GetObject` restituisce solo la larghezza, altezza e le informazioni sul formato di colore della bitmap. I bit effettivi possono essere recuperati tramite [CBitmap::GetBitmapBits](../../mfc/reference/cbitmap-class.md#getbitmapbits).  
  
 Se l'oggetto è un `CPalette` oggetto `GetObject` recupera un **WORD** che specifica il numero di voci nella tavolozza. La funzione non recupera le [LOGPALETTE](http://msdn.microsoft.com/library/windows/desktop/dd145040) struttura che definisce la tavolozza. Un'applicazione può ottenere informazioni sulle voci tavolozza chiamando [CPalette::GetPaletteEntries](../../mfc/reference/cpalette-class.md#getpaletteentries).  
  
##  <a name="getobjecttype"></a>  CGdiObject::GetObjectType  
 Recupera il tipo dell'oggetto GDI.  
  
```  
UINT GetObjectType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il tipo di oggetto, se ha esito positivo. in caso contrario 0. Il valore può essere uno dei seguenti:  
  
- **OBJ_BITMAP** Bitmap  
  
- **OBJ_BRUSH** pennello  
  
- **OBJ_FONT** tipo di carattere  
  
- **OBJ_PAL** tavolozza  
  
- **OBJ_PEN** penna  
  
- **OBJ_EXTPEN** penna estesa  
  
- **OBJ_REGION** area  
  
- **OBJ_DC** contesto di dispositivo  
  
- **OBJ_MEMDC** contesto di dispositivo di memoria  
  
- **OBJ_METAFILE** Metafile  
  
- **OBJ_METADC** contesto di dispositivo Metafile  
  
- **OBJ_ENHMETAFILE** Enhanced metafile  
  
- **OBJ_ENHMETADC** contesto di dispositivo metafile avanzato  
  
##  <a name="getsafehandle"></a>  CGdiObject::GetSafeHandle  
 Restituisce `m_hObject` a meno che non **questo** viene **NULL**, nel qual caso **NULL** viene restituito.  
  
```  
HGDIOBJ GetSafeHandle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un `HANDLE` all'oggetto GDI di Windows associato; in caso contrario **NULL** se non è collegato alcun oggetto.  
  
### <a name="remarks"></a>Note  
 Questo fa parte del paradigma interfaccia handle generale ed è utile quando **NULL** è un valore valido o speciale per un handle.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CWnd::IsWindowEnabled](../../mfc/reference/cwnd-class.md#iswindowenabled).  
  
##  <a name="m_hobject"></a>  CGdiObject::m_hObject  
 Un `HANDLE` che contiene il `HBITMAP`, **HRGN**, `HBRUSH`, `HPEN`, `HPALETTE`, o **HFONT** collegato a questo oggetto.  
  
```  
HGDIOBJ m_hObject;  
```  
  
##  <a name="operator_neq"></a>  CGdiObject::operator! =  
 Determina se due oggetti GDI logicamente non sono uguali.  
  
```  
BOOL operator!=(const CGdiObject& obj) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *obj*  
 Un puntatore a un oggetto esistente `CGdiObject`.  
  
### <a name="remarks"></a>Note  
 Determina se un oggetto GDI sul lato sinistro non è uguale a un oggetto GDI sul lato destro.  
  
##  <a name="operator_eq_eq"></a>  CGdiObject::operator = =  
 Determina se due oggetti GDI sono uguali.  
  
```  
BOOL operator==(const CGdiObject& obj) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *obj*  
 Un riferimento a un oggetto esistente `CGdiObject`.  
  
### <a name="remarks"></a>Note  
 Determina se un oggetto GDI sul lato sinistro è uguale a un oggetto GDI sul lato destro.  
  
##  <a name="operator_hgdiobj"></a>  CGdiObject::operator HGDIOBJ  
 Recupera un `HANDLE` all'oggetto GDI di Windows associato; in caso contrario **NULL** se non è collegato alcun oggetto.  
  
```  
operator HGDIOBJ() const;  
```  
  
##  <a name="unrealizeobject"></a>  CGdiObject:: UnrealizeObject  
 Reimposta l'origine di un pennello o reimposta una tavolozza logica.  
  
```  
BOOL UnrealizeObject();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Mentre `UnrealizeObject` è una funzione membro del `CGdiObject` (classe), deve essere richiamato solo su `CBrush` o `CPalette` oggetti.  
  
 Per `CBrush` oggetti, `UnrealizeObject` indica al sistema per reimpostare l'origine del pennello specificato alla successiva è selezionata in un contesto di dispositivo. Se l'oggetto è un `CPalette` oggetto, `UnrealizeObject` indica al sistema per realizzare la tavolozza come se non fosse già stata realizzata. Alla successiva l'applicazione chiama il [CDC::RealizePalette](../../mfc/reference/cdc-class.md#realizepalette) funzione per la tavolozza specificata, il sistema completamente riesegue il mapping di tavolozza logica per la tavolozza di sistema.  
  
 Il `UnrealizeObject` funzione non deve essere usata con gli oggetti predefiniti. Il `UnrealizeObject` funzione deve essere chiamata ogni volta che viene impostata una nuova origine pennello (mediante il [CDC::SetBrushOrg](../../mfc/reference/cdc-class.md#setbrushorg) (funzione)). Il `UnrealizeObject` funzione non deve essere chiamata per il pennello selezionato o nel riquadro selezionato di qualsiasi contesto di visualizzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CBitmap (classe)](../../mfc/reference/cbitmap-class.md)   
 [CBrush (classe)](../../mfc/reference/cbrush-class.md)   
 [CFont (Class)](../../mfc/reference/cfont-class.md)   
 [CPalette (classe)](../../mfc/reference/cpalette-class.md)   
 [CPen (classe)](../../mfc/reference/cpen-class.md)   
 [Classe CRgn](../../mfc/reference/crgn-class.md)

---
title: CBrush (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CBrush
- AFXWIN/CBrush
- AFXWIN/CBrush::CBrush
- AFXWIN/CBrush::CreateBrushIndirect
- AFXWIN/CBrush::CreateDIBPatternBrush
- AFXWIN/CBrush::CreateHatchBrush
- AFXWIN/CBrush::CreatePatternBrush
- AFXWIN/CBrush::CreateSolidBrush
- AFXWIN/CBrush::CreateSysColorBrush
- AFXWIN/CBrush::FromHandle
- AFXWIN/CBrush::GetLogBrush
dev_langs:
- C++
helpviewer_keywords:
- CBrush [MFC], CBrush
- CBrush [MFC], CreateBrushIndirect
- CBrush [MFC], CreateDIBPatternBrush
- CBrush [MFC], CreateHatchBrush
- CBrush [MFC], CreatePatternBrush
- CBrush [MFC], CreateSolidBrush
- CBrush [MFC], CreateSysColorBrush
- CBrush [MFC], FromHandle
- CBrush [MFC], GetLogBrush
ms.assetid: e5ef2c62-dd95-4973-9090-f52f605900e1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4ffd5e43267ad6a5a462705f410cc1073161ecf0
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36954104"
---
# <a name="cbrush-class"></a>CBrush (classe)
Incapsula un pennello GDI (Graphics Device Interface) di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CBrush : public CGdiObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBrush::CBrush](#cbrush)|Costruisce un oggetto `CBrush`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBrush::CreateBrushIndirect](#createbrushindirect)|Inizializza un pennello con lo stile, colore e modello specificato in un [LOGBRUSH](http://msdn.microsoft.com/library/windows/desktop/dd145035) struttura.|  
|[CBrush::CreateDIBPatternBrush](#createdibpatternbrush)|Inizializza un pennello con un modello specificato da una bitmap indipendente dalla periferica (DIB).|  
|[CBrush::CreateHatchBrush](#createhatchbrush)|Inizializza un pennello con il modello tratteggiato specificato e il colore.|  
|[CBrush::CreatePatternBrush](#createpatternbrush)|Inizializza un pennello con un modello specificato da una bitmap.|  
|[CBrush::CreateSolidBrush](#createsolidbrush)|Inizializza un pennello con il colore a tinta unita specificato.|  
|[CBrush::CreateSysColorBrush](#createsyscolorbrush)|Crea un pennello che rappresenta il colore di sistema predefinito.|  
|[CBrush::FromHandle](#fromhandle)|Restituisce un puntatore a un `CBrush` oggetto quando viene specificato un handle a un Windows `HBRUSH` oggetto.|  
|[CBrush::GetLogBrush](#getlogbrush)|Ottiene un [LOGBRUSH](http://msdn.microsoft.com/library/windows/desktop/dd145035) struttura.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBrush::operator HBRUSH](#operator_hbrush)|Restituisce l'handle di Windows collegata la `CBrush` oggetto.|  
  
## <a name="remarks"></a>Note  
 Per utilizzare un `CBrush` dell'oggetto, creare un `CBrush` e passarlo a qualsiasi `CDC` funzione membro che richiede un pennello.  
  
 Pennelli possono essere continuo, tratteggio o motivi.  
  
 Per ulteriori informazioni sul `CBrush`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CBrush`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cbrush"></a>  CBrush::CBrush  
 Costruisce un oggetto `CBrush`.  
  
```  
CBrush(); 
CBrush(COLORREF crColor); 
CBrush(int nIndex, COLORREF crColor); 
explicit CBrush(CBitmap* pBitmap);
```  
  
### <a name="parameters"></a>Parametri  
 *crColor*  
 Specifica il colore di primo piano del pennello come un colore RGB. Se il pennello è nati, questo parametro specifica il colore del motivo di tratteggio di a.  
  
 *nIndex*  
 Specifica lo stile di tratteggio del pennello. Può essere uno dei valori seguenti:  
  
- `HS_BDIAGONAL` Tratteggio verso il basso (da sinistra a destra) a 45 gradi  
  
- `HS_CROSS` Tratteggio incrociato orizzontale e verticali  
  
- `HS_DIAGCROSS` Tratteggio incrociato a 45 gradi  
  
- `HS_FDIAGONAL` Tratteggio verso l'alto (da sinistra a destra) a 45 gradi  
  
- `HS_HORIZONTAL` Tratteggio orizzontale  
  
- `HS_VERTICAL` Tratteggio verticale  
  
 *pBitmap*  
 Punta a un `CBitmap` oggetto che specifica una bitmap che disegna il pennello.  
  
### <a name="remarks"></a>Note  
 `CBrush` dispone di quattro overload costruttori. Il costruttore senza argomenti crea un valore non inizializzato `CBrush` oggetto che deve essere inizializzato prima che possa essere utilizzato.  
  
 Se si utilizza il costruttore senza argomenti, è necessario inizializzare il valore risultante `CBrush` dell'oggetto con [CreateSolidBrush](#createsolidbrush), [CreateHatchBrush](#createhatchbrush), [CreateBrushIndirect](#createbrushindirect), [CreatePatternBrush](#createpatternbrush), oppure [CreateDIBPatternBrush](#createdibpatternbrush). Se si utilizza uno dei costruttori che accettano argomenti, quindi non inizializzazione è necessaria ulteriori operazioni. I costruttori con argomenti possono generare un'eccezione se vengono rilevati errori, mentre il costruttore senza argomenti avrà sempre esito positivo.  
  
 Il costruttore con un unico [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) parametro costruisce un oggetto solid brush con il colore specificato. Specifica un valore RGB il colore e può essere costruito con la `RGB` (macro) in WINDOWS. H.  
  
 Il costruttore con due parametri crea un pennello tratteggio. Il *nIndex* parametro specifica l'indice di un modello tratteggiato. Il *crColor* parametro specifica il colore.  
  
 Il costruttore con un `CBitmap` parametro costruisce un pennello motivo. Il parametro identifica una bitmap. Si presuppone che la mappa di bit sono stati creati usando [CBitmap::CreateBitmap](../../mfc/reference/cbitmap-class.md#createbitmap), [CBitmap:: Createbitmapindirect](../../mfc/reference/cbitmap-class.md#createbitmapindirect), [LoadBitmap](../../mfc/reference/cbitmap-class.md#loadbitmap), o [ CBitmap::CreateCompatibleBitmap](../../mfc/reference/cbitmap-class.md#createcompatiblebitmap). La dimensione minima per una bitmap da utilizzare in un motivo di riempimento è 8 x 8 pixel.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#21](../../mfc/codesnippet/cpp/cbrush-class_1.cpp)]  
  
##  <a name="createbrushindirect"></a>  CBrush::CreateBrushIndirect  
 Inizializza un pennello con uno stile, colore e un modello specificato in un [LOGBRUSH](http://msdn.microsoft.com/library/windows/desktop/dd145035) struttura.  
  
```  
BOOL CreateBrushIndirect(const LOGBRUSH* lpLogBrush);
```  
  
### <a name="parameters"></a>Parametri  
 *lpLogBrush*  
 Punta a un [LOGBRUSH](http://msdn.microsoft.com/library/windows/desktop/dd145035) struttura contenente informazioni del pennello.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Successivamente è possibile selezionare il pennello come il pennello corrente per qualsiasi contesto di dispositivo.  
  
 Un pennello creato utilizzando una bitmap monocromatica (piano di 1, 1 bit per pixel) viene disegnato utilizzando i colori di sfondo e di testo correnti. Con il colore del testo corrente verrà disegnato pixel rappresentato da un bit è impostato su 0. Con il colore di sfondo corrente verrà disegnato pixel rappresentato da un bit è impostato su 1.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#22](../../mfc/codesnippet/cpp/cbrush-class_2.cpp)]  
  
##  <a name="createdibpatternbrush"></a>  CBrush::CreateDIBPatternBrush  
 Inizializza un pennello con il modello specificato da una bitmap indipendente dalla periferica (DIB).  
  
```  
BOOL CreateDIBPatternBrush(
    HGLOBAL hPackedDIB,  
    UINT nUsage);

 
BOOL CreateDIBPatternBrush(
    const void* lpPackedDIB,  
    UINT nUsage);
```  
  
### <a name="parameters"></a>Parametri  
 *hPackedDIB*  
 Identifica un oggetto di memoria globale contenente una compresse bitmap indipendente dalla periferica (DIB).  
  
 *nUsage*  
 Specifica se il **[] bmiColors** i campi del [BITMAPINFO](../../mfc/reference/bitmapinfo-structure.md) struttura dei dati (una parte di "compressi DIB") contengono esplicita dei valori RGB o indici in attualmente realizzata tavolozza logica. Il parametro deve essere uno dei valori seguenti:  
  
- **DIB_PAL_COLORS** la tabella dei colori è costituito da una matrice di indici a 16 bit.  
  
- **DIB_RGB_COLORS** la tabella color contiene valori RGB letterali.  
  
 *lpPackedDIB*  
 Punta a DIB compressi composta da un `BITMAPINFO` struttura immediatamente seguito da una matrice di byte che definisce i pixel della bitmap.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Successivamente è possibile selezionare il pennello per qualsiasi contesto di dispositivo che supporta le operazioni parallele.  
  
 Le due versioni si differenziano per la modalità di che Gestione DIB:  
  
-   Nella prima versione, per ottenere un handle alla DIB si chiama Windows `GlobalAlloc` funzione per allocare un blocco di memoria globale, quindi compilare la memoria con DIB compresso.  
  
-   Nella seconda versione, non è necessario chiamare `GlobalAlloc` ad allocare memoria per DIB compresso.  
  
 DIB compresso è costituito da un `BITMAPINFO` seguita immediatamente dalla matrice di byte che definisce i pixel dell'immagine bitmap della struttura di dati. Bitmap utilizzata come serie di riempimento deve essere 8 x 8 pixel. Se la bitmap è più grande, Windows crea un motivo di riempimento utilizzando solo i bit corrispondenti alle righe primi 8 e 8 colonne di pixel nell'angolo superiore sinistro della bitmap.  
  
 Quando un'applicazione consente di selezionare un pennello di pattern DIB due colori in un contesto di dispositivo monocromatico, Windows ignora i colori specificati nella DIB e visualizza invece il pennello di modello usando i colori di testo e di sfondo correnti del contesto del dispositivo. Pixel eseguito il mapping al primo colore della DIB (in corrispondenza dell'offset 0 nella tabella colore DIB) vengono visualizzati utilizzando il colore del testo. Pixel mappato al secondo colore (in corrispondenza dell'offset 1 nella tabella colore) vengono visualizzati utilizzando il colore di sfondo.  
  
 Per informazioni sull'utilizzo delle seguenti funzioni di Windows, vedi il Windows SDK:  
  
- [CreateDIBPatternBrush](http://msdn.microsoft.com/library/windows/desktop/dd183492) (questa funzione viene fornita solo per compatibilità con le applicazioni scritte per le versioni di Windows precedenti a 3.0; utilizzare il `CreateDIBPatternBrushPt` (funzione).)  
  
- [CreateDIBPatternBrushPt](http://msdn.microsoft.com/library/windows/desktop/dd183493) (questa funzione deve essere utilizzata per le applicazioni basate su Win32).  
  
- [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574)  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#23](../../mfc/codesnippet/cpp/cbrush-class_3.cpp)]  
  
##  <a name="createhatchbrush"></a>  CBrush::CreateHatchBrush  
 Inizializza un pennello con il modello tratteggiato specificato e il colore.  
  
```  
BOOL CreateHatchBrush(
    int nIndex,  
    COLORREF crColor);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Specifica lo stile di tratteggio del pennello. Può essere uno dei valori seguenti:  
  
- `HS_BDIAGONAL` Tratteggio verso il basso (da sinistra a destra) a 45 gradi  
  
- `HS_CROSS` Tratteggio incrociato orizzontale e verticali  
  
- `HS_DIAGCROSS` Tratteggio incrociato a 45 gradi  
  
- `HS_FDIAGONAL` Tratteggio verso l'alto (da sinistra a destra) a 45 gradi  
  
- `HS_HORIZONTAL` Tratteggio orizzontale  
  
- `HS_VERTICAL` Tratteggio verticale  
  
 *crColor*  
 Specifica il colore di primo piano del pennello come un colore RGB (il colore dei tratteggi). Vedere [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) in Windows SDK per ulteriori informazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Successivamente è possibile selezionare il pennello come il pennello corrente per qualsiasi contesto di dispositivo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#24](../../mfc/codesnippet/cpp/cbrush-class_4.cpp)]  
  
##  <a name="createpatternbrush"></a>  CBrush::CreatePatternBrush  
 Inizializza un pennello con un modello specificato da una bitmap.  
  
```  
BOOL CreatePatternBrush(CBitmap* pBitmap);
```  
  
### <a name="parameters"></a>Parametri  
 *pBitmap*  
 Identifica una bitmap.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Successivamente è possibile selezionare il pennello per qualsiasi contesto di dispositivo che supporta le operazioni parallele. La bitmap identificata *pBitmap* viene in genere inizializzata utilizzando il [CBitmap::CreateBitmap](../../mfc/reference/cbitmap-class.md#createbitmap), [CBitmap:: Createbitmapindirect](../../mfc/reference/cbitmap-class.md#createbitmapindirect), [CBitmap:: LoadBitmap](../../mfc/reference/cbitmap-class.md#loadbitmap), o [CBitmap::CreateCompatibleBitmap](../../mfc/reference/cbitmap-class.md#createcompatiblebitmap) (funzione).  
  
 Bitmap utilizzata come serie di riempimento deve essere 8 x 8 pixel. Se la bitmap è più grande, Windows utilizzerà solo i bit corrispondenti alle prime 8 righe e colonne di pixel nell'angolo superiore sinistro della bitmap.  
  
 È possibile eliminare un pennello pattern senza influire sull'immagine bitmap associata. Ciò significa che la bitmap può essere utilizzata per creare un numero qualsiasi di pennelli pattern.  
  
 Un pennello creato utilizzando una bitmap monocromatica (piano di 1 colore, 1 bit per pixel) viene disegnato utilizzando i colori di sfondo e di testo correnti. Pixel rappresentato da un bit è impostato su 0 vengono disegnati con il colore del testo corrente. Pixel rappresentato da un bit è impostato su 1 vengono disegnate con colore di sfondo corrente.  
  
 Per informazioni sull'utilizzo [CreatePatternBrush](http://msdn.microsoft.com/library/windows/desktop/dd183508), una finestra di funzione, vedi il Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#25](../../mfc/codesnippet/cpp/cbrush-class_5.cpp)]  
  
##  <a name="createsolidbrush"></a>  CBrush::CreateSolidBrush  
 Inizializza un pennello con un colore a tinta unita specificato.  
  
```  
BOOL CreateSolidBrush(COLORREF crColor);
```  
  
### <a name="parameters"></a>Parametri  
 *crColor*  
 Un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) struttura che specifica il colore del pennello. Il colore specifica un valore RGB e può essere costruito con la macro RGB in WINDOWS. H.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Successivamente è possibile selezionare il pennello come il pennello corrente per qualsiasi contesto di dispositivo.  
  
 Quando un'applicazione ha terminato di utilizzare il pennello creato `CreateSolidBrush`, è necessario selezionare il pennello fuori dal contesto di dispositivo.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CBrush::CBrush](#cbrush).  
  
##  <a name="createsyscolorbrush"></a>  CBrush::CreateSysColorBrush  
 Inizializza un colore del pennello.  
  
```  
BOOL CreateSysColorBrush(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Specifica un indice di colore. Questo valore corrisponde al colore utilizzato per disegnare uno degli elementi 21 finestra. Vedere [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371) in Windows SDK per un elenco di valori.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Successivamente è possibile selezionare il pennello come il pennello corrente per qualsiasi contesto di dispositivo.  
  
 Quando un'applicazione ha terminato di utilizzare il pennello creato `CreateSysColorBrush`, è necessario selezionare il pennello fuori dal contesto di dispositivo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#26](../../mfc/codesnippet/cpp/cbrush-class_6.cpp)]  
  
##  <a name="fromhandle"></a>  CBrush::FromHandle  
 Restituisce un puntatore a un `CBrush` dell'oggetto quando viene specificato un handle di Windows [HBRUSH](#operator_hbrush) oggetto.  
  
```  
static CBrush* PASCAL FromHandle(HBRUSH hBrush);
```  
  
### <a name="parameters"></a>Parametri  
 *hBrush*  
 `HANDLE` per un pennello GDI di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CBrush` oggetto in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Se un `CBrush` oggetto non è già collegato all'handle di una password temporanea `CBrush` oggetto viene creato e collegato. Questa memoria temporanea `CBrush` oggetto è valido solo fino alla successiva esecuzione l'applicazione dispone di tempo di inattività nel relativo ciclo di eventi. In questo momento, vengono eliminati tutti gli oggetti grafici temporanei. In altre parole, l'oggetto temporaneo è valido solo durante l'elaborazione di una finestra di messaggio.  
  
 Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere [immagine di oggetti](http://msdn.microsoft.com/library/windows/desktop/dd144962) in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CBrush::CBrush](#cbrush).  
  
##  <a name="getlogbrush"></a>  CBrush::GetLogBrush  
 Chiamare questa funzione membro per recuperare il `LOGBRUSH` struttura.  
  
```  
int GetLogBrush(LOGBRUSH* pLogBrush);
```  
  
### <a name="parameters"></a>Parametri  
 *pLogBrush*  
 Punta a un [LOGBRUSH](http://msdn.microsoft.com/library/windows/desktop/dd145035) struttura contenente informazioni del pennello.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, e *pLogBrush* è un puntatore valido, il valore restituito è il numero di byte memorizzati nel buffer.  
  
 Se la funzione ha esito positivo, e *pLogBrush* viene **NULL**, il valore restituito è il numero di byte necessari per contenere le informazioni della funzione verrà archiviati nel buffer.  
  
 Se la funzione ha esito negativo, il valore restituito è 0.  
  
### <a name="remarks"></a>Note  
 Il `LOGBRUSH` struttura definisce il stile, colore e il criterio di un pennello.  
  
 Ad esempio, chiamare `GetLogBrush` in modo che corrisponda il determinato colore o il modello di una bitmap.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#27](../../mfc/codesnippet/cpp/cbrush-class_7.cpp)]  
  
##  <a name="operator_hbrush"></a>  CBrush::operator HBRUSH  
 Utilizzare questo operatore per ottenere l'handle GDI di Windows associata del `CBrush` oggetto.  
  
```  
operator HBRUSH() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un handle all'oggetto GDI di Windows rappresentato dal `CBrush` dell'oggetto; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questo è un operatore di cast, che supporta l'uso diretto di un `HBRUSH` oggetto.  
  
 Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere [immagine di oggetti](http://msdn.microsoft.com/library/windows/desktop/dd144962) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#28](../../mfc/codesnippet/cpp/cbrush-class_8.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC PROPDLG](../../visual-cpp-samples.md)   
 [Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CBitmap (classe)](../../mfc/reference/cbitmap-class.md)   
 [Classe CDC](../../mfc/reference/cdc-class.md)

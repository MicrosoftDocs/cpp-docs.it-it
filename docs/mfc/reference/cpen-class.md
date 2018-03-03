---
title: CPen (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CPen
- AFXWIN/CPen
- AFXWIN/CPen::CPen
- AFXWIN/CPen::CreatePen
- AFXWIN/CPen::CreatePenIndirect
- AFXWIN/CPen::FromHandle
- AFXWIN/CPen::GetExtLogPen
- AFXWIN/CPen::GetLogPen
dev_langs:
- C++
helpviewer_keywords:
- CPen [MFC], CPen
- CPen [MFC], CreatePen
- CPen [MFC], CreatePenIndirect
- CPen [MFC], FromHandle
- CPen [MFC], GetExtLogPen
- CPen [MFC], GetLogPen
ms.assetid: 93175a3a-d46c-4768-be8d-863254f97a5f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 51ea9aadc5d5ca8fb5a5a253d2ddb5972bf0dfdc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cpen-class"></a>CPen (classe)
Incapsula una penna GDI (Graphics Device Interface) di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPen : public CGdiObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPen::CPen](#cpen)|Costruisce un oggetto `CPen`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPen::CreatePen](#createpen)|Crea una penna logica cosmetica o geometrica con gli attributi di pennello, larghezza e stile specificato e lo collega al `CPen` oggetto.|  
|[CPen::CreatePenIndirect](#createpenindirect)|Crea un oggetto pen con lo stile, una larghezza e un colore specificato un [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041) struttura e lo collega al `CPen` oggetto.|  
|[CPen::FromHandle](#fromhandle)|Restituisce un puntatore a un `CPen` oggetto quando viene specificato un Windows `HPEN`.|  
|[CPen::GetExtLogPen](#getextlogpen)|Ottiene un [EXTLOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd162711) struttura sottostante.|  
|[CPen::GetLogPen](#getlogpen)|Ottiene un [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041) struttura sottostante.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPen::operator HPEN](#operator_hpen)|Restituisce l'handle di Windows collegata la `CPen` oggetto.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni sull'utilizzo `CPen`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CPen`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cpen"></a>CPen::CPen  
 Costruisce un oggetto `CPen`.  
  
```  
CPen();

 
CPen(
    int nPenStyle,  
    int nWidth,  
    COLORREF crColor);

 
CPen(
    int nPenStyle,  
    int nWidth,  
    const LOGBRUSH* pLogBrush,  
    int nStyleCount = 0,  
    const DWORD* lpStyle = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `nPenStyle`  
 Specifica lo stile della penna. Nella prima versione del costruttore di questo parametro può essere uno dei valori seguenti:  
  
- **PS_SOLID** crea una penna a tinta unita.  
  
- **PS_DASH** crea una penna tratteggiata. Valido solo quando la larghezza della penna è l'unità di 1 o meno, nel dispositivo.  
  
- **PS_DOT** crea una penna tratteggiata. Valido solo quando la larghezza della penna è l'unità di 1 o meno, nel dispositivo.  
  
- **PS_DASHDOT** crea un oggetto pen con alternati trattini e punti. Valido solo quando la larghezza della penna è l'unità di 1 o meno, nel dispositivo.  
  
- **PS_DASHDOTDOT** crea un oggetto pen con trattini e punti doppio alternati. Valido solo quando la larghezza della penna è l'unità di 1 o meno, nel dispositivo.  
  
- **PS_NULL** crea una penna null.  
  
- **PS_INSIDEFRAME** crea un oggetto pen che disegna una linea all'interno della cornice di forme chiuse prodotta dalle funzioni di output GDI di Windows che specificano un rettangolo di delimitazione (ad esempio, il **ellisse**, **rettangolo** , `RoundRect`, `Pie`, e `Chord` funzioni membro). Quando questo stile viene utilizzato con funzioni di output GDI di Windows che non si specifica un rettangolo di delimitazione (ad esempio, il `LineTo` funzione membro), l'area di disegno della penna non è limitato da un frame.  
  
 La seconda versione di `CPen` costruttore specifica una combinazione di tipo, stile, estremità finale e gli attributi di join. I valori di ciascuna categoria devono essere combinati con l'operatore OR bit per bit (&#124;). Il tipo di penna può essere uno dei valori seguenti:  
  
- **PS_GEOMETRIC** crea una penna geometrica.  
  
- **PS_COSMETIC** crea una penna cosmetica.  
  
     La seconda versione di `CPen` costruttore aggiunge gli stili seguenti penna per `nPenStyle`:  
  
- **PS_ALTERNATE** crea un oggetto pen che imposta gli altri pixel. (Questo stile è applicabile solo per penne cosmetiche).  
  
- **PS_USERSTYLE** crea un oggetto pen che utilizza una matrice di stili fornita dall'utente.  
  
     L'estremità finale può essere uno dei valori seguenti:  
  
- **PS_ENDCAP_ROUND** delimitatori finali sono round.  
  
- **PS_ENDCAP_SQUARE** delimitatori finali sono quadrati.  
  
- **PS_ENDCAP_FLAT** delimitatori finali sono flat.  
  
     Il join può essere uno dei valori seguenti:  
  
- **PS_JOIN_BEVEL** sono smussati join.  
  
- **PS_JOIN_MITER** join sono siano quando si trovano entro il limite corrente di un'impostazione di [SetMiterLimit](http://msdn.microsoft.com/library/windows/desktop/dd145076) (funzione). Se il join supera questo limite, si è un effetto tridimensionale.  
  
- **PS_JOIN_ROUND** join sono round.  
  
 `nWidth`  
 Specifica la larghezza della penna.  
  
-   Per la prima versione del costruttore, se questo valore è 0, la larghezza espressa in unità di dispositivo è sempre 1 pixel, a prescindere dalla modalità di mapping.  
  
-   Per la seconda versione del costruttore, se `nPenStyle` è **PS_GEOMETRIC**, la larghezza è specificata in unità logiche. Se `nPenStyle` è **PS_COSMETIC**, la larghezza deve essere impostata su 1.  
  
 `crColor`  
 Contiene un colore RGB della penna.  
  
 `pLogBrush`  
 Punta a un `LOGBRUSH` struttura. Se `nPenStyle` è **PS_COSMETIC**, `lbColor` membro del `LOGBRUSH` struttura specifica il colore della penna e `lbStyle` membro del `LOGBRUSH` struttura deve essere impostata su **BS_ Tinta unita**. Se `nPenStyle` è **PS_GEOMETRIC**, tutti i membri devono essere utilizzati per specificare gli attributi di pennello della penna.  
  
 `nStyleCount`  
 Specifica la lunghezza, espressa in unità parola doppia, del `lpStyle` matrice. Questo valore deve essere zero se `nPenStyle` non **PS_USERSTYLE**.  
  
 `lpStyle`  
 Punta a una matrice di valori Double Word. Il primo valore specifica la lunghezza del primo trattino in uno stile definito dall'utente, il secondo valore specifica la lunghezza del primo spazio e così via. L'indicatore di misura deve essere **NULL** se `nPenStyle` non **PS_USERSTYLE**.  
  
### <a name="remarks"></a>Note  
 Se si utilizza il costruttore senza argomenti, è necessario inizializzare il valore risultante `CPen` dell'oggetto con il `CreatePen`, `CreatePenIndirect`, o `CreateStockObject` funzioni membro.  
  
 Se si utilizza il costruttore che accetta argomenti, non sarà necessaria nessuna ulteriore inizializzazione. Il costruttore con gli argomenti possa generare un'eccezione se vengono rilevati errori, mentre il costruttore senza argomenti avrà sempre esito positivo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#99](../../mfc/codesnippet/cpp/cpen-class_1.cpp)]  
  
##  <a name="createpen"></a>CPen::CreatePen  
 Crea una penna logica cosmetica o geometrica con gli attributi di pennello, larghezza e stile specificato e lo collega al `CPen` oggetto.  
  
```  
BOOL CreatePen(
    int nPenStyle,  
    int nWidth,  
    COLORREF crColor);

 
BOOL CreatePen(
    int nPenStyle,  
    int nWidth,  
    const LOGBRUSH* pLogBrush,  
    int nStyleCount = 0,  
    const DWORD* lpStyle = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `nPenStyle`  
 Specifica lo stile della penna. Per un elenco di valori possibili, vedere il `nPenStyle` parametro il [CPen](#cpen) costruttore.  
  
 `nWidth`  
 Specifica la larghezza della penna.  
  
-   Per la prima versione di `CreatePen`, se questo valore è 0, la larghezza espressa in unità di dispositivo è sempre 1 pixel, a prescindere dalla modalità di mapping.  
  
-   Per la seconda versione di `CreatePen`, se `nPenStyle` è **PS_GEOMETRIC**, la larghezza è specificata in unità logiche. Se `nPenStyle` è **PS_COSMETIC**, la larghezza deve essere impostata su 1.  
  
 `crColor`  
 Contiene un colore RGB della penna.  
  
 `pLogBrush`  
 Punta a un [LOGBRUSH](http://msdn.microsoft.com/library/windows/desktop/dd145035) struttura. Se `nPenStyle` è **PS_COSMETIC**, **lbColor** membro del `LOGBRUSH` struttura specifica il colore della penna e `lbStyle` membro del `LOGBRUSH` struttura deve essere Impostare su **BS_SOLID**. Se **nPenStyle** è **PS_GEOMETRIC**, tutti i membri devono essere utilizzati per specificare gli attributi di pennello della penna.  
  
 `nStyleCount`  
 Specifica la lunghezza, espressa in unità parola doppia, del `lpStyle` matrice. Questo valore deve essere zero se `nPenStyle` non **PS_USERSTYLE**.  
  
 `lpStyle`  
 Punta a una matrice di valori Double Word. Il primo valore specifica la lunghezza del primo trattino in uno stile definito dall'utente, il secondo valore specifica la lunghezza del primo spazio e così via. L'indicatore di misura deve essere **NULL** se `nPenStyle` non **PS_USERSTYLE**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, oppure zero se il metodo ha esito negativo.  
  
### <a name="remarks"></a>Note  
 La prima versione di `CreatePen` Inizializza un oggetto pen con colore, larghezza e stile specificato. È possibile selezionare successivamente la penna della penna corrente per qualsiasi contesto di dispositivo.  
  
 Penne che hanno una larghezza maggiore di 1 pixel deve disporre sempre di **PS_NULL**, **PS_SOLID**, o **PS_INSIDEFRAME** stile.  
  
 Se dispone di un oggetto pen il **PS_INSIDEFRAME** stile e il colore che non corrisponde a un colore nella tabella logica colore, la penna è tracciata con un colore retinato. Il **PS_SOLID** penna stile non può essere utilizzato per creare un oggetto pen con un colore retinato. Lo stile **PS_INSIDEFRAME** è identico a **PS_SOLID** se la larghezza della penna è minore o uguale a 1.  
  
 La seconda versione di `CreatePen` consente di inizializzare una penna cosmetica o geometrica logica che è stato specificato di stile, larghezza e gli attributi di pennello. La larghezza della penna cosmetica è sempre 1. la larghezza della penna geometrica è sempre specificata nell'unità di misura internazionali. Dopo che un'applicazione crea una penna logica, è possibile selezionata in un contesto di dispositivo chiamando il [CDC:: SelectObject](../../mfc/reference/cdc-class.md#selectobject) (funzione). Dopo aver selezionata una penna in un contesto di dispositivo, può essere utilizzato per disegnare linee e curve.  
  
-   Se `nPenStyle` è **PS_COSMETIC** e **PS_USERSTYLE**, le voci di `lpStyle` matrice specificare lunghezze dei trattini e spazi in unità di stile. Un'unità di stile è definita dal dispositivo in cui la penna utilizzata per disegnare una linea.  
  
-   Se `nPenStyle` è **PS_GEOMETRIC** e **PS_USERSTYLE**, le voci di `lpStyle` matrice specificare lunghezze dei trattini e spazi in unità logiche.  
  
-   Se `nPenStyle` è **PS_ALTERNATE**, l'unità di stile viene ignorato e gli altri pixel è stato impostato.  
  
 Quando un'applicazione non richiede più una penna specificata, questo deve chiamare il [CGdiObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) membro funzione o distruggere i `CPen` dell'oggetto in modo la risorsa non è più in uso. Un'applicazione non eliminare un oggetto pen quando è selezionata la penna in un contesto di dispositivo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#100](../../mfc/codesnippet/cpp/cpen-class_2.cpp)]  
  
##  <a name="createpenindirect"></a>CPen::CreatePenIndirect  
 Inizializza un oggetto pen con stile, larghezza e colore specificato nella struttura a cui puntava `lpLogPen`.  
  
```  
BOOL CreatePenIndirect(LPLOGPEN lpLogPen);
```  
  
### <a name="parameters"></a>Parametri  
 `lpLogPen`  
 Fa riferimento alle finestre [LOGPEN](../../mfc/reference/logpen-structure.md) struttura che contiene informazioni su della penna.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Penne che hanno una larghezza maggiore di 1 pixel deve disporre sempre di **PS_NULL**, **PS_SOLID**, o **PS_INSIDEFRAME** stile.  
  
 Se dispone di un oggetto pen il **PS_INSIDEFRAME** stile e il colore che non corrisponde a un colore nella tabella logica colore, la penna è tracciata con un colore retinato. Il **PS_INSIDEFRAME** stile è identico a **PS_SOLID** se la larghezza della penna è minore o uguale a 1.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#101](../../mfc/codesnippet/cpp/cpen-class_3.cpp)]  
  
##  <a name="fromhandle"></a>CPen::FromHandle  
 Restituisce un puntatore a un `CPen` oggetto in base a un handle a un oggetto pen GDI di Windows.  
  
```  
static CPen* PASCAL FromHandle(HPEN hPen);
```  
  
### <a name="parameters"></a>Parametri  
 *hPen*  
 `HPEN`handle per una penna GDI di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CPen` oggetto in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Se all'handle non è collegato un oggetto `CPen`, viene creato e collegato un oggetto `CPen` temporaneo. Questo temporaneo `CPen` oggetto è valido solo finché la volta successiva che l'applicazione è il tempo di inattività nel relativo ciclo di eventi, che ora immagine temporanea tutti gli oggetti vengono eliminati. In altre parole, l'oggetto temporaneo è valido durante l'elaborazione di una finestra di messaggio.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#105](../../mfc/codesnippet/cpp/cpen-class_4.cpp)]  
  
##  <a name="getextlogpen"></a>CPen::GetExtLogPen  
 Ottiene un **EXTLOGPEN** struttura sottostante.  
  
```  
int GetExtLogPen(EXTLOGPEN* pLogPen);
```  
  
### <a name="parameters"></a>Parametri  
 `pLogPen`  
 Punta a un [EXTLOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd162711) struttura che contiene informazioni su della penna.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il **EXTLOGPEN** struttura definisce gli attributi di pennello di un oggetto pen, larghezza e stile. Ad esempio, chiamare `GetExtLogPen` per associare lo stile di un oggetto pen particolare.  
  
 Vedere gli argomenti seguenti in Windows SDK per informazioni sugli attributi penna:  
  
- [GetObject](http://msdn.microsoft.com/library/windows/desktop/dd144904)  
  
- [EXTLOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd162711)  
  
- [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041)  
  
- [ExtCreatePen](http://msdn.microsoft.com/library/windows/desktop/dd162705)  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente viene illustrata la chiamata `GetExtLogPen` per recuperare gli attributi di una penna e quindi creare un oggetto pen cosmetico, nuovo con lo stesso colore.  
  
 [!code-cpp[NVC_MFCDocView#102](../../mfc/codesnippet/cpp/cpen-class_5.cpp)]  
  
##  <a name="getlogpen"></a>CPen::GetLogPen  
 Ottiene un `LOGPEN` struttura sottostante.  
  
```  
int GetLogPen(LOGPEN* pLogPen);
```  
  
### <a name="parameters"></a>Parametri  
 `pLogPen`  
 Punta a un [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041) struttura per contenere informazioni della penna.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `LOGPEN` struttura definisce lo stile, colore e motivo di una penna.  
  
 Ad esempio, chiamare `GetLogPen` per associare lo stile particolare della penna.  
  
 Vedere gli argomenti seguenti in Windows SDK per informazioni sugli attributi penna:  
  
- [GetObject](http://msdn.microsoft.com/library/windows/desktop/dd144904)  
  
- [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041)  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente viene illustrata la chiamata `GetLogPen` per recuperare un carattere di penna e quindi creare una penna a tinta unita, nuovo con lo stesso colore.  
  
 [!code-cpp[NVC_MFCDocView#103](../../mfc/codesnippet/cpp/cpen-class_6.cpp)]  
  
##  <a name="operator_hpen"></a>CPen::operator HPEN  
 Ottiene l'handle GDI di Windows associata del `CPen` oggetto.  
  
```  
operator HPEN() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un handle all'oggetto GDI di Windows rappresentato dal `CPen` oggetto; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questo è un operatore di cast, che supporta l'utilizzo diretto di un `HPEN` oggetto.  
  
 Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere l'articolo [oggetti immagine di](http://msdn.microsoft.com/library/windows/desktop/dd144962) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#104](../../mfc/codesnippet/cpp/cpen-class_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CBrush](../../mfc/reference/cbrush-class.md)

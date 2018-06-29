---
title: CPen (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 17337239a3a58a0283fc96eadcd4417c3d5c69b0
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37079590"
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
|[CPen::CreatePen](#createpen)|Crea una penna cosmetica o geometrica logica con uno stile specificato, la larghezza e gli attributi di pennello e lo collega al `CPen` oggetto.|  
|[CPen::CreatePenIndirect](#createpenindirect)|Crea un oggetto pen con lo stile, larghezza e colore specificato un [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041) struttura e lo collega al `CPen` oggetto.|  
|[CPen::FromHandle](#fromhandle)|Restituisce un puntatore a un `CPen` oggetto quando viene specificato un Windows `HPEN`.|  
|[CPen::GetExtLogPen](#getextlogpen)|Ottiene un [EXTLOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd162711) sottostante struttura.|  
|[CPen::GetLogPen](#getlogpen)|Ottiene un [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041) sottostante struttura.|  
  
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
  
##  <a name="cpen"></a>  CPen::CPen  
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
 *nPenStyle*  
 Specifica lo stile della penna. Questo parametro nella prima versione del costruttore può essere uno dei valori seguenti:  
  
- **PS_SOLID** crea un oggetto pen a tinta unita.  
  
- **PS_DASH** crea una penna tratteggiata. Valido solo quando la larghezza della penna è 1 o meno, nel dispositivo unità.  
  
- **PS_DOT** crea un oggetto pen punteggiato. Valido solo quando la larghezza della penna è 1 o meno, nel dispositivo unità.  
  
- **PS_DASHDOT** crea un oggetto pen con alternati trattini e punti. Valido solo quando la larghezza della penna è 1 o meno, nel dispositivo unità.  
  
- **PS_DASHDOTDOT** crea un oggetto pen con trattini e punti doppi alternati. Valido solo quando la larghezza della penna è 1 o meno, nel dispositivo unità.  
  
- **PS_NULL** crea un oggetto pen null.  
  
- **PS_INSIDEFRAME** crea un oggetto pen che disegna una linea all'interno della cornice di forme chiuse prodotta dalle funzioni di output GDI di Windows che specificano un rettangolo di delimitazione (ad esempio, il `Ellipse`, `Rectangle`, `RoundRect`, `Pie`, e `Chord` funzioni membro). Quando questo stile viene usato con funzioni di output GDI di Windows che non si specificano un rettangolo di delimitazione (ad esempio, il `LineTo` funzione membro), l'area di disegno della penna non è limitata da un frame.  
  
 La seconda versione di `CPen` costruttore specifica una combinazione di tipo, stile, estremità di chiusura e gli attributi di join. I valori di ogni categoria devono essere combinati utilizzando l'operatore OR bit per bit (&#124;). Il tipo di penna può essere uno dei valori seguenti:  
  
- **PS_GEOMETRIC** crea un oggetto pen geometrico.  
  
- **PS_COSMETIC** crea un oggetto pen cosmetico.  
  
     La seconda versione di `CPen` costruttore aggiunge gli stili penna seguenti per *nPenStyle*:  
  
- **PS_ALTERNATE** crea un oggetto pen che consente di impostare gli altri pixel. (Questo stile è applicabile solo per penne cosmetiche).  
  
- **PS_USERSTYLE** crea un oggetto pen che utilizza una matrice di stili fornita dall'utente.  
  
     L'estremità finale può essere uno dei valori seguenti:  
  
- **PS_ENDCAP_ROUND** delimitatori finali sono arrotondamenti.  
  
- **PS_ENDCAP_SQUARE** delimitatori finali sono quadrati.  
  
- **PS_ENDCAP_FLAT** delimitatori finali sono flat.  
  
     Il join può essere uno dei valori seguenti:  
  
- **PS_JOIN_BEVEL** sono smussati join.  
  
- **PS_JOIN_MITER** join sono siano quando si trovano entro il limite corrente impostato tramite il [SetMiterLimit](http://msdn.microsoft.com/library/windows/desktop/dd145076) (funzione). Se il join supera questo limite, è smussato.  
  
- **PS_JOIN_ROUND** join sono arrotondamento.  
  
 *nWidth*  
 Specifica la larghezza della penna.  
  
-   Per la prima versione del costruttore, se questo valore è 0, la larghezza in unità di dispositivo è sempre 1 pixel, indipendentemente dalla modalità di mapping.  
  
-   Per la seconda versione del costruttore, se *nPenStyle* viene **PS_GEOMETRIC**, la larghezza viene espresso in unità logiche. Se *nPenStyle* viene **PS_COSMETIC**, la larghezza deve essere impostata su 1.  
  
 *crColor*  
 Contiene un colore RGB della penna.  
  
 *pLogBrush*  
 Punta a un `LOGBRUSH` struttura. Se *nPenStyle* viene **PS_COSMETIC**, il *lbColor* appartenente il `LOGBRUSH` struttura specifica il colore della penna e il *lbStyle*membro del `LOGBRUSH` struttura deve essere impostata su **BS_SOLID**. Se *nPenStyle* viene **PS_GEOMETRIC**, tutti i membri devono essere utilizzati per specificare gli attributi di pennello della penna.  
  
 *nStyleCount*  
 Specifica la lunghezza, espressa in unità parola doppia, del *lpStyle* matrice. Questo valore deve essere zero se *nPenStyle* non **PS_USERSTYLE**.  
  
 *lpStyle*  
 Punta a una matrice di valori Double Word. Il primo valore specifica la lunghezza del trattino prima in uno stile definito dall'utente, il secondo valore specifica la lunghezza del primo spazio e così via. Puntatore ' this ' deve essere **NULL** se *nPenStyle* non **PS_USERSTYLE**.  
  
### <a name="remarks"></a>Note  
 Se si utilizza il costruttore senza argomenti, è necessario inizializzare il valore risultante `CPen` dell'oggetto con il `CreatePen`, `CreatePenIndirect`, o `CreateStockObject` funzioni membro.  
  
 Se si utilizza il costruttore che accetta argomenti, non sarà necessaria nessuna ulteriore inizializzazione. Il costruttore con gli argomenti possa generare un'eccezione se vengono rilevati errori, mentre il costruttore senza argomenti avrà sempre esito positivo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#99](../../mfc/codesnippet/cpp/cpen-class_1.cpp)]  
  
##  <a name="createpen"></a>  CPen::CreatePen  
 Crea una penna cosmetica o geometrica logica con uno stile specificato, la larghezza e gli attributi di pennello e lo collega al `CPen` oggetto.  
  
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
 *nPenStyle*  
 Specifica lo stile della penna. Per un elenco di valori possibili, vedere la *nPenStyle* parametro il [CPen](#cpen) costruttore.  
  
 *nWidth*  
 Specifica la larghezza della penna.  
  
-   Per la prima versione di `CreatePen`, se questo valore è 0, la larghezza in unità di dispositivo è sempre 1 pixel, indipendentemente dalla modalità di mapping.  
  
-   Per la seconda versione del `CreatePen`, se *nPenStyle* viene **PS_GEOMETRIC**, la larghezza viene espresso in unità logiche. Se *nPenStyle* viene **PS_COSMETIC**, la larghezza deve essere impostata su 1.  
  
 *crColor*  
 Contiene un colore RGB della penna.  
  
 *pLogBrush*  
 Punta a un [LOGBRUSH](http://msdn.microsoft.com/library/windows/desktop/dd145035) struttura. Se *nPenStyle* viene **PS_COSMETIC**, il **lbColor** appartenente il `LOGBRUSH` struttura specifica il colore della penna e il *lbStyle*membro del `LOGBRUSH` struttura deve essere impostata su **BS_SOLID**. Se **nPenStyle** viene **PS_GEOMETRIC**, tutti i membri devono essere utilizzati per specificare gli attributi di pennello della penna.  
  
 *nStyleCount*  
 Specifica la lunghezza, espressa in unità parola doppia, del *lpStyle* matrice. Questo valore deve essere zero se *nPenStyle* non **PS_USERSTYLE**.  
  
 *lpStyle*  
 Punta a una matrice di valori Double Word. Il primo valore specifica la lunghezza del trattino prima in uno stile definito dall'utente, il secondo valore specifica la lunghezza del primo spazio e così via. Puntatore ' this ' deve essere **NULL** se *nPenStyle* non **PS_USERSTYLE**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, oppure zero se il metodo ha esito negativo.  
  
### <a name="remarks"></a>Note  
 La prima versione di `CreatePen` Inizializza un oggetto pen con uno stile specificato, la larghezza e colore. È possibile selezionare successivamente la penna della penna correnti per qualsiasi contesto di dispositivo.  
  
 Penne che hanno una larghezza maggiore di 1 pixel deve essere sempre il **PS_NULL**, **PS_SOLID**, o **PS_INSIDEFRAME** stile.  
  
 Se dispone di un oggetto pen il **PS_INSIDEFRAME** stile e il colore che corrisponde a un colore nella tabella logica colore, la penna viene disegnata con un colore retinato. Il **PS_SOLID** penna stile non può essere utilizzato per creare un oggetto pen con un colore retinato. Lo stile **PS_INSIDEFRAME** è identica alla **PS_SOLID** se la larghezza della penna è minore o uguale a 1.  
  
 La seconda versione `CreatePen` consente di inizializzare una penna cosmetica o geometrica logica che è stato specificato lo stile, larghezza, quindi gli attributi di pennello. La larghezza della penna cosmetica è sempre 1. la larghezza della penna geometrica è sempre specificata nell'unità di misura internazionali. Dopo che un'applicazione crea un oggetto pen logico, è possibile selezionare penna in un contesto di dispositivo chiamando il [CDC:: SelectObject](../../mfc/reference/cdc-class.md#selectobject) (funzione). Dopo aver selezionata una penna in un contesto di dispositivo, può essere utilizzato per disegnare linee e curve collegate.  
  
-   Se *nPenStyle* viene **PS_COSMETIC** e **PS_USERSTYLE**, le voci nel *lpStyle* matrice specificare lunghezze dei trattini e spazi unità di stile. Un'unità di stile viene definita dal dispositivo in cui la penna utilizzata per disegnare una linea.  
  
-   Se *nPenStyle* viene **PS_GEOMETRIC** e **PS_USERSTYLE**, le voci nel *lpStyle* matrice specificare lunghezze dei trattini e spazi unità logiche.  
  
-   Se *nPenStyle* viene **PS_ALTERNATE**, l'unità di stile viene ignorata e gli altri pixel è impostata.  
  
 Quando un'applicazione non richiede più una penna specificata, questo deve chiamare il [CGdiObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) membro funzione o distruggere i `CPen` dell'oggetto in modo che la risorsa non è più in uso. Un'applicazione non eliminare un oggetto pen se la penna è selezionata in un contesto di dispositivo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#100](../../mfc/codesnippet/cpp/cpen-class_2.cpp)]  
  
##  <a name="createpenindirect"></a>  CPen::CreatePenIndirect  
 Inizializza un oggetto pen con stile, larghezza e colore specificato nella struttura a cui punta *lpLogPen*.  
  
```  
BOOL CreatePenIndirect(LPLOGPEN lpLogPen);
```  
  
### <a name="parameters"></a>Parametri  
 *lpLogPen*  
 Fa riferimento alle finestre [LOGPEN](../../mfc/reference/logpen-structure.md) struttura che contiene informazioni su penna.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Penne che hanno una larghezza maggiore di 1 pixel deve essere sempre il **PS_NULL**, **PS_SOLID**, o **PS_INSIDEFRAME** stile.  
  
 Se dispone di un oggetto pen il **PS_INSIDEFRAME** stile e il colore che corrisponde a un colore nella tabella logica colore, la penna viene disegnata con un colore retinato. Il **PS_INSIDEFRAME** stile è identico alla **PS_SOLID** se la larghezza della penna è minore o uguale a 1.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#101](../../mfc/codesnippet/cpp/cpen-class_3.cpp)]  
  
##  <a name="fromhandle"></a>  CPen::FromHandle  
 Restituisce un puntatore a un `CPen` oggetto fornito da un handle a un oggetto pen GDI di Windows.  
  
```  
static CPen* PASCAL FromHandle(HPEN hPen);
```  
  
### <a name="parameters"></a>Parametri  
 *hPen*  
 `HPEN` handle per penna GDI di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CPen` oggetto in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Se all'handle non è collegato un oggetto `CPen`, viene creato e collegato un oggetto `CPen` temporaneo. Questa memoria temporanea `CPen` oggetto è valido solo fino alla successiva esecuzione l'applicazione ha tempo di inattività nel relativo ciclo di eventi, che ora immagine temporanea tutti gli oggetti vengono eliminati. In altre parole, l'oggetto temporaneo valido solo durante l'elaborazione di una finestra di messaggio.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#105](../../mfc/codesnippet/cpp/cpen-class_4.cpp)]  
  
##  <a name="getextlogpen"></a>  CPen::GetExtLogPen  
 Ottiene un **EXTLOGPEN** sottostante struttura.  
  
```  
int GetExtLogPen(EXTLOGPEN* pLogPen);
```  
  
### <a name="parameters"></a>Parametri  
 *pLogPen*  
 Punta a un [EXTLOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd162711) struttura che contiene informazioni su penna.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il **EXTLOGPEN** struttura definisce lo stile, larghezza e gli attributi di pennello di un oggetto pen. Ad esempio, chiamare `GetExtLogPen` dello stile particolare di un oggetto pen.  
  
 Vedere gli argomenti seguenti in Windows SDK per informazioni sugli attributi penna:  
  
- [GetObject](http://msdn.microsoft.com/library/windows/desktop/dd144904)  
  
- [EXTLOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd162711)  
  
- [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041)  
  
- [ExtCreatePen](http://msdn.microsoft.com/library/windows/desktop/dd162705)  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente viene illustrato come chiamare `GetExtLogPen` per recuperare gli attributi della penna e quindi creare un oggetto pen nuovo, cosmetico con lo stesso colore.  
  
 [!code-cpp[NVC_MFCDocView#102](../../mfc/codesnippet/cpp/cpen-class_5.cpp)]  
  
##  <a name="getlogpen"></a>  CPen::GetLogPen  
 Ottiene un `LOGPEN` sottostante struttura.  
  
```  
int GetLogPen(LOGPEN* pLogPen);
```  
  
### <a name="parameters"></a>Parametri  
 *pLogPen*  
 Punta a un [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041) struttura per contenere informazioni la penna.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `LOGPEN` struttura definisce il stile, colore e il criterio di un oggetto pen.  
  
 Ad esempio, chiamare `GetLogPen` dello stile particolare della penna.  
  
 Vedere gli argomenti seguenti in Windows SDK per informazioni sugli attributi penna:  
  
- [GetObject](http://msdn.microsoft.com/library/windows/desktop/dd144904)  
  
- [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041)  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente viene illustrato come chiamare `GetLogPen` per recuperare un carattere penna e quindi creare un oggetto pen nuovo, a tinta unita con lo stesso colore.  
  
 [!code-cpp[NVC_MFCDocView#103](../../mfc/codesnippet/cpp/cpen-class_6.cpp)]  
  
##  <a name="operator_hpen"></a>  CPen::operator HPEN  
 Ottiene l'handle GDI di Windows associata del `CPen` oggetto.  
  
```  
operator HPEN() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un handle all'oggetto GDI di Windows rappresentato dal `CPen` dell'oggetto; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questo è un operatore di cast, che supporta l'uso diretto di un `HPEN` oggetto.  
  
 Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere l'articolo [immagine di oggetti](http://msdn.microsoft.com/library/windows/desktop/dd144962) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#104](../../mfc/codesnippet/cpp/cpen-class_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CBrush](../../mfc/reference/cbrush-class.md)

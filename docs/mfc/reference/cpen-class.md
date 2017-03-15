---
title: CPen (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- HPEN
- CPen
dev_langs:
- C++
helpviewer_keywords:
- HPEN
- CPen class
- pens, MFC
ms.assetid: 93175a3a-d46c-4768-be8d-863254f97a5f
caps.latest.revision: 20
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
ms.openlocfilehash: edea12c84a8f39161acbf367360fd86a1ff19998
ms.lasthandoff: 02/24/2017

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
|[CPen::CreatePen](#createpen)|Crea una penna logica cosmetica o geometrica con lo stile specificato, la larghezza e gli attributi di pennello e lo collega a di `CPen` oggetto.|  
|[CPen::CreatePenIndirect](#createpenindirect)|Crea un oggetto pen con lo stile, spessore e colore specificato un [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041) struttura e lo collega a di `CPen` oggetto.|  
|[CPen::FromHandle](#fromhandle)|Restituisce un puntatore a un `CPen` oggetto quando viene specificato un Windows `HPEN`.|  
|[CPen::GetExtLogPen](#getextlogpen)|Ottiene un [EXTLOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd162711) struttura sottostante.|  
|[CPen::GetLogPen](#getlogpen)|Ottiene un [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041) struttura sottostante.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPen::operator HPEN](#operator_hpen)|Restituisce l'handle di Windows associata per la `CPen` oggetto.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni sull'utilizzo di `CPen`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CPen`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="a-namecpena--cpencpen"></a><a name="cpen"></a>CPen::CPen  
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
 Specifica lo stile della penna. Questo parametro nella prima versione del costruttore può essere uno dei valori seguenti:  
  
- **PS_SOLID** crea una penna a tinta unita.  
  
- **PS_DASH** crea una penna tratteggiata. Valido solo quando la larghezza della penna è l'unità di 1 o meno, nel dispositivo.  
  
- **PS_DOT** crea un oggetto pen punteggiato. Valido solo quando la larghezza della penna è l'unità di 1 o meno, nel dispositivo.  
  
- **PS_DASHDOT** crea un oggetto pen con trattini e punti alternati. Valido solo quando la larghezza della penna è l'unità di 1 o meno, nel dispositivo.  
  
- **PS_DASHDOTDOT** crea un oggetto pen con trattini e punti doppio alternati. Valido solo quando la larghezza della penna è l'unità di 1 o meno, nel dispositivo.  
  
- **PS_NULL** crea un oggetto pen null.  
  
- **PS_INSIDEFRAME** crea un oggetto pen che disegna una linea all'interno del fotogramma di forme chiuse prodotti dalle funzioni di output Windows GDI che specificano un rettangolo di delimitazione (ad esempio, il **ellisse**, **rettangolo**, `RoundRect`, `Pie`, e `Chord` funzioni membro). Quando questo stile viene utilizzato con funzioni di output GDI Windows che non si specifica un rettangolo di delimitazione (ad esempio, il `LineTo` funzione membro), l'area di disegno della penna non è limitata da un frame.  
  
 La seconda versione di `CPen` costruttore specifica una combinazione di tipo, stile, estremità e gli attributi di join. I valori per ogni categoria devono essere combinati utilizzando l'operatore OR bit per bit (|). Il tipo di penna può essere uno dei valori seguenti:  
  
- **PS_GEOMETRIC** crea un oggetto pen geometrico.  
  
- **PS_COSMETIC** crea un oggetto pen cosmetico.  
  
     La seconda versione di `CPen` costruttore aggiunge i seguenti stili di penna per `nPenStyle`:  
  
- **PS_ALTERNATE** crea un oggetto pen che imposta gli altri pixel. (Questo stile è applicabile solo per le penne cosmetiche).  
  
- **PS_USERSTYLE** crea un oggetto pen che utilizza una matrice di stili fornita dall'utente.  
  
     L'estremità può essere uno dei valori seguenti:  
  
- **PS_ENDCAP_ROUND** delimitatori finali vengono arrotondati.  
  
- **PS_ENDCAP_SQUARE** delimitatori finali sono quadrati.  
  
- **PS_ENDCAP_FLAT** delimitatori finali sono flat.  
  
     Il join può essere uno dei valori seguenti:  
  
- **PS_JOIN_BEVEL** join sono smussati.  
  
- **PS_JOIN_MITER** join sono siano quando si trovano entro il limite corrente impostato tramite il [SetMiterLimit](http://msdn.microsoft.com/library/windows/desktop/dd145076) (funzione). Se il join supera questo limite, si è un effetto tridimensionale.  
  
- **PS_JOIN_ROUND** join sono arrotondati.  
  
 `nWidth`  
 Specifica la larghezza della penna.  
  
-   Per la prima versione del costruttore, se questo valore è 0, la larghezza espressa in unità di dispositivo è sempre 1 pixel, indipendentemente dalla modalità di mapping.  
  
-   Per la seconda versione del costruttore, se `nPenStyle` è **PS_GEOMETRIC**, la larghezza viene espresso in unità logiche. Se `nPenStyle` è **PS_COSMETIC**, la larghezza deve essere impostata su 1.  
  
 `crColor`  
 Contiene un colore RGB della penna.  
  
 `pLogBrush`  
 Punta a un `LOGBRUSH` struttura. Se `nPenStyle` è **PS_COSMETIC**, `lbColor` membro del `LOGBRUSH` struttura specifica il colore della penna e il `lbStyle` membro del `LOGBRUSH` struttura deve essere impostata su **BS_SOLID**. Se `nPenStyle` è **PS_GEOMETRIC**, tutti i membri devono essere utilizzati per specificare gli attributi pennello della penna.  
  
 `nStyleCount`  
 Specifica la lunghezza, in unità di parola doppia, del `lpStyle` matrice. Questo valore deve essere zero se `nPenStyle` non **PS_USERSTYLE**.  
  
 `lpStyle`  
 Punta a una matrice di valori di parola doppia. Il primo valore specifica la lunghezza del trattino prima in uno stile definito dall'utente, il secondo valore specifica la lunghezza del primo spazio e così via. Puntatore ' this ' deve essere **NULL** se `nPenStyle` non **PS_USERSTYLE**.  
  
### <a name="remarks"></a>Note  
 Se si utilizza il costruttore senza argomenti, è necessario inizializzare l'oggetto risultante `CPen` oggetto con il `CreatePen`, `CreatePenIndirect`, o `CreateStockObject` funzioni membro.  
  
 Se si utilizza il costruttore che accetta argomenti, non sarà necessaria nessuna ulteriore inizializzazione. Il costruttore con gli argomenti possa generare un'eccezione se vengono rilevati errori, mentre il costruttore senza argomenti avrà sempre esito positivo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#99;](../../mfc/codesnippet/cpp/cpen-class_1.cpp)]  
  
##  <a name="a-namecreatepena--cpencreatepen"></a><a name="createpen"></a>CPen::CreatePen  
 Crea una penna logica cosmetica o geometrica con lo stile specificato, la larghezza e gli attributi di pennello e lo collega a di `CPen` oggetto.  
  
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
  
-   Per la prima versione di `CreatePen`, se questo valore è 0, la larghezza espressa in unità di dispositivo è sempre 1 pixel, indipendentemente dalla modalità di mapping.  
  
-   Per la seconda versione di `CreatePen`, se `nPenStyle` è **PS_GEOMETRIC**, la larghezza viene espresso in unità logiche. Se `nPenStyle` è **PS_COSMETIC**, la larghezza deve essere impostata su 1.  
  
 `crColor`  
 Contiene un colore RGB della penna.  
  
 `pLogBrush`  
 Punta a un [LOGBRUSH](http://msdn.microsoft.com/library/windows/desktop/dd145035) struttura. Se `nPenStyle` è **PS_COSMETIC**, **lbColor** membro del `LOGBRUSH` struttura specifica il colore della penna e il `lbStyle` membro del `LOGBRUSH` struttura deve essere impostata su **BS_SOLID**. Se **nPenStyle** è **PS_GEOMETRIC**, tutti i membri devono essere utilizzati per specificare gli attributi pennello della penna.  
  
 `nStyleCount`  
 Specifica la lunghezza, in unità di parola doppia, del `lpStyle` matrice. Questo valore deve essere zero se `nPenStyle` non **PS_USERSTYLE**.  
  
 `lpStyle`  
 Punta a una matrice di valori di parola doppia. Il primo valore specifica la lunghezza del trattino prima in uno stile definito dall'utente, il secondo valore specifica la lunghezza del primo spazio e così via. Puntatore ' this ' deve essere **NULL** se `nPenStyle` non **PS_USERSTYLE**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, oppure zero se il metodo non riesce.  
  
### <a name="remarks"></a>Note  
 La prima versione di `CreatePen` Inizializza un oggetto pen con lo stile specificato, la larghezza e colore. La penna può essere successivamente selezionata come la penna corrente per qualsiasi contesto di dispositivo.  
  
 Penne con una larghezza maggiore di 1 pixel deve sempre disporre di uno il **PS_NULL**, **PS_SOLID**, o **PS_INSIDEFRAME** stile.  
  
 Se dispone di un oggetto pen il **PS_INSIDEFRAME** stile e il colore che non corrisponde a un colore nella tabella colori logica, la penna disegnata con un colore retinato. Il **PS_SOLID** stile penna non può essere utilizzato per creare un oggetto pen con un colore retinato. Lo stile **PS_INSIDEFRAME** è identico a **PS_SOLID** se la larghezza della penna è minore o uguale a 1.  
  
 La seconda versione di `CreatePen` consente di inizializzare una penna logica cosmetica o geometrica che è stato specificato lo stile, larghezza, quindi gli attributi del pennello. La larghezza di un oggetto pen cosmetici è sempre 1. la larghezza di un oggetto pen geometrica è sempre specificata nell'unità di misura internazionali. Dopo che un'applicazione crea una penna logica, è possibile selezionata in un contesto di dispositivo chiamando il [CDC::SelectObject](../../mfc/reference/cdc-class.md#selectobject) (funzione). Dopo aver selezionata una penna in un contesto di dispositivo, può essere utilizzato per disegnare linee e curve.  
  
-   Se `nPenStyle` è **PS_COSMETIC** e **PS_USERSTYLE**, le voci di `lpStyle` matrice specificare lunghezze dei trattini e spazi in unità di stile. Un'unità di stile è definita dal dispositivo in cui la penna utilizzata per disegnare una linea.  
  
-   Se `nPenStyle` è **PS_GEOMETRIC** e **PS_USERSTYLE**, le voci di `lpStyle` matrice specificare lunghezze dei trattini e spazi in unità logiche.  
  
-   Se `nPenStyle` è **PS_ALTERNATE**, l'unità di stile viene ignorata e gli altri pixel è impostato.  
  
 Quando un'applicazione non richiede un oggetto pen specifico, è necessario chiamare il [CGdiObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) membro funzione o distruggere il `CPen` dell'oggetto in modo la risorsa non è più in uso. Un'applicazione non eliminare un oggetto pen quando la penna è selezionata in un contesto di dispositivo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#100;](../../mfc/codesnippet/cpp/cpen-class_2.cpp)]  
  
##  <a name="a-namecreatepenindirecta--cpencreatepenindirect"></a><a name="createpenindirect"></a>CPen::CreatePenIndirect  
 Inizializza un oggetto pen che lo stile, spessore e colore specificato nella struttura a cui puntava `lpLogPen`.  
  
```  
BOOL CreatePenIndirect(LPLOGPEN lpLogPen);
```  
  
### <a name="parameters"></a>Parametri  
 `lpLogPen`  
 Punta a Windows [LOGPEN](../../mfc/reference/logpen-structure.md) struttura che contiene informazioni su penna.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Penne con una larghezza maggiore di 1 pixel deve sempre disporre di uno il **PS_NULL**, **PS_SOLID**, o **PS_INSIDEFRAME** stile.  
  
 Se dispone di un oggetto pen il **PS_INSIDEFRAME** stile e il colore che non corrisponde a un colore nella tabella colori logica, la penna disegnata con un colore retinato. Il **PS_INSIDEFRAME** stile è identico a **PS_SOLID** se la larghezza della penna è minore o uguale a 1.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#101;](../../mfc/codesnippet/cpp/cpen-class_3.cpp)]  
  
##  <a name="a-namefromhandlea--cpenfromhandle"></a><a name="fromhandle"></a>CPen::FromHandle  
 Restituisce un puntatore a un `CPen` oggetto dato un handle a un oggetto pen GDI di Windows.  
  
```  
static CPen* PASCAL FromHandle(HPEN hPen);
```  
  
### <a name="parameters"></a>Parametri  
 *hPen*  
 `HPEN`handle per penna GDI di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CPen` oggetto in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Se all'handle non è collegato un oggetto `CPen`, viene creato e collegato un oggetto `CPen` temporaneo. Questo temporaneo `CPen` oggetto è valido solo fino a quando la volta successiva che l'applicazione ha il tempo di inattività nel relativo ciclo di eventi, che ora immagine temporanea tutti gli oggetti vengono eliminati. In altre parole, l'oggetto temporaneo è valido durante l'elaborazione di una finestra di messaggio.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#105; NVC_MFCDocView](../../mfc/codesnippet/cpp/cpen-class_4.cpp)]  
  
##  <a name="a-namegetextlogpena--cpengetextlogpen"></a><a name="getextlogpen"></a>CPen::GetExtLogPen  
 Ottiene un **EXTLOGPEN** struttura sottostante.  
  
```  
int GetExtLogPen(EXTLOGPEN* pLogPen);
```  
  
### <a name="parameters"></a>Parametri  
 `pLogPen`  
 Punta a un [EXTLOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd162711) struttura che contiene informazioni su penna.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il **EXTLOGPEN** struttura definisce attributi pennello di un oggetto pen, larghezza e stile. Ad esempio, chiamare `GetExtLogPen` per associare lo stile particolare di un oggetto pen.  
  
 Vedere gli argomenti seguenti nella [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per informazioni sugli attributi di penna:  
  
- [GetObject](http://msdn.microsoft.com/library/windows/desktop/dd144904)  
  
- [EXTLOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd162711)  
  
- [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041)  
  
- [ExtCreatePen](http://msdn.microsoft.com/library/windows/desktop/dd162705)  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente viene illustrata la chiamata `GetExtLogPen` per recuperare gli attributi della penna e quindi creare una nuova, Cosmetica penna con lo stesso colore.  
  
 [!code-cpp[&#102; NVC_MFCDocView](../../mfc/codesnippet/cpp/cpen-class_5.cpp)]  
  
##  <a name="a-namegetlogpena--cpengetlogpen"></a><a name="getlogpen"></a>CPen::GetLogPen  
 Ottiene un `LOGPEN` struttura sottostante.  
  
```  
int GetLogPen(LOGPEN* pLogPen);
```  
  
### <a name="parameters"></a>Parametri  
 `pLogPen`  
 Punta a un [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041) struttura per contenere informazioni la penna.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `LOGPEN` struttura definisce lo stile, colore e motivo di un oggetto pen.  
  
 Ad esempio, chiamare `GetLogPen` per associare lo stile particolare della penna.  
  
 Vedere gli argomenti seguenti nella [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per informazioni sugli attributi di penna:  
  
- [GetObject](http://msdn.microsoft.com/library/windows/desktop/dd144904)  
  
- [LOGPEN](http://msdn.microsoft.com/library/windows/desktop/dd145041)  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente viene illustrata la chiamata `GetLogPen` per recuperare un carattere di penna e quindi creare una penna a tinta unita, nuovo con lo stesso colore.  
  
 [!code-cpp[NVC_MFCDocView&#103;](../../mfc/codesnippet/cpp/cpen-class_6.cpp)]  
  
##  <a name="a-nameoperatorhpena--cpenoperator-hpen"></a><a name="operator_hpen"></a>CPen::operator HPEN  
 Ottiene l'handle GDI Windows collegato di `CPen` oggetto.  
  
```  
operator HPEN() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un handle per l'oggetto GDI Windows rappresentato dal `CPen` oggetto; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questo è un operatore di cast, che supporta l'utilizzo diretto di un `HPEN` oggetto.  
  
 Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere l'articolo [oggetti grafico](http://msdn.microsoft.com/library/windows/desktop/dd144962) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#104; NVC_MFCDocView](../../mfc/codesnippet/cpp/cpen-class_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CBrush (classe)](../../mfc/reference/cbrush-class.md)


---
title: CFont (Class) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFont
- AFXWIN/CFont
- AFXWIN/CFont::CFont
- AFXWIN/CFont::CreateFont
- AFXWIN/CFont::CreateFontIndirect
- AFXWIN/CFont::CreatePointFont
- AFXWIN/CFont::CreatePointFontIndirect
- AFXWIN/CFont::FromHandle
- AFXWIN/CFont::GetLogFont
dev_langs:
- C++
helpviewer_keywords:
- CFont class
- GDI, font classes
- fonts, MFC classes
ms.assetid: 3fad6bfe-d6ce-4ab9-967a-5ce0aa102800
caps.latest.revision: 23
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: cc7ecfb850bf24013acdb55075eeb3d64d4994ee
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cfont-class"></a>CFont (Class)
Incapsula un tipo di carattere GDI (Graphics Device Interface) di Windows e fornisce funzioni membro per la modifica del tipo di carattere.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CFont : public CGdiObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFont::CFont](#cfont)|Costruisce un oggetto `CFont`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFont::](#createfont)|Inizializza un `CFont` con le caratteristiche specificate.|  
|[CFont:: CreateFontIndirect](#createfontindirect)|Inizializza un `CFont` oggetto con le caratteristiche di base in un `LOGFONT` struttura.|  
|[Cfont](#createpointfont)|Inizializza un `CFont` con l'altezza specificata, espresso in decimi di un punto e tipo di carattere.|  
|[CFont::CreatePointFontIndirect](#createpointfontindirect)|Uguale a `CreateFontIndirect` ad eccezione del fatto che l'altezza del carattere viene misurata in decimi di un punto anziché unità logiche.|  
|[CFont::FromHandle](#fromhandle)|Restituisce un puntatore a un `CFont` oggetto quando viene specificato un Windows **HFONT**.|  
|[CFont::GetLogFont](#getlogfont)|Riempie una `LOGFONT` con informazioni sul tipo di carattere logica collegata la `CFont` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[HFONT CFont::operator](#operator_hfont)|Restituisce l'handle del tipo di carattere GDI di Windows è collegata la `CFont` oggetto.|  
  
## <a name="remarks"></a>Note  
 Per utilizzare un `CFont` dell'oggetto, creare un `CFont` dell'oggetto e connettersi con un tipo di carattere Windows [CreateFont](#createfont), [CreateFontIndirect](#createfontindirect), [CreatePointFont](#createpointfont), o [CreatePointFontIndirect](#createpointfontindirect)e quindi utilizzare le funzioni membro dell'oggetto per modificare il tipo di carattere.  
  
 Il `CreatePointFont` e `CreatePointFontIndirect` le funzioni sono spesso più facile da usare rispetto al `CreateFont` o `CreateFontIndirect` poiché avviene la conversione per l'altezza del tipo di carattere da un punto di dimensioni in unità logiche automaticamente.  
  
 Per ulteriori informazioni su `CFont`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CFont`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cfont"></a>CFont::CFont  
 Costruisce un oggetto `CFont`.  
  
```  
CFont();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto risultante deve essere inizializzato con `CreateFont`, `CreateFontIndirect`, `CreatePointFont`, o `CreatePointFontIndirect` prima che possa essere utilizzato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#70;](../../mfc/codesnippet/cpp/cfont-class_1.cpp)]  
  
##  <a name="createfont"></a>CFont::  
 Inizializza un `CFont` oggetto con le caratteristiche specificate.  
  
```  
BOOL CreateFont(
    int nHeight,  
    int nWidth,  
    int nEscapement,  
    int nOrientation,  
    int nWeight,  
    BYTE bItalic,  
    BYTE bUnderline,  
    BYTE cStrikeOut,  
    BYTE nCharSet,  
    BYTE nOutPrecision,  
    BYTE nClipPrecision,  
    BYTE nQuality,  
    BYTE nPitchAndFamily,  
    LPCTSTR lpszFacename);
```  
  
### <a name="parameters"></a>Parametri  
 `nHeight`  
 Specifica l'altezza desiderata (in unità logiche) del tipo di carattere. Vedere il `lfHeight` membro del [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037)struttura nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per una descrizione. Il valore assoluto di `nHeight` non deve superare 16.384 unità dispositivo dopo la conversione. Per tutti i confronti di altezza, il mapper del tipo di carattere cerca il carattere più grande che non superi la dimensione richiesta o il tipo di carattere più piccolo se tutti i tipi di carattere supera le dimensioni richieste.  
  
 `nWidth`  
 Specifica lo spessore medio (in unità logiche) di caratteri nel tipo di carattere. Se `nWidth` è 0, le proporzioni del dispositivo verrà confrontata con le proporzioni di digitalizzazione dei tipi di carattere disponibili per trovare la corrispondenza più vicina, determinato dal valore assoluto della differenza.  
  
 `nEscapement`  
 Specifica l'angolo (in unità di 0,1 gradi) tra l'asse x della superficie di visualizzazione e il vettore di rotazione. Il vettore di rotazione è la riga e le origini dei caratteri e il cognome in una riga. L'angolo viene misurato in senso antiorario dall'asse x. Vedere il `lfEscapement` membro il `LOGFONT` struttura nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
 `nOrientation`  
 Specifica l'angolo (in unità di 0,1 gradi) tra la linea di base di un carattere e l'asse x. L'angolo viene misurato in senso antiorario dall'asse x per i sistemi di coordinate in cui sull'asse y è rivolta verso il basso e in senso orario dall'asse x per i sistemi di coordinate in cui è la direzione dell'asse y.  
  
 `nWeight`  
 Specifica lo spessore del carattere (in pixel finale per 1000). Vedere il `lfWeight` membro il `LOGFONT` struttura nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni. I valori descritti sono approssimati. l'aspetto effettivo dipende il tipo di carattere. Alcuni tipi di carattere è disponibile solo `FW_NORMAL`, `FW_REGULAR`, e `FW_BOLD` pesi. Se `FW_DONTCARE` è specificato, viene utilizzato un peso predefinito.  
  
 `bItalic`  
 Specifica se il tipo di carattere corsivo.  
  
 `bUnderline`  
 Specifica se il tipo di carattere è sottolineato.  
  
 `cStrikeOut`  
 Specifica se i caratteri nel tipo di carattere sono barrati. Specifica un tipo di carattere barrato, se impostato su un valore diverso da zero.  
  
 `nCharSet`  
 Specifica setSee carattere del tipo di carattere di `lfCharSet` membro il `LOGFONT` struttura nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco di valori.  
  
 Il set di caratteri OEM è dipendente dal sistema.  
  
 Tipi di carattere con altri set di caratteri può esistere nel sistema. Un'applicazione che utilizza un tipo di carattere con un set di caratteri sconosciuto non deve tentare di convertire o l'interpretazione di stringhe che devono essere eseguito con tale carattere. Al contrario, le stringhe devono essere passate direttamente al driver di dispositivo di output.  
  
 Il mapper del tipo di carattere non utilizza il `DEFAULT_CHARSET` valore. Un'applicazione può utilizzare questo valore per consentire il nome e la dimensione del tipo di carattere per descrivere il tipo di carattere logica. Se un tipo di carattere con il nome specificato non esiste, può sostituire un tipo di carattere da qualsiasi set di caratteri di tipo di carattere specificata. Per evitare risultati imprevisti, le applicazioni devono utilizzare il `DEFAULT_CHARSET` valore con cautela.  
  
 `nOutPrecision`  
 Specifica la precisione di output desiderato. La precisione dell'output definisce in quale misura l'output deve corrispondere il tipo di carattere richiesto altezza, larghezza, orientamento, angolo di rotazione e passo. Vedere il `lfOutPrecision` membro il `LOGFONT` struttura nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco di valori e altre informazioni.  
  
 `nClipPrecision`  
 Specifica la precisione di visualizzazione desiderato. La precisione del ritaglio definisce come ritagliare i caratteri che sono parzialmente all'esterno dell'area di ritaglio. Vedere il `lfClipPrecision` membro il `LOGFONT` struttura nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco di valori.  
  
 Per utilizzare un tipo di carattere sola lettura, è necessario specificare un'applicazione `CLIP_ENCAPSULATE`.  
  
 Per ottenere una rotazione coerenza del dispositivo TrueType e tipi di carattere vettoriali, un'applicazione può utilizzare l'operatore OR per combinare il `CLIP_LH_ANGLES` valore con qualsiasi altra `nClipPrecision` valori. Se il `CLIP_LH_ANGLES` bit è impostato, la rotazione per tutti i caratteri varia a seconda che l'orientamento del sistema di coordinate da sinistra o destra. (Per ulteriori informazioni sull'orientamento dei sistemi di coordinate, vedere la descrizione del `nOrientation` parametro.) Se `CLIP_LH_ANGLES` non è impostata, i caratteri dispositivo sempre Ruota in senso antiorario, ma la rotazione di altri tipi di carattere dipende l'orientamento del sistema di coordinate.  
  
 `nQuality`  
 Specifica la qualità di output del tipo di carattere, che definisce come il GDI deve cercare di associare gli attributi di tipo di carattere logica a quelli di un tipo di carattere fisico effettivo. Vedere il `lfQuality` membro il `LOGFONT` struttura nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco di valori.  
  
 `nPitchAndFamily`  
 Specifica il tono e la famiglia del tipo di carattere. Vedere il `lfPitchAndFamily` membro il `LOGFONT` struttura nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco di valori e altre informazioni.  
  
 `lpszFacename`  
 Oggetto `CString` o puntatore a una stringa con terminazione null che specifica il nome del tipo di carattere. La lunghezza di questa stringa non deve superare i 30 caratteri. Windows [EnumFontFamilies](http://msdn.microsoft.com/library/windows/desktop/dd162619) funzione può essere utilizzata per enumerare tutti i tipi di carattere attualmente disponibili. Se `lpszFacename` è `NULL`, GDI utilizza un carattere tipografico indipendenti dal dispositivo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Successivamente è possibile selezionare il tipo di carattere del tipo di carattere per qualsiasi contesto di dispositivo.  
  
 Il `CreateFont` funzione non viene creato un nuovo tipo di carattere GDI di Windows. Semplicemente seleziona la corrispondenza più vicina dai tipi di carattere fisici disponibile per il GDI.  
  
 Le applicazioni possono utilizzare le impostazioni predefinite per la maggior parte dei parametri durante la creazione di un tipo di carattere logica. I parametri che devono sempre avere valori specifici sono `nHeight` e `lpszFacename`. Se `nHeight` e `lpszFacename` non sono impostate dall'applicazione, il tipo di carattere logica creata è dipendente dal dispositivo.  
  
 Una volta terminato con il `CFont` oggetto creato tramite il `CreateFont` funzione, utilizzare `CDC::SelectObject` per selezionare il tipo di carattere nel contesto di dispositivo, quindi eliminare il `CFont` oggetto che non è più necessario.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#71;](../../mfc/codesnippet/cpp/cfont-class_2.cpp)]  
  
##  <a name="createfontindirect"></a>CFont:: CreateFontIndirect  
 Inizializza un `CFont` oggetto con le caratteristiche di base in un [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037)struttura.  
  
```  
BOOL CreateFontIndirect(const LOGFONT* lpLogFont);
```  
  
### <a name="parameters"></a>Parametri  
 `lpLogFont`  
 Punta a un `LOGFONT` struttura che definisce le caratteristiche del tipo di carattere logica.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Successivamente è possibile selezionare il tipo di carattere come tipo di carattere corrente per qualsiasi dispositivo.  
  
 Questo tipo di carattere ha le caratteristiche specificate nella [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura. Quando viene selezionato il tipo di carattere utilizzando il [CDC::SelectObject](../../mfc/reference/cdc-class.md#selectobject) funzione membro, il mapper del tipo di carattere GDI crea una corrispondenza tra il tipo di carattere logica con un tipo di carattere fisico esistente. Il mapper del tipo di carattere non riesce a trovare una corrispondenza esatta per il tipo di carattere logica, fornisce un tipo di carattere alternativo le cui caratteristiche corrispondono poiché molte delle caratteristiche richieste possibili.  
  
 Quando non è più necessario il `CFont` oggetto creato tramite il `CreateFontIndirect` funzione, utilizzare `CDC::SelectObject` per selezionare il tipo di carattere nel contesto di dispositivo, quindi eliminare il `CFont` oggetto che non è più necessario.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#72;](../../mfc/codesnippet/cpp/cfont-class_3.cpp)]  
  
##  <a name="createpointfont"></a>Cfont  
 Questa funzione fornisce un modo semplice per creare un tipo di carattere di un tipo di carattere specificato e la dimensione.  
  
```  
BOOL CreatePointFont(
    int nPointSize,  
    LPCTSTR lpszFaceName,  
    CDC* pDC = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `nPointSize`  
 Altezza del carattere in decimi di un punto di richiesta. (Ad esempio, passare 120 per richiedere un tipo di carattere a 12 punti).  
  
 `lpszFaceName`  
 Oggetto `CString` o puntatore a una stringa con terminazione null che specifica il nome del tipo di carattere. La lunghezza di questa stringa non deve superare i 30 caratteri. Windows **EnumFontFamilies** funzione può essere utilizzata per enumerare tutti i tipi di carattere attualmente disponibili. Se `lpszFaceName` è **NULL**, GDI utilizza un carattere tipografico indipendenti dal dispositivo.  
  
 `pDC`  
 Puntatore al [CDC](../../mfc/reference/cdc-class.md) oggetto da utilizzare per convertire l'altezza in `nPointSize` alle unità logiche. Se **NULL**, viene utilizzato un contesto di dispositivo dello schermo per la conversione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Converte automaticamente l'altezza in `nPointSize` alle unità logiche utilizzando il `CDC` oggetto a cui puntava `pDC`.  
  
 Una volta terminato con il `CFont` oggetto creato tramite il `CreatePointFont` funzione, selezionare innanzitutto il tipo di carattere fuori contesto di dispositivo, quindi eliminare il `CFont` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#73;](../../mfc/codesnippet/cpp/cfont-class_4.cpp)]  
  
##  <a name="createpointfontindirect"></a>CFont::CreatePointFontIndirect  
 Questa funzione equivale a [CreateFontIndirect](#createfontindirect) ad eccezione del fatto che il **lfHeight** membro del `LOGFONT` viene interpretato in decimi di un punto piuttosto che come dispositivo di unità.  
  
```  
BOOL CreatePointFontIndirect(
    const LOGFONT* lpLogFont,  
    CDC* pDC = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpLogFont`  
 Punta a un [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura che definisce le caratteristiche del tipo di carattere logica. Il **lfHeight** membro del `LOGFONT` struttura viene misurata in decimi di un punto anziché unità logiche. (Ad esempio, impostare **lfHeight** su 120 per richiedere un tipo di carattere a 12 punti.)  
  
 `pDC`  
 Puntatore al [CDC](../../mfc/reference/cdc-class.md) oggetto da utilizzare per convertire l'altezza in **lfHeight** alle unità logiche. Se **NULL**, viene utilizzato un contesto di dispositivo dello schermo per la conversione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione converte automaticamente l'altezza in **lfHeight** alle unità logiche utilizzando il `CDC` oggetto a cui puntava `pDC` prima di passare il `LOGFONT` struttura a Windows.  
  
 Una volta terminato con il `CFont` oggetto creato tramite il `CreatePointFontIndirect` funzione, selezionare innanzitutto il tipo di carattere fuori contesto di dispositivo, quindi eliminare il `CFont` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#74;](../../mfc/codesnippet/cpp/cfont-class_5.cpp)]  
  
##  <a name="fromhandle"></a>CFont::FromHandle  
 Restituisce un puntatore a un `CFont` oggetto quando viene specificato un **HFONT** handle per un oggetto di tipo di carattere GDI di Windows.  
  
```  
static CFont* PASCAL FromHandle(HFONT hFont);
```  
  
### <a name="parameters"></a>Parametri  
 `hFont`  
 Un **HFONT** handle per un tipo di carattere di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CFont` oggetto in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Se un `CFont` oggetto non è già connesso all'handle temporaneo `CFont` oggetto viene creato e collegato. Questo temporaneo `CFont` oggetto è valido solo fino a quando la volta successiva che l'applicazione ha il tempo di inattività nel relativo ciclo di eventi, che ora immagine temporanea tutti gli oggetti vengono eliminati. In altre parole, questo è che l'oggetto temporaneo è valido solo durante l'elaborazione di una finestra di messaggio.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#75; NVC_MFCDocView](../../mfc/codesnippet/cpp/cfont-class_6.cpp)]  
  
##  <a name="getlogfont"></a>CFont::GetLogFont  
 Chiamare questa funzione per recuperare una copia di `LOGFONT` struttura `CFont`.  
  
```  
int GetLogFont(LOGFONT* pLogFont);
```  
  
### <a name="parameters"></a>Parametri  
 *pLogFont*  
 Puntatore al [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura ricevere le informazioni sul tipo di carattere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo, in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#76;](../../mfc/codesnippet/cpp/cfont-class_7.cpp)]  
  
##  <a name="operator_hfont"></a>HFONT CFont::operator  
 Utilizzare questo operatore per ottenere l'handle GDI di Windows del tipo di carattere collegato a di `CFont` oggetto.  
  
```  
operator HFONT() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle dell'oggetto tipo di carattere GDI Windows collegati a `CFont` se ha esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Poiché questo operatore viene utilizzato automaticamente per le conversioni da `CFont` a [tipi di carattere e testo](http://msdn.microsoft.com/library/windows/desktop/dd144819), è possibile passare `CFont` oggetti alle funzioni che prevedono **HFONT**s.  
  
 Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere [oggetti grafico](http://msdn.microsoft.com/library/windows/desktop/dd144962) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#77; NVC_MFCDocView](../../mfc/codesnippet/cpp/cfont-class_8.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)





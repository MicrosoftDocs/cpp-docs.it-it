---
title: CFont (Class) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CFont [MFC], CFont
- CFont [MFC], CreateFont
- CFont [MFC], CreateFontIndirect
- CFont [MFC], CreatePointFont
- CFont [MFC], CreatePointFontIndirect
- CFont [MFC], FromHandle
- CFont [MFC], GetLogFont
ms.assetid: 3fad6bfe-d6ce-4ab9-967a-5ce0aa102800
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c577a153536b7c9a5def95915e802301841a485b
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36955027"
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
|[CFont:: CreateFontIndirect](#createfontindirect)|Inizializza una `CFont` oggetto con le caratteristiche di base un `LOGFONT` struttura.|  
|[Cfont](#createpointfont)|Inizializza un `CFont` con l'altezza specificata, misurata in decimi di un punto e carattere tipografico.|  
|[CFont::CreatePointFontIndirect](#createpointfontindirect)|Uguale a `CreateFontIndirect` ad eccezione del fatto che l'altezza del tipo di carattere viene misurata in decimi di un punto piuttosto che le unità logiche.|  
|[CFont::FromHandle](#fromhandle)|Restituisce un puntatore a un `CFont` oggetto quando viene specificato un Windows **HFONT**.|  
|[CFont::GetLogFont](#getlogfont)|Riempie una `LOGFONT` con le informazioni sul tipo di carattere logica associata al `CFont` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFont::operator HFONT](#operator_hfont)|Restituisce l'handle del tipo di carattere GDI di Windows collegata la `CFont` oggetto.|  
  
## <a name="remarks"></a>Note  
 Per utilizzare un `CFont` dell'oggetto, creare un `CFont` dell'oggetto e connettersi con un tipo di carattere Windows [CreateFont](#createfont), [CreateFontIndirect](#createfontindirect), [CreatePointFont](#createpointfont), o [CreatePointFontIndirect](#createpointfontindirect)e quindi usare le funzioni membro dell'oggetto per modificare il tipo di carattere.  
  
 Il `CreatePointFont` e `CreatePointFontIndirect` le funzioni sono spesso più facile da utilizzare rispetto `CreateFont` o `CreateFontIndirect` poiché avviene la conversione per l'altezza del tipo di carattere da un punto di dimensioni per le unità logiche automaticamente.  
  
 Per ulteriori informazioni sul `CFont`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CFont`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cfont"></a>  CFont::CFont  
 Costruisce un oggetto `CFont`.  
  
```  
CFont();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto risultante deve essere inizializzata con `CreateFont`, `CreateFontIndirect`, `CreatePointFont`, o `CreatePointFontIndirect` prima che possa essere utilizzato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#70](../../mfc/codesnippet/cpp/cfont-class_1.cpp)]  
  
##  <a name="createfont"></a>  CFont::  
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
 *nHeight*  
 Specifica l'altezza desiderata (in unità logiche) del tipo di carattere. Vedere la `lfHeight` membro del [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037)struttura in Windows SDK per una descrizione. Il valore assoluto di *nHeight* non deve superare 16.384 unità dispositivo dopo la conversione. Per tutti i confronti di altezza, il mapper del tipo di carattere è per il tipo di carattere più grande che non superi la dimensione richiesta o il tipo di carattere più piccolo se tutti i tipi di carattere supera la dimensione richiesta.  
  
 *nWidth*  
 Specifica la larghezza media (in unità logiche) di caratteri nel tipo di carattere. Se *nWidth* è 0, le proporzioni del dispositivo verrà confrontata con le proporzioni digitalizzazione dei tipi di carattere disponibili per trovare la corrispondenza più vicina, determinato dal valore assoluto della differenza.  
  
 *nEscapement*  
 Specifica l'angolo (in unità 0,1 gradi) tra l'asse x dell'area di visualizzazione e il vettore di rotazione. Il vettore di rotazione è la riga e le origini dei caratteri e il cognome in una riga. L'angolo viene misurato in senso antiorario dall'asse x. Vedere la `lfEscapement` membro il `LOGFONT` struttura in Windows SDK per ulteriori informazioni.  
  
 *nOrientation*  
 Specifica l'angolo (in unità 0,1 gradi) tra la linea di base di un carattere e l'asse x. L'angolo viene misurato in senso antiorario dall'asse x per i sistemi di coordinate in cui direzione dell'asse y è in senso orario dall'asse x per i sistemi di coordinate in cui direzione dell'asse y è alto e verso il basso.  
  
 *nWeight*  
 Specifica lo spessore del carattere (in pixel finale per 1000). Vedere la *lfWeight* membro il `LOGFONT` struttura in Windows SDK per ulteriori informazioni. I valori descritti sono approssimativi; l'aspetto effettivo dipende il tipo di carattere. È disponibile solo alcuni tipi di carattere `FW_NORMAL`, `FW_REGULAR`, e `FW_BOLD` pesi. Se `FW_DONTCARE` è specificato, viene utilizzato un peso predefinito.  
  
 *bItalic*  
 Specifica se il tipo di carattere corsivo.  
  
 *bUnderline*  
 Specifica se il carattere è sottolineato.  
  
 *cStrikeOut*  
 Specifica se i caratteri nel tipo di carattere sono barrati. Specifica un tipo di carattere barrato se impostato su un valore diverso da zero.  
  
 *nCharSet*  
 Specifica setSee carattere del tipo di carattere il `lfCharSet` membro il `LOGFONT` struttura in Windows SDK per un elenco di valori.  
  
 Il set di caratteri OEM è dipendente dal sistema.  
  
 I tipi di carattere con altri set di caratteri possono esistere nel sistema. Un'applicazione che utilizza un tipo di carattere con un set di caratteri sconosciuto non deve tentare di convertire o l'interpretazione di stringhe che devono essere eseguito con tale carattere. Al contrario, le stringhe devono essere passate direttamente il driver di dispositivo di output.  
  
 Il mapper del tipo di carattere non utilizza il `DEFAULT_CHARSET` valore. Un'applicazione può utilizzare questo valore per consentire il nome e le dimensioni di un tipo di carattere per descrivere il tipo di carattere logica. Se un tipo di carattere con il nome specificato non esiste, è possibile sostituire un tipo di carattere da qualsiasi set di caratteri per il tipo di carattere specificato. Per evitare risultati imprevisti, le applicazioni devono utilizzare il `DEFAULT_CHARSET` valore solo se necessario.  
  
 *nOutPrecision*  
 Specifica la precisione di output desiderato. La precisione dell'output definisce la misura l'output deve rispettare il tipo di carattere richiesto altezza, larghezza, orientamento, angolo di rotazione e tono. Vedere la `lfOutPrecision` membro il `LOGFONT` struttura in Windows SDK per un elenco di valori e altre informazioni.  
  
 *nClipPrecision*  
 Specifica la precisione di visualizzazione desiderato. La precisione del ritaglio definisce la modalità ritagliare caratteri che sono parzialmente all'esterno dell'area di ritaglio. Vedere la `lfClipPrecision` membro il `LOGFONT` struttura in Windows SDK per un elenco di valori.  
  
 Per utilizzare un tipo di carattere sola lettura, è necessario specificare un'applicazione `CLIP_ENCAPSULATE`.  
  
 Per ottenere coerenza rotazione del dispositivo, TrueType e tipi di carattere vettoriali, un'applicazione può utilizzare l'operatore OR per combinare i `CLIP_LH_ANGLES` valore con qualsiasi altra *nClipPrecision* valori. Se il `CLIP_LH_ANGLES` bit viene impostato, la rotazione per tutti i tipi di carattere varia a seconda che l'orientamento del sistema di coordinate da sinistra o destra. (Per ulteriori informazioni sull'orientamento dei sistemi di coordinate, vedere la descrizione del *nOrientation* parametro.) Se `CLIP_LH_ANGLES` non è impostato, i caratteri dispositivo sempre Ruota in senso antiorario, ma la rotazione di altri tipi di carattere dipende l'orientamento del sistema di coordinate.  
  
 *nQuality*  
 Specifica la qualità di output del tipo di carattere, che definisce la modalità con attenzione il GDI deve tentare di eseguire corrispondono agli attributi caratteri logici per quelli di un tipo di carattere fisico effettivo. Vedere la `lfQuality` membro il `LOGFONT` struttura in Windows SDK per un elenco di valori.  
  
 *nPitchAndFamily*  
 Specifica il passo e famiglia del tipo di carattere. Vedere la `lfPitchAndFamily` membro il `LOGFONT` struttura in Windows SDK per un elenco di valori e altre informazioni.  
  
 *lpszFacename*  
 Oggetto `CString` o un puntatore a una stringa con terminazione null che specifica il nome del tipo di carattere. La lunghezza di questa stringa non deve superare i 30 caratteri. Le finestre [EnumFontFamilies](http://msdn.microsoft.com/library/windows/desktop/dd162619) funzione può essere utilizzata per enumerare tutti i tipi di carattere attualmente disponibili. Se *lpszFacename* è `NULL`, GDI di Usa un carattere tipografico indipendenti dal dispositivo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Successivamente è possibile selezionare il tipo di carattere come il tipo di carattere per qualsiasi contesto di dispositivo.  
  
 Il `CreateFont` funzione non crea un nuovo tipo di carattere GDI di Windows. La corrispondenza più vicina semplicemente seleziona da carattere fisici disponibili per GDI.  
  
 Le applicazioni possono utilizzare le impostazioni predefinite per la maggior parte dei parametri durante la creazione di un tipo di carattere logica. I parametri che devono sempre essere assegnati valori specifici sono *nHeight* e *lpszFacename*. Se *nHeight* e *lpszFacename* non vengono impostate dall'applicazione, il tipo di carattere logica creata è dipendente dal dispositivo.  
  
 Quando terminano con il `CFont` l'oggetto creato con il `CreateFont` funzione, utilizzare `CDC::SelectObject` per selezionare un tipo di carattere diversi nel contesto di dispositivo, quindi eliminare il `CFont` oggetto che non è più necessario.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#71](../../mfc/codesnippet/cpp/cfont-class_2.cpp)]  
  
##  <a name="createfontindirect"></a>  CFont:: CreateFontIndirect  
 Inizializza una `CFont` oggetto con le caratteristiche di base un [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037)struttura.  
  
```  
BOOL CreateFontIndirect(const LOGFONT* lpLogFont);
```  
  
### <a name="parameters"></a>Parametri  
 *lpLogFont*  
 Punta a un `LOGFONT` struttura che definisce le caratteristiche del tipo di carattere logica.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Successivamente è possibile selezionare il tipo di carattere come tipo di carattere corrente per qualsiasi dispositivo.  
  
 Questo tipo di carattere ha le caratteristiche specificate nella [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura. Quando viene selezionato il tipo di carattere usando la [CDC:: SelectObject](../../mfc/reference/cdc-class.md#selectobject) funzione membro, il mapper del tipo di carattere GDI tenta di ottenere il tipo di carattere logica con un carattere fisico esistente. Se il mapper del tipo di carattere non riesce a trovare una corrispondenza esatta per il tipo di carattere logica, esso fornisce un tipo di carattere alternativo cui caratteristiche corrispondono a come molte delle caratteristiche richieste come possibili.  
  
 Quando non è più necessario il `CFont` l'oggetto creato con il `CreateFontIndirect` funzione, utilizzare `CDC::SelectObject` per selezionare un tipo di carattere diversi nel contesto di dispositivo, quindi eliminare il `CFont` oggetto che non è più necessario.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#72](../../mfc/codesnippet/cpp/cfont-class_3.cpp)]  
  
##  <a name="createpointfont"></a>  Cfont  
 Questa funzione fornisce un modo semplice per creare un tipo di carattere di un tipo di carattere specificato e dimensione in punti.  
  
```  
BOOL CreatePointFont(
    int nPointSize,  
    LPCTSTR lpszFaceName,  
    CDC* pDC = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *nPointSize*  
 Altezza del tipo di carattere in decimi di un punto di richiesta. (Ad esempio, passare 120 per richiedere un tipo di carattere a 12 punti).  
  
 *lpszFaceName*  
 Oggetto `CString` o un puntatore a una stringa con terminazione null che specifica il nome del tipo di carattere. La lunghezza di questa stringa non deve superare i 30 caratteri. Le finestre **EnumFontFamilies** funzione può essere utilizzata per enumerare tutti i tipi di carattere attualmente disponibili. Se *lpszFaceName* viene **NULL**, GDI di Usa un carattere tipografico indipendenti dal dispositivo.  
  
 *pDC*  
 Puntatore ai [CDC](../../mfc/reference/cdc-class.md) oggetto da utilizzare per convertire l'altezza in *nPointSize* unità logiche. Se **NULL**, un contesto di dispositivo dello schermo viene utilizzato per la conversione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Converte automaticamente l'altezza in *nPointSize* unità logiche usando la `CDC` oggetto a cui punta *pDC*.  
  
 Quando terminano con il `CFont` l'oggetto creato con il `CreatePointFont` funzione, selezionare innanzitutto il tipo di carattere fuori dal contesto di dispositivo, quindi eliminare il `CFont` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#73](../../mfc/codesnippet/cpp/cfont-class_4.cpp)]  
  
##  <a name="createpointfontindirect"></a>  CFont::CreatePointFontIndirect  
 Questa funzione è analoga [CreateFontIndirect](#createfontindirect) ad eccezione del fatto che il **lfHeight** appartenente il `LOGFONT` viene interpretato in decimi di un'unità punto anziché dispositivo.  
  
```  
BOOL CreatePointFontIndirect(
    const LOGFONT* lpLogFont,  
    CDC* pDC = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpLogFont*  
 Punta a un [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura che definisce le caratteristiche del tipo di carattere logica. Il **lfHeight** appartenente il `LOGFONT` struttura viene misurata in decimi di un punto piuttosto che le unità logiche. (Ad esempio, impostare **lfHeight** su 120 per richiedere un tipo di carattere a 12 punti.)  
  
 *pDC*  
 Puntatore ai [CDC](../../mfc/reference/cdc-class.md) oggetto da utilizzare per convertire l'altezza in **lfHeight** unità logiche. Se **NULL**, un contesto di dispositivo dello schermo viene utilizzato per la conversione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione converte automaticamente l'altezza in **lfHeight** unità logiche usando la `CDC` oggetto a cui punta *pDC* prima di passarla il `LOGFONT` struttura a Windows.  
  
 Quando terminano con il `CFont` l'oggetto creato con il `CreatePointFontIndirect` funzione, selezionare innanzitutto il tipo di carattere fuori dal contesto di dispositivo, quindi eliminare il `CFont` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#74](../../mfc/codesnippet/cpp/cfont-class_5.cpp)]  
  
##  <a name="fromhandle"></a>  CFont::FromHandle  
 Restituisce un puntatore a un `CFont` oggetto quando viene specificato un **HFONT** handle per un oggetto di tipo di carattere GDI di Windows.  
  
```  
static CFont* PASCAL FromHandle(HFONT hFont);
```  
  
### <a name="parameters"></a>Parametri  
 *hFont*  
 Un' **HFONT** handle per un tipo di carattere Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CFont` oggetto in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Se un `CFont` oggetto non è già collegato all'handle di una password temporanea `CFont` oggetto viene creato e collegato. Questa memoria temporanea `CFont` oggetto è valido solo fino alla successiva esecuzione l'applicazione ha tempo di inattività nel relativo ciclo di eventi, che ora immagine temporanea tutti gli oggetti vengono eliminati. Un altro modo di ciò è che l'oggetto temporaneo è valida solo durante l'elaborazione di una finestra di messaggio.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#75](../../mfc/codesnippet/cpp/cfont-class_6.cpp)]  
  
##  <a name="getlogfont"></a>  CFont::GetLogFont  
 Chiamare questa funzione per recuperare una copia del `LOGFONT` struttura per `CFont`.  
  
```  
int GetLogFont(LOGFONT* pLogFont);
```  
  
### <a name="parameters"></a>Parametri  
 *pLogFont*  
 Puntatore ai [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura per ricevere le informazioni di carattere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo, in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#76](../../mfc/codesnippet/cpp/cfont-class_7.cpp)]  
  
##  <a name="operator_hfont"></a>  CFont::operator HFONT  
 Utilizzare questo operatore per ottenere l'handle GDI di Windows del tipo di carattere collegato il `CFont` oggetto.  
  
```  
operator HFONT() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle dell'oggetto del tipo di carattere GDI di Windows collegata `CFont` se riesce; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Poiché questo operatore viene usato automaticamente per le conversioni dai `CFont` al [tipi di carattere e testo](http://msdn.microsoft.com/library/windows/desktop/dd144819), è possibile passare `CFont` oggetti alle funzioni che si aspettano **HFONT**s.  
  
 Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere [immagine di oggetti](http://msdn.microsoft.com/library/windows/desktop/dd144962) in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#77](../../mfc/codesnippet/cpp/cfont-class_8.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HIERSVR](../../visual-cpp-samples.md)   
 [Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)




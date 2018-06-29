---
title: CPalette (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CPalette
- AFXWIN/CPalette
- AFXWIN/CPalette::CPalette
- AFXWIN/CPalette::AnimatePalette
- AFXWIN/CPalette::CreateHalftonePalette
- AFXWIN/CPalette::CreatePalette
- AFXWIN/CPalette::FromHandle
- AFXWIN/CPalette::GetEntryCount
- AFXWIN/CPalette::GetNearestPaletteIndex
- AFXWIN/CPalette::GetPaletteEntries
- AFXWIN/CPalette::ResizePalette
- AFXWIN/CPalette::SetPaletteEntries
dev_langs:
- C++
helpviewer_keywords:
- CPalette [MFC], CPalette
- CPalette [MFC], AnimatePalette
- CPalette [MFC], CreateHalftonePalette
- CPalette [MFC], CreatePalette
- CPalette [MFC], FromHandle
- CPalette [MFC], GetEntryCount
- CPalette [MFC], GetNearestPaletteIndex
- CPalette [MFC], GetPaletteEntries
- CPalette [MFC], ResizePalette
- CPalette [MFC], SetPaletteEntries
ms.assetid: 8cd95498-53ed-4852-85e1-70e522541114
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: eb5aeef3970488c293d4199261d765f2531c201a
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37079681"
---
# <a name="cpalette-class"></a>CPalette (classe)
Incapsula una tavolozza dei colori di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPalette : public CGdiObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPalette::CPalette](#cpalette)|Costruisce un `CPalette` oggetto con alcuna tavolozza Windows associata. È necessario inizializzare il `CPalette` oggetto con una delle funzioni membro inizializzazione prima che possa essere utilizzato.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPalette:: AnimatePalette](#animatepalette)|Sostituisce le voci nella tavolozza logica identificate le `CPalette` oggetto. L'applicazione non è necessario aggiornare relativa area client, perché Windows viene eseguito il mapping le nuove voci nella tavolozza di sistema immediatamente.|  
|[CPalette::CreateHalftonePalette](#createhalftonepalette)|Crea una tavolozza dei mezzitoni per il contesto di dispositivo e lo collega al `CPalette` oggetto.|  
|[CPalette::CreatePalette](#createpalette)|Crea una tavolozza dei colori di Windows e lo collega al `CPalette` oggetto.|  
|[CPalette::FromHandle](#fromhandle)|Restituisce un puntatore a un `CPalette` oggetto quando viene specificato un handle a un oggetto di tavolozza di Windows.|  
|[CPalette::GetEntryCount](#getentrycount)|Recupera il numero di voci tavolozza di una tavolozza logica.|  
|[CPalette::GetNearestPaletteIndex](#getnearestpaletteindex)|Restituisce l'indice della voce della tavolozza logica che corrisponde maggiormente a un valore di colore.|  
|[CPalette::GetPaletteEntries](#getpaletteentries)|Recupera un intervallo delle voci tavolozza una tavolozza logica.|  
|[CPalette::ResizePalette](#resizepalette)|Modifica la dimensione della tavolozza logica specificata dal `CPalette` oggetto per il numero di voci specificato.|  
|[CPalette::SetPaletteEntries](#setpaletteentries)|Imposta flag e valori di colore RGB in un intervallo di voci in una tavolozza logica.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPalette::operator HPALETTE](#operator_hpalette)|Restituisce il `HPALETTE` collegata la `CPalette`.|  
  
## <a name="remarks"></a>Note  
 Una tavolozza fornisce un'interfaccia tra un'applicazione e un dispositivo di output di colore (ad esempio un dispositivo di visualizzazione). L'interfaccia consente all'applicazione di sfruttare appieno le funzionalità di colore del dispositivo di output senza gravemente interferire con i colori visualizzati da altre applicazioni. Windows Usa tavolozza logica dell'applicazione (un elenco di colori necessari) e la tavolozza di sistema (che definisce i colori disponibili) per determinare i colori utilizzati.  
  
 Oggetto `CPalette` oggetto fornisce funzioni membro per la modifica di tavolozza a cui fa riferimento l'oggetto. Costruire un `CPalette` dell'oggetto e utilizzare le funzioni membro per creare la tavolozza effettiva, un oggetto interface (GDI) dispositivo di grafica e per modificare le relative voci e le altre proprietà.  
  
 Per ulteriori informazioni sull'utilizzo `CPalette`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CPalette`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="animatepalette"></a>  CPalette:: AnimatePalette  
 Sostituisce le voci nella tavolozza logica associato per il `CPalette` oggetto.  
  
```  
void AnimatePalette(
    UINT nStartIndex,  
    UINT nNumEntries,  
    LPPALETTEENTRY lpPaletteColors);
```  
  
### <a name="parameters"></a>Parametri  
 *nStartIndex*  
 Specifica la prima voce della tavolozza da animare.  
  
 *nNumEntries*  
 Specifica il numero di voci della tavolozza da animare.  
  
 *lpPaletteColors*  
 Punta al primo membro di una matrice di [PALETTEENTRY](http://msdn.microsoft.com/library/windows/desktop/dd162769) strutture per sostituire le voci tavolozza identificate *nStartIndex* e *nNumEntries*.  
  
### <a name="remarks"></a>Note  
 Quando un'applicazione chiama `AnimatePalette`, che è necessario aggiornare relativa area client, poiché Windows offre una mappa le nuove voci nella tavolozza di sistema immediatamente.  
  
 Il `AnimatePalette` funzione verrà soltanto modificato voci con il **PC_RESERVED** flag impostato nel corrispondente **palPaletteEntry** appartenente il [LOGPALETTE](http://msdn.microsoft.com/library/windows/desktop/dd145040) struttura che è collegata la `CPalette` oggetto. Vedere **LOGPALETTE** in Windows SDK per ulteriori informazioni su questa struttura.  
  
##  <a name="cpalette"></a>  CPalette::CPalette  
 Costruisce un oggetto `CPalette`.  
  
```  
CPalette();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto non ha alcuna tavolozza collegato finché non si chiama `CreatePalette` per collegare uno.  
  
##  <a name="createhalftonepalette"></a>  CPalette::CreateHalftonePalette  
 Crea una tavolozza dei mezzitoni per il contesto di dispositivo.  
  
```  
BOOL CreateHalftonePalette(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Identifica il contesto di dispositivo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Un'applicazione deve creare una tavolozza dei mezzitoni quando la modalità di adattamento di un contesto di dispositivo è impostata su **mezzitoni**. La tavolozza dei mezzitoni logico restituita dal [CreateHalftonePalette](http://msdn.microsoft.com/library/windows/desktop/dd183503) funzione membro deve essere selezionata e realizzata nel contesto di dispositivo prima il [CDC::StretchBlt](../../mfc/reference/cdc-class.md#stretchblt) o [ StretchDIBits](http://msdn.microsoft.com/library/windows/desktop/dd145121) funzione viene chiamata.  
  
 Vedi il Windows SDK per ulteriori informazioni `CreateHalftonePalette` e **StretchDIBits**.  
  
##  <a name="createpalette"></a>  CPalette::CreatePalette  
 Inizializza una `CPalette` oggetto creando una tavolozza dei colori logico di Windows e collegarlo al `CPalette` oggetto.  
  
```  
BOOL CreatePalette(LPLOGPALETTE lpLogPalette);
```  
  
### <a name="parameters"></a>Parametri  
 *lpLogPalette*  
 Punta a un [LOGPALETTE](http://msdn.microsoft.com/library/windows/desktop/dd145040) struttura che contiene informazioni sui colori nella tavolozza logica.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Vedi il Windows SDK per ulteriori informazioni **LOGPALETTE** struttura.  
  
##  <a name="fromhandle"></a>  CPalette::FromHandle  
 Restituisce un puntatore a un `CPalette` oggetto quando viene specificato un handle a un oggetto di tavolozza di Windows.  
  
```  
static CPalette* PASCAL FromHandle(HPALETTE hPalette);
```  
  
### <a name="parameters"></a>Parametri  
 *hPalette*  
 Handle per una tavolozza GDI di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CPalette` oggetto in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Se un `CPalette` oggetto non è già collegato alla tavolozza di Windows, una password temporanea `CPalette` oggetto viene creato e collegato. Questa memoria temporanea `CPalette` oggetto è valido solo fino alla successiva esecuzione l'applicazione ha tempo di inattività nel relativo ciclo di eventi, che ora immagine temporanea tutti gli oggetti vengono eliminati. In altre parole, l'oggetto temporaneo è valido solo durante l'elaborazione di una finestra di messaggio.  
  
##  <a name="getentrycount"></a>  CPalette::GetEntryCount  
 Chiamare questa funzione membro per recuperare il numero di voci in una determinato tavolozza logica.  
  
```  
int GetEntryCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di voci in una tavolozza logica.  
  
##  <a name="getnearestpaletteindex"></a>  CPalette::GetNearestPaletteIndex  
 Restituisce l'indice della voce della tavolozza logica che corrisponde maggiormente al valore di colore specificato.  
  
```  
UINT GetNearestPaletteIndex(COLORREF crColor) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *crColor*  
 Specifica il colore da ricercare.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice di una voce in una tavolozza logica. La voce contiene il colore che corrisponde più quasi il colore specificato.  
  
##  <a name="getpaletteentries"></a>  CPalette::GetPaletteEntries  
 Recupera un intervallo delle voci tavolozza una tavolozza logica.  
  
```  
UINT GetPaletteEntries(
    UINT nStartIndex,  
    UINT nNumEntries,  
    LPPALETTEENTRY lpPaletteColors) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *nStartIndex*  
 Specifica la prima voce nella tavolozza logica da recuperare.  
  
 *nNumEntries*  
 Specifica il numero di voci nella tavolozza logica da recuperare.  
  
 *lpPaletteColors*  
 Punta a una matrice di [PALETTEENTRY](http://msdn.microsoft.com/library/windows/desktop/dd162769) strutture di dati per ricevere le voci della tavolozza. La matrice deve contenere almeno del numero di strutture di dati come specificato da *nNumEntries*.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di voci recuperati dalla tavolozza logica; 0 se la funzione ha esito negativo.  
  
##  <a name="operator_hpalette"></a>  CPalette::operator HPALETTE  
 Utilizzare questo operatore per ottenere l'handle GDI di Windows associata del `CPalette` oggetto.  
  
```  
operator HPALETTE() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un handle all'oggetto GDI di Windows rappresentato dal `CPalette` dell'oggetto; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questo è un operatore di cast, che supporta l'uso diretto di un `HPALETTE` oggetto.  
  
 Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere l'articolo [immagine di oggetti](http://msdn.microsoft.com/library/windows/desktop/dd144962) in Windows SDK.  
  
##  <a name="resizepalette"></a>  CPalette::ResizePalette  
 Modifica la dimensione della tavolozza logica associata per il `CPalette` oggetto per il numero di voci specificate dal *nNumEntries*.  
  
```  
BOOL ResizePalette(UINT nNumEntries);
```  
  
### <a name="parameters"></a>Parametri  
 *nNumEntries*  
 Specifica il numero di voci nella tavolozza dopo che è stato ridimensionato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la tavolozza è stata ridimensionata correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se un'applicazione chiama `ResizePalette` per ridurre le dimensioni della tavolozza, le voci rimanenti nella tavolozza ridimensionata non sono cambiate. Se l'applicazione chiama `ResizePalette` per aumentare le dimensioni del riquadro, le voci tavolozza aggiuntive sul nero (i valori di rossi, verde e blu sono tutte 0), e i flag per tutte le voci aggiuntive sono impostati su 0.  
  
 Per ulteriori informazioni sull'API Windows `ResizePalette`, vedere [ResizePalette](http://msdn.microsoft.com/library/windows/desktop/dd162928) in Windows SDK.  
  
##  <a name="setpaletteentries"></a>  CPalette::SetPaletteEntries  
 Imposta flag e valori di colore RGB in un intervallo di voci in una tavolozza logica.  
  
```  
UINT SetPaletteEntries(
    UINT nStartIndex,  
    UINT nNumEntries,  
    LPPALETTEENTRY lpPaletteColors);
```  
  
### <a name="parameters"></a>Parametri  
 *nStartIndex*  
 Specifica la prima voce nella tavolozza logica da impostare.  
  
 *nNumEntries*  
 Specifica il numero di voci nella tavolozza logica da impostare.  
  
 *lpPaletteColors*  
 Punta a una matrice di [PALETTEENTRY](http://msdn.microsoft.com/library/windows/desktop/dd162769) strutture di dati per ricevere le voci della tavolozza. La matrice deve contenere almeno del numero di strutture di dati come specificato da *nNumEntries*.  
  
### <a name="return-value"></a>Valore restituito  
 Imposta il numero di voci nella tavolozza logica; 0 se la funzione ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Se la tavolozza logica viene selezionata in un contesto di dispositivo quando l'applicazione chiama `SetPaletteEntries`, le modifiche apportate verranno rese effettive finché l'applicazione chiama [CDC::RealizePalette](../../mfc/reference/cdc-class.md#realizepalette).  
  
 Per ulteriori informazioni sulla struttura di Windows **PALETTEENTRY**, vedere [PALETTEENTRY](http://msdn.microsoft.com/library/windows/desktop/dd162769) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC immagine](../../visual-cpp-samples.md)   
 [Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CPalette::GetPaletteEntries](#getpaletteentries)   
 [CPalette::SetPaletteEntries](#setpaletteentries)




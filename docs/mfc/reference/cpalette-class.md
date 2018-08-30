---
title: Classe CPalette | Microsoft Docs
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
ms.openlocfilehash: ff3a68e585cecb8affb0a5f4ffb7ff81929c955a
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43201103"
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
|[CPalette::CPalette](#cpalette)|Costruisce un `CPalette` oggetto con alcuna tavolozza di Windows associata. È necessario inizializzare il `CPalette` oggetto con una delle funzioni membro di inizializzazione prima che possa essere utilizzato.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPalette:: AnimatePalette](#animatepalette)|Sostituisce le voci della tavolozza logica identificata dal `CPalette` oggetto. L'applicazione non dover aggiornare relativa area client, in quanto Windows mappa immediatamente le nuove voci della tavolozza di sistema.|  
|[CPalette::CreateHalftonePalette](#createhalftonepalette)|Crea una tavolozza dei mezzitoni per il contesto di dispositivo e lo collega al `CPalette` oggetto.|  
|[CPalette::CreatePalette](#createpalette)|Crea una tavolozza dei colori di Windows e lo collega al `CPalette` oggetto.|  
|[CPalette::FromHandle](#fromhandle)|Restituisce un puntatore a un `CPalette` dell'oggetto quando viene specificato un handle a un oggetto di tavolozza di Windows.|  
|[CPalette::GetEntryCount](#getentrycount)|Recupera il numero di voci della tavolozza in una tavolozza logica.|  
|[CPalette::GetNearestPaletteIndex](#getnearestpaletteindex)|Restituisce l'indice della voce della tavolozza logica che rispecchia meglio un valore di colore.|  
|[CPalette::GetPaletteEntries](#getpaletteentries)|Recupera un intervallo delle voci tavolozza in una tavolozza logica.|  
|[CPalette::ResizePalette](#resizepalette)|Modifica la dimensione della tavolozza logica specificata dal `CPalette` oggetto per il numero di voci specificato.|  
|[CPalette::SetPaletteEntries](#setpaletteentries)|Imposta flag e valori di colore RGB in un intervallo delle voci in una tavolozza logica.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPalette HPALETTE](#operator_hpalette)|Restituisce il HPALETTE collegati al `CPalette`.|  
  
## <a name="remarks"></a>Note  
 Una tavolozza fornisce un'interfaccia tra un'applicazione e un dispositivo di output di colore (ad esempio, un dispositivo di visualizzazione). L'interfaccia consente all'applicazione di sfruttare appieno le funzionalità di colore della periferica di output senza gravi interferire con i colori visualizzati da altre applicazioni. Windows Usa tavolozza logica dell'applicazione (un elenco di colori necessari) e la tavolozza di sistema (che definisce i colori disponibili) per determinare i colori usati.  
  
 Oggetto `CPalette` oggetto fornisce le funzioni membro per la modifica di tavolozza definita dall'oggetto. Costruire un `CPalette` oggetto, utilizzare le funzioni membro per creare la tavolozza effettiva, un oggetto di grafica device interface (GDI) e per modificare le relative voci e altre proprietà.  
  
 Per altre informazioni sull'uso `CPalette`, vedere [degli oggetti grafici](../../mfc/graphic-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CPalette`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="animatepalette"></a>  CPalette:: AnimatePalette  
 Sostituisce le voci della tavolozza logica associata ai `CPalette` oggetto.  
  
```  
void AnimatePalette(
    UINT nStartIndex,  
    UINT nNumEntries,  
    LPPALETTEENTRY lpPaletteColors);
```  
  
### <a name="parameters"></a>Parametri  
 *nStartIndex*  
 Specifica la prima voce nella tavolozza da animare.  
  
 *nNumEntries*  
 Specifica il numero di voci della tavolozza da animare.  
  
 *lpPaletteColors*  
 Punta al primo membro di una matrice [PALETTEENTRY](https://msdn.microsoft.com/library/windows/desktop/dd162769) strutture per sostituire le voci della tavolozza identificate dal *nStartIndex* e *nNumEntries*.  
  
### <a name="remarks"></a>Note  
 Quando un'applicazione chiama `AnimatePalette`, che è necessario aggiornare l'area client, poiché Windows mappa immediatamente le nuove voci della tavolozza di sistema.  
  
 Il `AnimatePalette` funzione cambierà solo le voci con il flag PC_RESERVED impostato nel corrispondente `palPaletteEntry` membro delle [LOGPALETTE](/windows/desktop/api/wingdi/ns-wingdi-taglogpalette) struttura che è collegato al `CPalette` oggetto. Vedere LOGPALETTE nel SDK di Windows per altre informazioni su questa struttura.  
  
##  <a name="cpalette"></a>  CPalette::CPalette  
 Costruisce un oggetto `CPalette`.  
  
```  
CPalette();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto non ha alcuna tavolozza collegato finché non si chiama `CreatePalette` collegare uno.  
  
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
 Un'applicazione deve creare una tavolozza dei mezzitoni quando la modalità di adattamento di un contesto di periferica è impostata su mezzitoni. La tavolozza dei mezzitoni logico restituito dai [CreateHalftonePalette](/windows/desktop/api/wingdi/nf-wingdi-createhalftonepalette) funzione membro deve quindi essere selezionata e realizzata nel contesto di dispositivo prima del [CDC::StretchBlt](../../mfc/reference/cdc-class.md#stretchblt) o [ StretchDIBits](/windows/desktop/api/wingdi/nf-wingdi-stretchdibits) funzione viene chiamata.  
  
 Vedere il SDK di Windows per altre informazioni `CreateHalftonePalette` e `StretchDIBits`.  
  
##  <a name="createpalette"></a>  CPalette::CreatePalette  
 Inizializza una `CPalette` oggetto creando una tavolozza dei colori logico di Windows e collegarlo al `CPalette` oggetto.  
  
```  
BOOL CreatePalette(LPLOGPALETTE lpLogPalette);
```  
  
### <a name="parameters"></a>Parametri  
 *lpLogPalette*  
 Punta a un [LOGPALETTE](/windows/desktop/api/wingdi/ns-wingdi-taglogpalette) struttura che contiene informazioni sui colori nella tavolozza logica.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Vedere il SDK di Windows per altre informazioni sul `LOGPALETTE` struttura.  
  
##  <a name="fromhandle"></a>  CPalette::FromHandle  
 Restituisce un puntatore a un `CPalette` dell'oggetto quando viene specificato un handle a un oggetto di tavolozza di Windows.  
  
```  
static CPalette* PASCAL FromHandle(HPALETTE hPalette);
```  
  
### <a name="parameters"></a>Parametri  
 *hPalette*  
 Handle per una tavolozza dei colori GDI di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CPalette` oggetto se riesce; in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
 Se un `CPalette` oggetto non è già collegato alla tavolozza di Windows, una variabile temporanea `CPalette` oggetto viene creato e collegato. Questo temporaneo `CPalette` oggetto è valido solo fino a quando non la volta successiva che l'applicazione ha il tempo di inattività nel relativo ciclo di eventi, a cui ora l'immagine di tutti i temporanei vengono eliminati gli oggetti. In altre parole, l'oggetto temporaneo è valido solo durante l'elaborazione di una finestra di messaggio.  
  
##  <a name="getentrycount"></a>  CPalette::GetEntryCount  
 Chiamare questa funzione membro per recuperare il numero di voci in una tavolozza logica specificata.  
  
```  
int GetEntryCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di voci in una tavolozza logica.  
  
##  <a name="getnearestpaletteindex"></a>  CPalette::GetNearestPaletteIndex  
 Restituisce l'indice della voce della tavolozza logica che rispecchia meglio il valore di colore specificato.  
  
```  
UINT GetNearestPaletteIndex(COLORREF crColor) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *crColor*  
 Specifica il colore da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice di una voce in una tavolozza logica. La voce contiene il colore più quasi abbina il colore specificato.  
  
##  <a name="getpaletteentries"></a>  CPalette::GetPaletteEntries  
 Recupera un intervallo delle voci tavolozza in una tavolozza logica.  
  
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
 Specifica il numero di voci della tavolozza logica da recuperare.  
  
 *lpPaletteColors*  
 Punta a una matrice di [PALETTEENTRY](https://msdn.microsoft.com/library/windows/desktop/dd162769) strutture di dati per ricevere le voci della tavolozza. La matrice deve contenere almeno un numero di strutture di dati come specificato da *nNumEntries*.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di voci recuperato dalla tavolozza logica; 0 se la funzione ha esito negativo.  
  
##  <a name="operator_hpalette"></a>  CPalette HPALETTE  
 Utilizzare questo operatore per ottenere l'handle GDI di Windows associata del `CPalette` oggetto.  
  
```  
operator HPALETTE() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un handle all'oggetto GDI di Windows rappresentato dal `CPalette` oggetto; in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
 Questo operatore è un operatore di cast, che supporta l'uso diretto di un oggetto HPALETTE.  
  
 Per altre informazioni sull'utilizzo di oggetti grafici, vedere l'articolo [gli oggetti di grafica](/windows/desktop/gdi/graphic-objects) nel SDK di Windows.  
  
##  <a name="resizepalette"></a>  CPalette::ResizePalette  
 Modifica la dimensione della tavolozza logica associata ai `CPalette` oggetto per il numero di voci specificate dal *nNumEntries*.  
  
```  
BOOL ResizePalette(UINT nNumEntries);
```  
  
### <a name="parameters"></a>Parametri  
 *nNumEntries*  
 Specifica il numero di voci della tavolozza dopo che è stato ridimensionato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il riquadro è stato ridimensionato correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se un'applicazione chiama `ResizePalette` per ridurre la dimensione della tavolozza, le voci rimanenti nella tavolozza ridimensionata restano invariate. Se l'applicazione chiama `ResizePalette` per ingrandire l'immagine del riquadro, le voci tavolozza aggiuntiva sono impostate su nero (i valori di colore rosso, verdi e blu sono tutti pari a 0) e i flag per tutte le voci aggiuntive vengono impostati su 0.  
  
 Per altre informazioni sull'API Windows `ResizePalette`, vedere [ResizePalette](/windows/desktop/api/wingdi/nf-wingdi-resizepalette) nel SDK di Windows.  
  
##  <a name="setpaletteentries"></a>  CPalette::SetPaletteEntries  
 Imposta flag e valori di colore RGB in un intervallo delle voci in una tavolozza logica.  
  
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
 Specifica il numero di voci della tavolozza logica da impostare.  
  
 *lpPaletteColors*  
 Punta a una matrice di [PALETTEENTRY](https://msdn.microsoft.com/library/windows/desktop/dd162769) strutture di dati per ricevere le voci della tavolozza. La matrice deve contenere almeno un numero di strutture di dati come specificato da *nNumEntries*.  
  
### <a name="return-value"></a>Valore restituito  
 Impostare il numero di voci della tavolozza logica; 0 se la funzione ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Se la tavolozza logica sia selezionata in un contesto di dispositivo quando l'applicazione chiama `SetPaletteEntries`, le modifiche saranno effettive fino a quando l'applicazione chiama [CDC::RealizePalette](../../mfc/reference/cdc-class.md#realizepalette).  
  
 Per altre informazioni sulla struttura di Windows `PALETTEENTRY`, vedere [PALETTEENTRY](https://msdn.microsoft.com/library/windows/desktop/dd162769) nel SDK di Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC immagine](../../visual-cpp-samples.md)   
 [Classe CGdiObject](../../mfc/reference/cgdiobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CPalette::GetPaletteEntries](#getpaletteentries)   
 [CPalette::SetPaletteEntries](#setpaletteentries)




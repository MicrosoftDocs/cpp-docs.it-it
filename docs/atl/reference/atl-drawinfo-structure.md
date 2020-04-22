---
title: Struttura ATL_DRAWINFO
ms.date: 11/04/2016
f1_keywords:
- ATL::ATL_DRAWINFO
- ATL_DRAWINFO
- ATL.ATL_DRAWINFO
helpviewer_keywords:
- ATL_DRAWINFO structure
ms.assetid: dd2e2aa8-e8c5-403b-b4df-35c0f6f57fb7
ms.openlocfilehash: fb50f49d387e8620f3d5bbb41263738adbd8b437
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81748800"
---
# <a name="atl_drawinfo-structure"></a>Struttura ATL_DRAWINFO

Contiene informazioni utilizzate per il rendering in varie destinazioni, ad esempio una stampante, un metafile o un controllo ActiveX.

## <a name="syntax"></a>Sintassi

```
struct ATL_DRAWINFO {
    UINT cbSize;
    DWORD dwDrawAspect;
    LONG lindex;
    DVTARGETDEVICE* ptd;
    HDC hicTargetDev;
    HDC hdcDraw;
    LPCRECTL prcBounds;
    LPCRECTL prcWBounds;
    BOOL bOptimize;
    BOOL bZoomed;
    BOOL bRectInHimetric;
    SIZEL ZoomNum;
    SIZEL ZoomDen;
};
```

## <a name="members"></a>Membri

`cbSize`<br/>
Dimensione della struttura, in byte.

`dwDrawAspect`<br/>
Specifica la modalità di rappresentata della destinazione. Le rappresentazioni possono includere contenuto, un'icona, una miniatura o un documento stampato. Per un elenco dei valori possibili, vedere [DVASPECT](/windows/win32/api/wtypes/ne-wtypes-dvaspect) e [DVASPECT2](/windows/win32/api/ocidl/ne-ocidl-dvaspect2).

`lindex`<br/>
Parte dell'obiettivo di interesse per l'operazione di prelievo. La sua interpretazione varia a `dwDrawAspect` seconda del valore nel membro.

`ptd`<br/>
Puntatore a una struttura [DVTARGETDEVICE](/windows/win32/api/objidl/ns-objidl-dvtargetdevice) che consente le ottimizzazioni del disegno in base all'aspetto specificato. Si noti che anche gli oggetti e i contenitori più recenti che supportano interfacce di disegno ottimizzate supportano questo membro. Gli oggetti e i contenitori meno recenti che non supportano interfacce di disegno ottimizzate specificano sempre NULL per questo membro.

`hicTargetDev`<br/>
Contesto delle informazioni per `ptd` il dispositivo di destinazione a cui fa riferimento da cui l'oggetto può estrarre le metriche del dispositivo e testare le funzionalità del dispositivo. Se `ptd` è NULL, l'oggetto deve `hicTargetDev` ignorare il valore nel membro.

`hdcDraw`<br/>
Contesto di dispositivo su cui disegnare. Per un oggetto senza `hdcDraw` finestra, `MM_TEXT` il membro è in modalità di mapping con le relative coordinate logiche corrispondenti alle coordinate client della finestra contenitore. Inoltre, il contesto di dispositivo deve essere nello stesso `WM_PAINT` stato di quello passato normalmente da un messaggio.

`prcBounds`<br/>
Puntatore a una struttura [RECTL](/windows/win32/api/windef/ns-windef-rectl) che specifica il rettangolo `hdcDraw` su e in cui deve essere disegnato l'oggetto. Questo membro controlla il posizionamento e l'allungamento dell'oggetto. Questo membro deve essere NULL per disegnare un oggetto attivo sul posto senza finestra. In ogni altra situazione, NULL non è un `E_INVALIDARG` valore valido e deve generare un codice di errore. Se il contenitore passa un valore non NULL a un oggetto senza finestra, l'oggetto deve eseguire il rendering dell'aspetto richiesto nel contesto di dispositivo e nel rettangolo specificati. Un contenitore può richiedere questo da un oggetto senza finestra per eseguire il rendering di una seconda visualizzazione non attiva dell'oggetto o per stampare l'oggetto.

`prcWBounds`<br/>
Se `hdcDraw` è un contesto di dispositivo metafile (vedere [GetDeviceCaps](/windows/win32/api/wingdi/nf-wingdi-getdevicecaps) `RECTL` in Windows SDK), si tratta di un puntatore a una struttura che specifica il rettangolo di delimitazione nel metafile sottostante. La struttura del rettangolo contiene l'estensione della finestra e l'origine della finestra. Questi valori sono utili per disegnare metafile. Il rettangolo `prcBounds` indicato da `prcWBounds` è annidato all'interno di questo rettangolo; si trovano nello stesso spazio di coordinate.

`bOptimize`<br/>
Diverso da zero se il disegno del controllo deve essere ottimizzato, in caso contrario 0. Se il disegno è ottimizzato, lo stato del contesto di periferica viene ripristinato automaticamente al termine del rendering.

`bZoomed`<br/>
Diverso da zero se la destinazione ha un fattore di zoom, in caso contrario 0. Il fattore di `ZoomNum`zoom viene memorizzato in .

`bRectInHimetric`<br/>
Diverso da zero `prcBounds` se le dimensioni di sono in HIMETRIC, in caso contrario 0.

`ZoomNum`<br/>
Larghezza e altezza del rettangolo in cui viene eseguito il rendering dell'oggetto. Il fattore di zoom lungo l'asse x (la proporzione della dimensione naturale dell'oggetto all'estensione corrente) della destinazione è il valore di `ZoomNum.cx` diviso per il valore di `ZoomDen.cx`. Il fattore di zoom lungo l'asse y viene ottenuto in modo simile.

`ZoomDen`<br/>
Larghezza e altezza effettive della destinazione.

## <a name="remarks"></a>Osservazioni

L'utilizzo tipico di questa struttura sarebbe il recupero delle informazioni durante il rendering dell'oggetto di destinazione. Ad esempio, è possibile recuperare i valori da ATL_DRAWINFO'interno dell'overload di [CComControlBase::OnDrawAdvanced](ccomcontrolbase-class.md#ondrawadvanced).

Questa struttura archivia le informazioni pertinenti utilizzate per eseguire il rendering dell'aspetto di un oggetto per il dispositivo di destinazione. Le informazioni fornite possono essere utilizzate nel disegno sullo schermo, una stampante o anche un metafile.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="see-also"></a>Vedere anche

[Classi e struct](../../atl/reference/atl-classes.md)<br/>
[IViewObject::Draw](/windows/win32/api/oleidl/nf-oleidl-iviewobject-draw)<br/>
[CComControlBase::OnDrawAdvanced](../../atl/reference/ccomcontrolbase-class.md#ondrawadvanced)

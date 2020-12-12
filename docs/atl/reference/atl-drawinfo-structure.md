---
description: 'Altre informazioni su: struttura ATL_DRAWINFO'
title: Struttura ATL_DRAWINFO
ms.date: 11/04/2016
f1_keywords:
- ATL::ATL_DRAWINFO
- ATL_DRAWINFO
- ATL.ATL_DRAWINFO
helpviewer_keywords:
- ATL_DRAWINFO structure
ms.assetid: dd2e2aa8-e8c5-403b-b4df-35c0f6f57fb7
ms.openlocfilehash: 726a5b86f5621eba51d84054c80553b5c2f1f928
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165394"
---
# <a name="atl_drawinfo-structure"></a>Struttura ATL_DRAWINFO

Contiene informazioni utilizzate per il rendering in varie destinazioni, ad esempio una stampante, un metafile o un controllo ActiveX.

## <a name="syntax"></a>Sintassi

```cpp
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

## <a name="members"></a>Members

`cbSize`<br/>
Dimensioni, in byte, della struttura.

`dwDrawAspect`<br/>
Specifica la modalità di rappresentazione della destinazione. Le rappresentazioni possono includere contenuto, un'icona, un'anteprima o un documento stampato. Per un elenco di valori possibili, vedere [DVASPECT](/windows/win32/api/wtypes/ne-wtypes-dvaspect) e [DVASPECT2](/windows/win32/api/ocidl/ne-ocidl-dvaspect2).

`lindex`<br/>
Parte della destinazione di interesse per l'operazione di estrazione. L'interpretazione varia a seconda del valore nel `dwDrawAspect` membro.

`ptd`<br/>
Puntatore a una struttura [DVTARGETDEVICE](/windows/win32/api/objidl/ns-objidl-dvtargetdevice) che Abilita le ottimizzazioni del disegno a seconda dell'aspetto specificato. Si noti che gli oggetti e i contenitori più recenti che supportano interfacce di disegno ottimizzate supportano anche questo membro. Gli oggetti e i contenitori meno recenti che non supportano interfacce di disegno ottimizzate specificano sempre NULL per il membro.

`hicTargetDev`<br/>
Contesto delle informazioni per il dispositivo di destinazione a cui fa riferimento l' `ptd` oggetto da cui l'oggetto può estrarre le metriche del dispositivo e testare le funzionalità del dispositivo. Se `ptd` è null, l'oggetto deve ignorare il valore nel `hicTargetDev` membro.

`hdcDraw`<br/>
Contesto di dispositivo su cui creare. Per un oggetto senza finestra, il `hdcDraw` membro è in `MM_TEXT` modalità di mapping con le coordinate logiche corrispondenti alle coordinate client della finestra che lo contiene. Inoltre, il contesto di dispositivo deve trovarsi nello stesso stato di quello normalmente passato da un `WM_PAINT` messaggio.

`prcBounds`<br/>
Puntatore a una struttura [RECTL](/windows/win32/api/windef/ns-windef-rectl) che specifica il rettangolo in `hdcDraw` e in cui l'oggetto deve essere disegnato. Questo membro controlla il posizionamento e l'allungamento dell'oggetto. Questo membro deve essere NULL per creare un oggetto attivo sul posto senza finestra. In ogni altra situazione, NULL non è un valore valido e deve generare un `E_INVALIDARG` codice di errore. Se il contenitore passa un valore non NULL a un oggetto senza finestra, l'oggetto deve eseguire il rendering dell'aspetto richiesto nel contesto di dispositivo e nel rettangolo specificati. Un contenitore può richiedere questa operazione da un oggetto senza finestra per eseguire il rendering di una seconda visualizzazione non attiva dell'oggetto o per la stampa dell'oggetto.

`prcWBounds`<br/>
Se `hdcDraw` è un contesto di dispositivo metafile (vedere [GetDeviceCaps](/windows/win32/api/wingdi/nf-wingdi-getdevicecaps) nel Windows SDK), si tratta di un puntatore a una `RECTL` struttura che specifica il rettangolo di delimitazione nel metafile sottostante. La struttura Rectangle contiene l'extent della finestra e l'origine della finestra. Questi valori sono utili per la creazione di metafile. Il rettangolo indicato da `prcBounds` è annidato all'interno di questo `prcWBounds` rettangolo. si trovano nello stesso spazio delle coordinate.

`bOptimize`<br/>
Diverso da zero se il disegno del controllo deve essere ottimizzato; in caso contrario, 0. Se il disegno è ottimizzato, lo stato del contesto di dispositivo viene ripristinato automaticamente al termine del rendering.

`bZoomed`<br/>
Diverso da zero se la destinazione ha un fattore di zoom; in caso contrario, 0. Il fattore di zoom viene archiviato in `ZoomNum` .

`bRectInHimetric`<br/>
Diverso da zero se le dimensioni di `prcBounds` sono in HIMETRIC; in caso contrario, 0.

`ZoomNum`<br/>
Larghezza e altezza del rettangolo in cui viene eseguito il rendering dell'oggetto. Il fattore di zoom lungo l'asse x (la proporzione della dimensione naturale dell'oggetto fino all'extent corrente) della destinazione è il valore di `ZoomNum.cx` diviso per il valore di `ZoomDen.cx` . Il fattore di zoom lungo l'asse y viene effettuato in modo analogo.

`ZoomDen`<br/>
Larghezza e altezza effettive della destinazione.

## <a name="remarks"></a>Commenti

L'utilizzo tipico di questa struttura è il recupero delle informazioni durante il rendering dell'oggetto di destinazione. Ad esempio, è possibile recuperare i valori da ATL_DRAWINFO all'interno dell'overload di [CComControlBase:: OnDrawAdvanced](ccomcontrolbase-class.md#ondrawadvanced).

Questa struttura archivia le informazioni pertinenti usate per eseguire il rendering dell'aspetto di un oggetto per il dispositivo di destinazione. Le informazioni fornite possono essere utilizzate per disegnare sullo schermo, una stampante o persino un metafile.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="see-also"></a>Vedi anche

[Classi e struct](../../atl/reference/atl-classes.md)<br/>
[IViewObject::D RAW](/windows/win32/api/oleidl/nf-oleidl-iviewobject-draw)<br/>
[CComControlBase:: OnDrawAdvanced](../../atl/reference/ccomcontrolbase-class.md#ondrawadvanced)

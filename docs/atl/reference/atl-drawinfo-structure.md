---
title: Struttura ATL_DRAWINFO | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- ATL::ATL_DRAWINFO
- ATL_DRAWINFO
- ATL.ATL_DRAWINFO
dev_langs:
- C++
helpviewer_keywords:
- ATL_DRAWINFO structure
ms.assetid: dd2e2aa8-e8c5-403b-b4df-35c0f6f57fb7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 87ae430dabf3a4aac54b77afb0b2ed5c143a8875
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46116035"
---
# <a name="atldrawinfo-structure"></a>Struttura ATL_DRAWINFO

Contiene informazioni utilizzate per il rendering a destinazioni diverse, ad esempio una stampante, metafile o controllo ActiveX.

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
Le dimensioni della struttura, in byte.

`dwDrawAspect`<br/>
Specifica come destinazione deve essere rappresentato. Rappresentazioni possono includere contenuto, un'icona, un'immagine di anteprima o un documento stampato. Per un elenco di valori possibili, vedere [DVASPECT](/windows/desktop/api/wtypes/ne-wtypes-tagdvaspect) e [DVASPECT2](/windows/desktop/api/ocidl/ne-ocidl-tagdvaspect2).

`lindex`<br/>
Parte della destinazione di interesse per l'operazione di disegno. L'interpretazione dipende dal valore nel `dwDrawAspect` membro.

`ptd`<br/>
Puntatore a un [DVTARGETDEVICE](/windows/desktop/api/objidl/ns-objidl-tagdvtargetdevice) struttura che consente alle ottimizzazioni di disegnare in base all'aspetto specificato. Si noti che più recente di oggetti e contenitori che supportano le interfacce di disegnare ottimizzate supportano anche questo membro. Gli oggetti e contenitori che non supportano le interfacce di disegnare ottimizzate sempre meno recenti specificano NULL per questo membro.

`hicTargetDev`<br/>
Contesto delle informazioni per il dispositivo di destinazione a cui punta `ptd` da cui l'oggetto può estrarre la metrica del dispositivo e testare le funzionalità del dispositivo. Se `ptd` è NULL, l'oggetto deve ignorare il valore di `hicTargetDev` membro.

`hdcDraw`<br/>
Il contesto di dispositivo su cui disegnare. Per un oggetto senza finestra, il `hdcDraw` membro fa parte il `MM_TEXT` modalità di mapping con le sue coordinate logiche corrispondente alle coordinate client della finestra contenitore. Inoltre, il contesto di dispositivo deve essere lo stesso stato come quello normalmente passato per un `WM_PAINT` messaggio.

`prcBounds`<br/>
Puntatore a un [RECTL](https://msdn.microsoft.com/library/windows/desktop/dd162907) che specifica il rettangolo nella struttura `hdcDraw` e in cui deve essere disegnato l'oggetto. Questo membro controlla il posizionamento e l'adattamento dell'oggetto. Questo membro deve essere NULL per disegnare un oggetto attivo sul posto senza. In ogni altra situazione, NULL, non è un valore valido e dovrebbe restituire un `E_INVALIDARG` codice di errore. Se il contenitore passa un valore diverso da NULL a un oggetto senza finestra, l'oggetto deve eseguire il rendering l'aspetto richiesto nel contesto di dispositivo specificato e il rettangolo. Un contenitore può richiedere questo da un oggetto senza eseguire il rendering di una vista in secondo luogo, non attivo dell'oggetto o per stampare l'oggetto.

`prcWBounds`<br/>
Se `hdcDraw` è un contesto di dispositivo metafile (vedere [GetDeviceCaps](/windows/desktop/api/wingdi/nf-wingdi-getdevicecaps) in Windows SDK), questo è un puntatore a un `RECTL` struttura che specifica il rettangolo delimitatore nel metafile sottostante. La struttura rettangolo contiene le dimensioni della finestra e l'origine di finestra. Questi valori sono utili per il disegno metafile. Il rettangolo indicato dal `prcBounds` è annidato all'interno di questa `prcWBounds` rettangolo; sono nello stesso spazio delle coordinate.

`bOptimize`<br/>
Diverso da zero se il disegno del controllo sia ottimizzato, in caso contrario 0. Se è ottimizzato il disegno, lo stato del contesto di dispositivo vengono ripristinato automaticamente dopo aver terminato il rendering.

`bZoomed`<br/>
Diverso da zero se la destinazione è un fattore di zoom, altrimenti 0. Il fattore di zoom viene archiviato in `ZoomNum`.

`bRectInHimetric`<br/>
Diverso da zero se le dimensioni di `prcBounds` in HIMETRIC, in caso contrario 0.

`ZoomNum`<br/>
La larghezza e altezza del rettangolo in cui viene eseguito il rendering dell'oggetto. Il fattore di zoom lungo l'asse x (la proporzione tra le dimensioni dell'oggetto naturale alle dimensioni correnti) della destinazione è il valore della `ZoomNum.cx` diviso per il valore di `ZoomDen.cx`. Il fattore di zoom lungo l'asse y è realizzato in modo simile.

`ZoomDen`<br/>
La larghezza effettiva e l'altezza della destinazione.

## <a name="remarks"></a>Note

Utilizzo tipici di questa struttura sarebbe il recupero di informazioni durante il rendering dell'oggetto di destinazione. Ad esempio, è possibile recuperare valori da ATL_DRAWINFO all'interno di overload della funzione [CComControlBase::OnDrawAdvanced](ccomcontrolbase-class.md#ondrawadvanced).

Questa struttura consente di archiviare informazioni pertinenti usate per visualizzare l'aspetto di un oggetto per il dispositivo di destinazione. Le informazioni fornite sono utilizzabile nel disegno per la schermata, una stampante o persino un metafile.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="see-also"></a>Vedere anche

[Classi e struct](../../atl/reference/atl-classes.md)<br/>
[IViewObject](/windows/desktop/api/oleidl/nf-oleidl-iviewobject-draw)<br/>
[CComControlBase::OnDrawAdvanced](../../atl/reference/ccomcontrolbase-class.md#ondrawadvanced)

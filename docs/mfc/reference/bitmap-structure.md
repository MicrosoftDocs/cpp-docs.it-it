---
title: Struttura BITMAP
ms.date: 11/04/2016
f1_keywords:
- BITMAP
helpviewer_keywords:
- BITMAP structure [MFC]
ms.assetid: 05d33b4d-7232-4643-a108-87dda8ff5f22
ms.openlocfilehash: 1a1079ea0b032f5d28995dc0e3b15b5ba6d16376
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50576085"
---
# <a name="bitmap-structure"></a>Struttura BITMAP

Il **BITMAP** struttura definisce l'altezza, larghezza, formato di colore e i valori di bit di una bitmap logica **.**

## <a name="syntax"></a>Sintassi

```
typedef struct tagBITMAP {  /* bm */
    int bmType;
    int bmWidth;
    int bmHeight;
    int bmWidthBytes;
    BYTE bmPlanes;
    BYTE bmBitsPixel;
    LPVOID bmBits;
} BITMAP;
```

#### <a name="parameters"></a>Parametri

*bmType*<br/>
Specifica il tipo di bitmap. Per le bitmap logiche, questo membro deve essere 0.

*bmWidth*<br/>
Specifica la larghezza della bitmap in pixel. La larghezza deve essere maggiore di 0.

*bmHeight*<br/>
Specifica l'altezza della bitmap in righe raster. L'altezza deve essere maggiore di 0.

*bmWidthBytes*<br/>
Specifica il numero di byte in ogni riga raster. Questo valore deve essere un numero pari poiché l'interfaccia GDI (Graphics Device Interface) presuppone che i valori di bit di una bitmap formino una matrice di valori interi (a 2 byte). In altre parole, *bmWidthBytes* \* 8 deve essere il successivo multiplo di 16 maggiore o uguale a quello ottenuto quando il *bmWidth* membro viene moltiplicato il *bmBitsPixel*  membro.

*bmPlanes*<br/>
Specifica il numero dei piani di colore nella bitmap.

*bmBitsPixel*<br/>
Specifica il numero di bit di colore adiacenti su ogni piano necessario per definire un pixel.

*bmBits*<br/>
Punta alla posizione dei valori di bit della bitmap. Il *bmBits* membro deve essere un puntatore di tipo long a una matrice di valori a 1 byte.

## <a name="remarks"></a>Note

I formati di bitmap attualmente utilizzati sono monocromatico e a colori. La bitmap monocromatica utilizza un formato a 1 bit, 1 piano. Ogni analisi è un multiplo di 16 bit.

Le analisi sono organizzate come indicato di seguito per una bitmap monocromatica di altezza *n*:

```
Scan 0
Scan 1
.
.
.
Scan n-2
Scan n-1
```

Su un dispositivo monocromatico i pixel sono bianchi o neri. Se il bit corrispondente nella bitmap è 1, il pixel è attivato (bianco). Se il bit corrispondente nella bitmap è 0, il pixel è disattivato (nero).

Tutti i dispositivi supportano le bitmap con il set di bit RC_BITBLT nell'indice RASTERCAPS del [CDC:: GetDeviceCaps](../../mfc/reference/cdc-class.md#getdevicecaps) funzione membro.

Ogni dispositivo presenta un formato di colore univoco. Per trasferire una bitmap da un dispositivo a altro, usare il [GetDIBits](/windows/desktop/api/wingdi/nf-wingdi-getdibits) e [SetDIBits](/windows/desktop/api/wingdi/nf-wingdi-setdibits) funzioni di Windows.

## <a name="requirements"></a>Requisiti

**Intestazione:** WinGDI. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CBitmap:: Createbitmapindirect](../../mfc/reference/cbitmap-class.md#createbitmapindirect)

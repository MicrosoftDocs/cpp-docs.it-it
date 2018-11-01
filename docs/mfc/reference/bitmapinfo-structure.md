---
title: Struttura BITMAPINFO
ms.date: 11/04/2016
f1_keywords:
- BITMAPINFO
helpviewer_keywords:
- BITMAPINFO structure [MFC]
ms.assetid: a00caa49-e4df-419f-89a7-ab03c13a1b5b
ms.openlocfilehash: 8e0586d197bc2f18a06fd675bf365750c6d129ad
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50542272"
---
# <a name="bitmapinfo-structure"></a>Struttura BITMAPINFO

Il `BITMAPINFO` struttura definisce le dimensioni e le informazioni relative ai colori per una mappa di bit di Windows indipendente dalla periferica (DIB).

## <a name="syntax"></a>Sintassi

```
typedef struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
} BITMAPINFO;
```

#### <a name="parameters"></a>Parametri

*bmiHeader*<br/>
Specifica un [BITMAPINFOHEADER](https://msdn.microsoft.com/library/windows/desktop/dd183376) struttura che contiene informazioni sulle dimensioni e formato di colore di una bitmap indipendente dalla periferica.

*bmiColors*<br/>
Specifica una matrice di [RGBQUAD](/windows/desktop/api/wingdi/ns-wingdi-tagrgbquad) o DWORD i tipi di dati che definiscono i colori della bitmap.

## <a name="remarks"></a>Note

Device-independent bitmap è costituito da due parti distinte: una `BITMAPINFO` struttura che descrive le dimensioni e colori della bitmap e una matrice di byte che specificano i pixel nella bitmap. I bit nella matrice vengono compresse insieme, ma ogni linea di digitalizzazione deve essere riempita con zeri terminerà in una **lungo** limite. Se l'altezza è positivo, l'origine della bitmap è l'angolo inferiore sinistro. Se l'altezza è negativo, l'origine è nell'angolo superiore sinistro.

Oggetto *bitmap compresso* è una bitmap in cui la matrice di byte segue immediatamente il `BITMAPINFO` struttura. Bitmap compressa viene fatto riferimento da un puntatore singolo.

Per altre informazioni sul `BITMAPINFO` strutturare e valori appropriati per i membri del `BITMAPINFOHEADER` e `RGBQUAD` strutture, vedere gli argomenti seguenti nella documentazione di Windows SDK.

- [Struttura BITMAPINFO](/windows/desktop/api/wingdi/ns-wingdi-tagbitmapinfo)

- [BITMAPINFOHEADER](https://msdn.microsoft.com/library/windows/desktop/dd183376) struttura

- [RGBQUAD](/windows/desktop/api/wingdi/ns-wingdi-tagrgbquad) struttura

## <a name="requirements"></a>Requisiti

**Intestazione:** WinGDI. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CBrush::CreateDIBPatternBrush](../../mfc/reference/cbrush-class.md#createdibpatternbrush)<br/>
[BITMAPINFOHEADER](https://msdn.microsoft.com/library/windows/desktop/dd183376)<br/>
[RGBQUAD](/windows/desktop/api/wingdi/ns-wingdi-tagrgbquad)


---
title: Struttura BITMAP | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: BITMAP
dev_langs: C++
helpviewer_keywords: BITMAP structure [MFC]
ms.assetid: 05d33b4d-7232-4643-a108-87dda8ff5f22
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0ed782c3e67a55797bfb2d302265924393946962
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="bitmap-structure"></a>Struttura BITMAP
Il **BITMAP** struttura definisce l'altezza, larghezza, il formato di colore e i valori di bit di una bitmap logica**.**  
  
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
 *bmType*  
 Specifica il tipo di bitmap. Per le bitmap logiche, questo membro deve essere 0.  
  
 *bmWidth*  
 Specifica la larghezza della bitmap in pixel. La larghezza deve essere maggiore di 0.  
  
 *bmHeight*  
 Specifica l'altezza della bitmap in righe raster. L'altezza deve essere maggiore di 0.  
  
 *bmWidthBytes*  
 Specifica il numero di byte in ogni riga raster. Questo valore deve essere un numero pari poiché l'interfaccia GDI (Graphics Device Interface) presuppone che i valori di bit di una bitmap formino una matrice di valori interi (a 2 byte). In altre parole, **bmWidthBytes** \* 8 deve essere il successivo multiplo di 16 maggiore o uguale al valore ottenuto quando il **bmWidth** membro viene moltiplicato per il **bmBitsPixel**  membro.  
  
 *bmPlanes*  
 Specifica il numero dei piani di colore nella bitmap.  
  
 *bmBitsPixel*  
 Specifica il numero di bit di colore adiacenti su ogni piano necessario per definire un pixel.  
  
 *bmBits*  
 Punta alla posizione dei valori di bit della bitmap. Il **bmBits** membro deve essere un puntatore di tipo long a una matrice di valori di 1 byte.  
  
## <a name="remarks"></a>Note  
 I formati di bitmap attualmente utilizzati sono monocromatico e a colori. La bitmap monocromatica utilizza un formato a 1 bit, 1 piano. Ogni analisi è un multiplo di 16 bit.  
  
 Le analisi sono organizzate come indicato di seguito per una bitmap monocromatica di altezza  *n* :  
  
 `Scan 0`  
  
 `Scan 1`  
  
 `.`  
  
 `.`  
  
 `.`  
  
 `Scan n-2`  
  
 `Scan n-1`  
  
 Su un dispositivo monocromatico i pixel sono bianchi o neri. Se il bit corrispondente nella bitmap è 1, il pixel è attivato (bianco). Se il bit corrispondente nella bitmap è 0, il pixel è disattivato (nero).  
  
 Tutti i dispositivi supportano le bitmap con il **RC_BITBLT** bit impostato il **RASTERCAPS** indice del [CDC:: GetDeviceCaps](../../mfc/reference/cdc-class.md#getdevicecaps) funzione membro.  
  
 Ogni dispositivo presenta un formato di colore univoco. Per trasferire una bitmap da un dispositivo a un altro, utilizzare il [GetDIBits](http://msdn.microsoft.com/library/windows/desktop/dd144879) e [SetDIBits](http://msdn.microsoft.com/library/windows/desktop/dd162973) funzioni di Windows.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CBitmap:: Createbitmapindirect](../../mfc/reference/cbitmap-class.md#createbitmapindirect)

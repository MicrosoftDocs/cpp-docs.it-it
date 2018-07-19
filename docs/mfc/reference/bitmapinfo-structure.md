---
title: Struttura BITMAPINFO | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- BITMAPINFO
dev_langs:
- C++
helpviewer_keywords:
- BITMAPINFO structure [MFC]
ms.assetid: a00caa49-e4df-419f-89a7-ab03c13a1b5b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a9b1bd896157d7f11792a5a6514e30ecd3d46a19
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37336257"
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
 *bmiHeader*  
 Specifica un [BITMAPINFOHEADER](http://msdn.microsoft.com/library/windows/desktop/dd183376) struttura che contiene informazioni sulle dimensioni e formato di colore di una bitmap indipendente dalla periferica.  
  
 *bmiColors*  
 Specifica una matrice di [RGBQUAD](http://msdn.microsoft.com/library/windows/desktop/dd162938) o DWORD i tipi di dati che definiscono i colori della bitmap.  
  
## <a name="remarks"></a>Note  
 Device-independent bitmap è costituito da due parti distinte: una `BITMAPINFO` struttura che descrive le dimensioni e colori della bitmap e una matrice di byte che specificano i pixel nella bitmap. I bit nella matrice vengono compresse insieme, ma ogni linea di digitalizzazione deve essere riempita con zeri terminerà in una **lungo** limite. Se l'altezza è positivo, l'origine della bitmap è l'angolo inferiore sinistro. Se l'altezza è negativo, l'origine è nell'angolo superiore sinistro.  
  
 Oggetto *bitmap compresso* è una bitmap in cui la matrice di byte segue immediatamente il `BITMAPINFO` struttura. Bitmap compressa viene fatto riferimento da un puntatore singolo.  
  
 Per altre informazioni sul `BITMAPINFO` strutturare e valori appropriati per i membri del `BITMAPINFOHEADER` e `RGBQUAD` strutture, vedere gli argomenti seguenti nella documentazione di Windows SDK.  
  
- [Struttura BITMAPINFO](http://msdn.microsoft.com/library/windows/desktop/dd183375)  
  
- [BITMAPINFOHEADER](http://msdn.microsoft.com/library/windows/desktop/dd183376) struttura  
  
- [RGBQUAD](http://msdn.microsoft.com/library/windows/desktop/dd162938) struttura  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CBrush::CreateDIBPatternBrush](../../mfc/reference/cbrush-class.md#createdibpatternbrush)   
 [BITMAPINFOHEADER](http://msdn.microsoft.com/library/windows/desktop/dd183376)   
 [RGBQUAD](http://msdn.microsoft.com/library/windows/desktop/dd162938)


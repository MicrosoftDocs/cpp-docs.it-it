---
title: Struttura BITMAPINFO | Documenti Microsoft
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
ms.openlocfilehash: ea99cfb77f295530f65b3d3b07888b0735fc0b6a
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36950503"
---
# <a name="bitmapinfo-structure"></a>Struttura BITMAPINFO
Il `BITMAPINFO` struttura definisce le dimensioni e le informazioni relative ai colori per una bitmap di indipendente dalla periferica (DIB) di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typedef struct tagBITMAPINFO {  
    BITMAPINFOHEADER bmiHeader;  
    RGBQUAD bmiColors[1];  
} BITMAPINFO;  
```  
  
#### <a name="parameters"></a>Parametri  
 *bmiHeader*  
 Specifica un [BITMAPINFOHEADER](http://msdn.microsoft.com/library/windows/desktop/dd183376) struttura che contiene informazioni sulle dimensioni e formato di colore di una bitmap indipendente dal dispositivo.  
  
 *bmiColors*  
 Specifica una matrice di [RGBQUAD](http://msdn.microsoft.com/library/windows/desktop/dd162938) o `DWORD` i tipi di dati che definiscono i colori nella bitmap.  
  
## <a name="remarks"></a>Note  
 Device-independent bitmap è costituito da due parti distinte: una `BITMAPINFO` struttura che descrive le dimensioni e colori di bitmap e una matrice di byte che specificano i pixel della bitmap. I bit nella matrice vengono compressi insieme, ma ogni riga di analisi deve essere riempito di zeri a finiscono con un `LONG` limite. Se l'altezza è positiva, l'origine della bitmap è l'angolo inferiore sinistro. Se l'altezza è negativa, l'origine è l'angolo superiore sinistro.  
  
 Un *bitmap compressi* è una bitmap in cui la matrice di byte segue immediatamente il `BITMAPINFO` struttura. Bitmap compressa viene fatto riferimento da un singolo indicatore di misura.  
  
 Per ulteriori informazioni sul `BITMAPINFO` struttura e valori appropriati per i membri del `BITMAPINFOHEADER` e `RGBQUAD` strutture, vedere gli argomenti seguenti nella documentazione di Windows SDK.  
  
- [BITMAPINFO (struttura)](http://msdn.microsoft.com/library/windows/desktop/dd183375)  
  
- [BITMAPINFOHEADER](http://msdn.microsoft.com/library/windows/desktop/dd183376) struttura  
  
- [RGBQUAD](http://msdn.microsoft.com/library/windows/desktop/dd162938) struttura  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** WinGDI. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CBrush::CreateDIBPatternBrush](../../mfc/reference/cbrush-class.md#createdibpatternbrush)   
 [BITMAPINFOHEADER](http://msdn.microsoft.com/library/windows/desktop/dd183376)   
 [RGBQUAD](http://msdn.microsoft.com/library/windows/desktop/dd162938)


---
title: "Struttura BITMAP | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BITMAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "struttura BITMAP"
ms.assetid: 05d33b4d-7232-4643-a108-87dda8ff5f22
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura BITMAP
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura **BITMAP** definisce l'altezza, la larghezza, il formato di colore e i valori di bit di una bitmap logica**.**  
  
## Sintassi  
  
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
  
#### Parametri  
 *bmType*  
 Specifica il tipo di bitmap.  Per le bitmap logiche, questo membro deve essere 0.  
  
 *bmWidth*  
 Specifica la larghezza della bitmap in pixel.  La larghezza deve essere maggiore di 0.  
  
 *bmHeight*  
 Specifica l'altezza della bitmap in righe raster.  L'altezza deve essere maggiore di 0.  
  
 *bmWidthBytes*  
 Specifica il numero di byte in ogni riga raster.  Questo valore deve essere un numero pari poiché le Graphics Device Interface \(GDI\) presuppongono che i valori di bit di una bitmap formino un array di valori interi \(a 2 byte\).  Ovvero **bmWidthBytes** \* 8 deve essere il successivo multiplo di 16 maggiore o uguale al valore ottenuto quando il membro **bmWidth** viene moltiplicato per il membro **bmBitsPixel**.  
  
 *bmPlanes*  
 Specifica il numero dei piani di colore nella bitmap.  
  
 *bmBitsPixel*  
 Specifica il numero di bit di colore adiacenti su ogni piano necessario per definire un pixel.  
  
 *bmBits*  
 Punta alla posizione dei valori di bit della bitmap.  Il membro **bmBits** deve essere un puntatore di tipo long a un array di valori a 1 byte.  
  
## Note  
 I formati bitmap attualmente utilizzati sono monocromatico e colorato.  La bitmap monocromatica utilizza un formato a 1 bit, 1 piano.  Ogni scan è un multiplo di 16 bit.  
  
 Per una bitmap monocromatica di altezza *n*, le scan sono organizzate come segue:  
  
 `Scan 0`  
  
 `Scan 1`  
  
 `.`  
  
 `.`  
  
 `.`  
  
 `Scan n-2`  
  
 `Scan n-1`  
  
 Su un dispositivo monocromatico i pixel sono bianchi o neri.  Se il bit corrispondente della bitmap è 1, il pixel è attivato \(bianco\).  Se il bit corrispondente della bitmap è 0, il pixel è disattivato \(nero\).  
  
 Tutti i dispositivi supportano le bitmap con il bit **RC\_BITBLT** impostato nell'indice **RASTERCAPS** della funzione membro [CDC::GetDeviceCaps](../Topic/CDC::GetDeviceCaps.md).  
  
 Ogni dispositivo presenta un formato di colore unico.  Per trasferire una bitmap da un dispositivo a un altro, utilizzare le funzioni di Windows [SetDIBits](http://msdn.microsoft.com/library/windows/desktop/dd162973) e [GetDIBits](http://msdn.microsoft.com/library/windows/desktop/dd144879).  
  
## Requisiti  
 **File di intestazione:** wingdi.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CBitmap::CreateBitmapIndirect](../Topic/CBitmap::CreateBitmapIndirect.md)
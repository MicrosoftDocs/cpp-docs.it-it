---
title: "Struttura BITMAPINFO | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BITMAPINFO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BITMAPINFO (struttura)"
ms.assetid: a00caa49-e4df-419f-89a7-ab03c13a1b5b
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# Struttura BITMAPINFO
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura `BITMAPINFO` definisce le dimensioni e le informazioni sui colori per una DIB \(device\-independent bitmap, bitmap indipendente dalla periferica\) di windows.  
  
## Sintassi  
  
```  
typedef struct tagBITMAPINFO {  
   BITMAPINFOHEADER bmiHeader;  
   RGBQUAD bmiColors[1];  
} BITMAPINFO;  
```  
  
#### Parametri  
 `bmiHeader`  
 Specifica una struttura [BITMAPINFOHEADER](http://msdn.microsoft.com/library/windows/desktop/dd183376) che contiene informazioni sulle dimensioni e il formato dei colori di una DIB.  
  
 `bmiColors`  
 Specifica un array di [RGBQUAD](http://msdn.microsoft.com/library/windows/desktop/dd162938) o i tipi di dati `DWORD` che definiscono i colori della bitmap.  
  
## Note  
 Una DIB è costituita da due parti distinte: una struttura `BITMAPINFO` che descrive le dimensioni e i colori della bitmap e un array di byte che specifica i pixel della bitmap.  I bit nell'array vengono impacchettati assieme, ma ad ogni linea di digitalizzazione deve essere anteposti degli zeri per renderla `LONG`.  Se l'altezza è un valore positivo, l'origine della bitmap è l'angolo inferiore sinistro.  Se l'altezza è negativa, l'origine corrisponde all'angolo superiore sinistro.  
  
 Una *bitmap packed* è una bitmap in cui l'array di byte segue immediatamente la struttura `BITMAPINFO`.  Alle bitmap packed viene fatto riferimento tramite un unico puntatore.  
  
 Per ulteriori informazioni sulla struttura `BITMAPINFO` e sui valori appropriati per i membri delle strutture `RGBQUAD` e `BITMAPINFOHEADER`, vedere i seguenti argomenti nella documentazione di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
-   [\<caps:sentence id\="tgt11" sentenceid\="b5dd2e8c9cedbac12eb858bd01a029a2" class\="tgtSentence"\>BITMAPINFO \(struttura\)\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/dd183375)  
  
-   [BITMAPINFOHEADER](http://msdn.microsoft.com/library/windows/desktop/dd183376) \(struttura\)  
  
-   [RGBQUAD](http://msdn.microsoft.com/library/windows/desktop/dd162938) \(struttura\)  
  
## Requisiti  
 **File di intestazione:** wingdi.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CBrush::CreateDIBPatternBrush](../Topic/CBrush::CreateDIBPatternBrush.md)   
 [BITMAPINFOHEADER](http://msdn.microsoft.com/library/windows/desktop/dd183376)   
 [RGBQUAD](http://msdn.microsoft.com/library/windows/desktop/dd162938)
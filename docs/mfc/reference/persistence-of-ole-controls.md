---
title: "Persistenza di controlli OLE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE (controlli), persistenza"
  - "persistenza, OLE (controlli)"
ms.assetid: 64f8dc80-f110-41af-b3ea-14948f6bfdf7
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Persistenza di controlli OLE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una funzionalità dei controlli OLE è persistenza della proprietà \(o serializzazione\), che consente al controllo OLE leggere o scrivere i valori delle proprietà da un file o un flusso.  Un'applicazione contenitore può utilizzare la serializzazione per archiviare i valori delle proprietà di un controllo anche dopo che l'applicazione ha eliminato il controllo.  I valori delle proprietà dei controlli OLE possono quindi essere letti dal file o dal flusso quando una nuova istanza del controllo viene creata in un secondo momento.  
  
### Persistenza dei controlli OLE  
  
|||  
|-|-|  
|[PX\_Blob](../Topic/PX_Blob.md)|Scambia una proprietà di un controllo che archivia i dati di \(BLOB\) dell'oggetto binario di grandi dimensioni.|  
|[PX\_Bool](../Topic/PX_Bool.md)|Scambia una proprietà del controllo dei tipi **BOOL**.|  
|[PX\_Color](../Topic/PX_Color.md)|Scambia una proprietà color di un controllo.|  
|[PX\_Currency](../Topic/PX_Currency.md)|Scambia una proprietà del controllo dei tipi **CY**.|  
|[PX\_DataPath](../Topic/PX_DataPath.md)|Scambia una proprietà del controllo dei tipi `CDataPathProperty`.|  
|[PX\_Double](../Topic/PX_Double.md)|Scambia una proprietà del controllo dei tipi **Double**.|  
|[PX\_Font](../Topic/PX_Font.md)|Scambia una proprietà del carattere di un controllo.|  
|[PX\_Float](../Topic/PX_Float.md)|Scambia una proprietà del controllo dei tipi **mobile**.|  
|[PX\_IUnknown](../Topic/PX_IUnknown.md)|Scambia una proprietà del controllo di tipo non definito.|  
|[PX\_Long](../Topic/PX_Long.md)|Scambia una proprietà del controllo dei tipi **long**.|  
|[PX\_Picture](../Topic/PX_Picture.md)|Scambia una proprietà image di un controllo.|  
|[PX\_Short](../Topic/PX_Short.md)|Scambia una proprietà del controllo dei tipi **short**.|  
|[PX\_ULong](../Topic/PX_ULong.md)|Scambia una proprietà del controllo dei tipi **ULONG**.|  
|[PX\_UShort](../Topic/PX_UShort.md)|Scambia una proprietà del controllo dei tipi **USHORT**.|  
|[PX\_String](../Topic/PX_String.md)|Scambia una proprietà del controllo stringa di caratteri.|  
|[PX\_VBXFontConvert](../Topic/PX_VBXFontConvert.md)|Scambia le proprietà correlate di un controllo di VBX in una proprietà del carattere di controlli OLE.|  
  
 Inoltre, la funzione globale di `AfxOleTypeMatchGuid` è fornita al test di una corrispondenza tra `TYPEDESC` e un GUID specificato.  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
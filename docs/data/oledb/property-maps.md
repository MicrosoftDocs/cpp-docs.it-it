---
title: "Mappe delle propriet&#224; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mappe, proprietà"
  - "provider OLE DB, proprietà"
  - "mappe di proprietà"
ms.assetid: 44abde56-90ad-4612-854e-d2fa5426fa80
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Mappe delle propriet&#224;
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Oltre agli oggetti Session e Rowset e all'oggetto facoltativo Command, ciascun provider supporta una o più proprietà.  Queste proprietà vengono definite in mappe delle proprietà contenute nei file di intestazione creati durante l'esecuzione della Creazione guidata provider OLE DB ATL.  Ciascun file di intestazione contiene una mappa del gruppo di proprietà OLE DB definito per l'oggetto o gli oggetti specificati in tale file.  Nel file di intestazione contenente l'oggetto DataSource è inclusa anche la mappa delle [proprietà DataSource](https://msdn.microsoft.com/en-us/library/ms724188\(v=vs.140\).aspx).  Session.h contiene la mappa delle [proprietà Session](https://msdn.microsoft.com/en-us/library/ms714221.aspx).  Gli oggetti rowset e comando si trovano in un unico file di intestazione denominato *nomeprogetto*RS.h.  Queste proprietà sono membri del gruppo di [proprietà Rowset](https://msdn.microsoft.com/en-us/library/ms711252.aspx).  
  
## Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
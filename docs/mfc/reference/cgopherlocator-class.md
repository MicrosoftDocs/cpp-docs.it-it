---
title: "CGopherLocator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CGopherLocator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CGopherLocator class"
  - "gopher locator"
  - "Internet, gopher searches"
ms.assetid: 6fcc015f-5ae6-4959-b936-858634c71019
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CGopherLocator Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene un gopher "localizzatore" da un server gopher, determina il tipo del localizzatore e rende disponibile il localizzatore [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md).  
  
> [!NOTE]
>  Le classi `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` e i membri sono deprecate in quanto non funzionano nella piattaforma Windows XP, ma continueranno a lavorare su piattaforme precedenti.  
  
## Sintassi  
  
```  
class CGopherLocator : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherLocator::CGopherLocator](../Topic/CGopherLocator::CGopherLocator.md)|Costruisce un oggetto `CGopherLocator`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherLocator::GetLocatorType](../Topic/CGopherLocator::GetLocatorType.md)|Analizza un indicatore di posizione di gopher e determina gli attributi.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherLocator::operator LPCTSTR](../Topic/CGopherLocator::operator%20LPCTSTR.md)|Accede direttamente ai caratteri archiviati in un oggetto `CGopherLocator` come stringa di tipo c.|  
  
## Note  
 Un'applicazione deve ottenere il localizzatore di un server gopher prima che possa recuperare informazioni dal server.  Una volta con il localizzatore, consideri il localizzatore come token opaco.  
  
 Ogni localizzatore di gopher contiene attributi che determinano il tipo di file o di server.  Vedere [GetLocatorType](../Topic/CGopherLocator::GetLocatorType.md) per un elenco di tipi di indicatori di posizione di gopher.  
  
 In genere viene utilizzato il localizzatore per le chiamate a [CGopherFileFind::FindFile](../Topic/CGopherFileFind::FindFile.md) per recuperare un'informazione specifica.  
  
 Per ulteriori informazioni sul funzionamento `CGopherLocator` con le altre classi Internet MFC, vedere l'articolo [Programmazione per Internet con ATL](../../mfc/win32-internet-extensions-wininet.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CGopherLocator`  
  
## Requisiti  
 **Header:** afxinet.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CGopherFileFind Class](../../mfc/reference/cgopherfilefind-class.md)
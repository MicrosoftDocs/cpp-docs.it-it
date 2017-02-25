---
title: "CSettingsStore Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSettingsStore"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSettingsStore class"
ms.assetid: 0ea181de-a13e-4b29-b560-7c43838223ff
caps.latest.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 31
---
# CSettingsStore Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue il wrapping delle funzioni API Windows, fornendo un'interfaccia orientata a oggetti utilizzati per accedere al Registro di sistema.  
  
## Sintassi  
  
```  
class CSettingsStore : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSettingsStore::CSettingsStore](../Topic/CSettingsStore::CSettingsStore.md)|Costruisce un oggetto `CSettingsStore`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSettingsStore::Close](../Topic/CSettingsStore::Close.md)|Chiude la chiave del Registro di sistema aperta.|  
|[CSettingsStore::CreateKey](../Topic/CSettingsStore::CreateKey.md)|Aprire la chiave specificata o la crea se non esiste.|  
|[CSettingsStore::DeleteKey](../Topic/CSettingsStore::DeleteKey.md)|Elimina la chiave specificata e tutti i relativi elementi figlio.|  
|[CSettingsStore::DeleteValue](../Topic/CSettingsStore::DeleteValue.md)|Elimina il valore specificato di chiave aperta.|  
|[CSettingsStore::Open](../Topic/CSettingsStore::Open.md)|Aprire la chiave specificata.|  
|[CSettingsStore::Read](../Topic/CSettingsStore::Read.md)|Recupera i dati per un valore di chiave specificato.|  
|[CSettingsStore::Write](../Topic/CSettingsStore::Write.md)|Scrive un valore nel Registro di sistema nella chiave aperta.|  
  
## Note  
 Le funzioni membro `CreateKey` e `Open` sono molto simili.  Se la chiave del Registro di sistema esiste già, `CreateKey` e funzione `Open` allo stesso modo.  Tuttavia, se la chiave del Registro di sistema non esiste, `CreateKey` la creerà mentre `Open` restituirà un errore.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il comando apri e i metodi di lettura `CSettingsStore` classe.  Questo frammento di codice fa parte [Esempio demo tooltip](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_ToolTipDemo#1](../../mfc/reference/codesnippet/CPP/csettingsstore-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSettingsStore](../../mfc/reference/csettingsstore-class.md)  
  
## Requisiti  
 **intestazione:** afxsettingsstore.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CWinAppEx Class](../../mfc/reference/cwinappex-class.md)
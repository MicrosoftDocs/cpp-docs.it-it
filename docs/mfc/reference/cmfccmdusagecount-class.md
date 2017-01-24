---
title: "CMFCCmdUsageCount Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCCmdUsageCount"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCCmdUsageCount class"
ms.assetid: 9c33b783-37c0-43ea-9f31-3c75e246c841
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCCmdUsageCount Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Tenere traccia del numero di utilizzo dei messaggi di Windows, ad esempio quando l'utente seleziona un elemento da un menu.  
  
## Sintassi  
  
```  
class CMFCCmdUsageCount : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCCmdUsageCount::CMFCCmdUsageCount`|Costruttore predefinito.|  
|`CMFCCmdUsageCount::~CMFCCmdUsageCount`|Distruttore|  
  
### Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCCmdUsageCount::AddCmd](../Topic/CMFCCmdUsageCount::AddCmd.md)|Incrementa di uno il contatore associato al comando specificato.|  
|[CMFCCmdUsageCount::GetCount](../Topic/CMFCCmdUsageCount::GetCount.md)|Recupera il conteggio di utilizzo associato all'ID di comando|  
|[CMFCCmdUsageCount::HasEnoughInformation](../Topic/CMFCCmdUsageCount::HasEnoughInformation.md)|Determina se l'oggetto ha ricevuto la quantità minima di dati di rilevamento.|  
|[CMFCCmdUsageCount::IsFreqeuntlyUsedCmd](../Topic/CMFCCmdUsageCount::IsFreqeuntlyUsedCmd.md)|Determina se il comando specificato viene spesso utilizzato.|  
|[CMFCCmdUsageCount::Reset](../Topic/CMFCCmdUsageCount::Reset.md)|Cancella il conteggio di utilizzo dei controlli.|  
|[CMFCCmdUsageCount::Serialize](../Topic/CMFCCmdUsageCount::Serialize.md)|Legge l'oggetto da un archivio o scritto in un archivio.  \(Override [CObject::Serialize](../Topic/CObject::Serialize.md)\).|  
|[CMFCCmdUsageCount::SetOptions](../Topic/CMFCCmdUsageCount::SetOptions.md)|Imposta i valori dei membri dati della classe condivisi `CMFCCmdUsageCount`.|  
  
### Membri di dati  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`m_CmdUsage`|Un oggetto `CMap` che associa i controlli all'utilizzo conta.|  
|`m_nMinUsagePercentage`|La percentuale minima di utilizzo per un comando sono utilizzati di frequente.|  
|`m_nStartCount`|Il contatore iniziale utilizzato per determinare se questo oggetto ha ricevuto la quantità minima di dati di rilevamento.|  
|`m_nTotalUsage`|Il conteggio di tutti i controlli registrati.|  
  
### Note  
 La classe `CMFCCmdUsageCount` esegue il mapping di ogni identificatore numerico di messaggio di Windows a un contatore Integer senza segno a 32 bit.  `CMFCToolBar` utilizza questa classe per visualizzare gli elementi di utilizzo frequente della barra degli strumenti.  Per ulteriori informazioni su `CMFCToolBar`, vedere [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md).  
  
 È possibile rendere persistenti i dati della classe `CMFCCmdUsageCount` tra l'esecuzione del programma.  Utilizzare il metodo [CMFCCmdUsageCount::Serialize](../Topic/CMFCCmdUsageCount::Serialize.md) per serializzare i dati del membro della classe e il metodo [CMFCCmdUsageCount::SetOptions](../Topic/CMFCCmdUsageCount::SetOptions.md) per impostare i dati dei membri condivisi.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCCmdUsageCount](../../mfc/reference/cmfccmdusagecount-class.md)  
  
## Requisiti  
 **intestazione:** afxcmdusagecount.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)
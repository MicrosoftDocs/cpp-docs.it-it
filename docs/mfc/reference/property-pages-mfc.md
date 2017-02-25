---
title: "Pagine delle propriet&#224; (MFC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni di trasferimento dei dati delle pagine delle proprietà in MFC"
  - "proprietà (pagine), funzioni MFC globali"
ms.assetid: 734f88bc-c776-4136-9b0e-f45c761a45c1
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# Pagine delle propriet&#224; (MFC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le pagine delle proprietà vengono visualizzati i valori correnti di proprietà specifiche del controllo OLE in un'interfaccia personalizzabile e grafica per visualizzare e modificare il supporto di un meccanismo di mapping dei dati in base allo scambio di dati della finestra di dialogo \(DDX\).  
  
 Questo meccanismo di mapping dei dati associa i controlli della pagina delle proprietà a singole proprietà dei controlli OLE.  Il valore della proprietà del controllo riflette lo stato o il contenuto del controllo della pagina delle proprietà.  Il mapping tra i controlli della pagina delle proprietà e le proprietà è determinato dalle chiamate di funzione di **DDP\_** nella funzione membro di `DoDataExchange` della pagina delle proprietà.  Di seguito viene fornito un elenco di **DDP\_** funzione che lo scambio di dati immessi utilizzando la pagina delle proprietà del controllo:  
  
### Trasferimento dei dati della pagina delle proprietà  
  
|||  
|-|-|  
|[DDP\_CBIndex](../Topic/DDP_CBIndex.md)|Nell'indice della stringa selezionata in una casella combinata con la proprietà di un controllo.|  
|[DDP\_CBString](../Topic/DDP_CBString.md)|Collega la stringa selezionata in una casella combinata con la proprietà di un controllo.  La stringa selezionata può iniziare con le stesse lettere del valore della proprietà ma non deve corrisponderla completamente.|  
|[DDP\_CBStringExact](../Topic/DDP_CBStringExact.md)|Collega la stringa selezionata in una casella combinata con la proprietà di un controllo.  La stringa selezionata e il valore stringa della proprietà devono corrispondere esattamente.|  
|[DDP\_Check](../Topic/DDP_Check.md)|Collega una casella di controllo nella pagina proprietà del controllo alla proprietà di un controllo.|  
|[DDP\_LBIndex](../Topic/DDP_LBIndex.md)|Nell'indice della stringa selezionata in una casella di riepilogo con la proprietà di un controllo.|  
|[DDP\_LBString](../Topic/DDP_LBString.md)|Collega la stringa selezionata in una casella di riepilogo con la proprietà di un controllo.  La stringa selezionata può iniziare con le stesse lettere del valore della proprietà ma non deve corrisponderla completamente.|  
|[DDP\_LBStringExact](../Topic/DDP_LBStringExact.md)|Collega la stringa selezionata in una casella di riepilogo con la proprietà di un controllo.  La stringa selezionata e il valore stringa della proprietà devono corrispondere esattamente.|  
|[DDP\_PostProcessing](../Topic/DDP_PostProcessing.md)|Completamento automatico dei valori di trasferimento di proprietà dal controllo.|  
|[DDP\_Radio](../Topic/DDP_Radio.md)|Collega un gruppo di pulsanti di opzione nella pagina proprietà del controllo alla proprietà di un controllo.|  
|[DDP\_Text](../Topic/DDP_Text.md)|Collega un controllo nella pagina proprietà del controllo alla proprietà di un controllo.  Questa funzione gestisce vari tipi di proprietà, come **Double**, **short**, `BSTR` e **long**.|  
  
 Per ulteriori informazioni sulla funzione e sulle pagine delle proprietà di `DoDataExchange`, vedere l'articolo [Controlli ActiveX: Pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).  
  
 Di seguito viene fornito un elenco di macro utilizzate per creare e gestire le pagine delle proprietà per un controllo OLE:  
  
### Pagine delle proprietà  
  
|||  
|-|-|  
|[BEGIN\_PROPPAGEIDS](../Topic/BEGIN_PROPPAGEIDS.md)|Inizio dell'elenco della pagina delle proprietà ID.|  
|[END\_PROPPAGEIDS](../Topic/END_PROPPAGEIDS.md)|Terminare l'elenco della pagina delle proprietà ID.|  
|[PROPPAGEID](../Topic/PROPPAGEID.md)|Dichiara una pagina delle proprietà della classe del controllo.|  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
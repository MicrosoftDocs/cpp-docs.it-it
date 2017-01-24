---
title: "COleCurrency Class | Microsoft Docs"
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
  - "CURRENCY"
  - "COleCurrency"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleCurrency class"
  - "CURRENCY"
  - "fixed-point numbers"
  - "numeri, fixed-point"
ms.assetid: 3a36e345-303f-46fb-a57c-858274378a8d
caps.latest.revision: 24
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleCurrency Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula il tipo di dati `CURRENCY` di automazione OLE.  
  
## Sintassi  
  
```  
class COleCurrency  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleCurrency::COleCurrency](../Topic/COleCurrency::COleCurrency.md)|Costruisce un oggetto `COleCurrency`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleCurrency::Format](../Topic/COleCurrency::Format.md)|Genera una rappresentazione di stringa formattata di un oggetto `COleCurrency`.|  
|[COleCurrency::GetStatus](../Topic/COleCurrency::GetStatus.md)|Ottiene lo stato \(validità\) di questo oggetto `COleCurrency`.|  
|[COleCurrency::ParseCurrency](../Topic/COleCurrency::ParseCurrency.md)|Legge un valore **CURRENCY** da una stringa e imposta il valore `COleCurrency`.|  
|[COleCurrency::SetCurrency](../Topic/COleCurrency::SetCurrency.md)|Imposta il valore di questo oggetto `COleCurrency`.|  
|[COleCurrency::SetStatus](../Topic/COleCurrency::SetStatus.md)|Imposta lo stato \(validità\) per l'oggetto `COleCurrency`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore \=](../Topic/COleCurrency::operator%20=.md)|Copia un valore `COleCurrency`.|  
|[operatore \+, \-](../Topic/COleCurrency::operator%20+,%20-.md)|Aggiunge, sottrae e modifica il segno dei valori `COleCurrency`.|  
|[l'operatore \+\=, \- \=](../Topic/COleCurrency::operator%20+=,%20-=.md)|Aggiunta e sottrae un valore `COleCurrency` da questo oggetto `COleCurrency`.|  
|[operatore \*, o](../Topic/COleCurrency::operator%20*,%20-.md)|Adatta un valore `COleCurrency` da un valore Integer.|  
|[\*\= l'operatore,\/\=](../Topic/COleCurrency::operator%20*=,%20-=.md)|Quando questo valore `COleCurrency` da un valore Integer.|  
|[operatore \<\<](../Topic/COleCurrency::operator%20%3C%3C,%20%3E%3E.md)|Restituisce un valore `COleCurrency` a `CArchive` o a `CDumpContext`.|  
|[operatore \>\>](../Topic/COleCurrency::operator%20%3C%3C,%20%3E%3E.md)|Introduce un oggetto `COleCurrency` da `CArchive`.|  
|[VALUTA dell'operatore](../Topic/COleCurrency::operator%20CURRENCY.md)|Converte un valore `COleCurrency` in **CURRENCY**.|  
|[\=\= l'operatore, \<, \<\=, e così via.](../Topic/COleCurrency%20Relational%20Operators.md)|Confronta due valori `COleCurrency`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleCurrency::m\_cur](../Topic/COleCurrency::m_cur.md)|Contiene **CURRENCY** sottostante per questo oggetto `COleCurrency`.|  
|[COleCurrency::m\_status](../Topic/COleCurrency::m_status.md)|Contiene lo stato di questo oggetto `COleCurrency`.|  
  
## Note  
 **COleCurrency** non dispone di una classe base.  
  
 **CURRENCY** viene implementato come 8 byte, valore Integer a complemento two's\- ridimensionato da 10.000.  Ciò fornisce un numero a virgola fissa con 15 cifre a sinistra del separatore decimale e 4 cifre a destra.  Il tipo di dati **CURRENCY** è estremamente utile per i calcoli che includono i costi, o per il calcolo a virgola fissa dove l'accuratezza è importante.  È uno dei tipi possibili per il tipo di dati `VARIANT` di automazione OLE.  
  
 **COleCurrency** implementa anche alcune operazioni aritmetiche di base per questo tipo a virgola fissa.  Le operazioni supportate sono state selezionate per controllare gli errori di arrotondamento che si verificano durante i calcoli a virgola fissa.  
  
## Gerarchia di ereditarietà  
 `COleCurrency`  
  
## Requisiti  
 **Header:** afxdisp.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleVariant Class](../../mfc/reference/colevariant-class.md)
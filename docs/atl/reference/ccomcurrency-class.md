---
title: "CComCurrency Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComCurrency"
  - "ATL.CComCurrency"
  - "ATL::CComCurrency"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComCurrency class"
ms.assetid: a1c3d10a-bba6-40cc-8bcf-aed9023c8a9e
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CComCurrency Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`CComCurrency` dispone di metodi e operatori per creare e gestire un oggetto CURRENCY.  
  
## Sintassi  
  
```  
  
class CComCurrency  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCurrency::CComCurrency](../Topic/CComCurrency::CComCurrency.md)|Costruttore per un oggetto `CComCurrency`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCurrency::GetCurrencyPtr](../Topic/CComCurrency::GetCurrencyPtr.md)|Restituisce l'indirizzo di un membro dati `m_currency`.|  
|[CComCurrency::GetFraction](../Topic/CComCurrency::GetFraction.md)|Chiamare questo metodo per restituire il componente frazionario di un oggetto `CComCurrency`.|  
|[CComCurrency::GetInteger](../Topic/CComCurrency::GetInteger.md)|Chiamare questo metodo per restituire il componente Integer di un oggetto `CComCurrency`.|  
|[CComCurrency::Round](../Topic/CComCurrency::Round.md)|Chiamare questo metodo per arrotondare un oggetto `CComCurrency` al valore intero più vicino.|  
|[CComCurrency::SetFraction](../Topic/CComCurrency::SetFraction.md)|Chiamare questo metodo per impostare il componente frazionario di un oggetto `CComCurrency`.|  
|[CComCurrency::SetInteger](../Topic/CComCurrency::SetInteger.md)|Chiamare questo metodo per impostare il componente Integer di un oggetto `CComCurrency`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCurrency::operator \-](../Topic/CComCurrency::operator%20-2.md)|Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency`.|  
|[CComCurrency::operator \!\=](../Topic/CComCurrency::operator%20!=.md)|Confronta due oggetti `CComCurrency` per stabilirne la disuguaglianza.|  
|[CComCurrency::operator \*](../Topic/CComCurrency::operator%20*.md)|Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency`.|  
|[CComCurrency::operator \*\=](../Topic/CComCurrency::operator%20*=.md)|Questo operatore viene usato per eseguire la moltiplicazione su un oggetto `CComCurrency` e per assegnare il risultato.|  
|[CComCurrency::operator \/](../Topic/CComCurrency::operator%20-1.md)|Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency`.|  
|[CComCurrency::operator \/\=](../Topic/CComCurrency::operator%20-=2.md)|Questo operatore viene usato per eseguire la divisione su un oggetto `CComCurrency` e per assegnare il risultato.|  
|[CComCurrency::operator \+](../Topic/CComCurrency::operator%20+.md)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency`.|  
|[CComCurrency::operator \+\=](../Topic/CComCurrency::operator%20+=.md)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CComCurrency` e per assegnare il risultato all'oggetto corrente.|  
|[CComCurrency::operator \<](../Topic/CComCurrency::operator%20%3C.md)|Questo operatore confronta due oggetti `CComCurrency` per determinare il minore.|  
|[CComCurrency::operator \<\=](../Topic/CComCurrency::operator%20%3C=.md)|Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il minore.|  
|[CComCurrency::operator \=](../Topic/CComCurrency::operator%20=.md)|Questo operatore assegna l'oggetto `CComCurrency` a un nuovo valore.|  
|[CComCurrency::operator \-\=](../Topic/CComCurrency::operator%20-=1.md)|Questo operatore viene usato per eseguire la sottrazione su un oggetto `CComCurrency` e per assegnare il risultato.|  
|[CComCurrency::operator \=\=](../Topic/CComCurrency::operator%20==.md)|Questo operatore confronta due oggetti `CComCurrency` per stabilirne l'uguaglianza.|  
|[CComCurrency::operator \>](../Topic/CComCurrency::operator%20%3E.md)|Questo operatore confronta due oggetti `CComCurrency` per determinare il più grande.|  
|[CComCurrency::operator \>\=](../Topic/CComCurrency::operator%20%3E=.md)|Questo operatore confronta due oggetti `CComCurrency` per determinare l'uguaglianza o il più grande.|  
|[CComCurrency::operator CURRENCY](../Topic/CComCurrency::operator%20CURRENCY.md)|Esegue il cast di un oggetto `CURRENCY`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCurrency::m\_currency](../Topic/CComCurrency::m_currency.md)|La variabile `CURRENCY` creata dall'istanza della classe.|  
  
## Note  
 `CComCurrency` è un wrapper per il tipo di dati **CURRENCY**.  **CURRENCY** viene implementato come valore Integer a 8 byte in complemento a due ridotto di 10.000.  In questo modo si ottiene un numero a virgola fissa con 15 cifre a sinistra del separatore decimale e 4 cifre a destra.  Il tipo di dati **CURRENCY** è estremamente utile per i calcoli che includono denaro o per i calcoli a virgola fissa in cui la precisione è importante.  
  
 Il wrapper **CComCurrency** implementa le operazioni aritmetiche, di assegnazione e di confronto per questo tipo a virgola fissa.  Le applicazioni supportate sono state selezionate per controllare gli errori di arrotondamento che possono verificarsi durante i calcoli a virgola fissa.  
  
 L'oggetto `CComCurrency` fornisce accesso ai numeri su entrambi i lati del separatore decimale sotto forma di due componenti: un componente Integer che archivia il valore a sinistra del separatore decimale e un componente frazionario che archivia il valore a destra del separatore decimale.  Il componente frazionario viene archiviato internamente come valore Integer compreso tra \-9999 \(**CY\_MIN\_FRACTION**\) e \+9999 \(**CY\_MAX\_FRACTION**\).  Il metodo [CComCurrency::GetFraction](../Topic/CComCurrency::GetFraction.md) restituisce un valore ridimensionato in base a un fattore 10.000 \(**CY\_SCALE**\).  
  
 Quando si specificano i componenti Integer e frazionario di un oggetto **CComCurrency** , ricordare che il componente frazionario è un numero compreso tra 0 e 9999.  Questo è importante quando si opera con valute come il dollaro americano, che indica gli importi usando solo due cifre significative dopo il separatore decimale.   Anche se le ultime due cifre non vengono visualizzate, devono essere tenute in considerazione.  
  
|Valore|Valori possibili di CComCurrency|  
|------------|--------------------------------------|  
|$10.50|CComCurrency\(10.5000\) *or* CComCurrency\(10,50\)|  
|$10.05|CComCurrency\(10.500\) *or* CComCurrency\(10,05\)|  
  
 I valori  **CY\_MIN\_FRACTION**, **CY\_MAX\_FRACTION** e  **CY\_SCALE** sono definiti in atlcur.h.  
  
## Requisiti  
 **Intestazione:** atlcur.h  
  
## Vedere anche  
 [COleCurrency Class](../../mfc/reference/colecurrency-class.md)   
 [CURRENCY](http://msdn.microsoft.com/it-it/5e81273c-7289-45c7-93c0-32c1553f708e)   
 [Class Overview](../../atl/atl-class-overview.md)
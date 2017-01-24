---
title: "DATE Type | Microsoft Docs"
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
  - "DATE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Date (tipo di dati)"
  - "Date (tipo di dati), about Date data type"
  - "Date (tipo di dati), implementazione"
  - "DATE type"
  - "hour values representation"
  - "MFC, data e ora"
ms.assetid: 695853ed-b614-4575-b793-b8c287372038
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# DATE Type
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo **date** viene implementato mediante un numero a virgola mobile a 8 byte.  I giorni sono rappresentati da incrementare il numero intero che iniziano con il 30 dicembre 1899, verrà utilizzato come tempo zero.  I valori relativi all'ora sono espressi come valore assoluto della parte decimale del numero.  Nella tabella seguente vengono illustrate diverse date con il relativo equivalente numerico del tipo **date** :  
  
|Data e ora|Rappresentazione|  
|----------------|----------------------|  
|30 dicembre 1899, Mezzanotte|0.00|  
|1° gennaio 1900, Mezzanotte|2.00|  
|4 gennaio 1900, Mezzanotte|5.00|  
|4 gennaio 1900, 6 AM..|5.25|  
|4 gennaio 1900, Mezzogiorno|5.50|  
|4 gennaio 1900, 9 PM..|5.875|  
  
 Il tipo **date** nonché la classe `COleDateTime`, rappresenta la data e l'ora come numero di riga classica.  La classe `COleDateTime` contiene diversi metodi per modificare i valori RELATIVI ALLA DATA, inclusi conversione da e verso altri formati di data comuni.  
  
 I punti seguenti devono essere indicati quando si utilizzano questi formati di data e ora di automazione:  
  
-   Le date vengono specificate all'ora locale, è necessario eseguire la sincronizzazione manuale quando si utilizzano le date nei fusi orari diversi.  
  
-   I tipi di dati non rappresentano tenuto conto dell'ora legale.  
  
-   La sequenza temporale data diventa batch per i valori di data minore di 0 \(prima del 30 dicembre 1899\).  Questo perché una parte di numero intero del valore della data viene considerata come firmato, mentre la parte frazionaria viene considerata come unsigned.  Ovvero la parte del numero intero del valore della data può essere positivo o negativo, mentre la parte frazionaria del valore della data viene aggiunto sempre data logica globale.  Nella seguente tabella vengono illustrati alcuni esempi:  
  
|Data e ora|Rappresentazione|  
|----------------|----------------------|  
|27 dicembre 1899, Mezzanotte|\-3.00|  
|28 dicembre 1899, Mezzogiorno|\-2.50|  
|28 dicembre 1899, Mezzanotte|\-2.00|  
|29 dicembre 1899, Mezzanotte|\-1.00|  
|30 dicembre 1899, 6 Del pomeriggio..|\-0.75|  
|30 dicembre 1899, Mezzogiorno|\-0.50|  
|30 dicembre 1899, 6 AM..|\-0.25|  
|30 dicembre 1899, Mezzanotte|0.00|  
|30 dicembre 1899, 6 AM..|0.25|  
|30 dicembre 1899, Mezzogiorno|0.50|  
|30 dicembre 1899, 6 Del pomeriggio..|0.75|  
|31 dicembre 1899, Mezzanotte|1.00|  
|1° gennaio 1900, Mezzanotte|2.00|  
|1° gennaio 1900, Mezzogiorno|2.50|  
|2 gennaio 1900, Mezzanotte|3.00|  
  
> [!CAUTION]
>  Si noti che in quanto le 6:00 sempre è rappresentato da un valore frazionario 0,25 indipendentemente dall'intero che rappresenta il giorno che è positivo \(dopo il 30 dicembre 1899\) o negativo \(prima del 30 dicembre 1899\), un confronto semplice a virgola mobile ordinerebbe erroneamente qualsiasi **date** che rappresenta il 6:00 su un giorno precedente di 12\/30\/1899 come *secondo momento***date** che rappresenta il 7:00 lo stesso giorno.  
  
 Ulteriori informazioni sulle problematiche correlate ai tipi `COleDateTime` e **date** sono disponibili in [COleDateTime Class](../atl-mfc-shared/reference/coledatetime-class.md) e [Date and Time: Automation Support](../atl-mfc-shared/date-and-time-automation-support.md).  
  
## Vedere anche  
 [Date and Time](../atl-mfc-shared/date-and-time.md)   
 [COleDateTime Class](../atl-mfc-shared/reference/coledatetime-class.md)
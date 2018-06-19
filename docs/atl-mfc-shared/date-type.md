---
title: DATE (tipo) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- DATE
dev_langs:
- C++
helpviewer_keywords:
- Date data type, implementing
- Date data type
- DATE type
- Date data type, about Date data type
- MFC, date and time
- hour values representation
ms.assetid: 695853ed-b614-4575-b793-b8c287372038
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5aafed046fa5724442e30014aa5634542de0f4aa
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32358127"
---
# <a name="date-type"></a>DATE (tipo)
Il **data** tipo viene implementato utilizzando un numero a virgola mobile a 8 byte. Giorni sono rappresentati in incrementi di numero intero a partire dal 30 dicembre 1899, mezzanotte all'ora zero. I valori di ora sono espressi come valore assoluto della parte frazionaria del numero. Nella tabella seguente vengono illustrate le diverse date insieme a loro **data** equivalente numerico di tipo:  
  
|Data e ora|Rappresentazione|  
|-------------------|--------------------|  
|Mezzanotte del 30 dicembre 1899|0,00|  
|Mezzanotte del 1 gennaio 1900|2.00|  
|Mezzanotte del 4 gennaio 1900|5.00|  
|4 gennaio 1900, 6 ore|5.25|  
|4 gennaio 1900 mezzogiorno|5.50|  
|4 gennaio 1900, 21.|5.875|  
  
 Il **data** tipo, date, nonché `COleDateTime` classe rappresenta date e ore come un numero di riga classico. La `COleDateTime` classe contiene diversi metodi per la modifica dei valori di data, inclusa la conversione da e verso altri formati di data comuni.  
  
 Quando si utilizzano questi formati di data e ora in automazione, è opportuno notare quanto segue:  
  
-   Le date vengono specificate in ora locale. la sincronizzazione deve essere eseguita manualmente quando si lavora con le date in fusi orari diversi.  
  
-   I tipi di data non tiene conto per l'ora legale.  
  
-   La sequenza temporale data diventa discontinua per valori di data minore di 0 (entro 30 dicembre 1899). Infatti, la parte di numero intero del valore date viene considerata con segno, mentre la parte frazionaria viene considerata come senza segno. In altre parole, la parte di numero intero del valore date può essere positivo o negativo, mentre la parte frazionaria del valore date viene sempre aggiunta alla data logica complessiva. La tabella seguente illustra alcuni esempi:  
  
|Data e ora|Rappresentazione|  
|-------------------|--------------------|  
|27 dicembre 1899, mezzanotte|-3.00|  
|28 dicembre 1899, mezzogiorno|-2.50|  
|28 dicembre 1899, mezzanotte|-2.00|  
|Mezzanotte del 29 dicembre 1899|-1.00|  
|30 dicembre 1899, 18.00.|-0.75|  
|30 dicembre 1899, mezzogiorno|-0.50|  
|30 dicembre 1899, 6 ore|-0.25|  
|Mezzanotte del 30 dicembre 1899|0,00|  
|30 dicembre 1899, 6 ore|0.25|  
|30 dicembre 1899, mezzogiorno|0.50|  
|30 dicembre 1899, 18.00.|0.75|  
|Mezzanotte del 31 dicembre 1899|1.00|  
|Mezzanotte del 1 gennaio 1900|2.00|  
|1 ° gennaio 1900 mezzogiorno|2.50|  
|2 gennaio 1900, mezzanotte|3.00|  
  
> [!CAUTION]
>  Si noti che poiché 6:00 AM è sempre rappresentato da un valore frazionario 0,25 indipendentemente dal fatto che il valore integer che rappresenta il giorno è un valore positivo (dopo il 30 dicembre 1899) o negativo (prima del 30 dicembre 1899), un semplice confronto punto mobile erroneamente ordinare qualsiasi **data** che rappresenta 6:00:00 in un giorno precedente a 30/12/1899 come *in un secondo momento* rispetto a un **data** che rappresenta 7:00 AM nello stesso giorno.  
  
 Ulteriori informazioni sui problemi correlati al **data** e `COleDateTime` tipi sono reperibile nella [classe COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) e [data e ora: supporto di automazione](../atl-mfc-shared/date-and-time-automation-support.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Data e ora](../atl-mfc-shared/date-and-time.md)   
 [Classe COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)


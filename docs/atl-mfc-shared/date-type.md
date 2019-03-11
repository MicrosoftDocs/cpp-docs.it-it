---
title: Tipo DATE
ms.date: 11/04/2016
f1_keywords:
- DATE
helpviewer_keywords:
- Date data type, implementing
- Date data type
- DATE type
- Date data type, about Date data type
- MFC, date and time
- hour values representation
ms.assetid: 695853ed-b614-4575-b793-b8c287372038
ms.openlocfilehash: bd63b400cad6efc3b3899c17a3bf835596b4008c
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57750390"
---
# <a name="date-type"></a>Tipo DATE

Il tipo data viene implementato usando un numero a virgola mobile a 8 byte. Giorni sono rappresentati da incrementi di numero intero a partire dal 30 dicembre 1899, mezzanotte all'ora zero. I valori delle ore sono espresse come valore assoluto della parte frazionaria del numero. Nella tabella seguente illustra le diverse date insieme ai relativi equivalenti numerici di tipo Data:

|Data e ora|Rappresentazione|
|-------------------|--------------------|
|30 dicembre 1899, mezzanotte|0.00|
|Mezzanotte del 1 gennaio 1900|2.00|
|La mezzanotte del 4 gennaio 1900|5.00|
|4 gennaio 1900 e 6 del mattino.|5.25|
|4 gennaio 1900 e mezzogiorno|5.50|
|4 gennaio 1900, alle 21.00|5.875|

Il tipo di date, DATE, nonché `COleDateTime` classe rappresenta le date e ore come una linea numerica classica. Il `COleDateTime` classe contiene diversi metodi per la modifica dei valori di data, tra cui la conversione da e verso altri formati data comuni.

Sottolineare i seguenti punti quando si lavora con questi formati di data e ora in automazione:

- Le date vengono specificate in ora locale. la sincronizzazione deve essere eseguita manualmente quando si lavora con le date in fusi orari diversi.

- I tipi di data non tengono conto per l'ora legale.

- La sequenza temporale data diventa discontinua per valori di data minore di 0 (prima di 30 dicembre 1899). Infatti, la parte di numero intero del valore date viene considerata con segno, mentre la parte frazionaria viene considerata come senza segno. In altre parole, la parte di numero intero del valore date può essere positivo o negativo, mentre la parte frazionaria del valore date viene sempre aggiunta sulla data logica complessiva. Nella tabella seguente illustra alcuni esempi:

|Data e ora|Rappresentazione|
|-------------------|--------------------|
|27 dicembre 1899, mezzanotte|-3.00|
|28 dicembre 1899, mezzogiorno|-2.50|
|28 dicembre 1899, mezzanotte|-2.00|
|29 dicembre 1899, mezzanotte|-1.00|
|30 dicembre 1899, 18.00.|-0.75|
|30 dicembre 1899, mezzogiorno|-0.50|
|30 dicembre 1899, 6 del mattino.|-0.25|
|30 dicembre 1899, mezzanotte|0.00|
|30 dicembre 1899, 6 del mattino.|0.25|
|30 dicembre 1899, mezzogiorno|0.50|
|30 dicembre 1899, 18.00.|0.75|
|Mezzanotte del 31 dicembre 1899|1.00|
|Mezzanotte del 1 gennaio 1900|2.00|
|1 gennaio 1900 e mezzogiorno|2.50|
|2 ° gennaio 1900, mezzanotte|3.00|

> [!CAUTION]
>  Si noti che poiché 6:00 viene sempre rappresentata da un valore frazionario 0,25 indipendentemente dal fatto che l'intero che rappresenta il giorno è un valore positivo (dopo il 30 dicembre 1899) o negativo (prima dal 30 dicembre 1899), un semplice confronto punto a virgola mobile viene erroneamente ordinare qualsiasi data che rappresenta le 6.00 nel giorno precedente a 12/30/1899 come *in un secondo momento* rispetto a una data che rappresentano 7:00 nello stesso giorno.

Altre informazioni sui problemi relativi alla data e `COleDateTime` i tipi sono disponibili nella sezione [classe COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) e [data e ora: Il supporto per automazione](../atl-mfc-shared/date-and-time-automation-support.md).

## <a name="see-also"></a>Vedere anche

[Data e ora](../atl-mfc-shared/date-and-time.md)<br/>
[Classe COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)

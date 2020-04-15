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
ms.openlocfilehash: 6fd9fde83474ff4f439c0dd3989d4dc35fe1241a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317913"
---
# <a name="date-type"></a>Tipo DATE

Il tipo DATE viene implementato utilizzando un numero a virgola mobile a 8 byte. I giorni sono rappresentati da incrementi di numeri interi a partire dal 30 dicembre 1899, mezzanotte come ora zero. I valori di ora sono rappresentati dal valore assoluto della parte frazionaria del numero. Nella tabella seguente vengono illustrate diverse date insieme al relativo equivalente numerico di tipo DATE:

|Date e Time|Rappresentazione|
|-------------------|--------------------|
|30 dicembre 1899, mezzanotte|0,00|
|1o gennaio 1900, mezzanotte|2,00|
|4 gennaio 1900, mezzanotte|5,00|
|4 gennaio 1900, ore 6 del mattino|5.25|
|4 gennaio 1900, mezzogiorno|5,50|
|4 gennaio 1900, ore 21.00|5.875|

Il tipo di data DATE, così come la `COleDateTime` classe, rappresenta date e ore come una linea numerica classica. La `COleDateTime` classe contiene diversi metodi per modificare i valori DATE, inclusa la conversione da e verso altri formati di data comuni.

Quando si utilizzano questi formati di data e ora nell'automazione, è necessario notare i seguenti punti:

- Le date sono specificate nell'ora locale; la sincronizzazione deve essere eseguita manualmente quando si lavora con date in fusi orari diversi.

- I tipi di data non tengono conto dell'ora legale.

- La sequenza temporale della data diventa discontinua per i valori di data minori di 0 (prima del 30 dicembre 1899). Ciò è dovuto al fatto che la parte del numero intero del valore della data viene considerata come consegno, mentre la parte frazionaria viene considerata come senza segno. In altre parole, la parte intera del valore della data può essere positiva o negativa, mentre la parte frazionaria del valore della data viene sempre aggiunta alla data logica complessiva. La tabella seguente illustra alcuni esempi:

|Date e Time|Rappresentazione|
|-------------------|--------------------|
|27 dicembre 1899, mezzanotte|-3.00|
|28 dicembre 1899, mezzogiorno|-2.50|
|28 dicembre 1899, mezzanotte|-2.00|
|29 dicembre 1899, mezzanotte|-1.00|
|30 dicembre 1899, ore 18.00|-0.75|
|30 dicembre 1899, mezzogiorno|-0.50|
|30 dicembre 1899, ore 6 del mattino|-0.25|
|30 dicembre 1899, mezzanotte|0,00|
|30 dicembre 1899, ore 6 del mattino|0,25|
|30 dicembre 1899, mezzogiorno|0.50|
|30 dicembre 1899, ore 18.00|0.75|
|31 dicembre 1899, mezzanotte|1,00|
|1o gennaio 1900, mezzanotte|2,00|
|1o gennaio 1900, mezzogiorno|2.50|
|2 gennaio 1900, mezzanotte|3,00|

> [!CAUTION]
> Si noti che poiché 6:00 AM è sempre rappresentato da un valore frazionario 0,25 indipendentemente dal fatto che l'intero che rappresenta il giorno sia positivo (dopo il 30 dicembre, 1899) o negativo (prima del 30 dicembre 1899), un semplice confronto a virgola mobile sarebbe erroneamente ordinare qualsiasi DATA che rappresenta le 6:00 AM in un giorno precedente al 30/12/1899 *come più tardi* di un DATE che rappresenta 7:00 AM in quello stesso giorno.

Ulteriori informazioni sui problemi relativi `COleDateTime` alla DATA e ai tipi sono disponibili in [COleDateTime Class](../atl-mfc-shared/reference/coledatetime-class.md) e [Date and Time: Automation Support](../atl-mfc-shared/date-and-time-automation-support.md).

## <a name="see-also"></a>Vedere anche

[Data e ora](../atl-mfc-shared/date-and-time.md)<br/>
[Classe COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)

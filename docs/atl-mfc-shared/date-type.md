---
description: 'Altre informazioni su: tipo di data'
title: Tipo di data
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
ms.openlocfilehash: 6a0fd8f02abe5fd3ecb3695fd2715bfb3a573028
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167019"
---
# <a name="date-type"></a>Tipo di data

Il tipo di data viene implementato utilizzando un numero a virgola mobile a 8 byte. I giorni sono rappresentati da incrementi numeri interi a partire dal 30 dicembre 1899, mezzanotte come ora zero. I valori di ora sono rappresentati dal valore assoluto della parte frazionaria del numero. Nella tabella seguente vengono illustrate diverse date con il relativo tipo di data equivalente numerico:

|Data e ora|Rappresentazione|
|-------------------|--------------------|
|30 dicembre 1899, mezzanotte|0,00|
|1 gennaio 1900, mezzanotte|2,00|
|4 gennaio 1900, mezzanotte|5,00|
|4 gennaio 1900, 6.00|5.25|
|4 gennaio 1900, mezzogiorno|5,50|
|4 gennaio 1900, 21.00|5.875|

Il tipo di data della data, così come la `COleDateTime` classe, rappresenta le date e le ore come una riga di numeri classica. La `COleDateTime` classe contiene diversi metodi per la modifica dei valori di data, inclusa la conversione a e da altri formati di data comuni.

Quando si utilizzano questi formati di data e ora in automazione, è necessario tenere presenti i punti seguenti:

- Le date vengono specificate nell'ora locale; la sincronizzazione deve essere eseguita manualmente quando si utilizzano date in fusi orari diversi.

- I tipi di data non rappresentano l'ora legale.

- La sequenza temporale della data diventa discontinui per i valori di data minori di 0 (prima del 30 dicembre 1899). Questo è dovuto al fatto che la parte di numero intero del valore della data viene considerata firmata, mentre la parte frazionaria viene considerata come senza segno. In altre parole, la parte di numero intero del valore date può essere positiva o negativa, mentre la parte frazionaria del valore della data viene sempre aggiunta alla data logica complessiva. La tabella seguente illustra alcuni esempi:

|Data e ora|Rappresentazione|
|-------------------|--------------------|
|27 dicembre 1899, mezzanotte|-3.00|
|28 dicembre 1899, mezzogiorno|-2.50|
|28 dicembre 1899, mezzanotte|-2.00|
|29 dicembre 1899, mezzanotte|-1.00|
|30 dicembre 1899, 18:00|-0.75|
|30 dicembre 1899, mezzogiorno|-0.50|
|30 dicembre 1899, 6.00|-0.25|
|30 dicembre 1899, mezzanotte|0,00|
|30 dicembre 1899, 6.00|0,25|
|30 dicembre 1899, mezzogiorno|0.50|
|30 dicembre 1899, 18:00|0,75|
|31 dicembre 1899, mezzanotte|1,00|
|1 gennaio 1900, mezzanotte|2,00|
|1 gennaio 1900, mezzogiorno|2,50|
|2 gennaio 1900, mezzanotte|3,00|

> [!CAUTION]
> Si noti che poiché 6:00 AM è sempre rappresentato da un valore frazionario 0,25, indipendentemente dal fatto che il valore integer che rappresenta il giorno sia positivo (dopo il 30 dicembre 1899) o negativo (prima del 30 dicembre 1899), un semplice confronto a virgola mobile potrebbe ordinare erroneamente qualsiasi data che rappresenta le *ore di 6:00* in un giorno precedente a 12/30/1899, oltre a una data che rappresenta il

Per ulteriori informazioni sui problemi relativi alla data e ai tipi, vedere la `COleDateTime` [classe COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) e la [data e l'ora: supporto di automazione](./date-and-time.md).

## <a name="see-also"></a>Vedi anche

[Data e ora](../atl-mfc-shared/date-and-time.md)<br/>
[Classe COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)

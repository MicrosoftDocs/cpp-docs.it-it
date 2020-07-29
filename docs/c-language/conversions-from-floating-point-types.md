---
title: Conversioni dai tipi a virgola mobile
ms.date: 10/02/2019
helpviewer_keywords:
- converting floating point
- floating-point conversion
ms.assetid: 96804c8e-fa3b-4742-9006-0082ed9e57f2
ms.openlocfilehash: 72d0f95a6e48dcf0a5e8fea3757e85f9a03bf7e4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227894"
---
# <a name="conversions-from-floating-point-types"></a>Conversioni dai tipi a virgola mobile

Un valore a virgola mobile convertito in un altro tipo a virgola mobile subisce alcuna modifica nel valore se il valore originale è rappresentabile esattamente nel tipo di risultato. Se il valore originale è numerico ma non è rappresentabile esattamente, il risultato è il valore successivo o successivo più basso rappresentabile. Vedere [limiti sulle costanti a](../c-language/limits-on-floating-point-constants.md) virgola mobile per l'intervallo di tipi a virgola mobile.

Un valore a virgola mobile convertito in un tipo integrale viene innanzitutto troncato ignorando qualsiasi valore frazionario. Se il valore troncato è rappresentabile nel tipo di risultato, il risultato deve essere tale valore. Quando non è rappresentabile, il valore del risultato non è definito.

**Specifico di Microsoft**

I compilatori Microsoft usano la rappresentazione binary32 IEEE-754 per **`float`** i valori e la rappresentazione binary64 per **`long double`** e **`double`** . Poiché **`long double`** e **`double`** utilizzano la stessa rappresentazione, hanno lo stesso intervallo e la stessa precisione.

Quando il compilatore converte un **`double`** **`long double`** numero a virgola mobile o in un oggetto **`float`** , il risultato viene arrotondato in base ai controlli dell'ambiente a virgola mobile, il cui valore predefinito è "arrotonda al più vicino". Se un valore numerico è troppo alto o troppo basso per essere rappresentato come valore numerico **`float`** , il risultato della conversione è un infinito positivo o negativo in base al segno del valore originale e viene generata un'eccezione di overflow, se abilitata.

Quando si esegue la conversione in tipi Integer, il risultato di una conversione in un tipo inferiore a **`long`** è il risultato della conversione del valore in **`long`** , quindi la conversione nel tipo di risultato.

Per la conversione in tipi Integer almeno pari a **`long`** , una conversione di un valore troppo alto o troppo basso per essere rappresentata nel tipo di risultato può restituire uno dei valori seguenti:

- Il risultato può essere un *valore sentinel*, che rappresenta il valore rappresentabile più lontano da zero. Per i tipi con segno, è il valore più basso rappresentabile (0x800... 0). Per i tipi senza segno, è il valore più elevato rappresentabile (0xFF... F).

- Il risultato può essere *saturato*, in cui i valori troppo alti per rappresentare vengono convertiti nel valore rappresentabile più elevato e i valori troppo bassi per rappresentare vengono convertiti nel valore più basso rappresentabile. Uno di questi due valori viene usato anche come valore sentinel.

- Per la conversione in **`unsigned long`** o **`unsigned long long`** , il risultato della conversione di un valore non compreso nell'intervallo può essere un valore diverso dal valore massimo o minimo rappresentabile. Se il risultato è un valore sentinel o saturato oppure non dipende dalle opzioni del compilatore e dall'architettura di destinazione. Le versioni future del compilatore possono invece restituire un valore saturato o Sentinel.

**TERMINA specifica Microsoft**

Nella tabella seguente sono riepilogate le conversioni dai tipi a virgola mobile.

## <a name="table-of-conversions-from-floating-point-types"></a>Tabella delle conversioni dai tipi a virgola mobile

|From|A|Metodo|
|----------|--------|------------|
|**`float`**|**`char`**|Conversione in **`long`** ; conversione **`long`** in**`char`**|
|**`float`**|**`short`**|Conversione in **`long`** ; conversione **`long`** in**`short`**|
|**`float`**|**`int`**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **`int`** , il risultato non è definito.|
|**`float`**|**`long`**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **`long`** , il risultato non è definito.|
|**`float`**|**`long long`**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **`long long`** , il risultato non è definito.|
|**`float`**|**`unsigned char`**|Conversione in **`long`** ; conversione **`long`** in**`unsigned char`**|
|**`float`**|**`unsigned short`**|Conversione in **`long`** ; conversione **`long`** in**`unsigned short`**|
|**`float`**|**`unsigned`**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **`unsigned`** , il risultato non è definito.|
|**`float`**|**`unsigned long`**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **`unsigned long`** , il risultato non è definito.|
|**`float`**|**`unsigned long long`**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **`unsigned long long`** , il risultato non è definito.|
|**`float`**|**`double`**|Rappresentare come **`double`** .|
|**`float`**|**`long double`**|Rappresentare come **`long double`** .|
|**`double`**|**`char`**|Conversione in **`float`** ; conversione **`float`** in**`char`**|
|**`double`**|**`short`**|Conversione in **`float`** ; conversione **`float`** in**`short`**|
|**`double`**|**`int`**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **`int`** , il risultato non è definito.|
|**`double`**|**`long`**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **`long`** , il risultato non è definito.|
|**`double`**|**`unsigned char`**|Conversione in **`long`** ; conversione **`long`** in**`unsigned char`**|
|**`double`**|**`unsigned short`**|Conversione in **`long`** ; conversione **`long`** in**`unsigned short`**|
|**`double`**|**`unsigned`**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **`unsigned`** , il risultato non è definito.|
|**`double`**|**`unsigned long`**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **`unsigned long`** , il risultato non è definito.|
|**`double`**|**`unsigned long long`**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **`unsigned long long`** , il risultato non è definito.|
|**`double`**|**`float`**|Rappresentare come **`float`** . Se **`double`** il valore non può essere rappresentato esattamente come **`float`** , si verifica una perdita di precisione. Se il valore è troppo grande per essere rappresentato come **`float`** , il risultato è indefinito.|
|**`double`**|**`long double`**|Il **`long double`** valore viene considerato come **`double`** .|

Le conversioni da **`long double`** seguono lo stesso metodo delle conversioni da **`double`** .

## <a name="see-also"></a>Vedere anche

[Conversioni di assegnazione](../c-language/assignment-conversions.md)

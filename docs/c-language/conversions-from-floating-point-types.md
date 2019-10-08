---
title: Conversioni dai tipi a virgola mobile
ms.date: 10/02/2019
helpviewer_keywords:
- converting floating point
- floating-point conversion
ms.assetid: 96804c8e-fa3b-4742-9006-0082ed9e57f2
ms.openlocfilehash: c2f7c25015b36545f969796a1f85d355d715427a
ms.sourcegitcommit: c51b2c665849479fa995bc3323a22ebe79d9d7ce
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/07/2019
ms.locfileid: "71998708"
---
# <a name="conversions-from-floating-point-types"></a>Conversioni dai tipi a virgola mobile

Un valore a virgola mobile convertito in un altro tipo a virgola mobile subisce alcuna modifica nel valore se il valore originale è rappresentabile esattamente nel tipo di risultato. Se il valore originale è numerico ma non è rappresentabile esattamente, il risultato è il valore successivo o successivo più basso rappresentabile. Vedere [limiti sulle costanti a](../c-language/limits-on-floating-point-constants.md) virgola mobile per l'intervallo di tipi a virgola mobile.

Un valore a virgola mobile convertito in un tipo integrale viene innanzitutto troncato ignorando qualsiasi valore frazionario. Se il valore troncato è rappresentabile nel tipo di risultato, il risultato deve essere tale valore. Quando non è rappresentabile, il valore del risultato non è definito.

**Sezione specifica Microsoft**

I compilatori Microsoft usano la rappresentazione binary32 IEEE-754 per i valori **float** e la rappresentazione binary64 per **long double** e **Double**. Poiché **long double** e **Double** usano la stessa rappresentazione, hanno lo stesso intervallo e la stessa precisione.

Quando il compilatore converte un numero a virgola mobile **Double** o **long double** in un oggetto **float**, il risultato viene arrotondato in base ai controlli dell'ambiente a virgola mobile, il cui valore predefinito è "round to even più vicino". Se un valore numerico è troppo alto o troppo basso per essere rappresentato come valore **float** numerico, il risultato della conversione è un infinito positivo o negativo in base al segno del valore originale e viene generata un'eccezione di overflow, se abilitata.

Quando si esegue la conversione in tipi Integer, il risultato di una conversione in un tipo minore di **Long** è il risultato della conversione del valore in **Long**, quindi la conversione nel tipo di risultato.

Per la conversione in tipi Integer almeno la cui **lunghezza è lunga**, una conversione di un valore troppo alto o troppo basso per essere rappresentata nel tipo di risultato può restituire uno dei valori seguenti:

- Il risultato può essere un *valore sentinel*, che rappresenta il valore rappresentabile più lontano da zero. Per i tipi con segno, è il valore più basso rappresentabile (0x800... 0). Per i tipi senza segno, è il valore più elevato rappresentabile (0xFF... F).

- Il risultato può essere *saturato*, in cui i valori troppo alti per rappresentare vengono convertiti nel valore rappresentabile più elevato e i valori troppo bassi per rappresentare vengono convertiti nel valore più basso rappresentabile. Uno di questi due valori viene usato anche come valore sentinel.

- Per la conversione in **unsigned long** o **unsigned**Long Long, il risultato della conversione di un valore non compreso nell'intervallo può essere un valore diverso dal valore rappresentativo massimo o minimo. Se il risultato è un valore sentinel o saturato oppure non dipende dalle opzioni del compilatore e dall'architettura di destinazione. Le versioni future del compilatore possono invece restituire un valore saturato o Sentinel.

**Fine sezione specifica Microsoft**

Nella tabella seguente sono riepilogate le conversioni dai tipi a virgola mobile.

## <a name="table-of-conversions-from-floating-point-types"></a>Tabella delle conversioni dai tipi a virgola mobile

|Da|A|Metodo|
|----------|--------|------------|
|**float**|**char**|Convertire a **long**; convertire **long** a **char**|
|**float**|**short**|Convertire a **long**; convertire **long** a **short**|
|**float**|**int**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **int**, il risultato non è definito.|
|**float**|**long**|Troncare in corrispondenza del separatore decimale. Se il valore risultante è troppo grande per essere rappresentato come **long** il risultato è indefinito.|
|**float**|**long long**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato **a lungo,** il risultato non è definito.|
|**float**|**unsigned char**|Converti in **Long**; Converte **Long** in **unsigned char**|
|**float**|**unsigned short**|Convertire a **long**; convertire **long** a **unsigned short**|
|**float**|**unsigned**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **senza segno**, il risultato è indefinito.|
|**float**|**unsigned long**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **unsigned long**, il risultato non è definito.|
|**float**|**Long Long senza segno**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **unsigned**Long Long, il risultato non è definito.|
|**float**|**double**|Rappresenta come **Double**.|
|**float**|**long double**|Rappresenta come **valore long double**.|
|**double**|**char**|Convertire a **float**; convertire **float** a **char**|
|**double**|**short**|Convertire a **float**; convertire **float** a **short**|
|**double**|**int**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **int**, il risultato non è definito.|
|**double**|**long**|Troncare in corrispondenza del separatore decimale. Se il valore risultante è troppo grande per essere rappresentato come **long** il risultato è indefinito.|
|**double**|**unsigned char**|Converti in **Long**; Converte **Long** in **unsigned char**|
|**double**|**unsigned short**|Convertire a **long**; convertire **long** a **unsigned short**|
|**double**|**unsigned**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **senza segno**, il risultato è indefinito.|
|**double**|**unsigned long**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **unsigned long**, il risultato non è definito.|
|**double**|**Long Long senza segno**|Troncare in corrispondenza del separatore decimale. Se il risultato è troppo grande per essere rappresentato come **unsigned**Long Long, il risultato non è definito.|
|**double**|**float**|Rappresentare come **float**. Se il valore **Double** non può essere rappresentato esattamente come **float**, si verifica una perdita di precisione. Se il valore è troppo grande per essere rappresentato come **float**, il risultato è indefinito.|
|**double**|**long double**|Il valore **long double** viene considerato come **double**.|

Le conversioni da **long double** seguono lo stesso metodo delle conversioni da **Double**.

## <a name="see-also"></a>Vedere anche

[Conversioni di assegnazione](../c-language/assignment-conversions.md)

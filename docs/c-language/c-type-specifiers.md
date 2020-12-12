---
description: 'Altre informazioni su: identificatori di tipi C'
title: Identificatori di tipi C
ms.date: 01/29/2018
helpviewer_keywords:
- type specifiers, C
- specifiers, type
ms.assetid: fbe13441-04c3-4829-b047-06d374adc2b6
ms.openlocfilehash: afff33e385564f5ef8d04988255a239135be13b0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97214204"
---
# <a name="c-type-specifiers"></a>Identificatori di tipi C

Gli identificatori di tipo nelle dichiarazioni definiscono il tipo di una dichiarazione di funzione o variabile.

## <a name="syntax"></a>Sintassi

*Type-specifier*: &nbsp; &nbsp; &nbsp; &nbsp; **`void`** &nbsp; &nbsp; &nbsp; &nbsp; **`char`** &nbsp; &nbsp; &nbsp; &nbsp; **`short`** &nbsp; &nbsp; &nbsp; &nbsp; **`int`** &nbsp; &nbsp; &nbsp; &nbsp; **`long`** &nbsp; &nbsp; &nbsp; &nbsp; **`float`** &nbsp; &nbsp; &nbsp; &nbsp; **`double`** &nbsp; &nbsp; &nbsp; &nbsp; **`signed`** &nbsp; &nbsp; &nbsp; &nbsp; **`unsigned`** &nbsp; &nbsp; &nbsp; &nbsp; *struct-or-Union-specifier* &nbsp; &nbsp; &nbsp; &nbsp; *enum-specifier* &nbsp; &nbsp; &nbsp; &nbsp; *typedef-Name*

I **`signed char`** **`signed int`** tipi,, **`signed short int`** e **signed long int** , insieme alle relative **`unsigned`** controparti e **`enum`** , sono denominati tipi *integrali* . Gli **`float`** **`double`** **`long double`** identificatori di tipo, e sono detti tipi a *virgola mobile* o a *virgola mobile* . È possibile utilizzare qualsiasi identificatore di tipo a virgola mobile o integrale in una dichiarazione di funzione o variabile. Se un *identificatore di tipo* non viene specificato in una dichiarazione, viene considerato come **`int`** .

Le parole chiave facoltative **`signed`** e **`unsigned`** possono precedere o seguire uno dei tipi integrali, ad eccezione di **`enum`** e possono essere usate da sole come identificatori di tipo, nel qual caso vengono riconosciute **`signed int`** rispettivamente come e **`unsigned int`** . Se utilizzata da sola, **`int`** si presuppone che la parola chiave sia **`signed`** . Quando vengono utilizzate da sole, le parole chiave **`long`** e **`short`** vengono riconosciute come **long int** e **`short int`** .

I tipi di enumerazione sono considerati tipi di base. Gli identificatori di tipo per i tipi di enumerazione sono illustrati in [Dichiarazioni di enumerazioni](../c-language/c-enumeration-declarations.md).

La parola chiave **`void`** dispone di tre utilizzi: specificare un tipo restituito dalla funzione, specificare un elenco di tipi di argomento per una funzione che non accetta argomenti e specificare un puntatore a un tipo non specificato. È possibile utilizzare il **`void`** tipo per dichiarare le funzioni che non restituiscono valori o per dichiarare un puntatore a un tipo non specificato. Vedere [argomenti](../c-language/arguments.md) per informazioni su **`void`** quando viene visualizzato da solo all'interno delle parentesi che seguono il nome di una funzione.

**Specifico di Microsoft**

Il controllo dei tipi è ora conforme a ANSI, il che significa che il tipo **`short`** e il tipo **`int`** sono tipi distinti. Ad esempio, questa è una ridefinizione del compilatore Microsoft C che è stata accettata da versioni precedenti del compilatore.

```C
int   myfunc();
short myfunc();
```

Nell'esempio seguente viene inoltre generato un avviso su un riferimento indiretto a tipi diversi:

```C
int *pi;
short *ps;

ps = pi;  /* Now generates warning */
```

Il compilatore Microsoft C genera inoltre gli avvisi per le differenze nel segno. Ad esempio:

```C
signed int *pi;
unsigned int *pu

pi = pu;  /* Now generates warning */
```

Le **`void`** espressioni di tipo vengono valutate per gli effetti collaterali. Non è possibile utilizzare il valore (inesistente) di un'espressione con tipo **`void`** in alcun modo, né convertire un' **`void`** espressione (mediante conversione implicita o esplicita) in un qualsiasi tipo eccetto **`void`** . Se si usa un'espressione di qualsiasi altro tipo in un contesto in cui **`void`** è richiesta un'espressione, il valore viene ignorato.

Per essere conforme alla specifica ANSI <strong>, \* \* void</strong> non può essere usato come <strong>int \* \* </strong>. **`void`** <strong>\*</strong> Può essere usato solo come puntatore a un tipo non specificato.

**TERMINA specifica Microsoft**

È possibile creare identificatori di tipo aggiuntivi con **`typedef`** dichiarazioni, come descritto in [dichiarazioni typedef](../c-language/typedef-declarations.md). Per informazioni sulle dimensioni di ogni tipo vedere [Archiviazione di tipi di base](../c-language/storage-of-basic-types.md).

## <a name="see-also"></a>Vedi anche

[Dichiarazioni e tipi](../c-language/declarations-and-types.md)

---
title: Semantica delle espressioni
ms.date: 11/19/2018
helpviewer_keywords:
- grammar, expressions
- expressions [C++], semantics
- expression evaluation
- expression evaluation, about expression evaluation
ms.assetid: 4a792154-533b-48b9-8709-31bfc170f0a7
ms.openlocfilehash: 43bcd98e0dbf14dada2643c0b731d3f6bae863e6
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223603"
---
# <a name="semantics-of-expressions"></a>Semantica delle espressioni

Le espressioni vengono valutate in base alla precedenza e al raggruppamento dei relativi operatori ([Precedenza e associatività](../cpp/cpp-built-in-operators-precedence-and-associativity.md) degli operatori nelle [convenzioni lessicali](../cpp/lexical-conventions.md), Mostra le relazioni imposte dagli operatori C++ sulle espressioni).

## <a name="order-of-evaluation"></a>Ordine di valutazione

Considerare questo esempio:

```cpp
// Order_of_Evaluation.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;
int main()
{
    int a = 2, b = 4, c = 9;

    cout << a + b * c << "\n";
    cout << a + (b * c) << "\n";
    cout << (a + b) * c << "\n";
}
```

```Output
38
38
54
```

![Ordine di valutazione di un'espressione](../cpp/media/vc38zv1.gif "Ordine di valutazione di un'espressione") <br/>
Ordine di valutazione delle espressioni

L'ordine in cui viene valutata l'espressione nella figura riportata sopra è determinato dalla precedenza e dall'associatività degli operatori:

1. La moltiplicazione (*) ha la massima precedenza in questa espressione, pertanto la sottoespressione `b * c` viene valutata per prima.

1. L'addizione (+) ha la precedenza più elevata successiva, pertanto `a` viene aggiunto al prodotto di `b` e `c`.

1. Lo spostamento a sinistra (<<) ha la precedenza più bassa nell'espressione, ma sono presenti due occorrenze. Poiché l'operatore di spostamento a sinistra raggruppa gli elementi da sinistra verso destra, viene prima valutata la sottoespressione sinistra, quindi la sottoespressione destra.

Quando per raggruppare le sottoespressioni vengono utilizzate le parentesi, queste alterano la precedenza e anche l'ordine in cui l'espressione viene valutata, come illustrato di seguito.

![Ordine di valutazione di un'espressione con parentesi](../cpp/media/vc38zv2.gif "Ordine di valutazione di un'espressione con parentesi") <br/>
Ordine di valutazione delle espressioni tra parentesi

Le espressioni come quelle nella figura riportata sopra vengono valutate esclusivamente per i relativi effetti collaterali (in questo caso, per trasferire le informazioni del dispositivo di uscita di output standard).

## <a name="notation-in-expressions"></a>Annotazioni nelle espressioni

Il linguaggio C++ specifica determinate compatibilità quando specifica gli operandi. Nella tabella seguente sono illustrati i tipi di operandi accettabili dagli operatori che richiedono operandi di tipo *Type*.

### <a name="operand-types-acceptable-to-operators"></a>Tipi di operando accettabili dagli operatori

|Tipo previsto|Tipi consentiti|
|-------------------|-------------------|
|*type*|**`const`***tipo* di<br /> **`volatile`***tipo* di<br /> *tipo*&<br /> **`const`***tipo* di&<br /> **`volatile`***tipo* di&<br /> `volatile const` *type*<br /> `volatile const`*tipo* di&|
|*type* \*|*type* \*<br /> **`const`***tipo* di\*<br /> **`volatile`***tipo* di\*<br /> `volatile const` *type* \*|
|**`const`***tipo* di|*type*<br /> **`const`***tipo* di<br />**`const`***tipo* di&|
|**`volatile`***tipo* di|*type*<br /> **`volatile`***tipo* di<br /> **`volatile`***tipo* di&|

Poiché le regole precedenti possono essere sempre utilizzate in combinazione, qualora sia previsto un puntatore, è possibile fornire un puntatore di tipo const a un oggetto di tipo volatile.

## <a name="ambiguous-expressions"></a>Espressioni ambigue

Alcune espressioni sono ambigue nel relativo significato. Queste espressioni si verificano più frequentemente quando un valore di un oggetto viene modificato più volte nella stessa espressione. Queste espressioni si basano su un ordine particolare di valutazione in cui il linguaggio non ne definisce uno. Prendere in considerazione gli esempi seguenti:

```
int i = 7;

func( i, ++i );
```

Il linguaggio C++ non garantisce l'ordine in cui gli argomenti a una chiamata di funzione vengano valutati. Pertanto, nell'esempio precedente, `func` potrebbe ottenere i valori 7 e 8 o 8 e 8 per i relativi parametri, a seconda se i parametri vengono valutati da sinistra verso destra o da destra verso sinistra.

## <a name="c-sequence-points-microsoft-specific"></a>Punti di sequenza C++ (specifico di Microsoft)

Un'espressione può modificare il valore di un oggetto una sola volta tra "punti di sequenza" consecutivi.

La definizione del linguaggio C++ attualmente non specifica i punti di sequenza. In Microsoft C++ vengono usati gli stessi punti di sequenza di ANSI C per qualsiasi espressione contenente gli operatori C, ma non gli operatori di overload. Quando gli operatori sono sottoposti a overload, la semantica cambia dalla sequenza dell'operatore nella sequenza della chiamata di funzione. In Microsoft C++ vengono usati i seguenti punti di sequenza:

- Operando sinistro dell'operatore logico AND (&&). L'operando sinistro dell'operatore logico AND viene valutato completamente e, prima di continuare, tutti gli effetti collaterali vengono eseguiti. Non è certo che l'operando destro dell'operatore logico AND venga valutato.

- Operando sinistro dell'operatore logico OR (&#124;&#124;). L'operando sinistro dell'operatore logico OR viene valutato completamente e, prima di continuare, tutti gli effetti collaterali vengono eseguiti. Non è certo che l'operando destro dell'operatore logico OR venga valutato.

- L'operando sinistro dell'operatore virgola. L'operando sinistro dell'operatore virgola viene valutato completamente e, prima di continuare, tutti gli effetti collaterali vengono eseguiti. Entrambi gli operandi dell'operatore virgola vengono sempre valutati.

- Operatore chiamata di funzione. L'espressione di chiamata di funzione e tutti gli argomenti di una funzione, inclusi gli argomenti predefiniti, vengono valutati e tutti gli effetti collaterali vengono eseguiti prima dell'accesso alla funzione. Non esiste un ordine di valutazione specificato tra gli argomenti o l'espressione di chiamata di funzione.

- Primo operando dell'operatore condizionale. Il primo operando sinistro dell'operatore condizionale viene valutato completamente e prima di continuare tutti gli effetti collaterali vengono eseguiti.

- La fine di un'espressione di inizializzazione completa, come la terminazione di un'inizializzazione in un'istruzione di dichiarazione.

- Espressione in un'istruzione di espressione. Le istruzioni di espressione sono composte da un'espressione facoltativa, seguita da un punto e virgola (;). L'espressione viene valutata completamente per verificare i relativi effetti collaterali.

- L'espressione di controllo in un'istruzione di selezione (if o switch). L'espressione viene valutata completamente e tutti gli effetti collaterali vengono completati prima che l'elemento dipendente dalla selezione venga eseguito.

- L'espressione di controllo di un'istruzione while o do. L'espressione viene valutata completamente e tutti gli effetti collaterali vengono eseguiti prima che eventuali istruzioni presenti nell'iterazione successiva del ciclo while o do vengano completate.

- Ciascuna delle tre espressioni di un'istruzione for. Ogni espressione viene valutata completamente e tutti gli effetti collaterali vengono completati prima di passare all'espressione successiva.

- L'espressione in un'istruzione return. L'espressione viene valutata completamente e tutti gli effetti collaterali vengono eseguiti prima che il controllo torni alla funzione chiamante.

## <a name="see-also"></a>Vedere anche

[Espressioni](../cpp/expressions-cpp.md)

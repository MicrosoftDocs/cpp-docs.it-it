---
title: volatile (C++)
ms.date: 05/07/2019
f1_keywords:
- volatile_cpp
helpviewer_keywords:
- interrupt handlers and volatile keyword [C++]
- volatile keyword [C++]
- volatile objects
- objects [C++], volatile
ms.assetid: 81db4a85-ed5a-4a2c-9a53-5d07a771d2de
ms.openlocfilehash: 572fe244a076492e3f3316dd6d00f6fe7d7c3c9c
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857203"
---
# <a name="volatile-c"></a>volatile (C++)

Qualificatore di tipo che è possibile utilizzare per dichiarare che un oggetto può essere modificato nel programma dall'hardware.

## <a name="syntax"></a>Sintassi

```
volatile declarator ;
```

## <a name="remarks"></a>Note

È possibile usare l'opzione del compilatore [/volatile](../build/reference/volatile-volatile-keyword-interpretation.md) per modificare il modo in cui il compilatore interpreta questa parola chiave.

Visual Studio interpreta la parola chiave **volatile** in modo diverso a seconda dell'architettura di destinazione. Per ARM, se non è specificata alcuna opzione del compilatore **/volatile** , il compilatore esegue come se **/volatile: ISO** fosse specificato. Per le architetture diverse da ARM, se non è specificata alcuna opzione del compilatore **/volatile** , il compilatore viene eseguito come se **/volatile: ms** fosse specificato. per le architetture diverse da ARM, è pertanto consigliabile specificare **/volatile: ISO**e utilizzare le primitive di sincronizzazione esplicite e le funzioni intrinseche del compilatore quando si utilizza la memoria condivisa tra i thread.

È possibile utilizzare il qualificatore **volatile** per fornire accesso a posizioni di memoria utilizzate da processi asincroni, ad esempio gestori di interrupt.

Quando **volatile** viene usato in una variabile che include anche la parola chiave [__restrict](../cpp/extension-restrict.md) , **volatile** ha la precedenza.

Se un membro **struct** è contrassegnato come **volatile**, **volatile** viene propagato all'intera struttura. Se una struttura non ha una lunghezza che può essere copiata sull'architettura corrente usando un'istruzione, **volatile** può essere completamente perduto sulla struttura.

La parola chiave **volatile** potrebbe non avere alcun effetto su un campo se si verifica una delle condizioni seguenti:

- La lunghezza del campo relativo alla parola chiave volatile supera la dimensione massima che ne consente la copia nell'architettura corrente mediante un'istruzione.

- La lunghezza dello **struct**contenitore più esterno, o se è un membro di uno **struct**annidato possibilmente, supera la dimensione massima che può essere copiata nell'architettura corrente usando un'istruzione.

Sebbene il processore non riordini gli accessi di memoria non memorizzabili nella cache, le variabili non memorizzabili nella cache devono essere contrassegnate come **volatili** per garantire che il compilatore non riordini gli accessi alla memoria.

Gli oggetti dichiarati come **volatili** non vengono utilizzati in determinate ottimizzazioni perché i relativi valori possono essere modificati in qualsiasi momento.  Il sistema legge sempre il valore corrente di un oggetto di tipo volatile, se richiesto, anche se un'istruzione precedente ha richiesto un valore dallo stesso oggetto.  Inoltre, il valore dell'oggetto viene scritto immediatamente nell'assegnazione.

## <a name="iso-compliant"></a>Conformità ISO

Se si ha familiarità con C# la parola chiave volatile o se si ha familiarità con il comportamento di **volatile** nelle C++ versioni precedenti del compilatore Microsoft (MSVC), tenere presente che la parola chiave **volatile** standard ISO C++ 11 è diversa ed è supportata in MSVC quando viene specificata l'opzione del compilatore [/volatile: ISO](../build/reference/volatile-volatile-keyword-interpretation.md) . Per ARM, l'opzione è specificata per impostazione predefinita. La parola chiave **volatile** nel codice standard ISO c++ 11 deve essere utilizzata solo per l'accesso all'hardware; non utilizzarlo per la comunicazione tra thread. Per la [ C++ ](../standard-library/cpp-standard-library-reference.md)comunicazione tra thread, usare meccanismi quali [std:: Atomic\<t >](../standard-library/atomic.md) dalla libreria standard.

## <a name="end-of-iso-compliant"></a>Fine della conformità ISO

**Sezione specifica Microsoft**

Quando viene usata l'opzione del compilatore **/volatile: ms** , per impostazione predefinita quando le architetture diverse da ARM sono destinate, il compilatore genera codice aggiuntivo per mantenere l'ordinamento tra i riferimenti agli oggetti volatili, oltre a mantenere l'ordinamento ai riferimenti ad altri oggetti globali. In particolare:

- La scrittura in un oggetto di tipo volatile (nota anche come scrittura di tipo volatile) presenta una semantica di rilascio, ovvero un riferimento a un oggetto globale o statico che preceda una scrittura in un oggetto volatile nella sequenza di istruzioni si verificherà prima della scrittura di tipo volatile nel file binario compilato.

- Una lettura di un oggetto volatile (nota anche come lettura di tipo volatile) presenta una semantica di acquisizione, ovvero, un riferimento a un oggetto globale o statico che segua una lettura della memoria volatile nella sequenza di istruzioni verrà generato dopo la lettura di tipo volatile nel file binario compilato.

In questo modo gli oggetti di tipo volatile possono essere utilizzati per blocchi e rilasci di memoria in applicazioni multithreading.

> [!NOTE]
>  Quando si basa sulla garanzia avanzata fornita quando si usa l'opzione del compilatore **/volatile: ms** , il codice non è portabile.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[const](../cpp/const-cpp.md)<br/>
[Puntatori const e volatile](../cpp/const-and-volatile-pointers.md)
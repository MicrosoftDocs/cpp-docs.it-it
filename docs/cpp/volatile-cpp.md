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
ms.openlocfilehash: 841b2e1e4ffbec87a170c45be8ad0cd0f831a0ef
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371904"
---
# <a name="volatile-c"></a>volatile (C++)

Qualificatore di tipo che è possibile utilizzare per dichiarare che un oggetto può essere modificato nel programma dall'hardware.

## <a name="syntax"></a>Sintassi

```
volatile declarator ;
```

## <a name="remarks"></a>Osservazioni

È possibile utilizzare l'opzione del compilatore [/volatile](../build/reference/volatile-volatile-keyword-interpretation.md) per modificare il modo in cui il compilatore interpreta questa parola chiave.

Visual Studio interpreta la parola chiave **volatile in** modo diverso a seconda dell'architettura di destinazione. Per ARM, se non viene specificata alcuna opzione del compilatore **/volatile,** il compilatore si comporta come se fosse specificata **l'opzione /volatile:iso.** Per le architetture diverse da ARM, se non viene specificata alcuna opzione del compilatore **/volatile,** il compilatore si comporta come se fosse specificata **/volatile:ms;** Pertanto, per le architetture diverse da ARM è consigliabile specificare **/volatile:iso**e utilizzare primitive di sincronizzazione esplicite e funzioni intrinseche del compilatore quando si ha a che fare con la memoria condivisa tra thread.

È possibile utilizzare il qualificatore **volatile** per fornire l'accesso alle posizioni di memoria utilizzate dai processi asincroni, ad esempio i gestori di interrupt.

Quando **volatile** viene utilizzato su una variabile che ha anche la parola chiave [__restrict,](../cpp/extension-restrict.md) **volatile** ha la precedenza.

Se un membro **struct** è contrassegnato come **volatile**, **volatile** viene propagato all'intera struttura. Se una struttura non ha una lunghezza che può essere copiata nell'architettura corrente utilizzando un'istruzione, **volatile** può essere completamente perso su tale struttura.

La parola chiave **volatile** potrebbe non avere alcun effetto su un campo se si verifica una delle seguenti condizioni:

- La lunghezza del campo relativo alla parola chiave volatile supera la dimensione massima che ne consente la copia nell'architettura corrente mediante un'istruzione.

- La lunghezza dello **struct**che lo contiene più esterno, o se si tratta di un membro di uno **struct**eventualmente annidato, supera la dimensione massima che può essere copiata nell'architettura corrente utilizzando un'istruzione.

Anche se il processore non riordina gli accessi alla memoria non memorizzabili nella cache, le variabili non memorizzabili nella cache devono essere contrassegnate come **volatili** per garantire che il compilatore non riordina gli accessi alla memoria.

Gli oggetti dichiarati **come volatili** non vengono utilizzati in determinate ottimizzazioni perché i relativi valori possono cambiare in qualsiasi momento.  Il sistema legge sempre il valore corrente di un oggetto di tipo volatile, se richiesto, anche se un'istruzione precedente ha richiesto un valore dallo stesso oggetto.  Inoltre, il valore dell'oggetto viene scritto immediatamente nell'assegnazione.

## <a name="iso-compliant"></a>Conformità ISO

Se si ha familiarità con la parola chiave volatile di C, o si ha familiarità con il comportamento di **volatile** nelle versioni precedenti del compilatore Microsoft C , tenere presente che la parola chiave **volatile** di ISO Standard è diversa ed è supportata in MSVC quando viene specificata l'opzione del compilatore [/volatile:iso.](../build/reference/volatile-volatile-keyword-interpretation.md) Per ARM, l'opzione è specificata per impostazione predefinita. La parola chiave **volatile** nel codice ISO Standard di C-11 deve essere utilizzata solo per l'accesso all'hardware; non utilizzarlo per la comunicazione tra thread. Per la comunicazione tra thread, utilizzare meccanismi quali [\<std::atomic T>](../standard-library/atomic.md) dalla libreria standard di [C.](../standard-library/cpp-standard-library-reference.md)

## <a name="end-of-iso-compliant"></a>Fine della conformità ISO

**Specifico di Microsoft**

Quando viene utilizzata l'opzione del compilatore **/volatile:ms,** per impostazione predefinita quando vengono utilizzate architetture diverse da ARM, il compilatore genera codice aggiuntivo per mantenere l'ordine tra i riferimenti a oggetti volatili oltre a mantenere l'ordine di riferimenti ad altri oggetti globali. In particolare:

- La scrittura in un oggetto di tipo volatile (nota anche come scrittura di tipo volatile) presenta una semantica di rilascio, ovvero un riferimento a un oggetto globale o statico che preceda una scrittura in un oggetto volatile nella sequenza di istruzioni si verificherà prima della scrittura di tipo volatile nel file binario compilato.

- Una lettura di un oggetto volatile (nota anche come lettura di tipo volatile) presenta una semantica di acquisizione, ovvero, un riferimento a un oggetto globale o statico che segua una lettura della memoria volatile nella sequenza di istruzioni verrà generato dopo la lettura di tipo volatile nel file binario compilato.

In questo modo gli oggetti di tipo volatile possono essere utilizzati per blocchi e rilasci di memoria in applicazioni multithreading.

> [!NOTE]
> Quando si basa sulla garanzia avanzata fornita quando viene utilizzata l'opzione del compilatore **/volatile:ms,** il codice non è portabile.

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[const](../cpp/const-cpp.md)<br/>
[Puntatori const e volatile](../cpp/const-and-volatile-pointers.md)

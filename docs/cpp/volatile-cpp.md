---
title: volatile (C++)
ms.date: 11/04/2016
f1_keywords:
- volatile_cpp
helpviewer_keywords:
- interrupt handlers and volatile keyword [C++]
- volatile keyword [C++]
- volatile objects
- objects [C++], volatile
ms.assetid: 81db4a85-ed5a-4a2c-9a53-5d07a771d2de
ms.openlocfilehash: 73243841b2ad02bcc165b2910ac54283028e6cf3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50664022"
---
# <a name="volatile-c"></a>volatile (C++)

Qualificatore di tipo che è possibile utilizzare per dichiarare che un oggetto può essere modificato nel programma dall'hardware.

## <a name="syntax"></a>Sintassi

```
volatile declarator ;
```

## <a name="remarks"></a>Note

È possibile usare la [/volatile](../build/reference/volatile-volatile-keyword-interpretation.md) opzione del compilatore per modificare la modalità con cui il compilatore interpreta questa parola chiave.

Visual Studio interpreta le **volatile** parola chiave in modo diverso a seconda dell'architettura di destinazione. Per ARM, se nessun **/volatile** è specificata l'opzione del compilatore, il compilatore esegue come se **/volatile:iso** sono state specificate. Per le architetture diverse da ARM, se nessun **/volatile** è specificata l'opzione del compilatore, il compilatore esegue come se **/volatile: MS** sono stati specificati; pertanto, per le architetture diverso da ARM è fortemente consiglia specificare **/volatile:iso**e utilizzare primitive esplicite di sincronizzazione e intrinseche al compilatore quando utilizzano con una memoria condivisa tra thread.

È possibile usare la **volatile** qualificatore per fornire l'accesso alle posizioni di memoria utilizzate dai processi asincroni, ad esempio gestori di interrupt.

Quando **volatile** viene usato in una variabile che dispone anche il [Restrict](../cpp/extension-restrict.md) parola chiave **volatile** ha la precedenza.

Se un **struct** membro è contrassegnato come **volatile**, quindi **volatile** viene propagata all'intera struttura. Se una struttura non ha una lunghezza che può essere copiata nell'architettura corrente mediante un'istruzione, **volatile** potrebbe essere completamente persa in tale struttura.

Il **volatile** (parola chiave) può non avere effetti su un campo se viene soddisfatta una delle condizioni seguenti:

- La lunghezza del campo relativo alla parola chiave volatile supera la dimensione massima che ne consente la copia nell'architettura corrente mediante un'istruzione.

- La lunghezza dell'oggetto più esterno contenente **struct**, o se è un membro di un eventualmente annidato **struct**, supera le dimensioni massime che possono essere copiate nell'architettura corrente mediante un'istruzione.

Anche se il processore non riordini gli accessi alla memoria non memorizzabili nella cache, le variabili non memorizzabili nella cache devono essere contrassegnate come **volatile** per garantire che il compilatore non riordini la memoria consente di accedere.

Gli oggetti che vengono dichiarati come **volatile** non vengono utilizzati in determinate ottimizzazioni perché i valori possono cambiare in qualsiasi momento.  Il sistema legge sempre il valore corrente di un oggetto di tipo volatile, se richiesto, anche se un'istruzione precedente ha richiesto un valore dallo stesso oggetto.  Inoltre, il valore dell'oggetto viene scritto immediatamente nell'assegnazione.

## <a name="iso-compliant"></a>Conformità ISO

Se si ha familiarità con il linguaggio c# parola chiave volatile o familiarità con il comportamento del **volatili** nelle versioni precedenti di Visual C++, tenere presente che il ISO Standard C++11 **volatile** (parola chiave) è diverso ed è supportato in Visual Studio quando la [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) è specificata l'opzione del compilatore. Per ARM, l'opzione è specificata per impostazione predefinita. Il **volatile** parola chiave in C + + 11 codice dello Standard ISO deve essere utilizzato solo per accessi hardware e non usarla per la comunicazione tra thread. Per la comunicazione tra thread, usare meccanismi come [std:: Atomic\<T >](../standard-library/atomic.md) dal [della libreria Standard C++](../standard-library/cpp-standard-library-reference.md).

## <a name="end-of-iso-compliant"></a>Fine della conformità ISO

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

Quando la **/volatile: MS** viene utilizzata l'opzione del compilatore: per impostazione predefinita quando vengono considerati come destinazione le architetture diverse da ARM, il compilatore genera codice aggiuntivo per mantenere l'ordine tra i riferimenti a oggetti volatili oltre a gestire ordine a riferimenti ad altri oggetti globali. In particolare:

- La scrittura in un oggetto di tipo volatile (nota anche come scrittura di tipo volatile) presenta una semantica di rilascio, ovvero un riferimento a un oggetto globale o statico che preceda una scrittura in un oggetto volatile nella sequenza di istruzioni si verificherà prima della scrittura di tipo volatile nel file binario compilato.

- Una lettura di un oggetto volatile (nota anche come lettura di tipo volatile) presenta una semantica di acquisizione, ovvero, un riferimento a un oggetto globale o statico che segua una lettura della memoria volatile nella sequenza di istruzioni verrà generato dopo la lettura di tipo volatile nel file binario compilato.

In questo modo gli oggetti di tipo volatile possono essere utilizzati per blocchi e rilasci di memoria in applicazioni multithreading.

> [!NOTE]
>  Quando si basa sulla garanzia avanzata disponibile quando il **/volatile: MS** viene utilizzata l'opzione del compilatore, il codice non portabile.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[const](../cpp/const-cpp.md)<br/>
[Puntatori const e volatile](../cpp/const-and-volatile-pointers.md)
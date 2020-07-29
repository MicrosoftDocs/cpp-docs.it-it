---
title: naked (C++)
ms.date: 11/04/2016
f1_keywords:
- naked_cpp
helpviewer_keywords:
- __declspec keyword [C++], naked
- naked __declspec keyword
ms.assetid: 69723241-05e1-439b-868e-20a83a16ab6d
ms.openlocfilehash: cff2455608966886e9c5b07039dff439538caefe
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227335"
---
# <a name="naked-c"></a>naked (C++)

**Specifico di Microsoft**

Per le funzioni dichiarate con l' **`naked`** attributo, il compilatore genera codice senza codice di prologo e di epilogo. È possibile utilizzare questa funzionalità per scrivere le proprie sequenze di codice di epilogo o di prologo utilizzando codice assembler inline. Le funzioni con attributo naked sono particolarmente utili nella scrittura di driver di dispositivi virtuali.  Si noti che l' **`naked`** attributo è valido solo su x86 e ARM e non è disponibile in x64.

## <a name="syntax"></a>Sintassi

```
__declspec(naked) declarator
```

## <a name="remarks"></a>Osservazioni

Poiché l' **`naked`** attributo è pertinente solo per la definizione di una funzione e non è un modificatore di tipo, le funzioni naked devono usare la sintassi degli attributi estesa e la parola chiave [__declspec](../cpp/declspec.md) .

Il compilatore non può generare una funzione inline per una funzione contrassegnata con l'attributo naked, anche se la funzione è contrassegnata anche con la parola chiave [__forceinline](inline-functions-cpp.md) .

Il compilatore genera un errore se l' **`naked`** attributo viene applicato a un valore diverso dalla definizione di un metodo non membro.

## <a name="examples"></a>Esempi

Questo codice definisce una funzione con l' **`naked`** attributo:

```
__declspec( naked ) int func( formal_parameters ) {}
```

Oppure, in alternativa:

```
#define Naked __declspec( naked )
Naked int func( formal_parameters ) {}
```

L' **`naked`** attributo influiscono solo sulla natura della generazione di codice del compilatore per le sequenze di prologo e di epilogo della funzione. Tale attributo non influisce sul codice generato per chiamare tali funzioni. Pertanto, l' **`naked`** attributo non è considerato parte del tipo della funzione e i puntatori a funzione non possono avere l' **`naked`** attributo. Inoltre, l' **`naked`** attributo non può essere applicato a una definizione dei dati. Questo esempio di codice genera ad esempio un errore:

```
__declspec( naked ) int i;
// Error--naked attribute not permitted on data declarations.
```

L' **`naked`** attributo è rilevante solo per la definizione della funzione e non può essere specificato nel prototipo della funzione. Ad esempio, questa dichiarazione genera un errore del compilatore:

```
__declspec( naked ) int func();  // Error--naked attribute not permitted on function declarations
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Chiamate di funzioni naked](../cpp/naked-function-calls.md)

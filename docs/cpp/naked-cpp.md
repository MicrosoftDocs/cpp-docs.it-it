---
title: naked (C++)
ms.date: 11/04/2016
f1_keywords:
- naked_cpp
helpviewer_keywords:
- __declspec keyword [C++], naked
- naked __declspec keyword
ms.assetid: 69723241-05e1-439b-868e-20a83a16ab6d
ms.openlocfilehash: 951760d7f9566c084bbe3d5a574d006020576c61
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64345000"
---
# <a name="naked-c"></a>naked (C++)

**Sezione specifica Microsoft**

Per le funzioni dichiarate con il **naked** attributo, il compilatore genera codice senza codice di prologo ed epilogo. È possibile utilizzare questa funzionalità per scrivere le proprie sequenze di codice di epilogo o di prologo utilizzando codice assembler inline. Le funzioni con attributo naked sono particolarmente utili nella scrittura di driver di dispositivi virtuali.  Si noti che il **naked** attributo è valido solo per x86 e ARM e non è disponibile su x64.

## <a name="syntax"></a>Sintassi

```
__declspec(naked) declarator
```

## <a name="remarks"></a>Note

Poiché il **naked** attributo rilevante solo per la definizione di una funzione e non è un modificatore di tipo, le funzioni naked devono usare la sintassi degli attributi estesa e il [declspec](../cpp/declspec.md) (parola chiave).

Il compilatore non è possibile generare una funzione inline per una funzione contrassegnata con l'attributo naked, anche se la funzione viene anche contrassegnata con il [forceinline](inline-functions-cpp.md) (parola chiave).

Il compilatore genera un errore se il **naked** attributo viene applicato a qualsiasi elemento diverso dalla definizione di un metodo non membro.

## <a name="examples"></a>Esempi

Questo codice definisce una funzione con il **naked** attributo:

```
__declspec( naked ) int func( formal_parameters ) {}
```

O, in alternativa:

```
#define Naked __declspec( naked )
Naked int func( formal_parameters ) {}
```

Il **naked** attributo interessa solo la natura della generazione del codice del compilatore per le sequenze di prologo ed epilogo della funzione. Tale attributo non influisce sul codice generato per chiamare tali funzioni. Di conseguenza, il **naked** attributo non è considerato parte del tipo della funzione e i puntatori a funzione non può contenere il **naked** attributo. Inoltre, il **naked** attributo non può essere applicato a una definizione di dati. Questo esempio di codice, ad esempio, genera un errore:

```
__declspec( naked ) int i;
// Error--naked attribute not permitted on data declarations.
```

Il **naked** attributo è rilevante solo per la definizione della funzione e non può essere specificato nel prototipo della funzione. Ad esempio, questa dichiarazione genera un errore del compilatore:

```
__declspec( naked ) int func();  // Error--naked attribute not permitted on function declarations
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Chiamate di funzioni naked](../cpp/naked-function-calls.md)
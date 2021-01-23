---
description: Altre informazioni sulla direttiva const_seg pragma in Microsoft C/C++
title: const_seg pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.const_seg
- const_seg_CPP
helpviewer_keywords:
- pragma, const_seg
- const_seg pragma
no-loc:
- pragma
ms.openlocfilehash: 602ef749c966f9b28d7d6fa42a2bded1148bbe0d
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98712921"
---
# <a name="const_seg-no-locpragma"></a>`const_seg` pragma

Specifica la sezione (segmento) in cui le variabili [const](../cpp/const-cpp.md) vengono archiviate nel file oggetto (. obj).

## <a name="syntax"></a>Sintassi

> **`#pragma const_seg(`** ["*Section-name*" [ **`,`** "*section-class*"]] **`)`**\
> **`#pragma const_seg(`**{ **`push`**  |  **`pop`** } [ **`,`** *identificatore* ] [ **`,`** "*Section-name*" [ **`,`** "*section-class*"]]**`)`**

### <a name="parameters"></a>Parametri

**`push`**\
Opzionale Inserisce un record nello stack interno del compilatore. Un oggetto **`push`** può avere un *identificatore* e un *nome di sezione*.

**`pop`**\
Opzionale Rimuove un record dall'inizio dello stack interno del compilatore. Un oggetto **`pop`** può avere un *identificatore* e un *nome di sezione*. È possibile estrarre più record usando un solo **`pop`** comando usando l' *identificatore*. Il *nome di sezione diventa il* nome della sezione const attiva dopo il pop.

*identificatore*\
Opzionale Se usato con **`push`** , assegna un nome al record nello stack interno del compilatore. Se usato con **`pop`** , la direttiva estrae i record dallo stack interno finché non viene rimosso l' *identificatore* . Se l' *identificatore* non viene trovato nello stack interno, non viene estratto alcun elemento.

"*nome-sezione*" \
Opzionale Nome di una sezione. Se usato con **`pop`** , viene estratto lo stack e il *nome* della sezione diventa il nome della sezione const attiva.

"*section-class*" \
Opzionale Ignorato, ma incluso per la compatibilità con le versioni di Microsoft C++ precedenti alla versione 2,0.

## <a name="remarks"></a>Osservazioni

Una *sezione* in un file oggetto è un blocco denominato di dati che viene caricato in memoria come unità. Una *sezione const* è una sezione che contiene dati costanti. In questo articolo i termini *Segment* e *Section* hanno lo stesso significato.

La **`const_seg`** pragma direttiva indica al compilatore di inserire tutti gli elementi di dati costanti dall'unità di conversione in una sezione const denominata *Section-name*. La sezione predefinita nel file oggetto per le **`const`** variabili è `.rdata` . Alcune **`const`** variabili, ad esempio i valori scalari, vengono automaticamente inline nel flusso di codice. Il codice inline non viene visualizzato in `.rdata` . Una **`const_seg`** pragma direttiva senza un parametro *Section-name* Reimposta il nome della sezione per gli **`const`** elementi di dati successivi su `.rdata` .

Se si definisce un oggetto che richiede l'inizializzazione dinamica in un `const_seg` , il risultato è un comportamento non definito.

Per un elenco di nomi che non devono essere usati per creare una sezione, vedere [`/SECTION`](../build/reference/section-specify-section-attributes.md) .

È inoltre possibile specificare le sezioni per i dati inizializzati ( [`data_seg`](../preprocessor/data-seg.md) ), i dati non inizializzati ( [`bss_seg`](../preprocessor/bss-seg.md) ) e le funzioni ( [`code_seg`](../preprocessor/code-seg.md) ).

È possibile utilizzare l'applicazione [DUMPBIN.EXE](../build/reference/dumpbin-command-line.md) per visualizzare i file oggetto. Le versioni di DUMPBIN per ogni architettura di destinazione supportata sono incluse in Visual Studio.

## <a name="example"></a>Esempio

```cpp
// pragma_directive_const_seg.cpp
// compile with: /EHsc
#include <iostream>

const int i = 7;               // inlined, not stored in .rdata
const char sz1[]= "test1";     // stored in .rdata

#pragma const_seg(".my_data1")
const char sz2[]= "test2";     // stored in .my_data1

#pragma const_seg(push, stack1, ".my_data2")
const char sz3[]= "test3";     // stored in .my_data2

#pragma const_seg(pop, stack1) // pop stack1 from stack
const char sz4[]= "test4";     // stored in .my_data1

int main() {
    using namespace std;
   // const data must be referenced to be put in .obj
   cout << sz1 << endl;
   cout << sz2 << endl;
   cout << sz3 << endl;
   cout << sz4 << endl;
}
```

```Output
test1
test2
test3
test4
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)

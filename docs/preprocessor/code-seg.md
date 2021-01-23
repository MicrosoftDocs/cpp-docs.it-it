---
description: Altre informazioni sulla direttiva code_seg pragma in Microsoft C/C++
title: code_seg pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.code_seg
helpviewer_keywords:
- pragma, code_seg
- code_seg pragma
no-loc:
- pragma
ms.openlocfilehash: 0547c745fe5d22be3684e83e0dcc2c73e13e8edc
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713102"
---
# <a name="code_seg-no-locpragma"></a>`code_seg` pragma

Specifica la sezione di testo (segmento) in cui le funzioni vengono archiviate nel file oggetto (. obj).

## <a name="syntax"></a>Sintassi

> **`#pragma code_seg(`** ["*Section-name*" [ **`,`** "*section-class*"]] **`)`**\
> **`#pragma code_seg(`**{ **`push`**  |  **`pop`** } [ **`,`** *identificatore* ] [ **`,`** "*Section-name*" [ **`,`** "*section-class*"]]**`)`**

### <a name="parameters"></a>Parametri

**`push`**\
Opzionale Inserisce un record nello stack interno del compilatore. Un oggetto **`push`** può avere un *identificatore* e un *nome di sezione*.

**`pop`**\
Opzionale Rimuove un record dall'inizio dello stack interno del compilatore. Un oggetto **`pop`** può avere un *identificatore* e un *nome di sezione*. È possibile estrarre più record usando un solo **`pop`** comando usando l' *identificatore*. Il nome della sezione diventa il nome della *sezione di testo* attivo dopo il pop.

*identificatore*\
Opzionale Se usato con **`push`** , assegna un nome al record nello stack interno del compilatore. Se usato con **`pop`** , la direttiva estrae i record dallo stack interno finché non viene rimosso l' *identificatore* . Se l' *identificatore* non viene trovato nello stack interno, non viene estratto alcun elemento.

"*nome-sezione*" \
Opzionale Nome di una sezione. Se usato con **`pop`** , viene estratto lo stack e il *nome* della sezione diventa il nome della sezione di testo attiva.

"*section-class*" \
Opzionale Ignorato, ma incluso per la compatibilità con le versioni di Microsoft C++ precedenti alla versione 2,0.

## <a name="remarks"></a>Osservazioni

Una *sezione* in un file oggetto è un blocco denominato di dati che viene caricato in memoria come unità. Una *sezione di testo* è una sezione che contiene il codice eseguibile. In questo articolo i termini *Segment* e *Section* hanno lo stesso significato.

La **`code_seg`** pragma direttiva indica al compilatore di inserire tutto il codice oggetto successivo dall'unità di conversione in una sezione di testo denominata *Section-name*. Per impostazione predefinita, la sezione di testo utilizzata per le funzioni in un file oggetto è denominata `.text` . Una **`code_seg`** pragma direttiva senza un parametro *Section-name* Reimposta il nome della sezione di testo per il codice oggetto successivo su `.text` .

La **`code_seg`** pragma direttiva non controlla la posizione del codice oggetto generato per i modelli di cui è stata creata un'istanza. Né controlla il codice generato in modo implicito dal compilatore, ad esempio funzioni membro speciali. Per controllare tale codice, è consigliabile usare invece l' [`__declspec(code_seg(...))`](../cpp/code-seg-declspec.md) attributo. Consente di controllare la posizione di tutto il codice oggetto, incluso il codice generato dal compilatore.

Per un elenco di nomi che non devono essere usati per creare una sezione, vedere [`/SECTION`](../build/reference/section-specify-section-attributes.md) .

È inoltre possibile specificare le sezioni per i dati inizializzati ( [`data_seg`](../preprocessor/data-seg.md) ), i dati non inizializzati ( [`bss_seg`](../preprocessor/bss-seg.md) ) e le variabili const ( [`const_seg`](../preprocessor/const-seg.md) ).

È possibile utilizzare l'applicazione [DUMPBIN.EXE](../build/reference/dumpbin-command-line.md) per visualizzare i file oggetto. Le versioni di DUMPBIN per ogni architettura di destinazione supportata sono incluse in Visual Studio.

## <a name="example"></a>Esempio

Questo esempio illustra come usare la direttiva **code_seg** pragma per controllare la posizione in cui viene inserito il codice oggetto:

```cpp
// pragma_directive_code_seg.cpp
void func1() {                  // stored in .text
}

#pragma code_seg(".my_data1")
void func2() {                  // stored in my_data1
}

#pragma code_seg(push, r1, ".my_data2")
void func3() {                  // stored in my_data2
}

#pragma code_seg(pop, r1)      // stored in my_data1
void func4() {
}

int main() {
}
```

## <a name="see-also"></a>Vedere anche

[`code_seg (__declspec)`](../cpp/code-seg-declspec.md)\
[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)

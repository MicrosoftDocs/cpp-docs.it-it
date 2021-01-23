---
description: Altre informazioni sulla direttiva data_seg pragma in Microsoft C/C++
title: data_seg pragma
ms.date: 01/22/2021
f1_keywords:
- data_seg_CPP
- vc-pragma.data_seg
helpviewer_keywords:
- data_seg pragma
- pragma, data_seg
no-loc:
- pragma
ms.openlocfilehash: cd0dac6961a642b8ed2bd5d485712d259d828a64
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713688"
---
# <a name="data_seg-no-locpragma"></a>`data_seg` pragma

Specifica la sezione di dati (segmento) in cui le variabili inizializzate vengono archiviate nel file oggetto (. obj).

## <a name="syntax"></a>Sintassi

> **`#pragma data_seg(`** ["*Section-name*" [ **`,`** "*section-class*"]] **`)`**\
> **`#pragma data_seg(`**{ **`push`**  |  **`pop`** } [ **`,`** *identificatore* ] [ **`,`** "*Section-name*" [ **`,`** "*section-class*"]]**`)`**

### <a name="parameters"></a>Parametri

**`push`**\
Opzionale Inserisce un record nello stack interno del compilatore. Un oggetto **`push`** può avere un *identificatore* e un *nome di sezione*.

**`pop`**\
Opzionale Rimuove un record dall'inizio dello stack interno del compilatore. Un oggetto **`pop`** può avere un *identificatore* e un *nome di sezione*. È possibile estrarre più record usando un solo **`pop`** comando usando l' *identificatore*. Il *nome della sezione diventa il* nome della sezione dati attiva dopo il pop.

*identificatore*\
Opzionale Se usato con **`push`** , assegna un nome al record nello stack interno del compilatore. Se usato con **`pop`** , estrae i record dallo stack interno finché non viene rimosso l' *identificatore* . Se l' *identificatore* non viene trovato nello stack interno, non viene estratto alcun elemento.

*identificatore* consente di estrarre più record con un unico **`pop`** comando.

*"nome-sezione"*\
Opzionale Nome di una sezione. Se usato con **`pop`** , viene estratto lo stack e il *nome della* sezione diventa il nome della sezione dati attiva.

*"section-class"*\
Opzionale Ignorato, ma incluso per la compatibilità con le versioni di Microsoft C++ precedenti alla versione 2,0.

## <a name="remarks"></a>Osservazioni

Una *sezione* in un file oggetto è un blocco denominato di dati che viene caricato in memoria come unità. Una *sezione di dati* è una sezione che contiene dati inizializzati. In questo articolo i termini *Segment* e *Section* hanno lo stesso significato.

La sezione predefinita nel file con estensione obj per le variabili inizializzate è `.data` . Le variabili non inizializzate vengono considerate inizializzate su zero e vengono archiviate in `.bss` .

La **`data_seg`** pragma direttiva indica al compilatore di inserire tutti gli elementi di dati inizializzati dall'unità di conversione in una sezione di dati denominata *Section-name*. Per impostazione predefinita, la sezione dei dati utilizzata per i dati inizializzati in un file oggetto è denominata `.data` . Le variabili non inizializzate vengono considerate inizializzate su zero e vengono archiviate in `.bss` . Una **`data_seg`** pragma direttiva senza un parametro *Section-name* Reimposta il nome della sezione di dati per i successivi elementi di dati inizializzati su `.data` .

I dati allocati usando **`data_seg`** non conservano alcuna informazione sulla relativa posizione.

Per un elenco di nomi che non devono essere usati per creare una sezione, vedere [`/SECTION`](../build/reference/section-specify-section-attributes.md) .

È inoltre possibile specificare le sezioni per le variabili const ( [`const_seg`](../preprocessor/const-seg.md) ), i dati non inizializzati ( [`bss_seg`](../preprocessor/bss-seg.md) ) e le funzioni ( [`code_seg`](../preprocessor/code-seg.md) ).

È possibile utilizzare l'applicazione [DUMPBIN.EXE](../build/reference/dumpbin-command-line.md) per visualizzare i file oggetto. Le versioni di DUMPBIN per ogni architettura di destinazione supportata sono incluse in Visual Studio.

## <a name="example"></a>Esempio

```cpp
// pragma_directive_data_seg.cpp
int h = 1;                     // stored in .data
int i = 0;                     // stored in .bss
#pragma data_seg(".my_data1")
int j = 1;                     // stored in .my_data1

#pragma data_seg(push, stack1, ".my_data2")
int l = 2;                     // stored in .my_data2

#pragma data_seg(pop, stack1)   // pop stack1 off the stack
int m = 3;                     // stored in .my_data1

int main() {
}
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)

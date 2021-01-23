---
description: Altre informazioni sulla direttiva bss_seg pragma in Microsoft C/C++
title: bss_seg pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.bss_seg
- bss_seg_CPP
helpviewer_keywords:
- pragma, bss_seg
- bss_seg pragma
no-loc:
- pragma
ms.openlocfilehash: 380d3c465145c3409e86ea6e76cd0b41890574fa
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713090"
---
# <a name="bss_seg-no-locpragma"></a>`bss_seg` pragma

Specifica la sezione (segmento) in cui le variabili non inizializzate vengono archiviate nel file oggetto (. obj).

## <a name="syntax"></a>Sintassi

> **`#pragma bss_seg(`** ["*Section-name*" [ **`,`** "*section-class*"]] **`)`**\
> **`#pragma bss_seg(`**{ **`push`**  |  **`pop`** } [ **`,`** *identificatore* ] [ **`,`** "*Section-name*" [ **`,`** "*section-class*"]]**`)`**

### <a name="parameters"></a>Parametri

**`push`**\
Opzionale Inserisce un record nello stack interno del compilatore. Un oggetto **`push`** può avere un *identificatore* e un *nome di sezione*.

**`pop`**\
Opzionale Rimuove un record dall'inizio dello stack interno del compilatore. Un oggetto **`pop`** può avere un *identificatore* e un *nome di sezione*. È possibile estrarre più record usando un solo **`pop`** comando usando l' *identificatore*. Il *nome della sezione diventa il* nome della sezione bss attiva dopo il pop.

*identificatore*\
Opzionale Se usato con **`push`** , assegna un nome al record nello stack interno del compilatore. Se usato con **`pop`** , la direttiva estrae i record dallo stack interno finché non viene rimosso l' *identificatore* . Se l' *identificatore* non viene trovato nello stack interno, non viene estratto alcun elemento.

*"nome-sezione"*\
Opzionale Nome di una sezione. Quando viene usato con **`pop`** , lo stack viene estratto e il *nome* della sezione diventa il nome della sezione bss attiva.

*"section-class"*\
Opzionale Ignorato, ma incluso per la compatibilità con le versioni di Microsoft C++ precedenti alla versione 2,0.

## <a name="remarks"></a>Osservazioni

Una *sezione* in un file oggetto è un blocco denominato di dati che viene caricato in memoria come unità. Una *sezione bss* è una sezione che contiene dati non inizializzati. In questo articolo i termini *Segment* e *Section* hanno lo stesso significato.

La **`bss_seg`** pragma direttiva indica al compilatore di inserire tutti gli elementi di dati non inizializzati dall'unità di conversione in una sezione bss denominata *Section-name*. In alcuni casi, l'utilizzo di **`bss_seg`** può velocizzare i tempi di caricamento raggruppando i dati non inizializzati in un'unica sezione. Per impostazione predefinita, la sezione BSS utilizzata per i dati non inizializzati in un file oggetto è denominata `.bss` . Una **`bss_seg`** pragma direttiva senza un parametro *Section-name* Reimposta il nome della sezione bss per i successivi elementi di dati non inizializzati su `.bss` .

I dati allocati mediante **`bss_seg`** pragma non conservano alcuna informazione sulla relativa posizione.

Per un elenco di nomi che non devono essere usati per creare una sezione, vedere [`/SECTION`](../build/reference/section-specify-section-attributes.md) .

È inoltre possibile specificare le sezioni per i dati inizializzati ( [`data_seg`](../preprocessor/data-seg.md) ), le funzioni ( [`code_seg`](../preprocessor/code-seg.md) ) e le variabili const ( [`const_seg`](../preprocessor/const-seg.md) ).

È possibile utilizzare l'applicazione [DUMPBIN.EXE](../build/reference/dumpbin-command-line.md) per visualizzare i file oggetto. Le versioni di DUMPBIN per ogni architettura di destinazione supportata sono incluse in Visual Studio.

## <a name="example"></a>Esempio

```cpp
// pragma_directive_bss_seg.cpp
int i;                     // stored in .bss
#pragma bss_seg(".my_data1")
int j;                     // stored in .my_data1

#pragma bss_seg(push, stack1, ".my_data2")
int l;                     // stored in .my_data2

#pragma bss_seg(pop, stack1)   // pop stack1 from stack
int m;                     // stored in .my_data1

int main() {
}
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)

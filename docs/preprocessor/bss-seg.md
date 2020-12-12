---
description: 'Altre informazioni su: bss_seg pragma'
title: Pragma bss_seg
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.bss_seg
- bss_seg_CPP
helpviewer_keywords:
- pragmas, bss_seg
- bss_seg pragma
ms.assetid: 755f0154-de51-4778-97d3-c9b24e445079
ms.openlocfilehash: e7a2cf73f8ab542755e5f6e0183896ce8e64be2a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300879"
---
# <a name="bss_seg-pragma"></a>Pragma bss_seg

Specifica la sezione (segmento) in cui le variabili non inizializzate vengono archiviate nel file oggetto (. obj).

## <a name="syntax"></a>Sintassi

> **#pragma bss_seg (** ["*Section-name*" [ **,** "*section-class*"]] **)**\
> **#pragma bss_seg (** { **push**  |  **pop** } [ **,** *Identifier* ] [ **,** "*Section-name*" [ **,** "*section-class*"]] **)**

### <a name="parameters"></a>Parametri

**spingere**\
Opzionale Inserisce un record nello stack interno del compilatore. Un **push** può avere un *identificatore* e un *nome di sezione*.

**popup**\
Opzionale Rimuove un record dall'inizio dello stack interno del compilatore. Un **pop** può avere un *identificatore* e un *nome di sezione*. È possibile estrarre più record usando un solo comando **pop** usando l' *identificatore*. Il *nome della sezione diventa il* nome della sezione bss attiva dopo il pop.

*identificatore*\
Opzionale Se usato con **push**, assegna un nome al record nello stack interno del compilatore. Se utilizzato con **pop**, la direttiva estrae i record dallo stack interno finché non viene rimosso l' *identificatore* . Se l' *identificatore* non viene trovato nello stack interno, non viene estratto alcun elemento.

*"nome-sezione"*\
Opzionale Nome di una sezione. Quando viene usato con il **pop**, lo stack viene estratto e il *nome* della sezione diventa il nome della sezione bss attiva.

*"section-class"*\
Opzionale Ignorato, ma incluso per la compatibilità con le versioni di Microsoft C++ precedenti alla versione 2,0.

## <a name="remarks"></a>Commenti

Una *sezione* in un file oggetto è un blocco denominato di dati che viene caricato in memoria come unità. Una *sezione bss* è una sezione che contiene dati non inizializzati. In questo articolo i termini *Segment* e *Section* hanno lo stesso significato.

La direttiva **bss_seg** pragma indica al compilatore di inserire tutti gli elementi di dati non inizializzati dall'unità di conversione in una sezione bss denominata *Section-name*. In alcuni casi, l'uso di **bss_seg** può velocizzare i tempi di caricamento raggruppando i dati non inizializzati in un'unica sezione. Per impostazione predefinita, la sezione BSS utilizzata per i dati non inizializzati in un file oggetto è denominata `.bss` . Una direttiva **bss_seg** pragma senza un parametro *Section-name* Reimposta il nome della sezione bss per i successivi elementi di dati non inizializzati su `.bss` .

I dati allocati tramite il pragma **bss_seg** non conservano alcuna informazione sulla relativa posizione.

Per un elenco di nomi che non devono essere usati per creare una sezione, vedere [/Section](../build/reference/section-specify-section-attributes.md).

È inoltre possibile specificare le sezioni per i dati inizializzati ([data_seg](../preprocessor/data-seg.md)), le funzioni ([code_seg](../preprocessor/code-seg.md)) e le variabili const ([const_seg](../preprocessor/const-seg.md)).

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

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)

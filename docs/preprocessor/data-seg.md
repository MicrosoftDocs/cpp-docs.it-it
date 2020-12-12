---
description: 'Altre informazioni su: data_seg pragma'
title: Pragma data_seg
ms.date: 08/29/2019
f1_keywords:
- data_seg_CPP
- vc-pragma.data_seg
helpviewer_keywords:
- data_seg pragma
- pragmas, data_seg
ms.assetid: 65c66466-4c98-494f-93af-106beb4caf78
ms.openlocfilehash: f7caff65273b2fc0d51c6bfd1cede42cce7103d9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300788"
---
# <a name="data_seg-pragma"></a>Pragma data_seg

Specifica la sezione di dati (segmento) in cui le variabili inizializzate vengono archiviate nel file oggetto (. obj).

## <a name="syntax"></a>Sintassi

> **#pragma data_seg (** ["*Section-name*" [ **,** "*section-class*"]] **)**\
> **#pragma data_seg (** { **push**  |  **pop** } [ **,** *Identifier* ] [ **,** "*Section-name*" [ **,** "*section-class*"]] **)**

### <a name="parameters"></a>Parametri

**spingere**\
Opzionale Inserisce un record nello stack interno del compilatore. Un **push** può avere un *identificatore* e un *nome di sezione*.

**popup**\
Opzionale Rimuove un record dall'inizio dello stack interno del compilatore. Un **pop** può avere un *identificatore* e un *nome di sezione*. È possibile estrarre più record usando un solo comando **pop** usando l' *identificatore*. Il *nome della sezione diventa il* nome della sezione dati attiva dopo il pop.

*identificatore*\
Opzionale Se usato con **push**, assegna un nome al record nello stack interno del compilatore. Quando viene usato con **pop**, estrae i record dallo stack interno finché non viene rimosso l' *identificatore* . Se l' *identificatore* non viene trovato nello stack interno, non viene estratto alcun elemento.

*identificatore* consente di estrarre più record con un unico comando **pop** .

*"nome-sezione"*\
Opzionale Nome di una sezione. Quando viene usato con il **pop**, lo stack viene estratto e il *nome* della sezione diventa il nome della sezione dati attiva.

*"section-class"*\
Opzionale Ignorato, ma incluso per la compatibilità con le versioni di Microsoft C++ precedenti alla versione 2,0.

## <a name="remarks"></a>Commenti

Una *sezione* in un file oggetto è un blocco denominato di dati che viene caricato in memoria come unità. Una *sezione di dati* è una sezione che contiene dati inizializzati. In questo articolo i termini *Segment* e *Section* hanno lo stesso significato.

La sezione predefinita nel file con estensione obj per le variabili inizializzate è `.data` . Le variabili non inizializzate vengono considerate inizializzate su zero e vengono archiviate in `.bss` .

La direttiva **data_seg** pragma indica al compilatore di inserire tutti gli elementi di dati inizializzati dall'unità di conversione in una sezione di dati denominata *Section-name*. Per impostazione predefinita, la sezione dei dati utilizzata per i dati inizializzati in un file oggetto è denominata `.data` . Le variabili non inizializzate vengono considerate inizializzate su zero e vengono archiviate in `.bss` . Una direttiva **data_seg** pragma senza un parametro *Section-name* Reimposta il nome della sezione di dati per i successivi elementi di dati inizializzati su `.data` .

I dati allocati usando **data_seg** non conservano alcuna informazione sulla relativa posizione.

Per un elenco di nomi che non devono essere usati per creare una sezione, vedere [/Section](../build/reference/section-specify-section-attributes.md).

È inoltre possibile specificare le sezioni per le variabili const ([const_seg](../preprocessor/const-seg.md)), i dati non inizializzati ([bss_seg](../preprocessor/bss-seg.md)) e le funzioni ([code_seg](../preprocessor/code-seg.md)).

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

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)

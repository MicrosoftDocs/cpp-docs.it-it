---
description: 'Altre informazioni su: code_seg pragma'
title: Pragma code_seg
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.code_seg
helpviewer_keywords:
- pragmas, code_seg
- code_seg pragma
ms.assetid: bf4faac1-a511-46a6-8d9e-456851d97d56
ms.openlocfilehash: c303d7e86dc94be3c3d76368b92915cd06010567
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300840"
---
# <a name="code_seg-pragma"></a>Pragma code_seg

Specifica la sezione di testo (segmento) in cui le funzioni vengono archiviate nel file oggetto (. obj).

## <a name="syntax"></a>Sintassi

> **#pragma code_seg (** ["*Section-name*" [ **,** "*section-class*"]] **)**\
> **#pragma code_seg (** { **push**  |  **pop** } [ **,** *Identifier* ] [ **,** "*Section-name*" [ **,** "*section-class*"]] **)**

### <a name="parameters"></a>Parametri

**spingere**\
Opzionale Inserisce un record nello stack interno del compilatore. Un **push** può avere un *identificatore* e un *nome di sezione*.

**popup**\
Opzionale Rimuove un record dall'inizio dello stack interno del compilatore. Un **pop** può avere un *identificatore* e un *nome di sezione*. È possibile estrarre più record usando un solo comando **pop** usando l' *identificatore*. Il nome della sezione diventa il nome della *sezione di testo* attivo dopo il pop.

*identificatore*\
Opzionale Se usato con **push**, assegna un nome al record nello stack interno del compilatore. Se utilizzato con **pop**, la direttiva estrae i record dallo stack interno finché non viene rimosso l' *identificatore* . Se l' *identificatore* non viene trovato nello stack interno, non viene estratto alcun elemento.

"*nome-sezione*" \
Opzionale Nome di una sezione. Quando viene utilizzato con **pop**, lo stack viene estratto e *Section-name* diventa il nome della sezione di testo attiva.

"*section-class*" \
Opzionale Ignorato, ma incluso per la compatibilità con le versioni di Microsoft C++ precedenti alla versione 2,0.

## <a name="remarks"></a>Commenti

Una *sezione* in un file oggetto è un blocco denominato di dati che viene caricato in memoria come unità. Una *sezione di testo* è una sezione che contiene il codice eseguibile. In questo articolo i termini *Segment* e *Section* hanno lo stesso significato.

La direttiva **code_seg** pragma indica al compilatore di inserire tutto il codice oggetto successivo dall'unità di conversione in una sezione di testo denominata *Section-name*. Per impostazione predefinita, la sezione di testo utilizzata per le funzioni in un file oggetto è denominata `.text` . Una direttiva **code_seg** pragma senza un parametro *Section-name* Reimposta il nome della sezione di testo per il codice oggetto successivo su `.text` .

La direttiva **code_seg** pragma non controlla la posizione del codice oggetto generato per i modelli di cui è stata creata un'istanza. Né controlla il codice generato in modo implicito dal compilatore, ad esempio funzioni membro speciali. Per controllare tale codice, è consigliabile usare invece l'attributo [__declspec (code_seg (...))](../cpp/code-seg-declspec.md) . Consente di controllare la posizione di tutto il codice oggetto, incluso il codice generato dal compilatore.

Per un elenco di nomi che non devono essere usati per creare una sezione, vedere [/Section](../build/reference/section-specify-section-attributes.md).

È inoltre possibile specificare le sezioni per i dati inizializzati ([data_seg](../preprocessor/data-seg.md)), i dati non inizializzati ([bss_seg](../preprocessor/bss-seg.md)) e le variabili const ([const_seg](../preprocessor/const-seg.md)).

È possibile utilizzare l'applicazione [DUMPBIN.EXE](../build/reference/dumpbin-command-line.md) per visualizzare i file oggetto. Le versioni di DUMPBIN per ogni architettura di destinazione supportata sono incluse in Visual Studio.

## <a name="example"></a>Esempio

Questo esempio illustra come usare la direttiva pragma **code_seg** per controllare la posizione in cui viene inserito il codice oggetto:

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

## <a name="see-also"></a>Vedi anche

[code_seg (__declspec)](../cpp/code-seg-declspec.md)\
[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)

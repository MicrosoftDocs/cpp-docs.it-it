---
title: Inizializzazione di tipi di aggregazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- aggregate types [C++]
- union keyword [C], declarations
- types [C], initializing
- union keyword [C]
- aggregates [C++], initializing
ms.assetid: a8f8ed75-39db-4592-93b9-d3920d915810
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8bfd0715acd7eb18c4ccc83d496a1e9a98084fdf
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43757949"
---
# <a name="initializing-aggregate-types"></a>Inizializzazione di tipi di aggregazione

Un tipo *aggregato* può essere una struttura, un'unione o un tipo di matrice. Se un tipo aggregato contiene membri di tipi aggregati, le regole di inizializzazione vengono applicate in modo ricorsivo.

## <a name="syntax"></a>Sintassi

*initializer*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**{**  *initializer-list*  **}** /* Per inizializzazione aggregata \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**{**  *initializer-list*  **, }**

*initializer-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*initializer*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*initializer-list*  **,**  *initializer*

*initializer-list* è un elenco di inizializzatori separati da virgole. Ogni inizializzatore presente nell'elenco è un'espressione costante o un elenco di inizializzatori. Di conseguenza, gli elenchi di inizializzatori possono essere annidati. Questo modulo è utile per inizializzare i membri di aggregazione di un tipo aggregato, come illustrato negli esempi riportati in questa sezione. Tuttavia, se l'inizializzatore di un identificatore automatico è un'espressione singola, non è necessario che sia un'espressione costante. È sufficiente che abbia un tipo appropriato per l'assegnazione all'identificatore.

Per ogni elenco di inizializzatori, i valori delle espressioni costanti vengono assegnati, in ordine, ai membri corrispondenti della variabile di aggregazione.

Se *initializer-list* dispone di meno valori rispetto al tipo aggregato, gli altri membri o elementi presenti nel tipo aggregato vengono inizializzati su 0. Il valore iniziale di un identificatore automatico non esplicitamente inizializzato non è definito. Se *initializer-list* contiene più valori rispetto al tipo aggregato, viene generato un errore. Queste regole vengono applicate all'aggregazione nel suo complesso e a ogni elenco di inizializzatori incorporato.

Un inizializzatore di struttura è un'espressione dello stesso tipo o un elenco di inizializzatori per i membri della struttura racchiusi tra parentesi graffe (**{ }**). I membri senza nome del campo di bit non vengono inizializzati.

Quando viene inizializzata un'unione, *initializer-list* deve essere un'espressione costante singola. Il valore dell'espressione costante viene assegnato al primo membro dell'unione.

In caso di una matrice di dimensione sconosciuta, il numero di inizializzatori ne determina la dimensione e il relativo tipo diventa completo. Non è possibile specificare la ripetizione di un inizializzatore in C né inizializzare un elemento che si trova nel mezzo di una matrice, se non si forniscono anche tutti i valori precedenti. Se si desidera che questa operazione sia presente nel programma, è necessario scrivere la routine in linguaggio assembly.

Si noti che il numero di inizializzatori può impostare la dimensione della matrice:

```C
int x[ ] = { 0, 1, 2 }
```

Se si specifica la dimensione e si indica un numero di inizializzatori errato, il compilatore genera un errore.

**Sezione specifica Microsoft**

La dimensione massima di una matrice è definita da **size_t**. Definito nel file di intestazione STDDEF.H, **size_t** è `unsigned int` con intervallo da 0x00000000 a 0x7CFFFFFF.

**Fine sezione specifica Microsoft**

## <a name="examples"></a>Esempi

In questo esempio sono illustrati gli inizializzatori di una matrice.

```C
int P[4][3] =
{
    { 1, 1, 1 },
    { 2, 2, 2 },
    { 3, 3, 3,},
    { 4, 4, 4,},
};
```

Questa istruzione dichiara `P` come una matrice quattro per tre e inizializza gli elementi della prima riga su 1, gli elementi della seconda riga su 2 e così via, fino alla quarta riga. Si noti che l'elenco di inizializzatori per la terza e quarta riga contiene virgole dopo l'ultima espressione costante. Anche l'ultimo elenco di inizializzatori (`{4, 4, 4,},`) è seguito da una virgola. Tali virgole aggiuntive sono consentite ma non necessarie; le uniche virgole necessarie sono quelle che separano le espressioni costanti e gli elenchi di inizializzatori.

Se un membro di aggregazione non dispone di un elenco di inizializzatori incorporato, i valori vengono semplicemente assegnati, in ordine, a ogni membro del subaggregato. Di conseguenza, l'inizializzazione illustrata nell'esempio precedente è equivalente alla seguente:

```C
int P[4][3] =
{
   1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4
};
```

È possibile che vi siano delle parentesi graffe anche attorno ai singoli inizializzatori presenti nell'elenco, il che contribuirebbe a chiarire l'esempio precedente.

Quando si inizializza una variabile di aggregazione, è necessario utilizzare le parentesi graffe e gli elenchi di inizializzatori correttamente. Nell'esempio seguente viene illustrata più dettagliatamente l'interpretazione delle parentesi graffe da parte del compilatore:

```C
typedef struct
{
    int n1, n2, n3;
} triplet;

triplet nlist[2][3] =
{
    { {  1, 2, 3 }, {  4, 5, 6 }, {  7, 8, 9 } },  /* Row 1 */
    { { 10,11,12 }, { 13,14,15 }, { 16,17,18 } }   /* Row 2 */
};
```

In questo esempio, `nlist` viene dichiarato come una matrice di strutture due per tre, in cui ogni struttura dispone di tre membri. La riga 1 dell'inizializzazione assegna valori alla prima riga di `nlist`, come illustrato di seguito:

1.  La prima parentesi graffa sinistra sulla riga 1 indica al compilatore che l'inizializzazione del primo membro di aggregazione di `nlist` (ovvero `nlist[0]`) sta iniziando.

2.  La seconda parentesi graffa sinistra indica che l'inizializzazione del primo membro di aggregazione di `nlist[0]` (ovvero la struttura presente in `nlist[0][0]`) sta iniziando.

3.  La prima parentesi graffa destra termina l'inizializzazione della struttura `nlist[0][0]`; la parentesi graffa sinistra successiva avvia l'inizializzazione di `nlist[0][1]`.

4.  Il processo continua fino alla fine della riga, dove la parentesi graffa destra di chiusura termina l'inizializzazione di `nlist[0]`.

Con modalità simili, la riga 2 assegna valori alla seconda riga di `nlist`. Si noti che i set di parentesi graffe esterni che racchiudono gli inizializzatori sulle righe 1 e 2 sono necessari. La costruzione seguente, nella quale le parentesi graffe esterne sono omesse, genererebbe un errore:

```C
triplet nlist[2][3] =  /* THIS CAUSES AN ERROR */
{
     {  1, 2, 3 },{  4, 5, 6 },{  7, 8, 9 },   /* Line 1 */
     { 10,11,12 },{ 13,14,15 },{ 16,17,18 }    /* Line 2 */
};
```

In questa costruzione, la prima parentesi graffa sinistra sulla riga 1 avvia l'inizializzazione di `nlist[0]`, che è una matrice di tre strutture. I valori 1, 2 e 3 vengono assegnati ai tre membri della prima struttura. Quando viene rilevata la successiva parentesi graffa destra (dopo il valore 3), l'inizializzazione di `nlist[0]` è completa e le due strutture rimanenti della matrice a tre strutture vengono automaticamente inizializzate su 0. In modo simile `{ 4,5,6 }` inizializza la prima struttura presente nella seconda riga di `nlist`. Le due strutture rimanenti di `nlist[1]` vengono impostate su 0. Quando il compilatore rileva il successivo elenco di inizializzatori (`{ 7,8,9 }`) prova a inizializzare `nlist[2]`. Poiché `nlist` dispone di due sole righe, questo tentativo provoca un errore.

Nell'esempio seguente, i tre membri `int` di `x` vengono inizializzati, rispettivamente, su 1, 2 e 3.

```C
struct list
{
    int i, j, k;
    float m[2][3];
} x = {
        1,
        2,
        3,
       {4.0, 4.0, 4.0}
      };
```

Nella struttura `list` precedente, i tre elementi presenti nella prima riga di `m` vengono inizializzati su 4.0. Gli elementi nella restante riga di `m` vengono inizializzati su 0.0 per impostazione predefinita.

```C
union
{
    char x[2][3];
    int i, j, k;
} y = { {
            {'1'},
            {'4'}
        }
      };
```

La variabile di unione `y`, presente in questo esempio, viene inizializzata. Il primo elemento dell'unione è una matrice, pertanto l'inizializzatore è un inizializzatore di aggregazione. L'elenco di inizializzatori `{'1'}` assegna i valori alla prima riga della matrice. Poiché nell'elenco viene visualizzato un solo valore, l'elemento presente nella prima colonna viene inizializzato al carattere `1` e i due elementi rimanenti nella riga vengono inizializzati sul valore 0 per impostazione predefinita. Analogamente, il primo elemento della seconda riga di `x` viene inizializzato al carattere `4`, mentre i due elementi rimanenti nella riga vengono inizializzati sul valore 0.

## <a name="see-also"></a>Vedere anche

[Inizializzazione](../c-language/initialization.md)
---
title: Programmi e collegamento (C++) | Microsoft Docs
ms.custom: ''
ms.date: 04/09/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: a6493ba0-24e2-4c89-956e-9da1dea660cb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2ef0f08efbcdf09420d53710a3f16326381f13c3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46056781"
---
# <a name="program-and-linkage-c"></a>Programma e collegamento (C++)

In un programma C++, un *simbolo*, ad esempio un nome di variabile o una funzione, può essere dichiarato un numero qualsiasi di volte in cui all'interno dell'ambito, ma può essere definito una sola volta. Si tratta di una definizione di regola (ODR). Oggetto *dichiarazione* introduce un nome nel programma (o reintroduce). Oggetto *definizione* introduce un nome e, nel caso di una variabile, in modo esplicito la inizializza. Oggetto *definizione di funzione* comprende la firma e il corpo della funzione.

Questi sono dichiarazioni:

```cpp
int i;
int f(int x);
```

Questi sono definizioni:

```cpp
int i{42};
int f(int x){ return x * i; }
```

Un programma è costituito da uno o più *unità di conversione*. Un'unità di conversione è costituito da un file di implementazione (. cpp,. cxx, e così via) e tutte le intestazioni (con estensione h, .hpp e così via) che include direttamente o indirettamente. Ogni unità di conversione viene compilata in modo indipendente dal compilatore, dopo il quale il linker unisce le unità di conversione compilata in un unico *programma*. Le violazioni della regola ODR in genere visualizzati come errori del linker quando lo stesso nome ha due definizioni diverse in unità di conversione diversa.

In generale, il modo migliore per rendere visibile una variabile su più file è di inserirlo in un file di intestazione e aggiungere un #include (direttiva) in ogni file con estensione cpp che richiede la dichiarazione. Aggiungendo *Guard include* intorno al contenuto dell'intestazione, assicurarsi che i nomi dichiara sono definiti solo una volta.

Tuttavia, in alcuni casi potrebbe essere necessario dichiarare una variabile globale o una classe in un file con estensione cpp. In questi casi, è necessario un modo per indicare il compilatore e linker indica se il nome dell'oggetto si applica solo a un file o a tutti i file.

## <a name="linkage-vs-scope"></a>Collegamento e ambito

Il concetto di *collegamento* si intende la visibilità dei simboli globali (ad esempio variabili, i nomi dei tipi e i nomi delle funzioni) all'interno del programma nel suo complesso tra unità di conversione. Il concetto di *ambito* fa riferimento ai simboli dichiarati all'interno di un blocco, ad esempio un spazio dei nomi, classe o corpo della funzione. Questi simboli sono visibili solo all'interno dell'ambito in cui sono definiti; il concetto di un collegamento non è applicabile ad essi.

## <a name="external-vs-internal-linkage"></a>Esterno rispetto al collegamento interno

Oggetto *funzione libera* è una funzione che viene definita a globale o un ambito dello spazio dei nomi. Le variabili globali non-const e le funzioni disponibili per impostazione predefinita hanno *collegamento esterno*; sono visibili da qualsiasi unità di conversione nel programma. Di conseguenza, nessun altro oggetto globale (variabile, definizione di classe e così via) può avere tale nome. Un simbolo con *collegamenti interni* oppure *Nessun collegamento* è visibile solo nell'unità di conversione in cui è dichiarata. Quando un nome con collegamento interno, lo stesso nome può esistere in un'altra unità di conversione. Le variabili dichiarate con le definizioni di classe o i corpi delle funzioni non dispongono di collegamento.

È possibile forzare un nome globale in modo che un collegamento interno dichiarandolo in modo esplicito come **statici**. Questo limita la visibilità per la stessa unità di conversione in cui è dichiarata. Si noti che in questo contesto **statici** ha un significato diverso rispetto a quando applicato alle variabili locali.

Gli oggetti seguenti dispongono di collegamento interno per impostazione predefinita:
- oggetti const
- oggetti di constexpr
- typedef
- oggetti statici nell'ambito dello spazio dei nomi

Per fornire un collegamento esterno a oggetti const, dichiararla **extern** e assegnarle un valore:

```cpp
extern const int value = 42;
```

Visualizzare [extern](extern-cpp.md) per altre informazioni.

## <a name="see-also"></a>Vedere anche

[Concetti di base](../cpp/basic-concepts-cpp.md)
---
title: Programmi e collegamento (C++) | Documenti Microsoft
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
ms.openlocfilehash: 2dba8698461636e292771fc1e5a4f5ac0a633e73
ms.sourcegitcommit: d06966efce25c0e66286c8047726ffe743ea6be0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/19/2018
ms.locfileid: "36238669"
---
# <a name="program-and-linkage-c"></a>Programma e collegamento (C++)

In un programma C++, una *simbolo*, ad esempio un nome di variabile o una funzione, può essere dichiarato un numero qualsiasi di volte all'interno dell'ambito, ma può essere definito solo una volta. Si tratta di una definizione regola (ODR). Un *dichiarazione* introduce (o nuovamente introduce) un nome nel programma. Un *definizione* introduce un nome e, nel caso di una variabile, in modo esplicito la inizializza. Un *definizione di funzione* comprende la firma e il corpo della funzione.

Tali dichiarazioni sono:

```cpp
int i;
int f(int x);
```

Le definizioni sono:

```cpp
int i{42};
int f(int x){ return x * i; }
```

Un programma è costituito da uno o più *unità di conversione*. Un'unità di conversione è costituito da un file di implementazione (con estensione cpp,. cxx e così via) e tutte le intestazioni (con estensione h, .hpp e così via) che include direttamente o indirettamente. Ogni unità di conversione viene compilata in modo indipendente dal compilatore, dopo il quale il linker unisce le unità di conversione compilata in un singolo *programma*. Le violazioni della regola ODR in genere visualizzano come errori del linker quando lo stesso nome ha due definizioni diverse in unità di conversione diverse.

In generale, il modo migliore per rendere visibile una variabile per più file è di inserirlo in un file di intestazione e aggiungere un #include (direttiva) in ogni file con estensione cpp che richiede la dichiarazione. Aggiungendo *include Guard* intorno al contenuto dell'intestazione, assicurarsi che i nomi dichiara sono definiti solo una volta.

Tuttavia, in alcuni casi potrebbe essere necessario dichiarare una variabile globale o una classe in un file con estensione cpp. In questi casi, è necessario un modo per indicare il compilatore e il linker indica se il nome dell'oggetto si applica solo a un file o a tutti i file.

## <a name="linkage-vs-scope"></a>Collegamento e ambito

Il concetto di *collegamento* si intende la visibilità dei simboli globali (ad esempio variabili, i nomi dei tipi e i nomi delle funzioni) all'interno del programma nel suo complesso in unità di conversione. Il concetto di *ambito* fa riferimento ai simboli dichiarati all'interno di un blocco, ad esempio un spazio dei nomi, classe o corpo della funzione. Tali simboli sono visibili solo all'interno dell'ambito in cui sono definiti; il concetto di collegamento non si applica ad essi. 

## <a name="external-vs-internal-linkage"></a>Esterno rispetto al collegamento interno

Un *liberare funzione* è una funzione definita globale o l'ambito dello spazio dei nomi. Le variabili globali non const e funzioni disponibile per impostazione predefinita sono associati *collegamento esterno*; sono visibili da qualsiasi unità di conversione nel programma. Pertanto, nessun altro oggetto globale (variabile, definizione di classe e così via) può avere tale nome. Un simbolo con *collegamenti interni* oppure *senza collegamento* è visibile solo nell'unità di conversione in cui è dichiarata. Quando un nome con collegamento interno, potrebbe esistere lo stesso nome in un'altra unità di conversione. Le variabili dichiarate con le definizioni delle classi o corpi di funzione non dispongono di collegamento. 

È possibile forzare un nome globale in modo che il collegamento interno dichiarando in modo esplicito come **statica**. Questo limita la visibilità per la stessa unità di conversione in cui è dichiarata. Si noti che in questo contesto **statica** ha un significato diverso rispetto a quando applicato a variabili locali.

Gli oggetti seguenti dispongono di collegamento interno per impostazione predefinita:
- oggetti const
- oggetti di constexpr
- typedef
- oggetti statici nell'ambito dello spazio dei nomi

Per consentire a un collegamento esterno oggetto const, dichiararla come **extern** e assegnarle un valore:

```cpp
extern const int value = 42;
```

Vedere [extern](extern-cpp.md) per altre informazioni.

## <a name="see-also"></a>Vedere anche

 [Concetti di base](../cpp/basic-concepts-cpp.md)
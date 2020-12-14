---
description: 'Altre informazioni su: nomi decorati'
title: Nomi decorati
ms.date: 09/05/2018
helpviewer_keywords:
- decorated names, definition
- name decoration [C++]
- names [C++], decorated
ms.assetid: a4e9ae8e-b239-4454-b401-4102793cb344
ms.openlocfilehash: 65135b4f5b85cfae7a25513763b998d304e79a0c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201716"
---
# <a name="decorated-names"></a>Nomi decorati

Le funzioni, i dati e gli oggetti nei programmi C e C++ sono rappresentati internamente dai nomi decorati. Un *nome decorato* è una stringa codificata creata dal compilatore durante la compilazione di un oggetto, di dati o di una definizione di funzione. Registra convenzioni di chiamata, tipi, parametri di funzione e altre informazioni insieme al nome. Questa decorazione del nome, nota anche come *alterazione dei nomi*, consente al linker di trovare le funzioni e gli oggetti corretti durante il collegamento di un file eseguibile.

Le convenzioni di denominazione decorate sono state modificate in diverse versioni di Visual Studio e possono anche essere diverse in diverse architetture di destinazione. Per eseguire correttamente il collegamento con i file di origine creati usando Visual Studio, è necessario compilare le librerie e le dll C e C++ usando lo stesso set di strumenti del compilatore, i flag e l'architettura di destinazione.

> [!NOTE]
> Le librerie compilate con Visual Studio 2015 possono essere utilizzate da applicazioni compilate con Visual Studio 2017 o Visual Studio 2019.

## <a name="using-decorated-names"></a><a name="Using"></a> Uso dei nomi decorati

Di solito non è necessario conoscere il nome decorato per scrivere un codice che esegua la compilazione e crei il collegamento correttamente. I nomi decorati sono un dettaglio di implementazione interno del compilatore e del linker. Gli strumenti in genere possono gestire il nome nel formato non decorato. Tuttavia, un nome decorato a volte è necessario quando si specifica un nome di funzione per il linker e altri strumenti. Ad esempio, per trovare una corrispondenza con funzioni C++ in overload, membri di spezi dei nomi, costruttori di classe, distruttori e speciali funzioni membro, è necessario specificare il nome decorato. Per informazioni dettagliate sui flag di opzione e altre situazioni in cui sono necessari i nomi decorati, vedere la documentazione sugli strumenti e le opzioni in uso.

Se si modifica il nome della funzione, la classe, la convenzione di chiamata, il tipo restituito o qualsiasi parametro, viene modificato anche il nome decorato. In questo caso, è necessario ottenere il nuovo nome decorato e usarlo ovunque sia specificato il nome decorato.

La decorazione dei nomi è importante anche quando si crea un collegamento a un codice scritto in altri linguaggi di programmazione o si usano altri compilatori. Ogni compilatore usa una convenzione di decorazione dei nomi diversa. Quando l'eseguibile crea un collegamento a un codice scritto in un altro linguaggio, si deve prestare particolare attenzione nel trovare una corrispondenza con i nomi esportati e importati e con le convenzioni di chiamata. Il codice della lingua dell'assembly deve usare i nomi decorati MSVC e le convenzioni di chiamata per il collegamento al codice sorgente scritto usando MSVC.

## <a name="format-of-a-c-decorated-name"></a><a name="Format"></a> Formato di un nome decorato C++

Un nome decorato per una funzione C++ contiene le informazioni seguenti:

- Nome della funzione.

- Classe di cui la funzione è membro, se è una funzione membro. Potrebbe includere la classe che comprende la classe che contiene la funzione e così via.

- Spazio dei nomi a cui la funzione appartiene, se fa parte di uno spazio dei nomi.

- Tipi dei parametri della funzione.

- Convenzione di chiamata.

- Tipo restituito della funzione.

I nomi della funzione e della classe vengono codificati nel nome decorato. La parte rimanente del nome decorato è un codice con un significato interno solo per il compilatore e il linker. Di seguito sono riportati esempi di nomi di C++ non decorati e decorati.

|Nome non decorato|Nome decorato|
|----------------------|--------------------|
|`int a(char){int i=3;return i;};`|`?a@@YAHD@Z`|
|`void __stdcall b::c(float){};`|`?c@b@@AAGXM@Z`|

## <a name="format-of-a-c-decorated-name"></a><a name="FormatC"></a> Formato di un nome decorato in C

Il formato della decorazione per una funzione C dipende dalla convenzione di chiamata usata nella dichiarazione, come mostrato nella tabella seguente. Questo è il formato della decorazione usato anche quando viene dichiarato che il codice C++ ha un collegamento `extern "C"`. La convenzione di chiamata predefinita è **`__cdecl`** . Si noti che in un ambiente a 64 bit le funzioni non sono decorate.

|Convenzione di chiamata|Effetto|
|------------------------|----------------|
|**`__cdecl`**|Carattere di sottolineatura principale ( **`_`** )|
|**`__stdcall`**|Carattere di sottolineatura ( **`_`** ) e chiocciola finale ( **`@`** ) seguiti dal numero di byte nell'elenco di parametri in decimali|
|**`__fastcall`**|Segni iniziali e finali ( **`@`** ) seguiti da un numero decimale che rappresenta il numero di byte nell'elenco di parametri|
|**`__vectorcall`**|Due segni di chiocciola finali ( **`@@`** ) seguiti da un numero decimale di byte nell'elenco di parametri|

## <a name="viewing-decorated-names"></a><a name="Viewing"></a> Visualizzazione dei nomi decorati

È possibile ottenere il formato decorato di un nome di simbolo dopo avere compilato il file di origine contenente il prototipo o la definizione di dati, oggetti o funzioni. Per esaminare i nomi decorati nel programma, è possibile usare uno dei metodi seguenti:

#### <a name="to-use-a-listing-to-view-decorated-names"></a>Per usare un listato per la visualizzazione dei nomi decorati

1. Generare un elenco compilando il file di origine che contiene i dati, l'oggetto o la definizione di funzione o il prototipo con l'opzione del compilatore per il [tipo di file elenco](fa-fa-listing-file.md) impostata su assembly con codice sorgente (**/FAS**).

   Ad esempio, immettere `cl /c /FAs example.cpp` al prompt dei comandi per gli sviluppatori per generare un file di listato, ad esempio ASM.

2. Nel file di listato risultante, trovare la riga che inizia con PUBLIC e finisce con un punto e virgola seguito dal nome della funzione o dai dati non decorati. Il simbolo tra PUBLIC e il punto e virgola è il nome decorato.

#### <a name="to-use-dumpbin-to-view-decorated-names"></a>Per usare DUMPBIN per la visualizzazione dei nomi decorati

1. Per visualizzare i simboli esportati in un file con estensione obj o lib, immettere `dumpbin /symbols` `objfile` al prompt dei comandi per gli sviluppatori.

2. Per trovare il formato decorato di un simbolo, cercare il nome non decorato tra parentesi. Il nome decorato si trova sulla stessa riga, dopo un carattere barra verticale (&#124;) e prima del nome non decorato.

## <a name="viewing-undecorated-names"></a><a name="Undecorated"></a> Visualizzazione di nomi non decorati

È possibile usare undname.exe per convertire un nome decorato nel formato non decorato. In questo esempio viene illustrato come funziona:

```
C:\>undname ?func1@a@@AAEXH@Z
Microsoft (R) C++ Name Undecorator
Copyright (C) Microsoft Corporation. All rights reserved.

Undecoration of :- "?func1@a@@AAEXH@Z"
is :- "private: void __thiscall a::func1(int)"
```

## <a name="see-also"></a>Vedi anche

[Ulteriori strumenti di compilazione MSVC](c-cpp-build-tools.md)<br/>
[Uso di extern per specificare un collegamento](../../cpp/extern-cpp.md)

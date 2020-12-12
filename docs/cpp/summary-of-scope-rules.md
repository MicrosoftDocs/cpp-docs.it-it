---
description: 'Altre informazioni su: riepilogo delle regole di ambito'
title: Riepilogo delle regole di ambito
ms.date: 11/04/2016
helpviewer_keywords:
- class scope [C++], rules
- classes [C++], scope
- class names [C++], scope rules
- names [C++], class
- scope [C++], class names
ms.assetid: 47e26482-0111-466f-b857-598c15d05105
ms.openlocfilehash: cbb5fdc448039e2e7ac998fa8dc5754ef7026d8c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97178160"
---
# <a name="summary-of-scope-rules"></a>Riepilogo delle regole di ambito

L'utilizzo di un nome deve essere non ambiguo all'interno dell'ambito relativo (fino al punto in cui viene determinata l'esecuzione dell'overload). Se il nome indica una funzione, quest'ultima deve essere non ambigua rispetto al numero e al tipo di parametri. Se il nome rimane non ambiguo, vengono applicate le regole [di accesso ai membri](../cpp/member-access-control-cpp.md) .

## <a name="constructor-initializers"></a>Inizializzatori del costruttore

Gli [inizializzatori di costruttori](constructors-cpp.md#member_init_list) vengono valutati nell'ambito del blocco più esterno del costruttore per il quale sono specificati. Di conseguenza, possono usare i nomi dei parametri del costruttore.

## <a name="global-names"></a>Nomi globali

Un nome di un oggetto, funzione o enumeratore è globale se viene introdotto al di fuori di qualsiasi funzione o classe o se è preceduto dall'operatore unario di ambito globale (`::`) e se non viene utilizzato insieme a uno degli operatori binari seguenti:

- Risoluzione ambito (`::`)

- Selezione dei membri per gli oggetti e i riferimenti (**.**)

- Selezione dei membri per i puntatori ( **->** )

## <a name="qualified-names"></a>Nomi completi

I nomi usati con l'operatore di risoluzione dell'ambito binario (`::`) sono denominati "nomi completi". Il nome specificato dopo l'operatore di risoluzione dell'ambito binario deve essere un membro della classe specificata a sinistra dell'operatore o un membro della relativa classe base.

Nomi specificati dopo l'operatore di selezione dei membri (**.** o **->** ) deve essere membri del tipo di classe dell'oggetto specificato a sinistra dell'operatore o dei membri della relativa classe di base. I nomi specificati a destra dell'operatore di selezione dei membri ( **->** ) possono essere anche oggetti di un altro tipo di classe, purché il lato sinistro di **->** sia un oggetto classe e che la classe definisca un operatore di selezione dei membri di overload ( **->** ) che restituisce un puntatore a un altro tipo di classe. (Questo provisioning viene trattato in modo più dettagliato nell' [accesso ai membri delle classi](../cpp/member-access.md)).

Il compilatore cerca i nomi nel seguente ordine, arrestandosi quando il nome viene trovato:

1. Ambito blocco corrente se il nome è usato in una funzione; in caso contrario, ambito globale.

1. Verso l'esterno, attraverso ogni ambito di blocco contenitore, compreso l'ambito più esterno della funzione (inclusi i parametri della funzione).

1. Se il nome è già in una funzione membro, viene cercato l'ambito della classe per il nome.

1. Le classi base della classe sono disponibili il nome.

1. Vengono ricercati l'ambito di classe contenitore annidato (se presente) e le relative basi. La ricerca continua fino a trovare l'ambito più esterno della classe contenitore.

1. Viene cercato l'ambito globale.

Tuttavia, è possibile apportare le modifiche a questo ordine di ricerca come segue:

1. I nomi preceduti da `::` forzano l'inizio della ricerca in ambito globale.

1. I nomi preceduti dalle **`class`** **`struct`** **`union`** parole chiave, e forzano il compilatore a cercare solo **`class`** **`struct`** **`union`** i nomi, o.

1. I nomi a sinistra dell'operatore di risoluzione dell'ambito ( `::` ) possono essere solo **`class`** nomi, **`struct`** , **`namespace`** o **`union`** .

Se il nome riferimento a un membro non statico ma viene usato in una funzione membro statica, verrà generato un messaggio di errore. Analogamente, se il nome fa riferimento a un membro non statico in una classe che lo contiene, viene generato un messaggio di errore perché le classi racchiuse non dispongono di puntatori della classe di inclusione **`this`** .

## <a name="function-parameter-names"></a>Nomi dei parametri delle funzioni

I nomi dei parametri delle funzioni nelle definizioni di funzione sono considerati nell'ambito del blocco più esterno della funzione. Di conseguenza, sono nomi locali e diventano esterni all'ambito quando si esce dalla funzione.

I nomi dei parametri delle funzioni nelle dichiarazioni di funzione (prototipi) sono inclusi nell'ambito locale della dichiarazione e diventano esterni all'ambito alla fine della dichiarazione.

I parametri predefiniti sono inclusi nell'ambito del parametro per il quale costituiscono l'impostazione predefinita, come descritto nei due paragrafi precedenti. Tuttavia, non possono accedere alle variabili locali o ai membri di classe non statici. I parametri predefiniti vengono valutati al momento della chiamata di funzione, ma vengono valutati nell'ambito originale della dichiarazione di funzione. Di conseguenza, i parametri predefiniti per le funzioni membro vengono sempre valutati nell'ambito della classe.

## <a name="see-also"></a>Vedi anche

[Ereditarietà](../cpp/inheritance-cpp.md)

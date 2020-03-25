---
title: Funzioni membro speciali
ms.date: 12/06/2016
helpviewer_keywords:
- special member functions [C++]
- constructors [C++]
- destructors [C++]
- copy operators [C++]
- move operators [C++]
- assignment operators [C++]
ms.assetid: 017d6817-b012-44f0-b153-f3076c251ea7
ms.openlocfilehash: b15a0e50774bbc4e70912a31f9a57ea0439f2c12
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80178691"
---
# <a name="special-member-functions"></a>Funzioni membro speciali

Le *funzioni membro speciali* sono funzioni membro di classe (o struct) che, in alcuni casi, il compilatore genera automaticamente. Queste funzioni sono il [costruttore predefinito](constructors-cpp.md#default_constructors), il [distruttore](destructors-cpp.md), il [costruttore di copia e l'operatore di assegnazione di copia](copy-constructors-and-copy-assignment-operators-cpp.md)e il costruttore di [spostamento e l'operatore di assegnazione di spostamento](move-constructors-and-move-assignment-operators-cpp.md). Se la classe non definisce una o più funzioni membro speciali, il compilatore può dichiarare e definire in modo implicito le funzioni utilizzate. Le implementazioni generate dal compilatore sono chiamate funzioni membro speciali *predefinite* . Il compilatore non genera funzioni se non sono necessarie.

È possibile dichiarare in modo esplicito una funzione membro speciale predefinita usando la parola chiave **= default** . In questo modo, il compilatore definisce la funzione solo se necessario, nello stesso modo in cui la funzione non è stata dichiarata.

In alcuni casi, il compilatore può generare funzioni membro speciali *eliminate* , che non sono definite e pertanto non richiamabili. Questo problema può verificarsi nei casi in cui una chiamata a una particolare funzione membro speciale in una classe non ha senso, date altre proprietà della classe. Per impedire in modo esplicito la generazione automatica di una funzione membro speciale, è possibile dichiararla come eliminata tramite la parola chiave **= Delete** .

Il compilatore genera un *costruttore predefinito*, un costruttore che non accetta argomenti, solo se non sono stati dichiarati altri costruttori. Se è stato dichiarato solo un costruttore che accetta parametri, il codice che tenta di chiamare un costruttore predefinito fa in modo che il compilatore generi un messaggio di errore. Il costruttore predefinito generato dal compilatore esegue una semplice [inizializzazione predefinita](initializers.md#default_initialization) per membro dell'oggetto. L'inizializzazione predefinita lascia tutte le variabili membro in uno stato indeterminato.

Il distruttore predefinito esegue la distruzione del membro dell'oggetto. È virtuale solo se un distruttore della classe base è virtuale.

Le operazioni di creazione e assegnazione predefinite di copia e spostamento eseguono copie dei criteri di bit a livello di membro o spostamenti di membri dati non statici. Le operazioni di spostamento vengono generate solo quando non viene dichiarata alcuna operazione di distruttore o di spostamento o copia. Un costruttore di copia predefinito viene generato solo quando non viene dichiarato alcun costruttore di copia. Viene eliminato in modo implicito se viene dichiarata un'operazione di spostamento. Un operatore di assegnazione di copia predefinito viene generato solo quando non viene dichiarato in modo esplicito alcun operatore di assegnazione di copia. Viene eliminato in modo implicito se viene dichiarata un'operazione di spostamento.

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](cpp-language-reference.md)

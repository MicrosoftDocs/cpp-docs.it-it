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
ms.openlocfilehash: 3b26628fd18749bd19819fe787888fd3264a79d1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62330980"
---
# <a name="special-member-functions"></a>Funzioni membro speciali

Il *funzioni membro speciali* sono funzioni membro che, in alcuni casi, il compilatore genera automaticamente per l'utente di classe (o struct). Queste funzioni sono le [costruttore predefinito](constructors-cpp.md#default_constructors), il [distruttore](destructors-cpp.md), il [costruttore di copia e l'operatore di assegnazione copia](copy-constructors-and-copy-assignment-operators-cpp.md)e il [costruttore di spostamento e operatore di assegnazione spostamento](move-constructors-and-move-assignment-operators-cpp.md). Se la classe non definisce uno o più delle funzioni membro speciali, quindi il compilatore può in modo implicito dichiarano e definire le funzioni che vengono usate. Le implementazioni generate dal compilatore vengono chiamate i *predefinito* funzioni membro speciali. Il compilatore non genera funzioni se non sono necessari.

È possibile dichiarare una funzione membro speciale predefinito in modo esplicito usando il **= default** (parola chiave). Ciò indica al compilatore di definire la funzione solo se necessario, esattamente come se la funzione non è stata dichiarata affatto.

In alcuni casi, il compilatore può generarne *eliminato* funzioni membro speciali, che non sono definiti e pertanto non richiamabile. Questa situazione può verificarsi nei casi in cui una chiamata a una funzione membro speciale specifica in una classe non ha senso, altre proprietà della classe di base. Per impedire in modo esplicito la generazione automatica di una funzione membro speciale, è possibile dichiararla come eliminato usando il **= eliminazione** (parola chiave).

Il compilatore genera un *costruttore predefinito*, un costruttore che non accetta argomenti, solo quando non è stato dichiarato un altro costruttore. Se è stata dichiarata solo un costruttore che accetta parametri, il codice che tenta di chiamare un costruttore predefinito fa sì che il compilatore genererà un messaggio di errore. Il costruttore predefinito generato dal compilatore esegue semplice member-wise [inizializzazione predefinita](initializers.md#default_initialization) dell'oggetto. Inizializzazione predefinita lascia tutte le variabili membro in uno stato indeterminato.

Il distruttore predefinito esegue automaticamente distruzione dell'oggetto. È virtuale solo se un distruttore della classe base è virtuale.

Schema di bit automaticamente di eseguire la copia predefinita e costruzione di spostamenti e le operazioni di assegnazione copia o Sposta dei membri dati non statici. Spostare le operazioni vengono generate solo quando non vengono dichiarate alcun distruttore o operazioni di copia o spostamento. Un costruttore di copia predefinito viene generato solo quando non viene dichiarato alcun costruttore di copia. Se viene dichiarata un'operazione di spostamento viene eliminato in modo implicito. Un operatore di assegnazione di copia predefinito viene generato solo quando non viene dichiarato in modo esplicito alcun operatore di assegnazione di copia. Se viene dichiarata un'operazione di spostamento viene eliminato in modo implicito.

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](cpp-language-reference.md)
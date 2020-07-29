---
title: Spazi dei nomi
ms.date: 11/04/2016
helpviewer_keywords:
- union keyword [C], tags
- enumeration tags
- structure tags
- names [C++], declared elements
- name spaces [C++]
- tags, structure tags
- union keyword [C]
ms.assetid: b4bda1d1-cb5e-4f60-ac2b-29af93d8a9a2
ms.openlocfilehash: 28036219464e96ae20733473dedb4fab63f6de38
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218819"
---
# <a name="name-spaces"></a>Spazi dei nomi

Il compilatore ha configurato gli "spazi dei nomi" per distinguere tra gli identificatori utilizzati per diversi tipi di elementi. I nomi all'interno di ogni spazio dei nomi devono essere univoci evitare conflitti, ma un nome identico può apparire in più spazi dei nomi. Ciò significa che è possibile utilizzare lo stesso identificatore per due o più elementi diversi, a condizione che gli elementi siano in spazi dei nomi diversi. Il compilatore può risolvere i riferimenti basati sul contesto sintattico dell'identificatore del programma.

> [!NOTE]
> Non confondere la nozione limitata del linguaggio C di uno spazio dei nomi con la funzionalità dello "spazio dei nomi" del linguaggio C++. Per altre informazioni, vedere [Spazi dei nomi](../cpp/namespaces-cpp.md) in Riferimenti del linguaggio C++.

In questo elenco vengono descritti gli spazi dei nomi utilizzati nel linguaggio C.

Le etichette di istruzione denominate fanno parte delle istruzioni. Le definizioni delle etichette di istruzione sono sempre seguite da due punti, ma non fanno parte delle **`case`** etichette. Gli utilizzi delle etichette di istruzione seguono sempre immediatamente la parola chiave **`goto`** . Le etichette di istruzione non devono essere differenti da altri nomi o dai nomi delle etichette di altre funzioni.

Tag di struttura, Unione ed enumerazione questi tag fanno parte degli identificatori di tipo struttura, Unione ed enumerazione e, se presenti, seguono sempre immediatamente le parole riservate **`struct`** , **`union`** o **`enum`** . I nomi di tag devono essere differenti da tutti gli altri tag della struttura, di enumerazione o di unione con la stessa visibilità.

Membri di strutture o unioni - I nomi dei membri vengono allocati negli spazi dei nomi associati a ciascun tipo di unione e struttura. Pertanto, lo stesso identificatore può essere contemporaneamente il nome di un componente in un numero indefinito di strutture o unioni. Le definizioni dei nomi di componenti si verificano sempre negli identificatori del tipo di unione o struttura. Gli utilizzi dei nomi dei componenti seguono sempre immediatamente gli operatori di selezione dei membri ( **->** e). **.** Il nome di un membro deve essere univoco nella struttura o unione, ma non deve essere diverso da altri nomi nel programma, inclusi i nomi dei membri di strutture e unioni differenti o il nome della struttura stessa.

Identificatori comuni - Tutti gli altri nomi rientrano in uno spazio dei nomi che include le variabili, le funzioni (inclusi i parametri formali e le variabili locali) e le costanti di enumerazione. I nomi degli identificatori possiedono una visibilità Nested, pertanto è possibile ridefinirli all'interno di blocchi.

Nomi typedef - I nomi typedef non possono essere usati come identificatori nello stesso ambito.

Ad esempio, poiché i tag della struttura, i membri della struttura e i nomi di variabili sono in tre spazi dei nomi diversi, i tre elementi denominati `student` in questo esempio non sono in conflitto. Il contesto di ogni elemento consente la corretta interpretazione di ogni occorrenza di `student` nel programma. Per informazioni sulle strutture, vedere [Dichiarazioni di struttura](../c-language/structure-declarations.md).

```C
struct student {
   char student[20];
   int class;
   int id;
   } student;
```

Quando `student` viene visualizzato dopo la **`struct`** parola chiave, il compilatore lo riconosce come un tag della struttura. Quando `student` viene visualizzato dopo un operatore di selezione dei membri ( **->** o **.**), il nome fa riferimento al membro della struttura. In altri contesti, `student` fa riferimento alla variabile di struttura. Tuttavia, l'overload dello spazio dei nomi di tag non è consigliato poiché rende poco chiaro il significato.

## <a name="see-also"></a>Vedere anche

[Struttura del programma](../c-language/program-structure.md)

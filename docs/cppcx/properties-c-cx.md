---
description: 'Altre informazioni su: Proprietà (C++/CX)'
title: Proprietà (C++/CX)
ms.date: 01/22/2017
ms.assetid: 64c7bc56-3191-4cd5-bdf4-476d07d285d5
ms.openlocfilehash: 5c56dabb080404b074408f60b6c06535558c1d82
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97239714"
---
# <a name="properties-ccx"></a>Proprietà (C++/CX)

I tipi di Windows Runtime espongono i dati pubblici come proprietà. Il codice client accede alla proprietà come un membro dati pubblico. Internamente, la proprietà viene implementata come blocco contenente un metodo di funzione di accesso get, un metodo di funzione di accesso set, o entrambi. L'utilizzo dei metodi di funzione di accesso ti consente di eseguire azioni aggiuntive prima o dopo aver recuperato il valore. Puoi, ad esempio, generare un evento o eseguire controlli di convalida.

### <a name="remarks"></a>Commenti

Il valore di una proprietà è contenuto in una variabile privata, nota come l' *archivio di backup*, che è dello stesso tipo della proprietà. Una proprietà può contenere sia una funzione di accesso set, che assegna un valore all'archivio di backup, che una funzione di accesso get, che recupera il valore dell'archivio di backup. La proprietà è di sola lettura se contiene solo una funzione di accesso get, di sola scrittura se contiene solo una funzione di accesso set e di lettura/scrittura (modificabile) se contiene entrambe le funzioni di accesso.

Una proprietà *semplice* è una proprietà di lettura/scrittura per la quale il compilatore implementa automaticamente le funzioni di accesso e l'archivio di backup. Non è necessario accedere all'implementazione del compilatore. Puoi però dichiarare una proprietà personalizzata e dichiararne in modo esplicito le funzioni di accesso e l'archivio di backup. All'interno di una funzione di accesso, puoi eseguire qualsiasi logica a te utile, come la convalida dell'input alla funzione di accesso SET, il calcolo di un valore dal valore della proprietà, l'accesso a un database o la generazione di un evento alla modifica della proprietà.

Se viene creata un'istanza di una classe di riferimento C++/CX, la relativa memoria viene inizializzata sullo zero prima di chiamare il costruttore, pertanto a tutte le proprietà viene assegnato il valore predefinito zero o nullptr al momento della dichiarazione.

### <a name="examples"></a>Esempio

Nell'esempio di codice seguente viene illustrato come dichiarare e accedere a una proprietà. La prima proprietà, `Name`, è una proprietà *semplice* perché il compilatore genera automaticamente le funzioni di accesso `set` e `get` e un archivio di backup.

La seconda proprietà, `Doctor`, è di sola lettura perché specifica un *blocco Property* che dichiara in modo esplicito solo una funzione di accesso `get` . Se è dichiarato il blocco Property, devi dichiarare in modo esplicito un archivio di backup, ovvero la variabile String^ privata `doctor_`. In genere, una proprietà di sola lettura restituisce semplicemente il valore dell'archivio di backup. Solo la classe stessa può impostare il valore dell'archivio di backup, in genere nel costruttore.

La terza proprietà, `Quantity`, è una proprietà di lettura/scrittura in quanto contiene la dichiarazione di un blocco Property che dichiara entrambe le funzioni di accesso `set` e `get` .

La funzione di accesso `set` esegue un test di validità definito dall'utente sul valore assegnato. Contrariamente a quanto accade in C#, qui il nome *value* è solo l'identificatore del parametro nella funzione di accesso `set` , non una parola chiave. Se *value* non è maggiore di zero, viene generata l'eccezione Platform::InvalidArgumentException. In caso contrario, l'archivio di backup, `quantity_`, viene aggiornato con il valore assegnato.

Notare che è impossibile inizializzare una proprietà in un elenco di membri. Puoi naturalmente inizializzare le variabili dell'archivio di backup in un elenco di membri.

[!code-cpp[cx_properties#01](../cppcx/codesnippet/CPP/cx_properties/class1.h#01)]

## <a name="see-also"></a>Vedi anche

[Sistema di tipi](../cppcx/type-system-c-cx.md)<br/>
[Riferimenti per il linguaggio C++/CX](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Riferimenti agli spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)

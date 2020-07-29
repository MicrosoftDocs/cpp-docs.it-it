---
title: Riferimento rapido (C++/CX)
ms.date: 12/30/2016
ms.assetid: ba457195-26e5-43aa-b99d-24a871e550f4
ms.openlocfilehash: 6effcaec6a619bdd674dcae3bf4092fe82404d08
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214971"
---
# <a name="quick-reference-ccx"></a>Riferimento rapido (C++/CX)

Il Windows Runtime supporta le app piattaforma UWP (Universal Windows Platform) (UWP) che vengono eseguite solo in un ambiente di sistema operativo attendibile, usano funzioni, tipi di dati e dispositivi autorizzati e vengono distribuiti tramite il Microsoft Store. Il/CX C++ semplifica la scrittura di app per la Windows Runtime. Questo articolo è un riferimento rapido; per una documentazione più completa, vedere [System Type](../cppcx/type-system-c-cx.md).

Quando si compila nella riga di comando, usare l'opzione del compilatore **/ZW** per compilare un'app UWP o un componente Windows Runtime. Per accedere alle dichiarazioni di Windows Runtime, definite nei file di metadati Windows Runtime (con estensione winmd), specificare la `#using` direttiva o l'opzione del compilatore **/fu** . Quando si crea un progetto per un'app UWP, per impostazione predefinita in Visual Studio vengono impostate queste opzioni e vengono aggiunti riferimenti a tutte le librerie Windows Runtime.

## <a name="quick-reference"></a>Riferimento rapido

|Concetto|C++ standard|C++/CX|Osservazioni|
|-------------|--------------------|------------------------------------------------------------------|-------------|
|Tipi fondamentali|Tipi di base di C++.|C++/CX i tipi fondamentali che implementano i tipi fondamentali definiti nel Windows Runtime.|Lo `default` spazio dei nomi contiene i tipi fondamentali incorporati in C++/CX. Il compilatore esegue in modo implicito il mapping dei tipi fondamentali C++/CX ai tipi C++ standard.<br /><br /> La `Platform` famiglia di spazi dei nomi contiene tipi che implementano i tipi di Windows Runtime fondamentali.|
||**`bool`**|**`bool`**|Valore booleano a 8 bit.|
||**`wchar_t`**, **`char16_t`**|`char16`|Valore non numerico a 16 bit che rappresenta un punto di codice Unicode (UTF-16).|
||**`short`**<br /><br /> **`unsigned short`**|`int16`<br /><br /> `uint16`|Intero con segno a 16 bit.<br /><br /> Numero intero non firmato a 16 bit.|
||**`int`**<br /><br /> **`unsigned int`**|**`int`**<br /><br /> `uint32`|Intero con segno a 32 bit.<br /><br /> Intero senza segno a 32 bit.|
||**`long long`** o**`__int64`**<br /><br /> **`unsigned long long`**|`int64`<br /><br /> `uint64`|Intero con segno a 64 bit.<br /><br /> Intero senza segno a 64 bit.|
||**`float`**, **`double`**|`float32, float64`|Numero a virgola mobile a 32 o 64 bit IEEE 754.|
||**`enum`**|**`enum class`**<br /><br /> -oppure-<br /><br /> **`enum struct`**|Enumerazione a 32 bit.|
||Non applicabile|`Platform::Guid`|Valore non numerico a 128 bit (GUID) nello spazio dei nomi `Platform` .|
||`std::time_get`|`Windows::Foundation::DateTime`|Struttura di data e ora.|
||Non applicabile|`Windows::Foundation::TimeSpan`|Struttura timespan.|
||Non applicabile|`Platform::Object^`|Oggetto di base con conteggio dei riferimenti nella visualizzazione C++ del sistema di tipi di Windows Runtime.|
||`std::wstring`<br /><br /> `L"..."`|`Platform::String^`|`Platform::String^` è una sequenza di caratteri Unicode che rappresenta del testo. La sequenza è non modificabile e con conteggio dei riferimenti.|
|Puntatore|Puntatore a oggetto (`*`):<br /><br /> `std::shared_ptr`|Handle all'oggetto (`^`):<br /><br /> *Identificatore T^*|Tutte le classi Windows Runtime vengono dichiarate usando il modificatore handle a oggetto. Ai membri dell'oggetto si accede tramite l'operatore di accesso membro-classe a freccia (`->`).<br /><br /> Il modificatore Hat significa "puntatore a un Windows Runtime oggetto a cui si fa riferimento automaticamente". Più precisamente, l'handle all'oggetto dichiara che tramite il compilatore deve essere inserito del codice per gestire automaticamente il conteggio dei riferimenti dell'oggetto e, se il conteggio dei riferimenti scende a zero, l'oggetto viene eliminato.|
|Informazioni di riferimento|Riferimento a un oggetto (`&`):<br /><br /> *T* `&` *identifier*|Riferimento di rilevamento (`%`):<br /><br /> *T* `%` *identifier*|Solo i tipi di Windows Runtime possono essere dichiarati usando il modificatore di riferimento di rilevamento. Ai membri dell'oggetto si accede tramite l'operatore di accesso membro-classe a punto (`.`).<br /><br /> Il riferimento di rilevamento indica "un riferimento a un oggetto Windows Runtime a cui viene fatto riferimento automaticamente." Più precisamente, un riferimento di rilevamento dichiara che tramite il compilatore deve essere inserito del codice per gestire automaticamente il conteggio dei riferimenti dell'oggetto e, se il conteggio dei riferimenti scende a zero, l'oggetto viene eliminato.|
|dichiarazione di tipo dinamico|`new`|`ref new`|Alloca un oggetto Windows Runtime e quindi restituisce un handle a tale oggetto.|
|gestione della durata degli oggetti|`delete`*identificatore* di<br /><br /> `delete[]`  *identificatore*|Richiama il distruttore.|La durata è dipende dal conteggio dei riferimenti. Una chiamata per l'eliminazione richiama il distruttore, ma non libera di per sé la memoria.|
|dichiarazione di matrice|*Identificatore T*`[]`<br /><br /> `std::array`*identificatore* di|`Array<` *T* `^>^` *identifier* `(` *size* `)`<br /><br /> -oppure-<br /><br /> `WriteOnlyArray<` *T* `^>`  *identifier* `(` *size* `)`|Dichiara una matrice unidimensionale modificabile o di sola scrittura di tipo T^. La matrice stessa è un oggetto con conteggio dei riferimenti che deve essere dichiarato mediante il modificatore handle a oggetto.<br /><br /> Le dichiarazioni di matrice utilizzano una classe intestazione del modello nello spazio dei nomi `Platform` .|
|dichiarazione di classe|**`class`***identificatore* di`{}`<br /><br /> **`struct`***identificatore* di`{}`|**`ref class`***identificatore* di`{}`<br /><br /> **`ref struct`***identificatore* di`{}`|Dichiara una classe di runtime con accessibilità privata predefinita.<br /><br /> Dichiara una classe di runtime con accessibilità pubblica predefinita.|
|dichiarazione di struttura|**`struct`***identificatore* di`{}`<br /><br /> (struttura POD)|**`value class`***identificatore* di`{}`<br /><br /> **`value struct`***identificatore* di`{}`|Dichiara uno struct POD con accessibilità privata predefinita.<br /><br /> Una classe di valore può essere rappresentata nei metadati di Windows, ma non una classe C++ standard.<br /><br /> Dichiara uno struct POD con accessibilità pubblica predefinita.<br /><br /> Uno struct di valore può essere rappresentato nei metadati di Windows, ma non uno struct C++ standard.|
|dichiarazione di interfaccia|classe astratta che contiene solo le funzioni virtuali pure.|**`interface class`***identificatore* di`{}`<br /><br /> **`interface struct`***identificatore* di`{}`|Dichiara un'interfaccia con accessibilità privata predefinita.<br /><br /> Dichiara un'interfaccia con accessibilità pubblica predefinita.|
|Delegato|`std::function`|`public delegate` *return-type* *delegate-type-identifier* `(` *[parameters]* `);`|Dichiara un oggetto che può essere chiamato come una chiamata di funzione.|
|Event|Non applicabile|**`event`***identificatore evento* *delegato-tipo-* identificatore`;`<br /><br /> Delegate *-Type-* *Identifier*delegate-identificatore-  =  `ref new` *tipo-identificatore* `( this` *[, parametri]*`);`<br /><br /> *event-identifier* `+=` *delegate-identifier* `;`<br /><br /> -oppure-<br /><br /> `EventRegistrationToken`*identificatore token*  =  *obj* `.` *identificatore evento* `+=` *identificatore delegato*`;`<br /><br /> -oppure-<br /><br /> **`auto`***identificatore token*  =  *obj*. *identificatore evento* `::add(` *identificatore delegato*`);`<br /><br /> *obj* `.` *event-identifier* `-=` *token-identifier* `;`<br /><br /> -oppure-<br /><br /> *obj* `.` *event-identifier* `::remove(` *token-identifier* `);`|Dichiara un oggetto evento, che memorizza una raccolta di gestori eventi (delegati) che vengono chiamati quando si verifica un evento.<br /><br /> Crea un gestore eventi.<br /><br /> Aggiunge un gestore eventi.<br /><br /> L'aggiunta di un gestore eventi restituisce un token di evento (*token-identifier*). Se vuoi rimuovere in modo esplicito il gestore eventi, devi salvare il token di evento per un utilizzo successivo.<br /><br /> Rimuove un gestore eventi.<br /><br /> Per rimuovere un gestore eventi, devi specificare il token di evento salvato al momento dell'aggiunta del gestore eventi.|
|Proprietà|Non applicabile|**`property`***T* *Identificatore*T;<br /><br /> **`property`***T* *identifier* `[` *Indice* identificatore T`];`<br /><br /> **`property`***T* `default[` *Indice* T`];`|Dichiara che è possibile accedere a una funzione membro dell'oggetto o della classe con la stessa sintassi utilizzata per accedere a un membro di dati o un elemento di matrice indicizzata.<br /><br /> Dichiara una proprietà nella funzione membro dell'oggetto o della classe.<br /><br /> Dichiara una proprietà indicizzata in una funzione membro dell'oggetto.<br /><br /> Dichiara una proprietà indicizzata nella funzione membro della classe.|
|Tipi con parametri|Modelli|`generic <typename`*T* `> interface class` *Identificatore* T`{}`<br /><br /> `generic <typename` *T* `> delegate` *[return-type]* *delegate-identifier* `() {}`|Dichiara una classe di interfaccia con parametri.<br /><br /> Dichiara un delegato con parametri.|
|Tipi valore nullable|`boost::optional<T>`|[Platform:: IBox\<T>](../cppcx/platform-ibox-interface.md)|Consente alle variabili dei tipi scalari e degli struct di valore di avere un valore pari a **`nullptr`** .|

## <a name="see-also"></a>Vedere anche

[Riferimenti per il linguaggio C++/CX](../cppcx/visual-c-language-reference-c-cx.md)

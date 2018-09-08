---
title: Riferimento rapido (C + c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: language-reference
ms.assetid: ba457195-26e5-43aa-b99d-24a871e550f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5b3ee46b2be08992fa3254edfbf2423b80dcabb1
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44102117"
---
# <a name="quick-reference-ccx"></a>Riferimento rapido (C++/CX)

Il Runtime di Windows supporta le app Universal Windows Platform (UWP) eseguite solo in un ambiente di sistema operativo attendibile, utilizzano funzioni autorizzate, tipi di dati e dispositivi e vengono distribuite tramite il Microsoft Store. C + c++ /CX semplifica lo sviluppo di App per Windows Runtime. Questo articolo è un riferimento rapido. Per informazioni più complete, vedere [sistema di tipi](../cppcx/type-system-c-cx.md).

Quando si compila dalla riga di comando, usare il **/ZW** opzione del compilatore per compilare un'app UWP o un componente Windows Runtime. Per accedere alle dichiarazioni di Windows Runtime, che sono definite nei file di metadati (con estensione winmd) di Windows Runtime, specificare il `#using` direttiva o il **/FU** opzione del compilatore. Quando si crea un progetto per un'app UWP, Visual Studio per impostazione predefinita imposta queste opzioni e aggiunge i riferimenti a tutte le librerie di Runtime di Windows.

## <a name="quick-reference"></a>Riferimento rapido

|Concetto|C++ standard|C++/CX|Note|
|-------------|--------------------|------------------------------------------------------------------|-------------|
|Tipi fondamentali|Tipi di base di C++.|C + + / tipi fondamentali di CX che implementano i tipi fondamentali che sono definiti nel Runtime di Windows.|Il `default` dello spazio dei nomi contiene C + + c++ /CLI CX predefinito i tipi di base. Il compilatore in modo implicito esegue il mapping di C + + c++ /CX fondamentali ai tipi standard C++.<br /><br /> Il `Platform` famiglia di spazi dei nomi contiene tipi che implementano i tipi fondamentali di Windows Runtime.|
||`bool`|`bool`|Valore booleano a 8 bit.|
||`__wchar_t`|`char16`|Valore non numerico a 16 bit che rappresenta un punto di codice Unicode (UTF-16).|
||`short`<br /><br /> `unsigned short`|`int16`<br /><br /> `uint16`|Intero con segno a 16 bit.<br /><br /> Intero senza segno a 16 bit.|
||`int`<br /><br /> `unsigned int`|`int`<br /><br /> `uint32`|Intero con segno a 32 bit.<br /><br /> Intero senza segno a 32 bit.|
||`long long` -oppure- `__int64`<br /><br /> `unsigned long long`|`int64`<br /><br /> `uint64`|Intero con segno a 64 bit.<br /><br /> Intero senza segno a 64 bit.|
||`float, double`|`float32, float64`|Numero a virgola mobile a 32 o 64 bit IEEE 754.|
||`enum {}`|`enum class {}`<br /><br /> oppure<br /><br /> `enum struct {}`|Enumerazione a 32 bit.|
||Non applicabile|`Platform::Guid`|Valore non numerico a 128 bit (GUID) nello spazio dei nomi `Platform` .|
||`std::time_get`|`Windows::Foundation::DateTime`|Struttura di data e ora.|
||Non applicabile|`Windows::Foundation::TimeSpan`|Struttura timespan.|
||Non applicabile|`Platform::Object^`|L'oggetto di base con conteggio dei riferimenti nella vista del sistema di tipi Windows Runtime C++.|
||`std::wstring`<br /><br /> `L"..."`|`Platform::String^`|`Platform::String^` è una sequenza di caratteri Unicode che rappresenta del testo. La sequenza è non modificabile e con conteggio dei riferimenti.|
|Puntatore|Puntatore a oggetto (`*`):<br /><br /> `std::shared_ptr`|Handle all'oggetto (`^`):<br /><br /> *Identificatore T^*|Tutte le classi di Windows Runtime vengono dichiarate usando il modificatore handle a oggetto. Ai membri dell'oggetto si accede tramite l'operatore di accesso membro-classe a freccia (`->`).<br /><br /> Il modificatore di hat significa "puntatore a un oggetto Windows Runtime che viene automaticamente riferimento conteggiata". Più precisamente, l'handle all'oggetto dichiara che tramite il compilatore deve essere inserito del codice per gestire automaticamente il conteggio dei riferimenti dell'oggetto e, se il conteggio dei riferimenti scende a zero, l'oggetto viene eliminato.|
|Riferimenti|Riferimento a un oggetto (`&`):<br /><br /> *T* `&` *identifier*|Riferimento di rilevamento (`%`):<br /><br /> *T* `%` *identifier*|Solo Windows Runtime, i tipi possono essere dichiarati usando il rilevamento di fare riferimento a modificatore. Ai membri dell'oggetto si accede tramite l'operatore di accesso membro-classe a punto (`.`).<br /><br /> Il riferimento di rilevamento indica che "un riferimento a un oggetto Windows Runtime che viene automaticamente riferimenti". Più precisamente, un riferimento di rilevamento dichiara che tramite il compilatore deve essere inserito del codice per gestire automaticamente il conteggio dei riferimenti dell'oggetto e, se il conteggio dei riferimenti scende a zero, l'oggetto viene eliminato.|
|dichiarazione di tipo dinamico|`new`|`ref new`|Alloca un oggetto Windows Runtime e quindi restituisce un handle a quell'oggetto.|
|gestione della durata degli oggetti|`delete` *identifier*<br /><br /> `delete[]`  *identifier*|Richiama il distruttore.|La durata è dipende dal conteggio dei riferimenti. Una chiamata per l'eliminazione richiama il distruttore, ma non libera di per sé la memoria.|
|dichiarazione di matrice|*Identificatore T* `[]`<br /><br /> `std::array` *identifier*|`Array<` *T* `^>^` *identifier* `(` *size* `)`<br /><br /> oppure<br /><br /> `WriteOnlyArray<` *T* `^>`  *identifier* `(` *size* `)`|Dichiara una matrice unidimensionale modificabile o di sola scrittura di tipo T^. La matrice stessa è un oggetto con conteggio dei riferimenti che deve essere dichiarato mediante il modificatore handle a oggetto.<br /><br /> Le dichiarazioni di matrice utilizzano una classe intestazione del modello nello spazio dei nomi `Platform` .|
|dichiarazione di classe|`class`  *identifier* `{}`<br /><br /> `struct` *identifier* `{}`|`ref class` *identifier* `{}`<br /><br /> `ref struct` *identifier* `{}`|Dichiara una classe di runtime con accessibilità privata predefinita.<br /><br /> Dichiara una classe di runtime con accessibilità pubblica predefinita.|
|dichiarazione di struttura|`struct` *identifier* `{}`<br /><br /> (struttura POD)|`value class` *identifier* `{}`<br /><br /> `value struct` *identifier* `{}`|Dichiara uno struct POD con accessibilità privata predefinita.<br /><br /> Una classe di valore può essere rappresentata nei metadati di Windows, ma non una classe C++ standard.<br /><br /> Dichiara uno struct POD con accessibilità pubblica predefinita.<br /><br /> Uno struct di valore può essere rappresentato nei metadati di Windows, ma non uno struct C++ standard.|
|dichiarazione di interfaccia|classe astratta che contiene solo le funzioni virtuali pure.|`interface class` *identifier* `{}`<br /><br /> `interface struct` *identifier* `{}`|Dichiara un'interfaccia con accessibilità privata predefinita.<br /><br /> Dichiara un'interfaccia con accessibilità pubblica predefinita.|
|delegato|`std::function`|`public delegate` *return-type* *delegate-type-identifier* `(` *[parameters]* `);`|Dichiara un oggetto che può essere chiamato come una chiamata di funzione.|
|event|Non applicabile|`event` *delegate-type-identifier* *event-identifier* `;`<br /><br /> *delegate-type-identifier* *delegate-identifier* = `ref new`*delegate-type-identifier*`( this`*[, parameters]*`);`<br /><br /> *event-identifier* `+=` *delegate-identifier* `;`<br /><br /> oppure<br /><br /> `EventRegistrationToken` *token-identifier* = *obj*`.`*event-identifier*`+=`*delegate-identifier*`;`<br /><br /> oppure<br /><br /> `auto` *token-identifier* = *obj*. *event-identifier*`::add(`*delegate-identifier*`);`<br /><br /> *obj* `.` *event-identifier* `-=` *token-identifier* `;`<br /><br /> oppure<br /><br /> *obj* `.` *event-identifier* `::remove(` *token-identifier* `);`|Dichiara un oggetto evento, che memorizza una raccolta di gestori eventi (delegati) che vengono chiamati quando si verifica un evento.<br /><br /> Crea un gestore eventi.<br /><br /> Aggiunge un gestore eventi.<br /><br /> L'aggiunta di un gestore eventi restituisce un token di evento (*token-identifier*). Se vuoi rimuovere in modo esplicito il gestore eventi, devi salvare il token di evento per un utilizzo successivo.<br /><br /> Rimuove un gestore eventi.<br /><br /> Per rimuovere un gestore eventi, devi specificare il token di evento salvato al momento dell'aggiunta del gestore eventi.|
|proprietà|Non applicabile|`property` *T* *identifier*;<br /><br /> `property` *T* *identifier* `[` *indice* `];`<br /><br /> `property` *T* `default[` *indice* `];`|Dichiara che è possibile accedere a una funzione membro dell'oggetto o della classe con la stessa sintassi utilizzata per accedere a un membro di dati o un elemento di matrice indicizzata.<br /><br /> Dichiara una proprietà nella funzione membro dell'oggetto o della classe.<br /><br /> Dichiara una proprietà indicizzata in una funzione membro dell'oggetto.<br /><br /> Dichiara una proprietà indicizzata nella funzione membro della classe.|
|Tipi con parametri|modelli|`generic <typename` *T* `> interface class` *identifier* `{}`<br /><br /> `generic <typename` *T* `> delegate` *[return-type]* *delegate-identifier* `() {}`|Dichiara una classe di interfaccia con parametri.<br /><br /> Dichiara un delegato con parametri.|
|Tipi valore nullable|`boost::optional<T>`|[Platform:: ibox \<T >](../cppcx/platform-ibox-interface.md)|Consente alle variabili dei tipi scalari e degli struct di valore di avere un valore `nullptr`.|

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio Visual C++](../cppcx/visual-c-language-reference-c-cx.md)
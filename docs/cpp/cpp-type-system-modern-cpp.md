---
title: Sistema di tipi C++ (C++ moderno)
ms.date: 11/19/2018
ms.topic: conceptual
ms.assetid: 553c0ed6-77c4-43e9-87b1-c903eec53e80
ms.openlocfilehash: b947bd6955a80e051d1dab81061b4b2bf2ab19c8
ms.sourcegitcommit: 8178d22701047d24f69f10d01ba37490e3d67241
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/18/2019
ms.locfileid: "69498634"
---
# <a name="c-type-system-modern-c"></a>Sistema di tipi C++ (C++ moderno)

Il concetto di *tipo* è molto importante in C++. Per poter essere compilati è necessario che a ogni variabile, argomento di funzione e valore restituito di una funzione siano associati tipi. A ogni espressione (compresi i valori letterali) viene inoltre assegnato un tipo in modo implicito prima della restituzione di un risultato. Alcuni esempi di tipi includono **int** per archiviare i valori integrali, **Double** per archiviare i valori a virgola mobile (noti anche come tipi di dati *scalari* ) o la classe della libreria standard [std:: basic_string](../standard-library/basic-string-class.md) per archiviare il testo. È possibile creare un tipo personalizzato definendo una **classe** o uno **struct**. Il tipo specifica la quantità di memoria che verrà allocata per la variabile (o risultato dell'espressione), i tipi di valori che è possibile archiviare in tale variabile, la modalità di interpretazione di questi valori (come schemi di bit) e le operazioni che è possibile eseguire su di essi. In questo articolo viene offerta una panoramica informale delle principali funzionalità del sistema di tipi C++.

## <a name="terminology"></a>Terminologia

**Variabile**: nome simbolico di una quantità di dati in modo che il nome possa essere usato per accedere ai dati a cui fa riferimento nell'ambito del codice in cui è definito. In C++la *variabile* viene in genere utilizzata per fare riferimento a istanze di tipi di dati scalari, mentre le istanze di altri tipi sono in genere chiamate *oggetti*.

**Oggetto**: per semplicità e coerenza, in questo articolo viene utilizzato il termine *oggetto* per fare riferimento a qualsiasi istanza di una classe o struttura e quando viene utilizzato in senso generale include tutti i tipi, anche le variabili scalari.

**Tipo POD** (dati non aggiornati): questa categoria informale di tipi di dati C++ in si riferisce ai tipi scalari (vedere la sezione tipi fondamentali) o alle *classi POD*. Una classe POD non contiene membri dati statici che non siano anche POD e non contiene costruttori, distruttori e operatori di assegnazione definiti dall'utente. Una classe POD non include funzioni virtuali, né una classe base e né membri dati non statici privati o protetti. I tipi POD vengono spesso utilizzati per lo scambio di dati esterni, ad esempio con un modulo scritto nel linguaggio C (che presenta solo tipi POD).

## <a name="specifying-variable-and-function-types"></a>Specificare tipi di funzione e di variabile

C++è un linguaggio *fortemente tipizzato* ed è anche *tipizzato*in modo statico; ogni oggetto ha un tipo e tale tipo non viene mai modificato (da non confondere con gli oggetti dati statici).
**Quando si dichiara una variabile** nel codice, è necessario specificarne il tipo in modo esplicito oppure usare la parola chiave **auto** per indicare al compilatore di dedurre il tipo dall'inizializzatore.
**Quando si dichiara una funzione** nel codice, è necessario specificare il tipo di ciascun argomento e il relativo valore restituito oppure **void** se la funzione non restituisce alcun valore. Si verifica un'eccezione quando si utilizzano modelli di funzione che consentono l'utilizzo di argomenti di tipi arbitrari.

Dopo aver dichiarato una variabile, non è più possibile modificarne il tipo. È tuttavia possibile copiare il valore della variabile o il valore restituito di una funzione in un'altra variabile di un tipo diverso. Tali operazioni sono denominate *conversioni di tipi*, che talvolta sono necessarie, ma sono anche potenziali fonti di perdita o di incorrettezza dei dati.

Quando si dichiara una variabile di tipo POD, è consigliabile inizializzarla, ovvero assegnare ad essa un valore iniziale. Finché non viene inizializzata, una variabile presenta un valore consistente di qualsiasi bit che in precedenza si trovava in quella posizione di memoria. Si tratta di un aspetto importante di C++ da ricordare, specialmente se si è abituati a un altro linguaggio che gestisce l'inizializzazione in modo automatico. Quando si dichiara una variabile di un tipo di classe non POD, il costruttore gestisce l'inizializzazione.

Nell'esempio seguente vengono illustrate alcune dichiarazioni di variabile semplici con alcune descrizioni per ognuna. Nell'esempio viene inoltre illustrato il modo in cui il compilatore utilizza le informazioni sul tipo per consentire o meno operazioni successive sulla variabile.

```cpp
int result = 0;              // Declare and initialize an integer.
double coefficient = 10.8;   // Declare and initialize a floating
                             // point value.
auto name = "Lady G.";       // Declare a variable and let compiler
                             // deduce the type.
auto address;                // error. Compiler cannot deduce a type
                             // without an intializing value.
age = 12;                    // error. Variable declaration must
                             // specify a type or use auto!
result = "Kenny G.";         // error. Can’t assign text to an int.
string result = "zero";      // error. Can’t redefine a variable with
                             // new type.
int maxValue;                // Not recommended! maxValue contains
                             // garbage bits until it is initialized.
```

## <a name="fundamental-built-in-types"></a>Tipi fondamentali (predefiniti)

A differenza di alcuni linguaggi, C++ non presenta alcun tipo di base universale da cui derivano tutti gli altri tipi. Il linguaggio include molti *tipi fondamentali*, noti anche come *tipi incorporati*. Sono inclusi i tipi numerici come **int**, **Double**, **Long**, **bool**, oltre ai tipi **char** e **wchar_t** rispettivamente per i caratteri ASCII e Unicode. Per la maggior parte dei tipi fondamentali (eccetto **bool**, **Double**, **wchar_t** e i tipi correlati) sono disponibili versioni non firmate, che modificano l'intervallo di valori che la variabile può archiviare. Ad esempio, un **int**, che archivia un Signed integer a 32 bit, può rappresentare un valore compreso tra-2.147.483.648 e 2.147.483.647. Un **int senza segno**, anch ' esso archiviato come 32 bit, può archiviare un valore compreso tra 0 e 4.294.967.295. Il numero totale di valori possibili è in ogni caso lo stesso, solo l'intervallo è diverso.

I tipi fondamentali sono riconosciuti dal compilatore che ha regole predefinite che stabiliscono quali operazioni è possibile eseguire su di essi e come possono essere convertiti in altri tipi fondamentali. Per un elenco completo dei tipi predefiniti e delle relative dimensioni e limiti numerici, vedere [tipi fondamentali](../cpp/fundamental-types-cpp.md).

Di seguito vengono mostrate le dimensioni relative dei tipi predefiniti:

![Dimensioni in byte dei tipi&#45;incorporati](../cpp/media/built-intypesizes.png "Dimensioni in byte dei tipi&#45;incorporati")

Nella tabella seguente sono elencati i tipi fondamentali di uso più comune:

|Digitare|Dimensioni|Commento|
|----------|----------|-------------|
|int|4 byte|Scelta predefinita per i valori integrali.|
|doppio|8 byte|Scelta predefinita per i valori a virgola mobile.|
|bool|1 byte|Rappresenta i valori che possono essere true o false.|
|char|1 byte|Utilizzare i caratteri ASCII negli oggetti std::string o nelle stringhe di tipo C precedenti che non dovranno mai essere convertiti in UNICODE.|
|wchar_t|2 byte|Rappresenta valori a caratteri "wide" che è possibile codificare in formato Unicode (UTF-16 in Windows, per altri sistemi operativi potrebbe essere diverso). Si tratta del tipo di carattere utilizzato in stringhe di tipo `std::wstring`.|
|&nbsp;char senza segno|1 byte|C++ non include alcun tipo `byte` predefinito.  Utilizzare il tipo unsigned char per rappresentare un valore byte.|
|unsigned int|4 byte|Scelta predefinita per i flag di bit.|
|long long|8 byte|Rappresenta valori integer di grandi dimensioni.|

## <a name="the-void-type"></a>Tipo void

Il tipo **void** è un tipo speciale; non è possibile dichiarare una variabile di tipo **void**, ma è possibile dichiarare una variabile di tipo __void \*__ (puntatore a **void**), che talvolta è necessaria per l'allocazione di memoria non elaborata (non tipizzata). Tuttavia, i puntatori a **void** non sono indipendenti dai tipi e in genere il loro uso è fortemente sconsigliato C++nel moderno. In una dichiarazione di funzione, un valore restituito **void** significa che la funzione non restituisce un valore. si tratta di un uso comune e accettabile di **void**. Mentre il linguaggio C richiede funzioni che hanno zero parametri per dichiarare **void** nell'elenco di parametri, ad esempio `fou(void)`, questa pratica è sconsigliata nel moderno C++ e deve essere dichiarata `fou()`. Per ulteriori informazioni, vedere [conversioni di tipi e indipendenza dai tipi](../cpp/type-conversions-and-type-safety-modern-cpp.md).

## <a name="const-type-qualifier"></a>qualificatore di tipo const

Qualsiasi tipo predefinito o definito dall'utente può essere qualificato tramite la parola chiave const. Inoltre, le funzioni membro possono essere **const**-Qualified e persino **const**-overload. Il valore di un tipo **const** non può essere modificato dopo l'inizializzazione.

```cpp

const double PI = 3.1415;
PI = .75 //Error. Cannot modify const variable.
```

Il qualificatore **const** viene ampiamente utilizzato nelle dichiarazioni di funzione e di variabile e la correttezza const è un concetto C++importante in; essenzialmente, significa usare **const** per garantire, in fase di compilazione, che i valori non vengano modificati accidentalmente. Per ulteriori informazioni, vedere [const](../cpp/const-cpp.md).

Un tipo **const** è diverso dalla relativa versione non const; ad esempio, **const int** è un tipo distinto da **int**. È possibile usare l' C++ operatore **const_cast** in rari casi in cui è necessario rimuovere *const-ness* da una variabile. Per ulteriori informazioni, vedere [conversioni di tipi e indipendenza dai tipi](../cpp/type-conversions-and-type-safety-modern-cpp.md).

## <a name="string-types"></a>Tipi di stringa

In modo rigoroso C++ , il linguaggio non ha un tipo di stringa incorporato; caratteri singoli di archivio **char** e **wchar_t** : è necessario dichiarare una matrice di questi tipi per approssimare una stringa, aggiungendo un valore null di terminazione (ad esempio, ASCII `'\0'`) all'elemento della matrice dopo l'ultimo carattere valido (detto *anche Stringa di tipo C*). Le stringhe di tipo C richiedono la scrittura di una quantità maggiore di codice o l'utilizzo delle funzioni della libreria dell'utilità di stringa esterna. Tuttavia, in C++Modern sono disponibili i tipi di libreria standard `std::string` (per le stringhe di caratteri di tipo carattere a 8 bit) o `std::wstring` (per le stringhe di caratteri di tipo **wchar_t**a **16 bit)** . Questi C++ contenitori di librerie standard possono essere considerati come tipi di stringa nativi perché fanno parte delle librerie standard incluse in qualsiasi ambiente di compilazione conforme C++ . È sufficiente utilizzare la direttiva `#include <string>` per rendere questi tipi disponibili nel programma. Se si utilizza MFC o ATL, è disponibile anche la classe CString, ma non fa parte dello C++ standard. L'utilizzo di matrici di caratteri con terminazione null (le stringhe di tipo C citate in precedenza) è fortemente sconsigliato C++nel moderno.

## <a name="user-defined-types"></a>Tipi definiti dall'utente

Quando si definisce una **classe**, uno **struct**, un' **Unione**o un' **enumerazione**, il costrutto viene utilizzato nel resto del codice come se fosse un tipo fondamentale. Ha una dimensione nota in memoria e alcune regole sull'utilizzo si applicano a esso per la verifica in fase di compilazione e, al runtime, per la durata del programma. Di seguito sono elencate le differenze principali tra i tipi fondamentali predefiniti e i tipi definiti dall'utente:

- Il compilatore non ha una conoscenza predefinita di un tipo definito dall'utente. Viene illustrato il tipo quando viene rilevata per la prima volta la definizione durante il processo di compilazione.

- Specificare le operazioni che è possibile eseguire sul tipo e il modo in cui può essere convertito in altri tipi, definendo (tramite overload) gli operatori appropriati, come membri di classe o come funzioni non membro. Per altre informazioni, vedere [Overload di funzioni](function-overloading.md)

## <a name="pointer-types"></a>Tipi puntatore

Tornando alle versioni precedenti del linguaggio C, C++ continua a consentire la dichiarazione di una variabile di un tipo di puntatore tramite il dichiaratore speciale `*` (asterisco). Un tipo di puntatore archivia l'indirizzo della posizione in memoria in cui è archiviato il valore effettivo dei dati. In Modern C++, questi vengono definiti *puntatori non elaborati*e sono accessibili nel codice tramite operatori speciali `*` (asterisco) o `->` (Dash con maggiore di). Questa operazione viene definita *dereferenziazione*e quella da usare dipende dal fatto che si dereferenzia un puntatore a un puntatore scalare o a un membro in un oggetto. L'utilizzo dei tipi di puntatore ha rappresentato per molto tempo uno degli aspetti più ostici e confusi dello sviluppo di programmi in C e C++. In questa sezione vengono descritti alcuni fatti e procedure che consentono di utilizzare i puntatori non elaborati, ma in contemporanea C++ non è più necessario (o consigliato) utilizzare i puntatori non elaborati per la proprietà dell'oggetto, a causa dell'evoluzione del [puntatore intelligente](../cpp/smart-pointers-modern-cpp.md) (illustrata di più alla fine di questa sezione). È ancora utile e sicuro utilizzare i puntatori non elaborati per l'osservazione degli oggetti, tuttavia se è necessario utilizzarli per la proprietà dell'oggetto, è necessario farlo con attenzione valutando attentamente come vengono creati ed eliminati definitivamente gli oggetti di proprietà.

La prima cosa da sapere è che dichiarare una variabile di puntatore non elaborato comporta l'allocazione della sola memoria necessaria per archiviare un indirizzo di posizione in memoria a cui farà riferimento il puntatore quando verrà dereferenziato. L'allocazione della memoria per il valore di dati stesso (anche detto *Archivio di backup*) non è ancora allocata. In altre parole, dichiarando una variabile di puntatore non elaborato si crea una variabile di indirizzo di memoria, non una variabile dati effettivi. Dereferenziare una variabile di puntatore senza verificare che contenga un indirizzo valido a un archivio di backup causa un comportamento non definito (in genere un errore irreversibile) nel programma. Nell'esempio seguente viene illustrato questo tipo di errore:

```cpp
int* pNumber;       // Declare a pointer-to-int variable.
*pNumber = 10;      // error. Although this may compile, it is
                    // a serious error. We are dereferencing an
                    // uninitialized pointer variable with no
                    // allocated memory to point to.
```

Nell'esempio viene dereferenziato un tipo di puntatore senza avere allocato memoria per archiviare i dati di tipo integer effettivi o aver assegnato a esso un indirizzo di memoria valido. Nel codice seguente vengono corretti questi errori:

```cpp
    int number = 10;          // Declare and initialize a local integer
                              // variable for data backing store.
    int* pNumber = &number;   // Declare and initialize a local integer
                              // pointer variable to a valid memory
                              // address to that backing store.
...
    *pNumber = 41;            // Dereference and store a new value in
                              // the memory pointed to by
                              // pNumber, the integer variable called
                              // "number". Note "number" was changed, not
                              // "pNumber".
```

Nell'esempio di codice corretto viene utilizzata la memoria dello stack locale per creare l'archivio di backup a cui punta `pNumber`. Per semplicità viene utilizzato un tipo fondamentale. In pratica, l'archivio di backup per i puntatori è spesso costituito da tipi definiti dall'utente, allocati in modo dinamico in un'area di memoria denominata *heap* (o *archivio libero*) utilizzando una **nuova** espressione di parola chiave (nella programmazione di tipo C, il @no_ precedente è stata usata la funzione della libreria di runtime _t_3 C). Una volta allocate, queste variabili vengono in genere definite oggetti, soprattutto se sono basate su una definizione di classe. La memoria allocata con **New** deve essere eliminata da un'istruzione **Delete** corrispondente (oppure, se è stata usata la funzione `malloc()` per allocarla, la funzione di runtime C `free()`).

Tuttavia, è facile dimenticare di eliminare un oggetto allocato in modo dinamico, soprattutto nel codice complesso, causando un bug di risorse denominato *perdita di memoria*. Per questo motivo, l'utilizzo dei puntatori non elaborati è fortemente sconsigliato nel linguaggio C++ moderno. È quasi sempre preferibile eseguire il wrapping di un puntatore non elaborato in un [puntatore intelligente](../cpp/smart-pointers-modern-cpp.md), che rilascerà automaticamente la memoria quando viene richiamato il relativo distruttore (quando il codice esce dall'ambito del puntatore intelligente); usando i C++ puntatori intelligenti si elimina virtualmente un'intera classe di bug nei programmi. Nell'esempio seguente si supponga che `MyClass` sia un tipo definito dall'utente avente un metodo pubblico `DoSomeWork();`

```cpp
void someFunction() {
    unique_ptr<MyClass> pMc(new MyClass);
    pMc->DoSomeWork();
}
  // No memory leak. Out-of-scope automatically calls the destructor
  // for the unique_ptr, freeing the resource.
```

Per ulteriori informazioni sui puntatori intelligenti, vedere la pagina relativa ai [puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md).

Per ulteriori informazioni sulle conversioni dei puntatori, vedere [conversioni di tipi e indipendenza dai tipi](../cpp/type-conversions-and-type-safety-modern-cpp.md).

Per ulteriori informazioni sui puntatori in generale, vedere [puntatori](../cpp/pointers-cpp.md).

## <a name="windows-data-types"></a>Tipi di dati Windows

Nella programmazione Win32 classica per C e C++, la maggior parte delle funzioni utilizza typedef specifici di Windows e macro #define (definite in `windef.h`) per specificare i tipi di parametri e i valori restituiti. Questi tipi di dati di Windows sono principalmente solo nomi speciali (alias) assegnati ai tipiC++ C/incorporati. Per un elenco completo dei typedef e delle definizioni del preprocessore, vedere [tipi di dati di Windows](/windows/win32/WinProg/windows-data-types). Alcuni di questi typedef, ad esempio HRESULT e LCID, sono utili e descrittivi. Altri, come INT, non hanno un significato speciale e sono solo alias dei tipi C++ fondamentali. Altri tipi di dati Windows presentano nomi derivanti dalla programmazione C e dai processori a 16 bit e non hanno alcuno scopo o significato con l'hardware e i sistemi operativi moderni. Alla libreria Windows Runtime sono inoltre associati tipi di dati speciali, elencati come [Windows Runtime tipi di dati di base](/windows/win32/WinRT/base-data-types). Nel linguaggio C++ moderno, la linea guida generale è quella di preferire i tipi C++ fondamentali, a meno che il tipo Windows non trasmetta un significato aggiuntivo sull'interpretazione del valore.

## <a name="more-information"></a>Altre informazioni

Per ulteriori informazioni sul sistema di tipi di C++, vedere gli argomenti seguenti:

|||
|-|-|
|[Tipi valore](../cpp/value-types-modern-cpp.md)|Vengono descritti i *tipi di valore* con i problemi relativi all'utilizzo.|
|[Conversioni di tipi e indipendenza dai tipi](../cpp/type-conversions-and-type-safety-modern-cpp.md)|Vengono descritti i problemi di conversione dei tipi comuni e i modi per evitarli.|

## <a name="see-also"></a>Vedere anche

[C++ (C++ moderno)](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)

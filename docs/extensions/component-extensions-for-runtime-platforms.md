---
title: Estensioni componenti per .NET e UWP
ms.date: 10/12/2018
ms.topic: landing-page
helpviewer_keywords:
- what's new [C++], keywords
- what's new [C++], language features
- C++, keywords
- keywords [C++]
- Managed Extensions for C++, replacement syntax
ms.assetid: 1e400ee6-3ac9-4910-a608-9d3d5993e423
ms.openlocfilehash: 76cbb20d108745984490e67b53db39f58e34d327
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70311650"
---
# <a name="component-extensions-for-net-and-uwp"></a>Estensioni componenti per .NET e UWP

Lo standard C++ permette ai fornitori di compilatori di fornire estensioni non standard per il linguaggio. Microsoft offre estensioni per semplificare la connessione di codice C++ nativo a codice che viene eseguito in .NET Framework o nella piattaforma UWP (Universal Windows Platform). Le estensioni .NET sono note come C++/CLI e producono codice che viene eseguito nell'ambiente di esecuzione gestito .NET denominato Common Language Runtime (CLR). Le estensioni della piattaforma UWP sono note come C++/CX e producono codice macchina nativo.

> [!NOTE]
> Per le nuove applicazioni, è consigliabile usare C++/WinRT invece di C++/CX. C++/ WinRT è una nuova proiezione del linguaggio C++17 standard per API Windows Runtime. Microsoft continuerà a supportare C++/CX e WRL, ma è consigliabile usare C++/WinRT per le nuove applicazioni. Per altre informazioni, vedere [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/index).

### <a name="two-runtimes-one-set-of-extensions"></a>Due runtime, un set di estensioni

C++/CLI estende lo standard ISO/ANSI C++ ed è definito nello standard Ecma C++/CLI. Per altre informazioni, vedere [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

Le estensioni C++/CX sono un subset di C++/CLI. Sebbene la sintassi delle estensioni sia identica nella maggior parte dei casi, il codice generato dipende dal fatto che si specifichi o meno l'opzione del compilatore `/ZW` per la piattaforma UWP come destinazione oppure l'opzione `/clr` per .NET come destinazione. Queste opzioni vengono impostate automaticamente quando si usa Visual Studio per creare un progetto.

## <a name="data-type-keywords"></a>Parole chiave del tipo di dati

Le estensioni del linguaggio includono *parole chiave aggregate*, che sono costituite da due token separati da uno spazio vuoto. I token hanno un significato quando vengono usati separatamente e un altro significato quando vengono usati insieme. Ad esempio, la parola "ref" è un identificatore standard e la parola "class" è una parola chiave che dichiara una classe nativa. Tuttavia, quando queste parole vengono combinate a formare **ref class**, la parola chiave aggregata risultante dichiara un'entità nota come *classe di runtime*.

Le estensioni includono anche parole chiave *sensibili al contesto*. Una parola chiave viene considerata come sensibile al contesto in base al tipo di istruzione che la contiene e alla relativa posizione nell'istruzione. Ad esempio, il token "property" può essere un identificatore o può dichiarare un tipo speciale di membro di classe pubblica.

Nella tabella seguente sono elencate le parole chiave nell'estensione del linguaggio C++.

|Parola chiave|Sensibile al contesto|Scopo|Riferimenti|
|-------------|-----------------------|-------------|---------------|
|**ref class**<br /><br /> **ref struct**|No|Dichiara una classe.|[Classi e struct](classes-and-structs-cpp-component-extensions.md)|
|**value class**<br /><br /> **value struct**|No|Dichiara una classe di valori.|[Classi e struct](classes-and-structs-cpp-component-extensions.md)|
|**interface class**<br /><br /> **interface struct**|No|Dichiara un'interfaccia.|[interface class](interface-class-cpp-component-extensions.md)|
|**enum class**<br /><br /> **enum struct**|No|Dichiara un'enumerazione.|[enum class](enum-class-cpp-component-extensions.md)|
|**proprietà**|Sì|Dichiara una proprietà.|[proprietà](property-cpp-component-extensions.md)|
|**delegate**|Yes|Dichiara un delegato.|[delegate (C++/CLI e C++/CX)](delegate-cpp-component-extensions.md)|
|**event**|Sì|Dichiara un evento.|[event](event-cpp-component-extensions.md)|

## <a name="override-specifiers"></a>Identificatori di override

È possibile usare le parole chiave seguenti per qualificare il comportamento di override per la derivazione. Sebbene la parola chiave **new** non sia un'estensione di C++, viene elencata qui perché può essere usata in un contesto aggiuntivo. Alcuni identificatori sono validi anche per la programmazione nativa. Per altre informazioni, vedere [Procedura: Dichiarare gli identificatori di override nelle compilazioni native (C++/CLI)](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).

|Parola chiave|Sensibile al contesto|Scopo|Riferimenti|
|-------------|-----------------------|-------------|---------------|
|**abstract**|Yes|Indica che le funzioni o classi sono astratte.|[abstract](abstract-cpp-component-extensions.md)|
|**new**|No|Indica che una funzione non è un override di una versione della classe di base.|[new (nuovo slot in vtable)](new-new-slot-in-vtable-cpp-component-extensions.md)|
|**override**|Yes|Indica che un metodo deve essere un override di una versione della classe base.|[override](override-cpp-component-extensions.md)|
|**sealed**|Yes|Impedisce l'uso delle classi come classi base.|[sealed](sealed-cpp-component-extensions.md)|

## <a name="keywords-for-generics"></a>Parole chiave per i generics

Le parole chiave seguenti sono state aggiunte per supportare tipi generici. Per altre informazioni, vedere [Generics](generics-cpp-component-extensions.md).

|Parola chiave|Sensibile al contesto|Scopo|
|-------------|-----------------------|-------------|
|**generic**|No|Dichiara un tipo generico.|
|**where**|Sì|Specifica i vincoli che vengono applicati a un parametro di tipo generico.|

## <a name="miscellaneous-keywords"></a>Varie parole chiave

Le parole chiave seguenti sono state aggiunte alle estensioni di C++.

|Parola chiave|Sensibile al contesto|Scopo|Riferimenti|
|-------------|-----------------------|-------------|---------------|
|**finally**|Sì|Indica il comportamento di gestione delle eccezioni predefinito.|[Gestione delle eccezioni](exception-handling-cpp-component-extensions.md)|
|**for each, in**|No|Enumera gli elementi di una raccolta.|[for each, in](../dotnet/for-each-in.md)|
|**gcnew**|No|Alloca tipi sull'heap sottoposto a Garbage Collection. Usare al posto di **new** e **delete**.|[ref new, gcnew](ref-new-gcnew-cpp-component-extensions.md)|
|**ref new**|Sì|Alloca un tipo Windows Runtime. Usare al posto di **new** e **delete**.|[ref new, gcnew](ref-new-gcnew-cpp-component-extensions.md)|
|**initonly**|Sì|Indica che un membro può essere inizializzato solo in fase di dichiarazione o in un costruttore statico.|[initonly (C++/CLI)](../dotnet/initonly-cpp-cli.md)|
|**literal**|Sì|Crea una variabile letterale.|[literal](literal-cpp-component-extensions.md)|
|**nullptr**|No|Indica che un handle o un puntatore non punta a un oggetto.|[nullptr](nullptr-cpp-component-extensions.md)|

## <a name="template-constructs"></a>Costrutti di modello

I seguenti costrutti di linguaggio vengono implementati come modelli, anziché come parole chiave. Se si specifica l'opzione del compilatore `/ZW`, sono definiti nello spazio dei nomi `lang`. Se si specifica l'opzione del compilatore `/clr`, sono definiti nello spazio dei nomi `cli`.

|Parola chiave|Scopo|Riferimenti|
|-------------|-------------|---------------|
|**array**|Dichiara una matrice.|[Matrici](arrays-cpp-component-extensions.md)|
|**interior_ptr**|(Solo CLR) Punta ai dati in un tipo riferimento.|[interior_ptr (C++/CLI)](interior-ptr-cpp-cli.md)|
|**pin_ptr**|(Solo CLR) Punta a tipi riferimento CLR per evitare temporaneamente il sistema di Garbage Collection.|[pin_ptr (C++/CLI)](pin-ptr-cpp-cli.md)|
|**safe_cast**|Determina ed esegue il metodo di cast ottimale per un tipo di runtime.|[safe_cast](safe-cast-cpp-component-extensions.md)|
|**typeid**|(Solo CLR) Recupera un oggetto <xref:System.Type?displayProperty=fullName> che descrive il tipo o l'oggetto specificato.|[typeid](typeid-cpp-component-extensions.md)|

## <a name="declarators"></a>Dichiaratori

I dichiaratori di tipo seguenti indicano al runtime di gestire automaticamente la durata e l'eliminazione degli oggetti allocati.

|Operator|Scopo|Riferimenti|
|--------------|-------------|---------------|
|`^`|Dichiara un handle a un oggetto, ovvero un puntatore a un oggetto Windows Runtime o CLR che viene automaticamente eliminato quando non è più utilizzabile.|[Operatore handle a oggetto (^)](handle-to-object-operator-hat-cpp-component-extensions.md)|
|`%`|Dichiara un riferimento di rilevamento, ovvero un riferimento a un oggetto Windows Runtime o CLR che viene automaticamente eliminato quando non è più utilizzabile.|[Operatore di riferimento di rilevamento](tracking-reference-operator-cpp-component-extensions.md)|

## <a name="additional-constructs-and-related-topics"></a>Costrutti aggiuntivi e argomenti correlati

In questa sezione vengono elencati i costrutti di programmazione aggiuntivi e gli argomenti relativi a CLR.

|Argomento|Descrizione|
|-----------|-----------------|
|[__identifier (C++/CLI)](identifier-cpp-cli.md)|(Windows Runtime e CLR) Permette di usare parole chiave come identificatori.|
|[Elenchi di argomenti variabili (...) (C++/CLI)](variable-argument-lists-dot-dot-dot-cpp-cli.md)|(Windows Runtime e CLR) Permette ad alcune funzioni di accettare un numero variabile di argomenti.|
|[Equivalenti di .NET Framework a tipi nativi C++ (C++/CLI)](../dotnet/dotnet-framework-equivalents-to-cpp-native-types-cpp-cli.md)|Elenca i tipi CLR usati al posto dei tipi integrali di C++.|
|Modificatore **__declspec** per [appdomain](../cpp/appdomain.md)|Modificatore **__declspec** che richiede che esistano variabili statiche e globali per appdomain.|
|[Cast di tipo C con /clr (C++/CLI)](c-style-casts-with-clr-cpp-cli.md)|Descrive come vengono interpretati i cast di tipo C.|
|Convenzione di chiamata [__clrcall](../cpp/clrcall.md)|Indica la convenzione di chiamata conforme a CLR.|
|`__cplusplus_cli`|[Macro predefinite](../preprocessor/predefined-macros.md)|
|[Attributi personalizzati](user-defined-attributes-cpp-component-extensions.md)|Descrive come definire gli attributi CLR personalizzati.|
|[Gestione delle eccezioni](exception-handling-cpp-component-extensions.md)|Fornisce una panoramica della gestione delle eccezioni.|
|[Override espliciti](explicit-overrides-cpp-component-extensions.md)|Illustra come le funzioni membro possono eseguire l'override di membri arbitrari.|
|[Assembly di tipo friend (C++)](../dotnet/friend-assemblies-cpp.md)|Illustra come un assembly client può accedere a tutti i tipi in un componente di assembly.|
|[Conversione boxing](boxing-cpp-component-extensions.md)|Illustra le condizioni in cui i tipi di valori vengono sottoposti a boxing.|
|[Supporto del compilatore per tratti di tipo](compiler-support-for-type-traits-cpp-component-extensions.md)|Illustra come rilevare le caratteristiche dei tipi in fase di compilazione.|
|Pragma [managed, unmanaged](../preprocessor/managed-unmanaged.md)|Illustra come le funzioni gestite e non gestite possono coesistere nello stesso modulo.|
|Modificatore **__declspec** per [process](../cpp/process.md)|Modificatore **__declspec** che richiede che esistano variabili statiche e globali per process.|
|[Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)|Illustra la versione CLR delle informazioni sul tipo di runtime.|
|[String](string-cpp-component-extensions.md)|Illustra la conversione del compilatore di valori letterali stringa in <xref:System.String>.|
|[Inoltro del tipo (C++/CLI)](type-forwarding-cpp-cli.md)|Consente lo spostamento di un tipo in un assembly di distribuzione a un altro assembly in modo che il codice client non debba essere ricompilato.|
|[Attributi definiti dall'utente](user-defined-attributes-cpp-component-extensions.md)|Illustra gli attributi definiti dall'utente.|
|[Direttiva #using](../preprocessor/hash-using-directive-cpp.md)|Importa gli assembly esterni.|
|[Documentazione di XML](../build/reference/xml-documentation-visual-cpp.md)|Presenta la documentazione del codice basato su XML tramite [/doc (elaborazione dei commenti per la documentazione) (C/C++)](../build/reference/doc-process-documentation-comments-c-cpp.md)|

## <a name="see-also"></a>Vedere anche

[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)<br/>
[Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)
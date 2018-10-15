---
title: Estensioni componenti per .NET e UWP | Microsoft Docs
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- what's new [C++], keywords
- what's new [C++], language features
- C++, keywords
- keywords [C++]
- Managed Extensions for C++, replacement syntax
ms.assetid: 1e400ee6-3ac9-4910-a608-9d3d5993e423
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 45f83fbaaa867e2f58e329d8531259fa3751a521
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49328415"
---
# <a name="component-extensions-for-net-and-uwp"></a>Estensioni componenti per .NET e UWP

Lo standard C++ consente ai fornitori del compilatore fornire estensioni non standard del linguaggio. Microsoft fornisce le estensioni che consentono di connettere C++ nativo a codice che viene eseguito in .NET Framework o Universal Windows Platform (UWP). Le estensioni di .NET vengono chiamate C + + / CLI e viene restituito il codice che viene eseguita in .NET gestito ambiente di esecuzione che viene chiamato il Common Language Runtime (CLR). Le estensioni di piattaforma UWP vengono chiamate C + + c++ /CX e produrre codice macchina nativo.

> [!NOTE]
> Per le nuove applicazioni, è consigliabile usare C + + c++ /CLI WinRT anziché C + + / CX. C + + / WinRT è una nuova, standard C++ 17 proiezione del linguaggio for Windows Runtime APIs. Continueremo a supportare C + + c++ /CX e WRL, ma è consigliabile che le nuove applicazioni usare C + + c++ /CLI WinRT. Per altre informazioni, vedere [C + + / WinRT](https://docs.microsoft.com/windows/uwp/cpp-and-winrt-apis/index).

### <a name="two-runtimes-one-set-of-extensions"></a>Due runtime, un set di estensioni

C + + / CLI estende lo standard ISO/ANSI C++ e viene definita in Ecma C + c++ /CLI della riga di comando Standard. Per altre informazioni, vedere [programmazione .NET con c++ /CLI CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

C + + / le estensioni CX sono un subset di C + + c++ /CLI CLI. Sebbene la sintassi dell'estensione è identica nella maggior parte dei casi, il codice generato dipende dal fatto che vengano specificati i `/ZW` opzione del compilatore per piattaforma UWP, destinazione o `/clr` possibilità destinati a .NET. Queste opzioni vengono impostate automaticamente quando si usa Visual Studio per creare un progetto.

## <a name="data-type-keywords"></a>Parole chiave del tipo di dati

Includono le estensioni del linguaggio *aggrega le parole chiave*, costituite da due token separati da spazi vuoti. I token hanno un significato quando vengono usati separatamente e un altro significato quando vengono usati insieme. Ad esempio, la parola "ref" è un identificatore standard e la parola "class" è una parola chiave che dichiara una classe nativa. Ma quando queste parole vengono combinate per formare **classe di riferimento**, la parola chiave aggregata risultante dichiara un'entità che è noto come una *classe runtime*.

Le estensioni includono inoltre *sensibile al contesto* parole chiave. Una parola chiave viene considerata come sensibile al contesto in base al tipo di istruzione che la contiene e alla relativa posizione nell'istruzione. Ad esempio, il token "property" può essere un identificatore o può dichiarare un tipo speciale di membro di classe pubblica.

Nella tabella seguente sono elencate le parole chiave nell'estensione del linguaggio C++.

|Parola chiave|Sensibile al contesto|Scopo|Riferimenti|
|-------------|-----------------------|-------------|---------------|
|**classe di riferimento**<br /><br /> **struct di riferimento**|No|Dichiara una classe.|[Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)|
|**classe di valori**<br /><br /> **struct di valore**|No|Dichiara una classe di valori.|[Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)|
|**classe di interfaccia**<br /><br /> **struct di interfaccia**|No|Dichiara un'interfaccia.|[classe di interfaccia](../windows/interface-class-cpp-component-extensions.md)|
|**classe di enumerazione**<br /><br /> **enum struct**|No|Dichiara un'enumerazione.|[classe di enumerazione](../windows/enum-class-cpp-component-extensions.md)|
|**proprietà**|Yes|Dichiara una proprietà.|[proprietà](../windows/property-cpp-component-extensions.md)|
|**delegate**|Yes|Dichiara un delegato.|[delegare (C + c++ /CLI e c++ /CX)](../windows/delegate-cpp-component-extensions.md)|
|**event**|Yes|Dichiara un evento.|[event](../windows/event-cpp-component-extensions.md)|

## <a name="override-specifiers"></a>Identificatori di override

È possibile usare le parole chiave seguenti per qualificare il comportamento di override per la derivazione. Anche se il **nuovo** parola chiave non è un'estensione di C++, viene elencata qui perché può essere usato in un contesto aggiuntivo. Alcuni identificatori sono validi anche per la programmazione nativa. Per altre informazioni, vedere [procedura: dichiarare gli identificatori di Override nelle compilazioni Native (C + + / CLI)](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).

|Parola chiave|Sensibile al contesto|Scopo|Riferimenti|
|-------------|-----------------------|-------------|---------------|
|**abstract**|Yes|Indica che le funzioni o classi sono astratte.|[abstract](../windows/abstract-cpp-component-extensions.md)|
|**new**|No|Indica che una funzione non è un override di una versione della classe di base.|[New (nuovo slot in vtable)](../windows/new-new-slot-in-vtable-cpp-component-extensions.md)|
|**override**|Yes|Indica che un metodo deve essere un override di una versione della classe base.|[override](../windows/override-cpp-component-extensions.md)|
|**sealed**|Yes|Impedisce l'uso delle classi come classi base.|[sealed](../windows/sealed-cpp-component-extensions.md)|

## <a name="keywords-for-generics"></a>Parole chiave per i generics

Le parole chiave seguenti sono state aggiunte per supportare tipi generici. Per altre informazioni, vedere [Generics](../windows/generics-cpp-component-extensions.md).

|Parola chiave|Sensibile al contesto|Scopo|
|-------------|-----------------------|-------------|
|**Generica**|No|Dichiara un tipo generico.|
|**where**|Yes|Specifica i vincoli che vengono applicati a un parametro di tipo generico.|

## <a name="miscellaneous-keywords"></a>Varie parole chiave

Le parole chiave seguenti sono state aggiunte alle estensioni di C++.

|Parola chiave|Sensibile al contesto|Scopo|Riferimenti|
|-------------|-----------------------|-------------|---------------|
|**finally**|Yes|Indica il comportamento di gestione delle eccezioni predefinito.|[Gestione delle eccezioni](../windows/exception-handling-cpp-component-extensions.md)|
|**for each, in**|No|Enumera gli elementi di una raccolta.|[for each, in](../dotnet/for-each-in.md)|
|**gcnew**|No|Alloca tipi sull'heap sottoposto a Garbage Collection. Usare invece **nuove** e **eliminare**.|[ref new, gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md)|
|**nuovo riferimento**|Yes|Alloca un tipo Windows Runtime. Usare invece **nuove** e **eliminare**.|[ref new, gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md)|
|**initonly**|Yes|Indica che un membro può essere inizializzato solo in fase di dichiarazione o in un costruttore statico.|[initonly (C++/CLI)](../dotnet/initonly-cpp-cli.md)|
|**literal**|Yes|Crea una variabile letterale.|[literal](../windows/literal-cpp-component-extensions.md)|
|**nullptr**|No|Indica che un handle o un puntatore non punta a un oggetto.|[nullptr](../windows/nullptr-cpp-component-extensions.md)|

## <a name="template-constructs"></a>Costrutti di modello

I seguenti costrutti di linguaggio vengono implementati come modelli, anziché come parole chiave. Se si specifica l'opzione del compilatore `/ZW`, sono definiti nello spazio dei nomi `lang`. Se si specifica l'opzione del compilatore `/clr`, sono definiti nello spazio dei nomi `cli`.

|Parola chiave|Scopo|Riferimenti|
|-------------|-------------|---------------|
|**array**|Dichiara una matrice.|[Matrici](../windows/arrays-cpp-component-extensions.md)|
|**interior_ptr**|(Solo CLR) Punta ai dati in un tipo riferimento.|[interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)|
|**pin_ptr**|(Solo CLR) Punta a tipi riferimento CLR per evitare temporaneamente il sistema di Garbage Collection.|[pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)|
|**safe_cast**|Determina ed esegue il metodo di cast ottimale per un tipo di runtime.|[safe_cast](../windows/safe-cast-cpp-component-extensions.md)|
|**typeid**|(Solo CLR) Recupera un oggetto <xref:System.Type?displayProperty=fullName> che descrive il tipo o l'oggetto specificato.|[typeid](../windows/typeid-cpp-component-extensions.md)|

## <a name="declarators"></a>Dichiaratori

I dichiaratori di tipo seguenti indicano al runtime di gestire automaticamente la durata e l'eliminazione degli oggetti allocati.

|Operatore|Scopo|Riferimenti|
|--------------|-------------|---------------|
|`^`|Dichiara un handle a un oggetto. vale a dire, un puntatore a un oggetto Windows Runtime o CLR che viene eliminato automaticamente quando non è più utilizzabile.|[Operatore handle a oggetto (^)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)|
|`%`|Dichiara un riferimento di traccia; vale a dire, un riferimento a un oggetto Windows Runtime o CLR che viene eliminato automaticamente quando non è più utilizzabile.|[Operatore di riferimento di rilevamento](../windows/tracking-reference-operator-cpp-component-extensions.md)|

## <a name="additional-constructs-and-related-topics"></a>Costrutti aggiuntivi e argomenti correlati

In questa sezione vengono elencati i costrutti di programmazione aggiuntivi e gli argomenti relativi a CLR.

|Argomento|Descrizione|
|-----------|-----------------|
|[__identifier (C++/CLI)](../windows/identifier-cpp-cli.md)|(Windows Runtime e CLR) Consente l'utilizzo delle parole chiave come identificatori.|
|[Elenchi di argomenti variabili (...) (C++/CLI)](../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md)|(Windows Runtime e CLR) Consente a una funzione perché accetti un numero variabile di argomenti.|
|[Equivalenti di .NET Framework a tipi nativi C++ (C++/CLI)](../dotnet/dotnet-framework-equivalents-to-cpp-native-types-cpp-cli.md)|Elenca i tipi CLR usati al posto dei tipi integrali di C++.|
|[AppDomain](../cpp/appdomain.md) **declspec** modificatore|**declspec** modificatore che esistano variabili globali e statiche per appdomain.|
|[Cast di tipo C con /clr (C + + CLI)](../windows/c-style-casts-with-clr-cpp-cli.md)|Descrive come vengono interpretati i cast di tipo C.|
|[clrcall](../cpp/clrcall.md) convenzione di chiamata|Indica la convenzione di chiamata conforme a CLR.|
|`__cplusplus_cli`|[Macro predefinite](../preprocessor/predefined-macros.md)|
|[Attributi personalizzati](../windows/custom-attributes-cpp.md)|Descrive come definire gli attributi CLR personalizzati.|
|[Gestione delle eccezioni](../windows/exception-handling-cpp-component-extensions.md)|Fornisce una panoramica della gestione delle eccezioni.|
|[Override espliciti](../windows/explicit-overrides-cpp-component-extensions.md)|Illustra come le funzioni membro possono eseguire l'override di membri arbitrari.|
|[Assembly di tipo friend (C++)](../dotnet/friend-assemblies-cpp.md)|Illustra come un assembly client può accedere a tutti i tipi in un componente di assembly.|
|[Conversione boxing](../windows/boxing-cpp-component-extensions.md)|Illustra le condizioni in cui i tipi di valori vengono sottoposti a boxing.|
|[Supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md)|Illustra come rilevare le caratteristiche dei tipi in fase di compilazione.|
|[Managed, unmanaged](../preprocessor/managed-unmanaged.md) pragma|Illustra come le funzioni gestite e non gestite possono coesistere nello stesso modulo.|
|[processo](../cpp/process.md) **declspec** modificatore|**declspec** modificatore che esistano variabili globali e statiche per processo.|
|[Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)|Illustra la versione CLR delle informazioni sul tipo di runtime.|
|[String](../windows/string-cpp-component-extensions.md)|Illustra la conversione del compilatore di valori letterali stringa in <xref:System.String>.|
|[Inoltro del tipo (C++/CLI)](../windows/type-forwarding-cpp-cli.md)|Consente lo spostamento di un tipo in un assembly di distribuzione a un altro assembly in modo che il codice client non debba essere ricompilato.|
|[Attributi definiti dall'utente](../windows/user-defined-attributes-cpp-component-extensions.md)|Illustra gli attributi definiti dall'utente.|
|[Direttiva #using](../preprocessor/hash-using-directive-cpp.md)|Importa gli assembly esterni.|
|[Documentazione di XML](../ide/xml-documentation-visual-cpp.md)|Illustra la documentazione di codice basato su XML tramite [/doc (elaborazione documentazione dei commenti) (C/C++)](../build/reference/doc-process-documentation-comments-c-cpp.md)|

## <a name="see-also"></a>Vedere anche

[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)<br/>
[Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)
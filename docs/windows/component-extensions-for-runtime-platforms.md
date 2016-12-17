---
title: "Component Extensions for Runtime Platforms | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "what's new [C++], keywords"
  - "what's new [C++], language features"
  - "Visual C++, keywords"
  - "keywords [C++]"
  - "Managed Extensions for C++, replacement syntax"
ms.assetid: 1e400ee6-3ac9-4910-a608-9d3d5993e423
caps.latest.revision: 77
caps.handback.revision: 77
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Component Extensions for Runtime Platforms
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Visual C\+\+ fornisce le estensioni del linguaggio per agevolare la programmazione per piattaforme di runtime.  Usando [!INCLUDE[cppwrt](../build/reference/includes/cppwrt_md.md)] \([!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)]\), è possibile programmare applicazioni e componenti di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] compilati in codice nativo.  Sebbene sia possibile creare applicazioni di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] programmando direttamente con le interfacce COM [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)], usando [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)], è possibile usare costruttori, eccezioni e altri linguaggi di programmazione C\+\+ moderni.  Per abilitare la programmazione in C\+\+ in un ambiente di esecuzione gestito sulla piattaforma .NET, è possibile usare [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)].  
  
 **Due runtime, un set di estensioni**  
  
 [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)] è un subset di [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)].  Per le estensioni che sono comuni a [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)] e [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)], la semantica varia se la destinazione è Common Language Runtime \(CLR\) o [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  Per compilare un'applicazione per eseguirla in [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)], specificare l'opzione del compilatore **\/ZW**.  Per compilare un'applicazione per eseguirla in CLR, specificare l'opzione del compilatore **\/clr**.  Queste opzioni vengono impostate automaticamente quando si usa Visual Studio per creare un progetto.  
  
 Per altre informazioni su come creare applicazioni di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] in C\+\+, vedere [Roadmap per app di Windows Runtime in C\+\+](http://msdn.microsoft.com/library/windows/apps/hh700360.aspx).  
  
 [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)] estende lo standard ISO\/ANSI C\+\+ ed è definito nello standard [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)] Ecma.  Per altre informazioni, vedere [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).  
  
## Parole chiave del tipo di dati  
 Le estensioni del linguaggio includono *parole chiave aggregate*, ovvero parole chiave costituite da due token separati da spazi.  I token hanno un significato quando vengono usati separatamente e un altro significato quando vengono usati insieme.  Ad esempio, la parola "ref" è un identificatore standard e la parola "class" è una parola chiave che dichiara una classe nativa.  Ma quando queste parole vengono combinate per formare `ref class`, la parola chiave aggregata risultante dichiara un'entità nota come *classe di runtime*.  
  
 Le estensioni includono inoltre parole chiave *sensibili al contesto*.  Una parola chiave viene considerata come sensibile al contesto in base al tipo di istruzione che la contiene e alla relativa posizione nell'istruzione.  Ad esempio, il token "property" può essere un identificatore o può dichiarare un tipo speciale di membro di classe pubblica.  
  
 Nella tabella seguente sono elencate le parole chiave nell'estensione del linguaggio C\+\+.  
  
|Parola chiave|Sensibile al contesto|Scopo|Riferimento|  
|-------------------|---------------------------|-----------|-----------------|  
|`ref class`<br /><br /> `ref struct`|No|Dichiara una classe.|[Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)|  
|`value class`<br /><br /> `value struct`|No|Dichiara una classe di valori.|[Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)|  
|`interface class`<br /><br /> `interface struct`|No|Dichiara un'interfaccia.|[interface class](../windows/interface-class-cpp-component-extensions.md)|  
|`enum class`<br /><br /> `enum struct`|No|Dichiara un'enumerazione.|[enum class](../windows/enum-class-cpp-component-extensions.md)|  
|`property`|Sì|Dichiara una proprietà.|[property](../windows/property-cpp-component-extensions.md)|  
|`delegate`|Sì|Dichiara un delegato.|[delegato](../windows/delegate-cpp-component-extensions.md)|  
|`event`|Sì|Dichiara un evento.|[event](../windows/event-cpp-component-extensions.md)|  
  
## Identificatori di override  
 È possibile usare le parole chiave seguenti per qualificare il comportamento di override per la derivazione.  Sebbene la parola chiave `new` non sia un'estensione di C\+\+, viene elencata qui perché può essere usata in un contesto aggiuntivo.  Alcuni identificatori sono validi anche per la programmazione nativa.  Per altre informazioni, vedere [Procedura: Dichiarare gli identificatori di override nelle compilazioni native](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).  
  
|Parola chiave|Sensibile al contesto|Scopo|Riferimento|  
|-------------------|---------------------------|-----------|-----------------|  
|`abstract`|Sì|Indica che le funzioni o classi sono astratte.|[abstract](../windows/abstract-cpp-component-extensions.md)|  
|`new`|No|Indica che una funzione non è un override di una versione della classe di base.|[new \(new slot in vtable\)](../windows/new-new-slot-in-vtable-cpp-component-extensions.md)|  
|`override`|Sì|Indica che un metodo deve essere un override di una versione della classe base.|[override](../windows/override-cpp-component-extensions.md)|  
|`sealed`|Sì|Impedisce l'uso delle classi come classi base.|[sealed](../windows/sealed-cpp-component-extensions.md)|  
  
## Parole chiave per i generics  
 Le parole chiave seguenti sono state aggiunte per supportare tipi generici.  Per altre informazioni, vedere [Generics](../windows/generics-cpp-component-extensions.md).  
  
|Parola chiave|Sensibile al contesto|Scopo|  
|-------------------|---------------------------|-----------|  
|`generic`|No|Dichiara un tipo generico.|  
|`where`|Sì|Specifica i vincoli che vengono applicati a un parametro di tipo generico.|  
  
## Varie parole chiave  
 Le parole chiave seguenti sono state aggiunte alle estensioni di C\+\+.  
  
|Parola chiave|Sensibile al contesto|Scopo|Riferimento|  
|-------------------|---------------------------|-----------|-----------------|  
|`finally`|Sì|Indica il comportamento di gestione delle eccezioni predefinito.|[Exception Handling](../windows/exception-handling-cpp-component-extensions.md)|  
|`for each, in`|No|Enumera gli elementi di una raccolta.|[for each, in](../dotnet/for-each-in.md)|  
|`gcnew`|No|Alloca tipi sull'heap sottoposto a Garbage Collection.  Usare al posto di `new` e `delete`.|[ref new, gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md)|  
|`ref new`|Sì|Alloca un tipo [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  Usare al posto di `new` e `delete`.|[ref new, gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md)|  
|`initonly`|Sì|Indica che un membro può essere inizializzato solo in fase di dichiarazione o in un costruttore statico.|[initonly](../dotnet/initonly-cpp-cli.md)|  
|`literal`|Sì|Crea una variabile letterale.|[literal](../windows/literal-cpp-component-extensions.md)|  
|`nullptr`|No|Indica che un handle o un puntatore non punta a un oggetto.|[nullptr](../windows/nullptr-cpp-component-extensions.md)|  
  
## Costrutti di modello  
 I seguenti costrutti di linguaggio vengono implementati come modelli, anziché come parole chiave.  Se si specifica l'opzione del compilatore **\/ZW**, sono definiti nello spazio dei nomi `lang`.  Se si specifica l'opzione del compilatore **\/clr**, sono definiti nello spazio dei nomi `cli`.  
  
|Parola chiave|Scopo|Riferimento|  
|-------------------|-----------|-----------------|  
|`array`|Dichiara una matrice.|[Arrays](../windows/arrays-cpp-component-extensions.md)|  
|`interior_ptr`|\(Solo CLR\) Punta ai dati in un tipo riferimento.|[interior\_ptr \(C\+\+\/CLI\)](../windows/interior-ptr-cpp-cli.md)|  
|`pin_ptr`|\(Solo CLR\) Punta a tipi riferimento CLR per evitare temporaneamente il sistema di Garbage Collection.|[pin\_ptr \(C\+\+\/CLI\)](../windows/pin-ptr-cpp-cli.md)|  
|`safe_cast`|Determina ed esegue il metodo di cast ottimale per un tipo di runtime.|[safe\_cast](../windows/safe-cast-cpp-component-extensions.md)|  
|`typeid`|\(Solo CLR\) Recupera un oggetto <xref:System.Type?displayProperty=fullName> che descrive il tipo o l'oggetto specificato.|[typeid](../windows/typeid-cpp-component-extensions.md)|  
  
## Dichiaratori  
 I dichiaratori di tipo seguenti indicano al runtime di gestire automaticamente la durata e l'eliminazione degli oggetti allocati.  
  
|Operatore|Scopo|Riferimento|  
|---------------|-----------|-----------------|  
|`^`|Dichiara un handle a un oggetto, ovvero un puntatore a un oggetto [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] o CLR che viene eliminato automaticamente quando non è più utilizzabile.|[Operatore handle a oggetto \(^\)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)|  
|`%`|Dichiara un riferimento di rilevamento, ovvero un riferimento a un oggetto [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] o CLR che viene eliminato automaticamente quando non è più utilizzabile.|[Tracking Reference Operator](../windows/tracking-reference-operator-cpp-component-extensions.md)|  
  
## Costrutti aggiuntivi e argomenti correlati  
 In questa sezione vengono elencati i costrutti di programmazione aggiuntivi e gli argomenti relativi a CLR.  
  
|Argomento|Descrizione|  
|---------------|-----------------|  
|[\_\_identifier \(C\+\+\/CLI\)](../windows/identifier-cpp-cli.md)|\([!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e CLR\) Consente di usare parole chiave come identificatori.|  
|[Variable Argument Lists \(...\) \(C\+\+\/CLI\)](../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md)|\([!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e CLR\) Consente ad alcune funzioni di accettare un numero variabile di argomenti.|  
|[.Equivalenti di .NET Framework a tipi nativi C\+\+](../dotnet/dotnet-framework-equivalents-to-cpp-native-types-cpp-cli.md)|Elenca i tipi CLR usati al posto dei tipi integrali di C\+\+.|  
|Modificatore [appdomain](../cpp/appdomain.md) `__declspec`|Modificatore `__declspec` che richiede che esistano variabili globali e statiche per appdomain.|  
|[C\-Style Casts with \/clr \(C\+\+\/CLI\)](../windows/c-style-casts-with-clr-cpp-cli.md)|Descrive come vengono interpretati i cast di tipo C.|  
|Convenzione di chiamata [\_\_clrcall](../cpp/clrcall.md)|Indica la convenzione di chiamata conforme a CLR.|  
|`__cplusplus_cli`|[Macro predefinite](../preprocessor/predefined-macros.md)|  
|[Custom Attributes](../windows/custom-attributes-cpp.md)|Descrive come definire gli attributi CLR personalizzati.|  
|[Exception Handling](../windows/exception-handling-cpp-component-extensions.md)|Fornisce una panoramica della gestione delle eccezioni.|  
|[Explicit Overrides](../windows/explicit-overrides-cpp-component-extensions.md)|Illustra come le funzioni membro possono eseguire l'override di membri arbitrari.|  
|[Assembly Friend \(C\+\+\)](../dotnet/friend-assemblies-cpp.md)|Illustra come un assembly client può accedere a tutti i tipi in un componente di assembly.|  
|[Boxing](../windows/boxing-cpp-component-extensions.md)|Illustra le condizioni in cui i tipi di valori vengono sottoposti a boxing.|  
|[Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md)|Illustra come rilevare le caratteristiche dei tipi in fase di compilazione.|  
|Pragma [managed, unmanaged](../preprocessor/managed-unmanaged.md)|Illustra come le funzioni gestite e non gestite possono coesistere nello stesso modulo.|  
|Modificatore [processo](../cpp/process.md) `__declspec`|Modificatore `__declspec` che richiede che esistano variabili globali e statiche per processo.|  
|[Reflection](../dotnet/reflection-cpp-cli.md)|Illustra la versione CLR delle informazioni sul tipo di runtime.|  
|[String](../windows/string-cpp-component-extensions.md)|Illustra la conversione del compilatore di valori letterali stringa in <xref:System.String>.|  
|[Type Forwarding \(C\+\+\/CLI\)](../windows/type-forwarding-cpp-cli.md)|Consente lo spostamento di un tipo in un assembly di distribuzione a un altro assembly in modo che il codice client non debba essere ricompilato.|  
|[User\-Defined Attributes](../windows/user-defined-attributes-cpp-component-extensions.md)|Illustra gli attributi definiti dall'utente.|  
|[Direttiva \#using](../preprocessor/hash-using-directive-cpp.md)|Importa gli assembly esterni.|  
|[Documentazione di XML](../ide/xml-documentation-visual-cpp.md)|Illustra la documentazione del codice basato su XML tramite [\/doc \(elaborazione dei commenti per la documentazione\)](../build/reference/doc-process-documentation-comments-c-cpp.md)|  
  
## Vedere anche  
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)   
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)
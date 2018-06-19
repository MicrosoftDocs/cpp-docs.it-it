---
title: Estensioni componenti per le piattaforme Runtime | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- what's new [C++], keywords
- what's new [C++], language features
- Visual C++, keywords
- keywords [C++]
- Managed Extensions for C++, replacement syntax
ms.assetid: 1e400ee6-3ac9-4910-a608-9d3d5993e423
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e60a1285f54de6b1cbfe311d4d9cbbc547785176
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33862640"
---
# <a name="component-extensions-for-runtime-platforms"></a>Estensioni componenti per le piattaforme runtime
Visual C++ fornisce le estensioni del linguaggio per agevolare la programmazione per piattaforme di runtime. Utilizzando C + + CX, è possibile programmare le app Universal Windows Platform e dei componenti che possono essere compilate in codice nativo. Sebbene sia possibile creare le app Universal Windows Platform programmando direttamente con le interfacce di Windows Runtime COM, utilizzando C + + CX, è possibile utilizzare costruttori, eccezioni e altre di programmazione C++ moderni. Per abilitare la programmazione in C++ in un ambiente di esecuzione gestito sulla piattaforma .NET, è possibile usare C + + CLI.  
  
 **Due runtime, un set di estensioni**  
  
 C + + CX è un subset di C + + CLI. Per le estensioni che sono comuni a C + + CX e C + + CLI, la semantica varia se la destinazione è common language runtime (CLR) o Windows Runtime. Per compilare l'app da eseguire in Windows Runtime, specificare il **/ZW** l'opzione del compilatore. Per compilare l'esecuzione in CLR, specificare il **/clr** l'opzione del compilatore. Queste opzioni vengono impostate automaticamente quando si usa Visual Studio per creare un progetto.  
  
 Per ulteriori informazioni su come creare app di piattaforma UWP in C++, vedere [App Guida di orientamento per Windows Runtime in C++](http://msdn.microsoft.com/library/windows/apps/hh700360.aspx).  
  
 C + + CLI estende lo standard ISO/ANSI C++ e viene definito in Ecma C + + Standard CLI. Per ulteriori informazioni, vedere [programmazione .NET con C + + CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).  
  
## <a name="data-type-keywords"></a>Parole chiave del tipo di dati  
 Le estensioni del linguaggio includono *aggregare le parole chiave*, che sono parole chiave costituite da due token separati da spazi vuoti. I token hanno un significato quando vengono usati separatamente e un altro significato quando vengono usati insieme. Ad esempio, la parola "ref" è un identificatore standard e la parola "class" è una parola chiave che dichiara una classe nativa. Ma quando queste parole vengono combinate per formare `ref class`, la parola chiave aggregata risulta dichiara un'entità che è noto come un *classe di runtime*.  
  
 Le estensioni includono inoltre *sensibile al contesto* parole chiave. Una parola chiave viene considerata come sensibile al contesto in base al tipo di istruzione che la contiene e alla relativa posizione nell'istruzione. Ad esempio, il token "property" può essere un identificatore o può dichiarare un tipo speciale di membro di classe pubblica.  
  
 Nella tabella seguente sono elencate le parole chiave nell'estensione del linguaggio C++.  
  
|Parola chiave|Sensibile al contesto|Scopo|Riferimenti|  
|-------------|-----------------------|-------------|---------------|  
|`ref class`<br /><br /> `ref struct`|No|Dichiara una classe.|[Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)|  
|`value class`<br /><br /> `value struct`|No|Dichiara una classe di valori.|[Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)|  
|`interface class`<br /><br /> `interface struct`|No|Dichiara un'interfaccia.|[classe di interfaccia](../windows/interface-class-cpp-component-extensions.md)|  
|`enum class`<br /><br /> `enum struct`|No|Dichiara un'enumerazione.|[classe di enumerazione](../windows/enum-class-cpp-component-extensions.md)|  
|`property`|Yes|Dichiara una proprietà.|[proprietà](../windows/property-cpp-component-extensions.md)|  
|`delegate`|Yes|Dichiara un delegato.|[delegate  (estensioni del componente C++)](../windows/delegate-cpp-component-extensions.md)|  
|`event`|Yes|Dichiara un evento.|[event](../windows/event-cpp-component-extensions.md)|  
  
## <a name="override-specifiers"></a>Identificatori di override  
 È possibile usare le parole chiave seguenti per qualificare il comportamento di override per la derivazione. Sebbene la parola chiave `new` non sia un'estensione di C++, viene elencata qui perché può essere usata in un contesto aggiuntivo. Alcuni identificatori sono validi anche per la programmazione nativa. Per ulteriori informazioni, vedere [procedura: dichiarare gli identificatori di Override nelle compilazioni Native (C + + CLI)](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).  
  
|Parola chiave|Sensibile al contesto|Scopo|Riferimenti|  
|-------------|-----------------------|-------------|---------------|  
|`abstract`|Yes|Indica che le funzioni o classi sono astratte.|[abstract](../windows/abstract-cpp-component-extensions.md)|  
|`new`|No|Indica che una funzione non è un override di una versione della classe di base.|[New (nuovo slot in vtable)](../windows/new-new-slot-in-vtable-cpp-component-extensions.md)|  
|`override`|Yes|Indica che un metodo deve essere un override di una versione della classe base.|[override](../windows/override-cpp-component-extensions.md)|  
|`sealed`|Yes|Impedisce l'uso delle classi come classi base.|[sealed](../windows/sealed-cpp-component-extensions.md)|  
  
## <a name="keywords-for-generics"></a>Parole chiave per i generics  
 Le parole chiave seguenti sono state aggiunte per supportare tipi generici. Per altre informazioni, vedere [Generics](../windows/generics-cpp-component-extensions.md).  
  
|Parola chiave|Sensibile al contesto|Scopo|  
|-------------|-----------------------|-------------|  
|`generic`|No|Dichiara un tipo generico.|  
|`where`|Yes|Specifica i vincoli che vengono applicati a un parametro di tipo generico.|  
  
## <a name="miscellaneous-keywords"></a>Varie parole chiave  
 Le parole chiave seguenti sono state aggiunte alle estensioni di C++.  
  
|Parola chiave|Sensibile al contesto|Scopo|Riferimenti|  
|-------------|-----------------------|-------------|---------------|  
|`finally`|Yes|Indica il comportamento di gestione delle eccezioni predefinito.|[Gestione delle eccezioni](../windows/exception-handling-cpp-component-extensions.md)|  
|`for each, in`|No|Enumera gli elementi di una raccolta.|[for each, in](../dotnet/for-each-in.md)|  
|`gcnew`|No|Alloca tipi sull'heap sottoposto a Garbage Collection. Usare al posto di `new` e `delete`.|[ref new, gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md)|  
|`ref new`|Yes|Alloca un tipo Windows Runtime. Usare al posto di `new` e `delete`.|[ref new, gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md)|  
|`initonly`|Yes|Indica che un membro può essere inizializzato solo in fase di dichiarazione o in un costruttore statico.|[initonly (C++/CLI)](../dotnet/initonly-cpp-cli.md)|  
|`literal`|Yes|Crea una variabile letterale.|[Valore letterale](../windows/literal-cpp-component-extensions.md)|  
|`nullptr`|No|Indica che un handle o un puntatore non punta a un oggetto.|[nullptr](../windows/nullptr-cpp-component-extensions.md)|  
  
## <a name="template-constructs"></a>Costrutti di modello  
 I seguenti costrutti di linguaggio vengono implementati come modelli, anziché come parole chiave. Se si specifica il **/ZW** opzione del compilatore sono definiti nel `lang` dello spazio dei nomi. Se si specifica il **/clr** opzione del compilatore sono definiti nel `cli` dello spazio dei nomi.  
  
|Parola chiave|Scopo|Riferimenti|  
|-------------|-------------|---------------|  
|`array`|Dichiara una matrice.|[Array](../windows/arrays-cpp-component-extensions.md)|  
|`interior_ptr`|(Solo CLR) Punta ai dati in un tipo riferimento.|[interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)|  
|`pin_ptr`|(Solo CLR) Punta a tipi riferimento CLR per evitare temporaneamente il sistema di Garbage Collection.|[pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)|  
|`safe_cast`|Determina ed esegue il metodo di cast ottimale per un tipo di runtime.|[safe_cast](../windows/safe-cast-cpp-component-extensions.md)|  
|`typeid`|(Solo CLR) Recupera un oggetto <xref:System.Type?displayProperty=fullName> che descrive il tipo o l'oggetto specificato.|[typeid](../windows/typeid-cpp-component-extensions.md)|  
  
## <a name="declarators"></a>Dichiaratori  
 I dichiaratori di tipo seguenti indicano al runtime di gestire automaticamente la durata e l'eliminazione degli oggetti allocati.  
  
|Operatore|Scopo|Riferimenti|  
|--------------|-------------|---------------|  
|`^`|Dichiara un handle a un oggetto. ovvero, un puntatore a un oggetto Windows Runtime o Common Language Runtime che viene eliminato automaticamente quando non è più utilizzabile.|[Operatore handle a oggetto (^)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)|  
|`%`|Dichiara un riferimento di rilevamento. ovvero, un riferimento a un oggetto Windows Runtime o Common Language Runtime che viene eliminato automaticamente quando non è più utilizzabile.|[Operatore di riferimento di rilevamento](../windows/tracking-reference-operator-cpp-component-extensions.md)|  
  
## <a name="additional-constructs-and-related-topics"></a>Costrutti aggiuntivi e argomenti correlati  
 In questa sezione vengono elencati i costrutti di programmazione aggiuntivi e gli argomenti relativi a CLR.  
  
|Argomento|Descrizione|  
|-----------|-----------------|  
|[__identifier (C++/CLI)](../windows/identifier-cpp-cli.md)|(Windows Runtime e CLR) Consente l'utilizzo delle parole chiave come identificatori.|  
|[Elenchi di argomenti variabili (...) (C++/CLI)](../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md)|(Windows Runtime e CLR) Consente a una funzione accettare un numero variabile di argomenti.|  
|[Equivalenti di .NET Framework a tipi nativi C++ (C++/CLI)](../dotnet/dotnet-framework-equivalents-to-cpp-native-types-cpp-cli.md)|Elenca i tipi CLR usati al posto dei tipi integrali di C++.|  
|[AppDomain](../cpp/appdomain.md) `__declspec` modificatore|Modificatore `__declspec` che richiede che esistano variabili globali e statiche per appdomain.|  
|[Cast di tipo C con /clr (C + c++ /CLI)](../windows/c-style-casts-with-clr-cpp-cli.md)|Descrive come vengono interpretati i cast di tipo C.|  
|[clrcall](../cpp/clrcall.md) convenzione di chiamata|Indica la convenzione di chiamata conforme a CLR.|  
|`__cplusplus_cli`|[Macro predefinite](../preprocessor/predefined-macros.md)|  
|[Attributi personalizzati](../windows/custom-attributes-cpp.md)|Descrive come definire gli attributi CLR personalizzati.|  
|[Gestione delle eccezioni](../windows/exception-handling-cpp-component-extensions.md)|Fornisce una panoramica della gestione delle eccezioni.|  
|[Override espliciti](../windows/explicit-overrides-cpp-component-extensions.md)|Illustra come le funzioni membro possono eseguire l'override di membri arbitrari.|  
|[Assembly di tipo friend (C++)](../dotnet/friend-assemblies-cpp.md)|Illustra come un assembly client può accedere a tutti i tipi in un componente di assembly.|  
|[Conversione boxing](../windows/boxing-cpp-component-extensions.md)|Illustra le condizioni in cui i tipi di valori vengono sottoposti a boxing.|  
|[Supporto del compilatore per tratti di tipo](../windows/compiler-support-for-type-traits-cpp-component-extensions.md)|Illustra come rilevare le caratteristiche dei tipi in fase di compilazione.|  
|[Managed, unmanaged](../preprocessor/managed-unmanaged.md) direttive pragma|Illustra come le funzioni gestite e non gestite possono coesistere nello stesso modulo.|  
|[processo](../cpp/process.md) `__declspec` modificatore|Modificatore `__declspec` che richiede che esistano variabili globali e statiche per processo.|  
|[Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)|Illustra la versione CLR delle informazioni sul tipo di runtime.|  
|[String](../windows/string-cpp-component-extensions.md)|Illustra la conversione del compilatore di valori letterali stringa in <xref:System.String>.|  
|[Inoltro del tipo (C++/CLI)](../windows/type-forwarding-cpp-cli.md)|Consente lo spostamento di un tipo in un assembly di distribuzione a un altro assembly in modo che il codice client non debba essere ricompilato.|  
|[Attributi definiti dall'utente](../windows/user-defined-attributes-cpp-component-extensions.md)|Illustra gli attributi definiti dall'utente.|  
|[Direttiva #using](../preprocessor/hash-using-directive-cpp.md)|Importa gli assembly esterni.|  
|[Documentazione di XML](../ide/xml-documentation-visual-cpp.md)|Illustra la documentazione di codice basato su XML tramite [/doc (processo di commenti relativi alla documentazione) (C/C++)](../build/reference/doc-process-documentation-comments-c-cpp.md)|  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione .NET con C + + CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)   
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)
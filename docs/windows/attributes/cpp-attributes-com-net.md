---
title: Attributi di C++ per COM e .NET
ms.custom: index-page
ms.date: 11/19/2018
ms.topic: conceptual
helpviewer_keywords:
- attributes [C++/CLI], reference topics
ms.assetid: 613a3611-b3eb-4347-aa38-99b654600e1c
ms.openlocfilehash: 4885edf57988d5f83b56ba6a71da85877354d3ce
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78856442"
---
# <a name="c-attributes-for-com-and-net"></a>Attributi di C++ per COM e .NET

Microsoft definisce un set di C++ attributi che semplificano la programmazione com e lo sviluppo di .NET Framework Common Language Runtime. Quando si includono attributi nei file di origine, il compilatore collabora con le dll del provider per inserire il codice o modificare il codice nei file oggetto generati. Questi attributi facilitano la creazione di file IDL, interfacce, librerie dei tipi e altri elementi COM. Nel Integrated Development Environment (IDE) gli attributi sono supportati dalle procedure guidate e dal Finestra Proprietà.

Sebbene gli attributi eliminino parte della codifica dettagliata necessaria per scrivere oggetti COM, è necessario un background in [com nozioni di base](/windows/win32/com/the-component-object-model) per utilizzarli al meglio.

> [!NOTE]
> Se si stanno cercando attributi C++ standard, vedere [attributi](../../cpp/attributes.md).

## <a name="purpose-of-attributes"></a>Scopo degli attributi

Gli attributi C++ si estendono in direzioni che non sono attualmente possibili senza compromettere la struttura classica del linguaggio. Gli attributi consentono ai provider (DLL separate) di estendere dinamicamente le funzionalità del linguaggio. L'obiettivo principale degli attributi consiste nel semplificare la creazione di componenti COM, oltre ad aumentare il livello di produttività dello sviluppatore di componenti. Gli attributi possono essere applicati a quasi C++ tutti i costrutti, ad esempio classi, membri dati o funzioni membro. Di seguito è riportata una evidenziazione dei vantaggi offerti da questa nuova tecnologia:

- Espone una convenzione di chiamata semplice e familiare.

- Usa il codice inserito, che, a differenza delle macro, viene riconosciuto dal debugger.

- Consente una derivazione semplice dalle classi base senza dettagli di implementazione gravosi.

- Sostituisce la grande quantità di codice IDL richiesta da un componente COM con pochi attributi concisi.

Per implementare, ad esempio, un sink di evento semplice per una classe ATL generica, è possibile applicare l'attributo [event_receiver](event-receiver.md) a una classe specifica, ad esempio `CMyReceiver`. L'attributo `event_receiver` viene quindi compilato dal compilatore Microsoft C++ , che inserisce il codice corretto nel file oggetto.

```cpp
[event_receiver(com)]
class CMyReceiver
{
   void handler1(int i) { ... }
   void handler2(int i, float j) { ... }
}
```

È quindi possibile configurare i metodi di `CMyReceiver` `handler1` e `handler2` per gestire gli eventi (usando la funzione intrinseca [__hook](../../cpp/hook.md)) da un'origine evento, che è possibile creare utilizzando [event_source](event-source.md).

## <a name="basic-mechanics-of-attributes"></a>Meccanismi di base degli attributi

Sono disponibili tre modi per inserire gli attributi nel progetto. Per prima cosa, è possibile inserirli manualmente nel codice sorgente. In secondo luogo, è possibile inserirli usando la griglia delle proprietà di un oggetto nel progetto. Infine, è possibile inserirli usando le varie procedure guidate. Per ulteriori informazioni sull'utilizzo della finestra **Proprietà** e delle varie procedure guidate, vedere [progetti di Visual C++Studio- ](../../build/creating-and-managing-visual-cpp-projects.md).

Come prima, quando il progetto viene compilato, il compilatore analizza ogni C++ file di origine, producendo un file oggetto. Tuttavia, quando il compilatore rileva un attributo, viene analizzato e sintatticamente verificato. Il compilatore chiama quindi dinamicamente un provider di attributi per inserire il codice o apportare altre modifiche in fase di compilazione. L'implementazione del provider varia a seconda del tipo di attributo. Ad esempio, gli attributi correlati ad ATL sono implementati da atlprov. dll.

Nella figura seguente viene illustrata la relazione tra il compilatore e il provider di attributi.

![Comunicazione degli attributi di componente](../media/vccompattrcomm.gif "Comunicazione degli attributi di un componente")

> [!NOTE]
> L'utilizzo degli attributi non modifica il contenuto del file di origine. L'unica volta in cui il codice dell'attributo generato è visibile è durante le sessioni di debug. Inoltre, per ogni file di origine nel progetto, è possibile generare un file di testo in cui vengono visualizzati i risultati della sostituzione dell'attributo. Per ulteriori informazioni su questa procedura, vedere [/FX (merge del codice inserito)](../../build/reference/fx-merge-injected-code.md) e [debug del codice inserito](/visualstudio/debugger/how-to-debug-injected-code).

Come per C++ la maggior parte dei costrutti, gli attributi hanno un set di caratteristiche che ne definiscono l'uso corretto. Questo viene definito come contesto dell'attributo ed è indirizzato nella tabella del contesto dell'attributo per ogni argomento di riferimento di attributo. Ad esempio, l'attributo [coclass](coclass.md) può essere applicato solo a una classe o a una struttura esistente, anziché all'attributo [cpp_quote](cpp-quote.md) , che può essere inserito in qualsiasi punto all' C++ interno di un file di origine.

## <a name="building-an-attributed-program"></a>Compilazione di un programma con attributi

Dopo aver inserito gli C++ attributi visivi nel codice sorgente, potrebbe essere necessario che C++ il compilatore Microsoft produca una libreria dei tipi e un file IDL. Le seguenti opzioni del linker consentono di compilare file con estensione tlb e IDL:

- [/IDLOUT](../../build/reference/idlout-name-midl-output-files.md)

- [/IGNOREIDL](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)

- [/MIDL](../../build/reference/midl-specify-midl-command-line-options.md)

- [/TLBOUT](../../build/reference/tlbout-name-dot-tlb-file.md)

Alcuni progetti contengono più file IDL indipendenti. Questi vengono usati per produrre due o più file con estensione tlb e, facoltativamente, associarli al blocco di risorse. Questo scenario non è attualmente supportato in Visual C++.

Inoltre, in Visual C++ linker tutte le informazioni sugli attributi correlati a IDL vengono restituite a un singolo file MIDL. Non vi sarà alcun modo per generare due librerie dei tipi da un singolo progetto.

## <a name="contexts"></a>Contesti di attributi

C++gli attributi possono essere descritti usando quattro campi di base: la destinazione a cui possono essere applicati (**si applica a**), se sono ripetibili o meno (**ripetibili**), la presenza richiesta di altri attributi (**attributi obbligatori**) e incompatibilità con altri attributi (**attributi non validi**). Questi campi sono elencati in una tabella associata nell'argomento di riferimento di ogni attributo. Ognuno di questi campi è descritto di seguito.

### <a name="applies-to"></a>Si applica a

In questo campo vengono descritti C++ i diversi elementi del linguaggio che sono destinazioni valide per l'attributo specificato. Se, ad esempio, un attributo specifica "class" nel campo **si applica a** , significa che l'attributo può essere applicato solo a una classe C++ valida. Se l'attributo viene applicato a una funzione membro di una classe, si verificherà un errore di sintassi.

Per ulteriori informazioni, vedere [attributi per utilizzo](attributes-by-usage.md).

### <a name="repeatable"></a>Ripetibile

Questo campo indica se l'attributo può essere applicato ripetutamente alla stessa destinazione. La maggior parte degli attributi non è ripetibile.

### <a name="required-attributes"></a>Attributi obbligatori

In questo campo sono elencati altri attributi che devono essere presenti, ovvero applicati alla stessa destinazione, per il corretto funzionamento dell'attributo specificato. Per un attributo non è comune avere voci per questo campo.

### <a name="invalid-attributes"></a>Attributi non validi

In questo campo sono elencati altri attributi incompatibili con l'attributo specificato. Per un attributo non è comune avere voci per questo campo.

## <a name="in-this-section"></a>Contenuto della sezione

[Domande frequenti sulla programmazione con attributi](attribute-programming-faq.md)<br/>
[Attributi per gruppo](attributes-by-group.md)<br/>
[Attributi per utilizzo](attributes-by-usage.md)<br/>
[Riferimento alfabetico agli attributi](attributes-alphabetical-reference.md)
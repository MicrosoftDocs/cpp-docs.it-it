---
title: Gli attributi di C++ per COM e .NET | Microsoft Docs
ms.custom: index-page
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++/CLI], reference topics
ms.assetid: 613a3611-b3eb-4347-aa38-99b654600e1c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 66188f1879c42eaf9429675a2f235130e263211f
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50072525"
---
# <a name="c-attributes-for-com-and-net"></a>Attributi di C++ per COM e .NET

Microsoft definisce un set di attributi di C++ che semplificano la programmazione COM e lo sviluppo di .NET Framework common language runtime. Quando si includono attributi nei file di origine, il compilatore funziona con il provider delle DLL da inserire o modificare il codice nei file di oggetti generato. Questi attributi semplificano la creazione di file con estensione idl, interfacce, le librerie dei tipi e altri elementi di COM. Nell'ambiente di sviluppo integrato (IDE), gli attributi sono supportati dalle procedure guidate e dalla finestra Proprietà.

Mentre gli attributi eliminano alcuni dettagli di codice necessario per scrivere oggetti COM, è necessario un sfondo [nozioni fondamentali su COM](/windows/desktop/com/the-component-object-model) utilizzare al meglio le loro.

> [!NOTE]
> Se si sta cercando gli attributi standard di C++, vedere [attributi](../../cpp/attributes.md).

## <a name="purpose-of-attributes"></a>Scopo degli attributi

Gli attributi estendono C++ in direzioni non è attualmente possibile senza la classica struttura del linguaggio. Gli attributi consentono provider (DLL distinte) per estendere le funzionalità del linguaggio in modo dinamico. L'obiettivo principale degli attributi è per semplificare la creazione di componenti COM, oltre ad aumentare il livello di produttività di sviluppatore di componenti. Gli attributi possono essere applicati a quasi qualsiasi costrutto C++, ad esempio classi, membri dati o le funzioni membro. Di seguito è riportata un'evidenziazione dei vantaggi offerti da questa nuova tecnologia:

- Espone una convenzione di chiamata semplice e familiare.

- Il codice inserito, che, a differenza delle macro, viene riconosciuta dal debugger.

- Consente facile derivazione dalle classi di base senza i dettagli di implementazione onerose.

- Sostituisce la grande quantità di codice IDL richiesti da un componente COM con alcuni attributi concisi.

Ad esempio, per implementare un sink di evento semplice per una classe generica di ATL, è possibile applicare il [event_receiver](event-receiver.md) attributo in una classe specifica, ad esempio `CMyReceiver`. Il `event_receiver` attributo viene quindi compilato dal compilatore Visual C++, che inserisce il codice appropriato nel file di oggetto.

```cpp
[event_receiver(com)]
class CMyReceiver
{
   void handler1(int i) { ... }
   void handler2(int i, float j) { ... }
}
```

È quindi possibile configurare il `CMyReceiver` metodi `handler1` e `handler2` per gestire gli eventi (usando la funzione intrinseca [hook](../../cpp/hook.md)) da un'origine evento, che è possibile creare usando [event_source](event-source.md).

## <a name="basic-mechanics-of-attributes"></a>Meccanismi di base degli attributi

Esistono tre modi per inserire attributi nel progetto. In primo luogo, è possibile inserirli manualmente il codice sorgente. In secondo luogo, è possibile inserire tramite la griglia delle proprietà di un oggetto nel progetto. Infine, è possibile inserire tramite le procedure guidate diverse. Per altre informazioni sull'uso di **delle proprietà** finestra e le procedure guidate diverse, vedere [Creating and Managing Visual C++ Projects](../../ide/creating-and-managing-visual-cpp-projects.md).

Come prima, quando viene compilato il progetto, il compilatore analizza ogni file di origine C++, creando un file oggetto. Tuttavia, quando il compilatore rileva un attributo, viene analizzato e ne verifica la sintassi. Il compilatore chiama quindi in modo dinamico un provider di attributi per inserire il codice o apportare altre modifiche in fase di compilazione. L'implementazione del provider è diverso a seconda del tipo di attributo. Ad esempio, gli attributi relativi a ATL vengono implementati da Atlprov.

La figura seguente illustra la relazione tra il compilatore e il provider di attributi.

![Comunicazione degli attributi Component](../media/vccompattrcomm.gif "vcCompAttrComm")

> [!NOTE]
> Utilizzo dell'attributo non modifica il contenuto del file di origine. L'unica volta che il codice generato dall'attributo è visibile sia durante le sessioni di debug. Inoltre, per ogni file di origine nel progetto, è possibile generare un file di testo che visualizza i risultati della sostituzione attributo. Per altre informazioni su questa procedura, vedere [/Fx (Merge del codice)](../../build/reference/fx-merge-injected-code.md) e [debug del codice inserito](/visualstudio/debugger/how-to-debug-injected-code).

Ad esempio la maggior parte dei costrutti C++, gli attributi hanno un set di caratteristiche che definisce il corretto utilizzo. Ciò viene definito il contesto dell'attributo e verrà risolto in una tabella di contesto per ogni argomento di riferimento di attributo. Ad esempio, il [coclasse](coclass.md) attributo può essere applicato solo a una classe esistente o una struttura, anziché il [cpp_quote](cpp-quote.md) attributo, che può essere inserito in un punto qualsiasi all'interno di un file di origine C++.

## <a name="building-an-attributed-program"></a>Compilazione di un programma con attributi

Dopo aver inserito gli attributi di Visual C++ nel codice sorgente, è possibile il compilatore Visual C++ per produrre un file con estensione idl e libreria dei tipi per l'utente. Le seguenti opzioni del linker consentono di generare file con estensione tlb e IDL:

- [/IDLOUT](../../build/reference/idlout-name-midl-output-files.md)

- [/IGNOREIDL](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)

- [/MIDL](../../build/reference/midl-specify-midl-command-line-options.md)

- [/TLBOUT](../../build/reference/tlbout-name-dot-tlb-file.md)

Alcuni progetti contengono più file con estensione idl indipendenti. Questi vengono usati per produrre due o più file con estensione tlb e, facoltativamente, associarle nel blocco di risorse. Questo scenario non è attualmente supportato in Visual C++.

Inoltre, il linker di Visual C++ restituirà tutte le informazioni sugli attributi IDL correlati in un unico file MIDL. Non vi sarà alcun modo per generare due librerie dei tipi da un singolo progetto.

## <a name="contexts"></a> Contesti di attributi

Gli attributi di C++ possono essere descritte con quattro campi di base: la destinazione possono essere applicati a (**si applica a**), se sono ripetibili o meno (**ripetibile**), la necessaria la presenza di altri attributi ( **Gli attributi obbligatori**) e le incompatibilità con altri attributi (**attributi non validi**). Questi campi vengono elencati in una tabella associata nell'argomento di riferimento dell'ogni attributo. Ognuno di questi campi è descritto di seguito.

### <a name="applies-to"></a>Si applica a

Questo campo vengono descritti gli elementi del linguaggio C++ diversi che costituiscono le destinazioni legali per l'attributo specificato. Ad esempio, se un attributo specifica "class" nel **si applica a** campo, ciò indica che l'attributo può essere applicato solo a una classe C++ valida. Se l'attributo viene applicato a una funzione membro di una classe, genera un errore di sintassi.

Per altre informazioni, vedere [attributi per utilizzo](attributes-by-usage.md).

### <a name="repeatable"></a>Ripetibile

Questo campo indica se l'attributo può essere applicato più volte alla stessa destinazione. La maggior parte degli attributi non è ripetibile.

### <a name="required-attributes"></a>Attributi obbligatori

Questo campo Elenca altri attributi che devono essere presenti (che sono, applicata alla stessa destinazione) per l'attributo specificato funzionare correttamente. È raro che per un attributo a ha voci per questo campo.

### <a name="invalid-attributes"></a>Attributi non validi

Questo campo Elenca altri attributi che non sono compatibili con l'attributo specificato. È raro che per un attributo a ha voci per questo campo.

## <a name="in-this-section"></a>In questa sezione

[Domande frequenti sulla programmazione con attributi](attribute-programming-faq.md)<br/>
[Attributi per gruppo](attributes-by-group.md)<br/>
[Attributi per utilizzo](attributes-by-usage.md)<br/>
[Riferimento alfabetico agli attributi](attributes-alphabetical-reference.md)
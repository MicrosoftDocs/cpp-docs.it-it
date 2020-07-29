---
title: Attributi typedef, enum, Union e struct (C++ COM)
ms.date: 10/02/2018
helpviewer_keywords:
- union attributes
- attributes [C++/CLI], reference topics
ms.assetid: f8a4fe94-dc02-4aed-bc31-3e500d42f4c7
ms.openlocfilehash: 5e9eccd5e4464e92757d6dd78dd0f5187372ea3e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222108"
---
# <a name="typedef-enum-union-and-struct-attributes"></a>Attributi Typedef, Enum, Union e Struct

Gli attributi seguenti si applicano alle parole chiave [typedef](../../cpp/aliases-and-typedefs-cpp.md), [struct](../../cpp/struct-cpp.md)e [enum](../../cpp/enumerations-cpp.md) C++.

### <a name="typedef"></a>typedef

|Attributo|Descrizione|
|---------------|-----------------|
|[caso](case-cpp.md)|Utilizzato con l'attributo [switch_type](switch-type.md) in un oggetto **`union`** .|
|[personalizzato](custom-cpp.md)|Consente di definire un attributo personalizzato.|
|[esportazione](export.md)|Determina la posizione di una struttura di dati nel file con estensione IDL.|
|[first_is](first-is.md)|Specifica l'indice del primo elemento di matrice da trasmettere.|
|[helpcontext](helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento nel file della guida.|
|[helpfile](helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|
|[helpstring](helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|
|[library_block](library-block.md)|Inserisce un costrutto all'interno del blocco di libreria del file IDL.|
|[ptr](ptr.md)|Designa un puntatore come puntatore completo.|
|[pubblico](public-cpp-attributes.md)|Assicura che un typedef entri nella libreria dei tipi anche se non vi viene fatto riferimento dall'interno del file IDL.|
|[ref](ref-cpp.md)|Identifica un puntatore di riferimento.|
|[switch_is](switch-is.md)|Specifica l'espressione o l'identificatore che funge da discriminante di Unione che seleziona il membro di Unione.|
|[switch_type](switch-type.md)|Identifica il tipo della variabile utilizzata come unione discriminante.|
|[unique](unique-cpp.md)|Specifica un puntatore univoco.|
|[wire_marshal](wire-marshal.md)|Specifica un tipo di dati che verrà utilizzato per la trasmissione anziché un tipo di dati specifico dell'applicazione.|

### <a name="enum"></a>enum

|Attributo|Descrizione|
|---------------|-----------------|
|[personalizzato](custom-cpp.md)|Consente di definire un attributo personalizzato.|
|[esportazione](export.md)|Determina la posizione di una struttura di dati nel file con estensione IDL.|
|[uuid](uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o un'interfaccia.|
|[v1_enum](v1-enum.md)|Indica che il tipo enumerato specificato deve essere trasmesso come entità a 32 bit, anziché come valore predefinito a 16 bit.|

### <a name="union"></a>union

|Attributo|Descrizione|
|---------------|-----------------|
|[personalizzato](custom-cpp.md)|Consente di definire un attributo personalizzato.|
|[esportazione](export.md)|Determina la posizione di una struttura di dati nel file con estensione IDL.|
|[first_is](first-is.md)|Specifica l'indice del primo elemento di matrice da trasmettere.|
|[last_is](last-is.md)|Specifica l'indice dell'ultimo elemento della matrice da trasmettere.|
|[length_is](length-is.md)|Specifica il numero di elementi della matrice da trasmettere.|
|[max_is](max-is.md)|Definisce il valore massimo per un indice di matrice valido.|
|[size_is](size-is.md)|Specifica le dimensioni della memoria allocata per i puntatori dimensionati, i puntatori dimensionati ai puntatori di dimensione e le matrici mono o multidimensionali.|
|[unique](unique-cpp.md)|Specifica un puntatore univoco.|
|[uuid](uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o un'interfaccia.|

### <a name="nonencapsulated-union"></a>Unione non incapsulata

|Attributo|Descrizione|
|---------------|-----------------|
|[ms_union](ms-union.md)|Controlla l'allineamento della rappresentazione dei dati di rete delle unioni non incapsulate.|
|[no_injected_text](no-injected-text.md)|Impedisce al compilatore di inserire codice come risultato dell'utilizzo dell'attributo.|

### <a name="struct"></a>struct

|Attributo|Descrizione|
|---------------|-----------------|
|[aggregatable](aggregatable.md)|Indica che la classe supporta l'aggregazione.|
|[aggregati](aggregates.md)|Indica che un controllo aggrega la classe di destinazione.|
|[appobject](appobject.md)|Identifica la coclasse come oggetto applicazione, che è associato a un'applicazione exe completa, e indica che le funzioni e le proprietà della coclasse sono disponibili a livello globale in questa libreria dei tipi.|
|[coclass](coclass.md)|Crea un controllo ActiveX.|
|[com_interface_entry](com-interface-entry-cpp.md)|Aggiunge una voce di interfaccia a una mappa COM.|
|[control](control.md)|Specifica che il tipo definito dall'utente è un controllo.|
|[personalizzato](custom-cpp.md)|Consente di definire un attributo personalizzato.|
|[db_column](db-column.md)|Associa una colonna specificata al set di righe.|
|[db_command](db-command.md)|Crea un comando OLE DB.|
|[db_param](db-param.md)|Associa la variabile membro specificata a un parametro di input o output e delimita la variabile.|
|[db_source](db-source.md)|Crea una connessione a un'origine dati.|
|[db_table](db-table.md)|Apre una tabella OLE DB.|
|[predefinita](default-cpp.md)|Indica che l'interfaccia personalizzata o dispatch definita in una coclasse rappresenta l'interfaccia di programmabilità predefinita.|
|[defaultvtable](defaultvtable.md)|Definisce un'interfaccia come interfaccia vtable predefinita per un controllo.|
|[event_receiver](event-receiver.md)|Crea un ricevitore di eventi.|
|[event_source](event-source.md)|Crea un'origine evento.|
|[esportazione](export.md)|Determina la posizione di una struttura di dati nel file con estensione IDL.|
|[first_is](first-is.md)|Specifica l'indice del primo elemento di matrice da trasmettere.|
|[nascosto](hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientato all'utente.|
|[implements_category](implements-category.md)|Specifica le categorie di componenti implementate per la classe.|
|[last_is](last-is.md)|Specifica l'indice dell'ultimo elemento della matrice da trasmettere.|
|[length_is](length-is.md)|Specifica il numero di elementi della matrice da trasmettere.|
|[max_is](max-is.md)|Definisce il valore massimo per un indice di matrice valido.|
|[requires_category](requires-category.md)|Specifica le categorie di componenti obbligatorie della classe di destinazione.|
|[size_is](size-is.md)|Specifica le dimensioni della memoria allocata per i puntatori dimensionati, i puntatori dimensionati ai puntatori di dimensione e le matrici mono o multidimensionali.|
|[source](source-cpp.md)|In una classe, specifica le interfacce di origine dell'oggetto COM per i punti di connessione. In una proprietà o un metodo indica che il membro restituisce un oggetto o una variante che è un'origine di eventi.|
|[Threading](threading-cpp.md)|Specifica il modello di threading per un oggetto COM.|
|[unique](unique-cpp.md)|Specifica un puntatore univoco.|
|[uuid](uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o un'interfaccia.|
|[version](version-cpp.md)|Identifica una particolare versione tra più versioni di una classe.|
|[vi_progid](vi-progid.md)|Specifica una forma indipendente dalla versione del ProgID.|

## <a name="see-also"></a>Vedere anche

[Attributi per utilizzo](attributes-by-usage.md)
